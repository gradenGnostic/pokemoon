// Export a focused ARM evidence set in ghidra-ai-bridge JSON format.
//@category PokemonMoon

import java.io.BufferedReader;
import java.io.File;
import java.io.FileReader;
import java.io.FileWriter;
import java.util.LinkedHashMap;
import java.util.LinkedHashSet;
import java.util.Map;
import java.util.Set;

import com.google.gson.Gson;
import com.google.gson.GsonBuilder;
import com.google.gson.JsonArray;
import com.google.gson.JsonObject;

import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionManager;
import ghidra.program.model.listing.Instruction;
import ghidra.program.model.listing.Listing;
import ghidra.program.model.symbol.Reference;
import ghidra.program.model.symbol.ReferenceManager;

public class ExportReagentTargets extends GhidraScript {
    private final Gson gson = new GsonBuilder().setPrettyPrinting().create();

    @Override
    protected void run() throws Exception {
        String[] args = getScriptArgs();
        if (args.length != 2) {
            throw new IllegalArgumentException("usage: ExportReagentTargets.java <targets.csv> <output-dir>");
        }
        String language = currentProgram.getLanguageID().toString();
        if (!"ARM:LE:32:v7".equals(language)) {
            throw new IllegalStateException("Refusing non-ARM program: " + language);
        }

        File outputDir = new File(args[1]);
        if (!outputDir.isDirectory() && !outputDir.mkdirs()) {
            throw new IllegalStateException("Could not create " + outputDir);
        }

        FunctionManager functions = currentProgram.getFunctionManager();
        ReferenceManager references = currentProgram.getReferenceManager();
        Listing listing = currentProgram.getListing();
        DecompInterface decompiler = new DecompInterface();
        decompiler.openProgram(currentProgram);
        Map<String, JsonObject> index = new LinkedHashMap<>();

        try (BufferedReader reader = new BufferedReader(new FileReader(args[0]))) {
            String line;
            boolean header = true;
            while ((line = reader.readLine()) != null) {
                if (header) {
                    header = false;
                    continue;
                }
                if (line.isBlank()) {
                    continue;
                }
                String addressText = line.substring(0, line.indexOf(','));
                long offset = Long.decode(addressText);
                Address address = currentProgram.getAddressFactory().getDefaultAddressSpace().getAddress(offset);
                Function function = functions.getFunctionAt(address);
                if (function == null) {
                    throw new IllegalStateException("No function at " + addressText);
                }
                exportFunction(function, functions, references, listing, decompiler, outputDir, index);
            }
        } finally {
            decompiler.dispose();
        }

        writeJson(new File(outputDir, "_index.json"), index);
        JsonObject architecture = new JsonObject();
        architecture.addProperty("program", currentProgram.getDomainFile().getPathname());
        architecture.addProperty("language_id", language);
        architecture.addProperty("processor", currentProgram.getLanguage().getProcessor().toString());
        architecture.addProperty("endian", currentProgram.getLanguage().isBigEndian() ? "big" : "little");
        architecture.addProperty("address_size_bits", currentProgram.getDefaultPointerSize() * 8);
        architecture.addProperty("focused_function_count", index.size());
        writeJson(new File(outputDir, "_architecture.json"), architecture);
        println("Exported " + index.size() + " ARM functions to " + outputDir);
    }

    private void exportFunction(
            Function function,
            FunctionManager functions,
            ReferenceManager references,
            Listing listing,
            DecompInterface decompiler,
            File outputDir,
            Map<String, JsonObject> index) throws Exception {
        String address = function.getEntryPoint().toString();
        JsonArray callers = new JsonArray();
        Set<String> seenCallers = new LinkedHashSet<>();
        for (Reference reference : references.getReferencesTo(function.getEntryPoint())) {
            Function caller = functions.getFunctionContaining(reference.getFromAddress());
            if (caller == null || caller.equals(function) || !seenCallers.add(caller.getEntryPoint().toString())) {
                continue;
            }
            JsonObject item = new JsonObject();
            item.addProperty("addr", caller.getEntryPoint().toString());
            item.addProperty("name", caller.getName());
            item.addProperty("ref_type", reference.getReferenceType().toString());
            callers.add(item);
        }

        JsonArray callees = new JsonArray();
        Set<String> seenCallees = new LinkedHashSet<>();
        JsonArray assembly = new JsonArray();
        for (Instruction instruction : listing.getInstructions(function.getBody(), true)) {
            assembly.add(instruction.getAddress() + "  " + instruction);
            for (Reference reference : instruction.getReferencesFrom()) {
                if (!reference.getReferenceType().isCall()) {
                    continue;
                }
                Function callee = functions.getFunctionAt(reference.getToAddress());
                if (callee == null || !seenCallees.add(callee.getEntryPoint().toString())) {
                    continue;
                }
                JsonObject item = new JsonObject();
                item.addProperty("addr", callee.getEntryPoint().toString());
                item.addProperty("name", callee.getName());
                callees.add(item);
            }
        }

        DecompileResults results = decompiler.decompileFunction(function, 60, monitor);
        String code = results.decompileCompleted()
                ? results.getDecompiledFunction().getC()
                : "// Decompilation failed: " + results.getErrorMessage();
        // Re-agent's metadata parser treats a leading block comment as a function name.
        code = code.replaceAll("(?m)^\\s*/\\*.*?\\*/\\s*\\R?", "");
        String fullName = function.getName(true);
        String owner = function.getParentNamespace().getName();
        String agentName = owner + "::" + function.getName();
        code = code.replace(fullName, agentName);

        JsonObject data = new JsonObject();
        data.addProperty("address", address);
        data.addProperty("name", agentName);
        data.addProperty("signature", function.getSignature(true).toString());
        data.addProperty("calling_convention", function.getCallingConventionName());
        data.addProperty("return_type", function.getReturnType().toString());
        data.addProperty("parameter_count", function.getParameterCount());
        data.addProperty("is_thunk", function.isThunk());
        data.addProperty("decompiled", code);
        data.add("callers", callers);
        data.add("callees", callees);
        data.add("data_refs", new JsonArray());
        data.add("pcode", new JsonArray());
        data.add("cfg", new JsonArray());
        JsonArray focused = new JsonArray();
        focused.add("Focused export omits normalized IR; use Ghidra MCP for escalation");
        data.add("pcode_errors", focused);
        data.add("cfg_errors", focused.deepCopy());
        data.add("assembly", assembly);
        writeJson(new File(outputDir, address + ".json"), data);

        JsonObject summary = new JsonObject();
        summary.addProperty("name", agentName);
        summary.addProperty("address", address);
        summary.addProperty("num_callers", callers.size());
        summary.addProperty("num_callees", callees.size());
        index.put(address, summary);
    }

    private void writeJson(File file, Object value) throws Exception {
        try (FileWriter writer = new FileWriter(file)) {
            gson.toJson(value, writer);
            writer.write("\n");
        }
    }
}
