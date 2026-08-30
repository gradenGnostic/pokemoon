//@category PokemonMoon

import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.address.AddressRange;
import ghidra.program.model.address.AddressRangeIterator;
import ghidra.program.model.block.BasicBlockModel;
import ghidra.program.model.block.CodeBlockIterator;
import ghidra.program.model.listing.Data;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionIterator;
import ghidra.program.model.listing.Instruction;
import ghidra.program.model.listing.InstructionIterator;
import ghidra.program.model.mem.MemoryBlock;
import ghidra.program.model.symbol.Reference;
import ghidra.program.model.symbol.SourceType;
import ghidra.program.model.symbol.Symbol;

import java.io.BufferedWriter;
import java.io.File;
import java.io.FileWriter;
import java.nio.charset.StandardCharsets;
import java.security.MessageDigest;
import java.util.Set;
import java.util.TreeSet;

public class ExportPhase3Functions extends GhidraScript {
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

    private static String join(Set<String> values) {
        return String.join("|", values);
    }

    private String bodyHash(Function function) throws Exception {
        MessageDigest digest = MessageDigest.getInstance("SHA-256");
        AddressRangeIterator ranges = function.getBody().getAddressRanges(true);
        byte[] buffer = new byte[0x10000];
        while (ranges.hasNext()) {
            AddressRange range = ranges.next();
            long remaining = range.getLength();
            Address cursor = range.getMinAddress();
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

    private static int unknownTypeCount(Function function) {
        int count = function.getReturnType().getName().toLowerCase().contains("undefined") ? 1 : 0;
        for (var parameter : function.getParameters()) {
            if (parameter.getDataType().getName().toLowerCase().contains("undefined")) {
                count++;
            }
        }
        return count;
    }

    public void run() throws Exception {
        String[] args = getScriptArgs();
        if (args.length != 1) {
            throw new IllegalArgumentException("Usage: ExportPhase3Functions.java <output-csv>");
        }

        File outputFile = new File(args[0]);
        File parent = outputFile.getParentFile();
        if (parent != null && !parent.isDirectory() && !parent.mkdirs()) {
            throw new IllegalStateException("Unable to create " + parent);
        }

        BasicBlockModel blockModel = new BasicBlockModel(currentProgram);
        long exported = 0;
        try (BufferedWriter writer = new BufferedWriter(new FileWriter(outputFile, StandardCharsets.UTF_8))) {
            writer.write("address,current_name,qualified_name,namespace,module,memory_block,size,instruction_count,basic_block_count,caller_count,callee_count,prototype,return_type,strings_referenced,known_symbols_referenced,globals_referenced,vtable_relationship,rtti_relationship,symbol_source,signature_source,is_thunk,thunk_target,unknown_type_count,indirect_call_count,switch_count,loop_count,body_sha256,mnemonic_sha256\n");

            FunctionIterator functions = currentProgram.getFunctionManager().getFunctions(true);
            while (functions.hasNext() && !monitor.isCancelled()) {
                Function function = functions.next();
                MessageDigest mnemonicDigest = MessageDigest.getInstance("SHA-256");
                Set<String> strings = new TreeSet<>();
                Set<String> knownSymbols = new TreeSet<>();
                Set<String> globals = new TreeSet<>();
                Set<String> vtables = new TreeSet<>();
                Set<String> rtti = new TreeSet<>();
                long instructionCount = 0;
                long indirectCalls = 0;
                long switches = 0;
                long loops = 0;

                InstructionIterator instructions = currentProgram.getListing().getInstructions(function.getBody(), true);
                while (instructions.hasNext()) {
                    Instruction instruction = instructions.next();
                    instructionCount++;
                    mnemonicDigest.update((instruction.getMnemonicString() + "\n").getBytes(StandardCharsets.US_ASCII));

                    Address[] flows = instruction.getFlows();
                    if (instruction.getFlowType().isCall() && flows.length == 0) {
                        indirectCalls++;
                    }
                    if (instruction.getFlowType().isJump() && instruction.getFlowType().isComputed()) {
                        switches++;
                    }
                    for (Address flow : flows) {
                        if (function.getBody().contains(flow) && flow.compareTo(instruction.getAddress()) <= 0) {
                            loops++;
                        }
                    }

                    for (Reference reference : instruction.getReferencesFrom()) {
                        Address target = reference.getToAddress();
                        Data data = currentProgram.getListing().getDataAt(target);
                        if (data != null && data.getValue() instanceof String) {
                            strings.add(target.toString());
                        }

                        Symbol symbol = currentProgram.getSymbolTable().getPrimarySymbol(target);
                        if (symbol != null && symbol.getSource() != SourceType.DEFAULT) {
                            String qualified = symbol.getName(true);
                            knownSymbols.add(qualified);
                            if (qualified.startsWith("_ZTV") || qualified.toLowerCase().contains("vtable")) {
                                vtables.add(qualified);
                            }
                            if (qualified.startsWith("_ZTI") || qualified.startsWith("_ZTS") ||
                                    qualified.toLowerCase().contains("typeinfo")) {
                                rtti.add(qualified);
                            }
                        }

                        MemoryBlock block = currentProgram.getMemory().getBlock(target);
                        if (block != null && !block.isExecute()) {
                            globals.add(symbol == null ? target.toString() : symbol.getName(true));
                        }
                    }
                }

                long basicBlocks = 0;
                CodeBlockIterator blocks = blockModel.getCodeBlocksContaining(function.getBody(), monitor);
                while (blocks.hasNext()) {
                    blocks.next();
                    basicBlocks++;
                }

                Function thunkTarget = function.getThunkedFunction(false);
                MemoryBlock entryBlock = currentProgram.getMemory().getBlock(function.getEntryPoint());
                writer.write(function.getEntryPoint() + "," + csv(function.getName()) + "," +
                    csv(function.getName(true)) + "," + csv(function.getParentNamespace().getName(true)) + "," +
                    csv(currentProgram.getName()) + "," + csv(entryBlock == null ? "" : entryBlock.getName()) + "," +
                    function.getBody().getNumAddresses() + "," + instructionCount + "," +
                    basicBlocks + "," + function.getCallingFunctions(monitor).size() + "," +
                    function.getCalledFunctions(monitor).size() + "," +
                    csv(function.getPrototypeString(true, true)) + "," + csv(function.getReturnType().getDisplayName()) + "," +
                    csv(join(strings)) + "," + csv(join(knownSymbols)) + "," + csv(join(globals)) + "," +
                    csv(join(vtables)) + "," + csv(join(rtti)) + "," + function.getSymbol().getSource() + "," +
                    function.getSignatureSource() + "," + function.isThunk() + "," +
                    csv(thunkTarget == null ? "" : thunkTarget.getEntryPoint().toString()) + "," +
                    unknownTypeCount(function) + "," + indirectCalls + "," + switches + "," + loops + "," +
                    bodyHash(function) + "," + hex(mnemonicDigest.digest()) + "\n");
                exported++;
            }
        }

        println("Exported " + exported + " Phase 3 functions to " + outputFile.getAbsolutePath());
    }
}
