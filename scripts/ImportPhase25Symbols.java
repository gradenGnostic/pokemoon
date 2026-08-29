// Generated from symbols/master_symbols.csv; do not hand-edit.
//@category PokemonMoon
import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.Function;
import ghidra.program.model.symbol.Namespace;
import ghidra.program.model.symbol.SourceType;

public class ImportPhase25Symbols extends GhidraScript {
  private Namespace ensureNamespace(String qualified) throws Exception {
    Namespace parent = currentProgram.getGlobalNamespace();
    if (qualified == null || qualified.isEmpty() || qualified.equals("Global")) return parent;
    for (String part : qualified.split("::")) {
      Namespace child = getNamespace(parent, part);
      if (child == null) child = currentProgram.getSymbolTable().createNameSpace(parent, part, SourceType.USER_DEFINED);
      parent = child;
    }
    return parent;
  }

  public void run() throws Exception {
    int applied = 0;
    int skipped = 0;
    println("Phase 2.5 symbols applied=" + applied + " skipped=" + skipped);
  }
}
