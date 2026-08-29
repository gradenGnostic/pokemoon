// Generated from symbols/known_symbols.csv; do not hand-edit.
//@category PokemonMoon
import ghidra.app.script.GhidraScript;
import ghidra.program.model.symbol.SourceType;
public class ImportKnownSymbols extends GhidraScript {
  public void run() throws Exception {
    var a0 = toAddr("0x00104DE0");
    if (getFunctionAt(a0) != null && getFunctionAt(a0).getName().startsWith("FUN_")) getFunctionAt(a0).setName("IsDebugMode", SourceType.USER_DEFINED);
    setPlateComment(a0, "SIGNATURE_CONFIRMED: claimed symbol plus exact prologue and decompilation");
    var a1 = toAddr("0x001048B4");
    if (getFunctionAt(a1) != null && getFunctionAt(a1).getName().startsWith("FUN_")) getFunctionAt(a1).setName("GetInstance", SourceType.USER_DEFINED);
    setPlateComment(a1, "CONFIRMED_SYMBOL: CTR named export plus patch research");
    var a2 = toAddr("0x00358E40");
    if (getFunctionAt(a2) != null && getFunctionAt(a2).getName().startsWith("FUN_")) getFunctionAt(a2).setName("Crc16", SourceType.USER_DEFINED);
    setPlateComment(a2, "CONFIRMED_SYMBOL: CTR named export plus patch call target");
    var a3 = toAddr("0x003CD8A4");
    if (getFunctionAt(a3) != null && getFunctionAt(a3).getName().startsWith("FUN_")) getFunctionAt(a3).setName("AnalyzeQRBinaryForApp", SourceType.USER_DEFINED);
    setPlateComment(a3, "CONFIRMED_SYMBOL: CTR named export plus exact hook context");
    var a4 = toAddr("0x0041B744");
    if (getFunctionAt(a4) != null && getFunctionAt(a4).getName().startsWith("FUN_")) getFunctionAt(a4).setName("SetEdgeMapTexture", SourceType.USER_DEFINED);
    setPlateComment(a4, "CONFIRMED_SYMBOL: CTR named export and no-outline site");
    var a5 = toAddr("0x0043DA80");
    if (getFunctionAt(a5) != null && getFunctionAt(a5).getName().startsWith("FUN_")) getFunctionAt(a5).setName("BatteryQuery", SourceType.USER_DEFINED);
    setPlateComment(a5, "CONFIRMED_SYMBOL: CTR named export plus source declaration");
    var a6 = toAddr("0x00444A68");
    if (getFunctionAt(a6) != null && getFunctionAt(a6).getName().startsWith("FUN_")) getFunctionAt(a6).setName("IsEggExist", SourceType.USER_DEFINED);
    setPlateComment(a6, "CONFIRMED_SYMBOL: CTR named export and exact patch context");
    var a7 = toAddr("0x004A7008");
    if (getFunctionAt(a7) != null && getFunctionAt(a7).getName().startsWith("FUN_")) getFunctionAt(a7).setName("IsRegisteredData", SourceType.USER_DEFINED);
    setPlateComment(a7, "CONFIRMED_SYMBOL: CTR named export plus source declaration");
    var a8 = toAddr("0x004A847C");
    if (getFunctionAt(a8) != null && getFunctionAt(a8).getName().startsWith("FUN_")) getFunctionAt(a8).setName("IsMyPokemon", SourceType.USER_DEFINED);
    setPlateComment(a8, "CONFIRMED_SYMBOL: CTR named export and rename-any patch context");
    var a9 = toAddr("0x00358FA4");
    if (getFunctionAt(a9) != null && getFunctionAt(a9).getName().startsWith("FUN_")) getFunctionAt(a9).setName("Initialize", SourceType.USER_DEFINED);
    setPlateComment(a9, "CONFIRMED_SYMBOL: CTR recovered symbol and exact data layout");
    var a10 = toAddr("0x003590D8");
    if (getFunctionAt(a10) != null && getFunctionAt(a10).getName().startsWith("FUN_")) getFunctionAt(a10).setName("Next", SourceType.USER_DEFINED);
    setPlateComment(a10, "CONFIRMED_SYMBOL: CTR recovered symbol and standard TinyMT operation");
    var a11 = toAddr("0x003591D4");
    if (getFunctionAt(a11) != null && getFunctionAt(a11).getName().startsWith("FUN_")) getFunctionAt(a11).setName("SaveState", SourceType.USER_DEFINED);
    setPlateComment(a11, "CONFIRMED_SYMBOL: CTR recovered symbol and exact VFP state copy");
    var a12 = toAddr("0x00385AB8");
    if (getFunctionAt(a12) != null && getFunctionAt(a12).getName().startsWith("FUN_")) getFunctionAt(a12).setName("EggAdopt", SourceType.USER_DEFINED);
    setPlateComment(a12, "CONFIRMED_SYMBOL: CTR recovered symbol and complete decompilation");
    var a13 = toAddr("0x00444BFC");
    if (getFunctionAt(a13) != null && getFunctionAt(a13).getName().startsWith("FUN_")) getFunctionAt(a13).setName("EggClear", SourceType.USER_DEFINED);
    setPlateComment(a13, "CONFIRMED_SYMBOL: CTR recovered symbol and exact record writes");
    var a14 = toAddr("0x00317F24");
    if (getFunctionAt(a14) != null && getFunctionAt(a14).getName().startsWith("FUN_")) getFunctionAt(a14).setName("PokemonParam", SourceType.USER_DEFINED);
    setPlateComment(a14, "CONFIRMED_SYMBOL: CTR recovered constructor symbol plus exact allocation/copy flow");
  }
}
