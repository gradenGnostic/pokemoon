SHELL := /bin/bash
.SHELLFLAGS := -eu -o pipefail -c
.DELETE_ON_ERROR:
.SUFFIXES:

MODE ?= exact
SEMANTIC_VERSION ?= dev
PYTHON ?= python3
CXX := arm-none-eabi-g++
AS := arm-none-eabi-as
LD := arm-none-eabi-ld
OBJCOPY := arm-none-eabi-objcopy
PIPELINE_DIR ?= tools/3DS-Decomp-Pipeline

-include config.mk
LOCAL_CONFIG := $(wildcard config.mk)

ifneq ($(filter $(MODE),exact semantic),$(MODE))
$(error MODE must be exact or semantic)
endif

MANAGER := scripts/manage_build.py
MANIFEST := config/reconstructed_functions.csv
TOOLCHAIN := config/toolchain.json
WORK_DIR := .decomp/$(MODE)
BUILD_DIR := build/$(MODE)
RUNTIME_DIR := build/runtime/$(MODE)
CODE := $(WORK_DIR)/out/code.bin
IMAGE := $(RUNTIME_DIR)/PokemonMoon_$(MODE).cxi
SETUP_STAMP := $(WORK_DIR)/stamps/setup.json
ADAPTER_STAMP := $(WORK_DIR)/stamps/adapters.json
SPLIT_STAMP := $(WORK_DIR)/stamps/split.stamp
TOOL_STAMP := $(WORK_DIR)/stamps/tools.sha256
CXX_ID := $(shell $(CXX) --version 2>/dev/null | sha256sum | cut -d' ' -f1)
AS_ID := $(shell $(AS) --version 2>/dev/null | sha256sum | cut -d' ' -f1)
LD_ID := $(shell $(LD) --version 2>/dev/null | sha256sum | cut -d' ' -f1)
OBJCOPY_ID := $(shell $(OBJCOPY) --version 2>/dev/null | sha256sum | cut -d' ' -f1)
TOOL_SIGNATURE := $(shell printf '%s\n' '$(CXX)' '$(CXX_ID)' '$(AS)' '$(AS_ID)' \
	'$(LD)' '$(LD_ID)' '$(OBJCOPY)' '$(OBJCOPY_ID)' | sha256sum | cut -d' ' -f1)
SAVED_TOOL_SIGNATURE := $(shell test -f $(TOOL_STAMP) && tr -d '\n' < $(TOOL_STAMP) || true)
ifneq ($(TOOL_SIGNATURE),$(SAVED_TOOL_SIGNATURE))
TOOL_STAMP_FORCE := force-tool-stamp
endif
ARTIFACTS := $(shell $(PYTHON) $(MANAGER) artifacts --mode $(MODE) --module static.crs)
ADAPTERS := $(addprefix $(WORK_DIR)/src/code.bin/,$(addsuffix .cpp,$(ARTIFACTS)))
OBJECTS := $(addprefix $(WORK_DIR)/build/code.bin/,$(addsuffix .o,$(ARTIFACTS)))
DEPENDENCIES := $(OBJECTS:.o=.d)
COMPILE_FLAGS := $(shell $(PYTHON) $(MANAGER) flags)

.PHONY: all code cxi verify check progress exact semantic diff list status clean help force-tool-stamp \
	reagent-preflight reagent-select reagent-export reagent-dry-run reagent-reverse

all: code

code: $(CODE)

cxi: $(IMAGE)

exact:
	$(MAKE) MODE=exact cxi

semantic:
	$(PYTHON) scripts/build_semantic_image.py --version "$(SEMANTIC_VERSION)"

force-tool-stamp:

$(TOOL_STAMP): $(TOOL_STAMP_FORCE)
	@mkdir -p $(@D)
	@printf '%s\n' '$(TOOL_SIGNATURE)' > $@

$(SETUP_STAMP): Makefile $(LOCAL_CONFIG) $(TOOL_STAMP) $(MANIFEST) config/build_modules.csv $(TOOLCHAIN) $(MANAGER) \
                  extracted/exefs/code.bin extracted/metadata/exheader.bin
	@mkdir -p $(@D)
	$(PYTHON) $(MANAGER) setup --mode $(MODE) --work-dir $(WORK_DIR) --stamp $@ \
		--cxx $(CXX) --ld $(LD) --objcopy $(OBJCOPY)

$(ADAPTER_STAMP): $(MANIFEST) $(MANAGER) | $(SETUP_STAMP)
	$(PYTHON) $(MANAGER) adapters --mode $(MODE) --work-dir $(WORK_DIR) --stamp $@

$(WORK_DIR)/build/code.bin/%.o: $(TOOLCHAIN) $(LOCAL_CONFIG) $(TOOL_STAMP) $(ADAPTER_STAMP)
	@mkdir -p $(@D)
	$(CXX) $(COMPILE_FLAGS) -Iinclude -MMD -MP -MF $(@:.o=.d) \
		-c $(WORK_DIR)/src/code.bin/$*.cpp -o $@
	$(OBJCOPY) --globalize-symbol=$* --set-section-alignment .text=1 $@ $@.tmp
	mv $@.tmp $@

$(SPLIT_STAMP): $(SETUP_STAMP) $(PIPELINE_DIR)/main.py $(PIPELINE_DIR)/pipeline.py
	@mkdir -p $(@D) $(BUILD_DIR)/logs
	flock $(WORK_DIR)/pipeline.lock env CPLUS_INCLUDE_PATH="$(CURDIR)/include$${CPLUS_INCLUDE_PATH:+:$${CPLUS_INCLUDE_PATH}}" \
		$(PYTHON) $(PIPELINE_DIR)/main.py $(WORK_DIR) --single-binary code.bin \
		--use-splits-only --no-objdiff --recreate-binaries 2>&1 | tee $(BUILD_DIR)/logs/split.log
	touch $@

$(CODE): $(OBJECTS) $(SPLIT_STAMP) $(SETUP_STAMP)
	@mkdir -p $(@D) $(BUILD_DIR)/logs
	flock $(WORK_DIR)/pipeline.lock env CPLUS_INCLUDE_PATH="$(CURDIR)/include$${CPLUS_INCLUDE_PATH:+:$${CPLUS_INCLUDE_PATH}}" \
		$(PYTHON) $(PIPELINE_DIR)/main.py $(WORK_DIR) --single-binary code.bin \
		--skip-split --skip-compile --no-objdiff --recreate-binaries 2>&1 | tee $(BUILD_DIR)/logs/pipeline.log
	@test -f $@

$(IMAGE): $(CODE) extracted/cxi/main.fully-decrypted.cxi scripts/repack_decrypted_cxi.py
	@mkdir -p $(@D) $(BUILD_DIR)/logs
	$(PYTHON) scripts/repack_decrypted_cxi.py extracted/cxi/main.fully-decrypted.cxi $(CODE) $@ \
		2>&1 | tee $(BUILD_DIR)/logs/repack.log

check: $(ADAPTER_STAMP)
	$(PYTHON) $(MANAGER) check --mode $(MODE) --work-dir $(WORK_DIR) \
		--pipeline-dir $(PIPELINE_DIR) --cxx $(CXX) --assembler $(AS) --ld $(LD) \
		--objcopy $(OBJCOPY) --python $(PYTHON)

verify: $(IMAGE)
	@mkdir -p $(BUILD_DIR)/logs
	$(PYTHON) scripts/verify_runtime_build.py $(IMAGE) $(CODE) \
		--source-image extracted/cxi/main.fully-decrypted.cxi \
		--manifest $(BUILD_DIR)/verification.json 2>&1 | tee $(BUILD_DIR)/logs/verification.log
	$(PYTHON) scripts/prove_exact_hybrid.py $(MANIFEST) --mode $(MODE) --work-dir $(WORK_DIR) \
		--original-code extracted/exefs/code.bin --hybrid-code $(CODE) --hybrid-image $(IMAGE) \
		--output $(BUILD_DIR)/replacement-proof.json 2>&1 | tee $(BUILD_DIR)/logs/replacement-proof.log
	$(PYTHON) $(MANAGER) summary --mode $(MODE) --code $(CODE) --image $(IMAGE)

progress:
	$(PYTHON) $(MANAGER) progress --mode $(MODE)

status:
	$(PYTHON) $(MANAGER) export-status --output symbols/decomp_status.csv

reagent-preflight:
	$(PYTHON) scripts/reagent/targets.py preflight

reagent-select: reagent-preflight
	$(PYTHON) scripts/reagent/targets.py select --limit 10

reagent-export: reagent-select
	/opt/ghidra/support/analyzeHeadless ghidra PokemonMoon_US_v1_0 -process static.crs \
		-recursive -readOnly -noanalysis -scriptPath scripts -postScript ExportReagentTargets.java \
		"$(CURDIR)/reports/re-agent/targets.csv" "$(CURDIR)/.ghidra-exports/static.crs"

reagent-dry-run: reagent-preflight
	@test -n "$(FUNC)" || { printf 'usage: make reagent-dry-run FUNC=<static.crs address>\n' >&2; exit 2; }
	$(PYTHON) scripts/reagent/targets.py validate --address "$(FUNC)"
	scripts/reagent/run.sh --dry-run --address "$(FUNC)"

reagent-reverse: reagent-preflight
	@test -n "$(FUNC)" || { printf 'usage: make reagent-reverse FUNC=<eligible static.crs address>\n' >&2; exit 2; }
	$(PYTHON) scripts/reagent/targets.py validate --address "$(FUNC)"
	scripts/reagent/run.sh --address "$(FUNC)"

diff:
	@test -n "$(FUNC)" || { printf 'usage: make diff FUNC=<address|artifact|symbol|name>\n' >&2; exit 2; }
	$(PYTHON) $(MANAGER) diff --function "$(FUNC)" --cxx $(CXX) --python $(PYTHON)

list:
	$(PYTHON) $(MANAGER) list $(if $(STATUS),--status "$(STATUS)") \
		$(if $(MODULE),--module "$(MODULE)") $(if $(SUBSYSTEM),--subsystem "$(SUBSYSTEM)")

clean:
	$(PYTHON) $(MANAGER) clean --mode $(MODE) --work-dir $(WORK_DIR) \
		--build-dir $(BUILD_DIR) --image $(IMAGE)

help:
	@printf '%s\n' \
		'make                  Build code.bin in conservative exact mode' \
		'make cxi              Repack the rebuilt code.bin into a derived CXI' \
		'make verify           Validate CXI structure and every exact replacement' \
		'make check            Check tools, inputs, manifest, adapters, and Git hygiene' \
		'make progress         Print live reconstruction metrics' \
		'make exact            Build and repack MODE=exact' \
		'make semantic SEMANTIC_VERSION=...  Build a fixed-address semantic test CXI' \
		'make diff FUNC=...    Compile and compare one manifest function' \
		'make list [STATUS=...] [MODULE=...] [SUBSYSTEM=...]' \
		'make status           Regenerate symbols/decomp_status.csv compatibility export' \
		'make reagent-preflight  Verify the ARMv7-only model workflow inputs' \
		'make reagent-select     Stage at most 10 eligible ARM Tier-0 targets' \
		'make reagent-export     Export focused ARM Ghidra evidence without model calls' \
		'make reagent-dry-run FUNC=...  Resolve one run without invoking a model' \
		'make reagent-reverse FUNC=...  Generate a candidate under reports/re-agent' \
		'make clean            Remove generated outputs for the selected MODE only' \
		'Overrides: MODE=exact|semantic and optional config.mk tool paths'

-include $(wildcard $(DEPENDENCIES))
