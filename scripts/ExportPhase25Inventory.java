//@category PokemonMoon

import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.AddressRange;
import ghidra.program.model.address.AddressRangeIterator;
import ghidra.program.model.listing.Data;
import ghidra.program.model.listing.DataIterator;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionIterator;
import ghidra.program.model.listing.FunctionManager;
import ghidra.program.model.listing.InstructionIterator;
import ghidra.program.model.mem.MemoryBlock;
import ghidra.program.model.symbol.SourceType;
import ghidra.program.model.symbol.Symbol;
import ghidra.program.model.symbol.SymbolIterator;
import ghidra.program.model.symbol.SymbolTable;
import ghidra.program.model.symbol.SymbolType;

import java.io.BufferedWriter;
import java.io.File;
import java.io.FileWriter;
import java.nio.charset.StandardCharsets;
import java.security.MessageDigest;

public class ExportPhase25Inventory extends GhidraScript {
    private static String csv(String value) {
        if (value == null) {
            return "";
        }
        return "\"" + value.replace("\"", "\"\"").replace("\r", " ").replace("\n", " ") + "\"";
    }

    private static String hex(byte[] bytes) {
        StringBuilder result = new StringBuilder(bytes.length * 2);
        for (byte value : bytes) {
            result.append(String.format("%02x", value & 0xff));
        }
        return result.toString();
    }

    private String bodyHash(Function function) throws Exception {
        MessageDigest digest = MessageDigest.getInstance("SHA-256");
        AddressRangeIterator ranges = function.getBody().getAddressRanges(true);
        byte[] buffer = new byte[0x10000];
        while (ranges.hasNext()) {
            AddressRange range = ranges.next();
            long remaining = range.getLength();
            var cursor = range.getMinAddress();
            while (remaining > 0) {
                int requested = (int) Math.min(buffer.length, remaining);
                int count = currentProgram.getMemory().getBytes(cursor, buffer, 0, requested);
                if (count <= 0) {
                    throw new IllegalStateException("Unable to read function body at " + cursor);
                }
                digest.update(buffer, 0, count);
                cursor = cursor.add(count);
                remaining -= count;
            }
        }
        return hex(digest.digest());
    }

    private String mnemonicHash(Function function) throws Exception {
        MessageDigest digest = MessageDigest.getInstance("SHA-256");
        InstructionIterator instructions = currentProgram.getListing().getInstructions(function.getBody(), true);
        while (instructions.hasNext()) {
            String mnemonic = instructions.next().getMnemonicString() + "\n";
            digest.update(mnemonic.getBytes(StandardCharsets.US_ASCII));
        }
        return hex(digest.digest());
    }

    private long instructionCount(Function function) {
        long count = 0;
        InstructionIterator instructions = currentProgram.getListing().getInstructions(function.getBody(), true);
        while (instructions.hasNext()) {
            instructions.next();
            count++;
        }
        return count;
    }

    private static String classify(Symbol symbol) {
        String name = symbol.getName();
        if (name.startsWith("_ZTV") || name.startsWith("??_7") || name.toLowerCase().contains("vtable")) {
            return "VTABLE";
        }
        if (name.startsWith("_ZTI") || name.startsWith("_ZTS") || name.toLowerCase().contains("typeinfo")) {
            return "TYPEINFO";
        }
        if (symbol.isExternal()) {
            return "EXTERNAL";
        }
        if (symbol.getSymbolType() == SymbolType.FUNCTION) {
            return "FUNCTION";
        }
        if (symbol.getSymbolType() == SymbolType.PARAMETER || symbol.getSymbolType() == SymbolType.LOCAL_VAR) {
            return "VARIABLE";
        }
        if (name.startsWith("_Z") || name.startsWith("?")) {
            return "MANGLED";
        }
        return symbol.getSymbolType().toString();
    }

    public void run() throws Exception {
        String[] args = getScriptArgs();
        if (args.length != 1) {
            throw new IllegalArgumentException("Usage: ExportPhase25Inventory.java <output-directory>");
        }

        File outputDirectory = new File(args[0]);
        if (!outputDirectory.isDirectory() && !outputDirectory.mkdirs()) {
            throw new IllegalStateException("Unable to create " + outputDirectory);
        }

        FunctionManager functionManager = currentProgram.getFunctionManager();
        SymbolTable symbolTable = currentProgram.getSymbolTable();
        long internalFunctions = 0;
        long funPrefixFunctions = 0;
        long otherNamedFunctions = 0;
        long thunkFunctions = 0;
        long defaultSignatures = 0;
        long analysisSignatures = 0;
        long importedSignatures = 0;
        long userSignatures = 0;

        File functionFile = new File(outputDirectory, "function_inventory.csv");
        try (BufferedWriter writer = new BufferedWriter(new FileWriter(functionFile, StandardCharsets.UTF_8))) {
            writer.write("entry,end,size,name,qualified_name,namespace,symbol_source,signature_source,signature,is_thunk,thunk_target,body_sha256,mnemonic_sha256,instruction_count,memory_block\n");
            FunctionIterator functions = functionManager.getFunctions(true);
            while (functions.hasNext() && !monitor.isCancelled()) {
                Function function = functions.next();
                internalFunctions++;
                if (function.getName().startsWith("FUN_")) {
                    funPrefixFunctions++;
                } else {
                    otherNamedFunctions++;
                }
                if (function.isThunk()) {
                    thunkFunctions++;
                }

                SourceType signatureSource = function.getSignatureSource();
                if (signatureSource == SourceType.DEFAULT) defaultSignatures++;
                else if (signatureSource == SourceType.ANALYSIS) analysisSignatures++;
                else if (signatureSource == SourceType.IMPORTED) importedSignatures++;
                else if (signatureSource == SourceType.USER_DEFINED) userSignatures++;

                Function thunkTarget = function.getThunkedFunction(false);
                MemoryBlock block = currentProgram.getMemory().getBlock(function.getEntryPoint());
                writer.write(function.getEntryPoint() + "," + function.getBody().getMaxAddress() + "," +
                    function.getBody().getNumAddresses() + "," + csv(function.getName()) + "," +
                    csv(function.getName(true)) + "," + csv(function.getParentNamespace().getName(true)) + "," +
                    function.getSymbol().getSource() + "," + signatureSource + "," +
                    csv(function.getPrototypeString(true, true)) + "," + function.isThunk() + "," +
                    csv(thunkTarget == null ? "" : thunkTarget.getEntryPoint().toString()) + "," +
                    bodyHash(function) + "," + mnemonicHash(function) + "," + instructionCount(function) + "," +
                    csv(block == null ? "" : block.getName()) + "\n");
            }
        }

        long totalSymbols = 0;
        long defaultSymbols = 0;
        long analysisSymbols = 0;
        long importedSymbols = 0;
        long userSymbols = 0;
        long vtableCandidates = 0;
        File symbolFile = new File(outputDirectory, "symbol_inventory.csv");
        try (BufferedWriter writer = new BufferedWriter(new FileWriter(symbolFile, StandardCharsets.UTF_8))) {
            writer.write("address,name,qualified_name,namespace,symbol_type,source,is_primary,is_external,classification\n");
            SymbolIterator symbols = symbolTable.getAllSymbols(true);
            while (symbols.hasNext() && !monitor.isCancelled()) {
                Symbol symbol = symbols.next();
                totalSymbols++;
                SourceType source = symbol.getSource();
                if (source == SourceType.DEFAULT) defaultSymbols++;
                else if (source == SourceType.ANALYSIS) analysisSymbols++;
                else if (source == SourceType.IMPORTED) importedSymbols++;
                else if (source == SourceType.USER_DEFINED) userSymbols++;
                String classification = classify(symbol);
                if (classification.equals("VTABLE")) vtableCandidates++;
                writer.write(symbol.getAddress() + "," + csv(symbol.getName()) + "," + csv(symbol.getName(true)) + "," +
                    csv(symbol.getParentNamespace().getName(true)) + "," + symbol.getSymbolType() + "," + source + "," +
                    symbol.isPrimary() + "," + symbol.isExternal() + "," + classification + "\n");
            }
        }

        long externalFunctions = 0;
        FunctionIterator externals = functionManager.getExternalFunctions();
        while (externals.hasNext()) {
            externals.next();
            externalFunctions++;
        }

        long classes = 0;
        var classIterator = symbolTable.getClassNamespaces();
        while (classIterator.hasNext()) {
            classIterator.next();
            classes++;
        }

        long definedData = 0;
        DataIterator dataIterator = currentProgram.getListing().getDefinedData(true);
        while (dataIterator.hasNext()) {
            Data data = dataIterator.next();
            if (data != null) definedData++;
        }

        File baselineFile = new File(outputDirectory, "baseline.json");
        try (BufferedWriter writer = new BufferedWriter(new FileWriter(baselineFile, StandardCharsets.UTF_8))) {
            writer.write("{\n");
            writer.write("  \"program\": " + csv(currentProgram.getName()) + ",\n");
            writer.write("  \"language\": " + csv(currentProgram.getLanguageID().toString()) + ",\n");
            writer.write("  \"functions_manager_total\": " + functionManager.getFunctionCount() + ",\n");
            writer.write("  \"functions_internal\": " + internalFunctions + ",\n");
            writer.write("  \"functions_external\": " + externalFunctions + ",\n");
            writer.write("  \"functions_fun_prefix\": " + funPrefixFunctions + ",\n");
            writer.write("  \"functions_other_names\": " + otherNamedFunctions + ",\n");
            writer.write("  \"functions_thunks\": " + thunkFunctions + ",\n");
            writer.write("  \"signatures_default\": " + defaultSignatures + ",\n");
            writer.write("  \"signatures_analysis\": " + analysisSignatures + ",\n");
            writer.write("  \"signatures_imported\": " + importedSignatures + ",\n");
            writer.write("  \"signatures_user_defined\": " + userSignatures + ",\n");
            writer.write("  \"symbols_total\": " + totalSymbols + ",\n");
            writer.write("  \"symbols_default\": " + defaultSymbols + ",\n");
            writer.write("  \"symbols_analysis\": " + analysisSymbols + ",\n");
            writer.write("  \"symbols_imported\": " + importedSymbols + ",\n");
            writer.write("  \"symbols_user_defined\": " + userSymbols + ",\n");
            writer.write("  \"defined_data\": " + definedData + ",\n");
            writer.write("  \"class_namespaces\": " + classes + ",\n");
            writer.write("  \"vtable_name_candidates\": " + vtableCandidates + "\n");
            writer.write("}\n");
        }

        println("Exported Phase 2.5 inventory to " + outputDirectory.getAbsolutePath());
        println("Functions: " + internalFunctions + "; symbols: " + totalSymbols);
    }
}
