# Phase 2.5 symbol recovery

## Inputs and boundaries

- Retail target: Pokemon Moon North America base v1.0, title ID
  `0004000000175E00`, product code `CTR-P-BNEA`.
- Retail `code.bin` SHA-256:
  `fbe0ce6da21542542f49645fff78ba1b7e5e7cc172ce4daceeb5c26ab54adba1`.
- Local Special Demo donor: title ID `00040000001A7100`, product code
  `CTR-N-BACA`, title version `0.0.0`.
- Demo CIA SHA-256:
  `10dfe6c5bf8f4477d61cb44459e660aa3601777b9bb2766af777f3a525e0412e`.
- Demo CIA SHA-1: `aa303cbe6629f7564e4c01bd82c934eb599bee57`.

The demo CIA is a local user-supplied legal input and is never committed. Its
main NCCH uses seeded encryption. No local `seeddb.bin` was found, so demo
extraction remains blocked until the user supplies their own local seed data or
a legally decrypted derivative. No keys, seeds, ROMs, firmware, or SDK binaries
will be downloaded by this project.

The demo must be imported into a separate Ghidra project. Demo names are not
retail truth by default: only exact or ensemble-confirmed transfers may be
applied automatically, and every accepted row must retain donor provenance.

## Retail checkpoint

Before Phase 2.5 annotation, the saved retail project was copied to the ignored
path:

`extracted/backups/PokemonMoon_US_v1_0-pre-phase25/`

The source and backup `.rep` trees both occupied 95 MiB at copy time. The empty
Ghidra `.gpr` marker files had the same SHA-256
`e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855`.

## Inventory export

`scripts/ExportPhase25Inventory.java` is a read-only Ghidra script. It exports:

- `baseline.json`: reproducible function, symbol, type-source, class, thunk,
  vtable-candidate, and defined-data counts.
- `function_inventory.csv`: names, namespaces, signatures, source types, body
  extents, thunk targets, exact body SHA-256, and mnemonic-only SHA-256.
- `symbol_inventory.csv`: all symbols with namespace, kind, source type, and a
  conservative classification.

The mnemonic-only hash is a candidate-generation signal, not proof of function
identity. It deliberately omits operands and must be combined with stronger
evidence before transferring a symbol.

Run from Ghidra's Script Manager or headless scripting with one argument:

```text
ExportPhase25Inventory.java /path/to/output-directory
```

The checked-in retail snapshot is under `symbols/phase25/retail/`. Re-run the
export after accepted annotations to produce directly comparable metrics.

The pre-transfer retail baseline is:

| Metric | Count |
|---|---:|
| Function-manager total | 18,945 |
| Internal function inventory | 18,944 |
| `FUN_*` functions | 14,242 |
| Other function names | 4,702 |
| Thunks | 388 |
| Analyzer signatures | 18,931 |
| Imported signatures | 4 |
| User-defined signatures | 9 |
| All symbols | 166,666 |
| Defined data units | 82,939 |
| Class namespaces | 446 |
| Name-based vtable candidates | 40 |

The earlier 98,458-symbol figure in `docs/GHIDRA.md` came from the initial GUI
analysis summary. Phase 2.5 uses the script's explicit `getAllSymbols(true)`
definition so before/after measurements are reproducible.

## Retail CRO inventory

`scripts/inventory_cro.py` parses CRO0/CRS headers and bounds-checks every table
before exporting metadata. It does not load or execute module code:

```sh
python scripts/inventory_cro.py extracted/cro symbols/phase25/retail/cro
```

The current retail corpus contains 116 files, 4,672 named exports, 17,073 named
imports, 1,395 indexed or anonymous imports, and 129 module dependency edges.
The named exports include 20 explicit vtables and 75 RTTI/typeinfo records.

`scripts/build_master_symbols.py` combines these original exports with the
existing evidence registry:

```sh
python scripts/build_master_symbols.py
```

The resulting `symbols/master_symbols.csv` contains 4,686 rows: 4,672 original
retail export rows, 12 researcher-semantic rows, one AI-semantic row, and one
additional signature-confirmed original symbol. Static CRS segment offsets are
resolved to retail virtual addresses. For `.text` exports, the ARM Thumb-state
bit is cleared for the target address but retained in `source_offset`; dynamic
CRO exports remain module-relative. Exact retail body hashes resolve for 4,343
of the original exports.

The loader had already created functions for 4,342 of 4,346 static function
exports. Four exported entries lacked function bodies. Three are intentional
compiler tail-merge entries that fall through into another exported function
and cannot be represented as ordinary non-overlapping Ghidra functions:

- `0x003162B0`: `pml::pokepara::CoreParam::GetMegaFormCount() const`
- `0x0049128C`: `pml::pokepara::CoreParam::GetEventPokeFlag() const`
- `0x00491CA4`: `pml::pokepara::CoreParam::GetFeed() const`

The standalone fourth entry, `0x003DF550`
`NetLib::Error::NijiNetworkErrorManager::P2pDisconnectSpanOn()`, was safely
created as a 12-byte function and given a provenance plate comment. The
post-harvest metric snapshot is under
`symbols/phase25/retail/post_retail_harvest/baseline.json`: total functions rose
from 18,945 to 18,946 and non-`FUN_*` internal functions rose from 4,702 to
4,703; the symbol count was unchanged.

## Cross-program matching

`scripts/match_function_inventories.py` is ready for a separately exported demo
inventory. It emits unique exact body-hash matches and lower-tier unique
mnemonic-sequence candidates. Exact matches are automatically transferable
only when the source has a meaningful name, the target is `FUN_*`, both hashes
are unique, and the body has at least three instructions and 12 bytes. Mnemonic
matches are always candidate-only and require independent evidence.

`scripts/generate_phase25_import.py` regenerates
`scripts/ImportPhase25Symbols.java` from the master registry. Its automatic
allowlist contains only `DEMO_ORIGINAL_SYMBOL_EXACT_CODE` and
`DEMO_SYMBOL_TRANSFER_CONFIRMED`; it skips missing or already named functions
instead of overwriting them. The current importer contains zero transfer rows
because demo extraction is blocked, and its dry-run compilation completed
successfully.

A retail-to-itself validation found 17,351 unique nontrivial exact body matches,
with every pair at the same address and no automatic rename candidates. BSim,
Version Tracking, and Function ID components are installed in Ghidra 12.1.2,
but cross-version runs require the still-blocked demo program.

## Provenance vocabulary

- `RETAIL_ORIGINAL_SYMBOL`
- `DEMO_ORIGINAL_SYMBOL_EXACT_CODE`
- `DEMO_SYMBOL_TRANSFER_CONFIRMED`
- `DEMO_SYMBOL_TRANSFER_HIGH_CONFIDENCE`
- `RESEARCHER_SEMANTIC`
- `AI_SEMANTIC`
- `UNKNOWN`

BSim similarity, a mnemonic hash, address proximity, or a plausible demangled
name is never sufficient by itself to claim an original retail symbol.

## 3DS system-script evaluation

`https://github.com/zaksabeast/3ds-Ghidra-Scripts` was checked out at commit
`df6390303545fd1642121c915e3b06e3c218a1bd` under the ignored
`tools/3ds-Ghidra-Scripts/` directory.

The upstream scripts were reviewed but not run against retail because they are
interactive and mutation-heavy:

- `Label3dsSVCs.py` prompts for selected functions, renames functions, writes
  comments, and creates bookmarks.
- `Label3dsHandles.py` requires an already identified
  `ctr::srv::GetServiceHandleDirect`; no such retail symbol is currently
  present in the master registry.
- `Label3dsCTRFns.py` renames IPC functions and may create new functions.
- `Set3dsTlsType.py` commits decompiler locals, changes types and names, and
  creates global data types.

A read-only instruction audit over the executable retail blocks found
1,131,828 instructions, 729 valid `swi` instructions across 32 immediate
values, and 375 `mrc` thread-local-storage candidates. The largest SVC groups
were `0x32` (`svcSendSyncRequest`, 339), `0x23` (`svcCloseHandle`, 197), `0x28`
(`svcGetSystemTick`, 58), and `0x24` (`svcWaitSynchronization1`, 49). These are
useful system-annotation candidates, but an adapted non-interactive exporter
with provenance and collision checks is required before applying them.
