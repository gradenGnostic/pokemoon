// Exact simple leaf accessors generated from clustered ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00464D10
extern "C" void* YellowLeaf_00464d10(uint8_t* self) __asm__("_ZN9NetAppLib8P2PTrade21P2PTradeRequestClient23GetLastRecvPokemonParamEv");
extern "C" void* YellowLeaf_00464d10(uint8_t* self) { return self + 0x2180; }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0015BF58
extern "C" int32_t YellowLeaf_0015bf58(const uint8_t* self) __asm__("_ZN11ExtSavedata21RegulationExtSaveData12IsFatalErrorEv");
extern "C" int32_t YellowLeaf_0015bf58(const uint8_t* self) { return *reinterpret_cast<const int8_t*>(self + 0x20); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0043A21C
extern "C" void YellowLeaf_0043a21c(uint8_t* self, uint32_t value) __asm__("_ZN8Savedata12GameSyncSave12SetSignedPGLEb");
extern "C" void YellowLeaf_0043a21c(uint8_t* self, uint32_t value) { *reinterpret_cast<uint8_t*>(self + 0x4) = static_cast<uint8_t>(value); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0043A904
extern "C" void YellowLeaf_0043a904(uint8_t* self, uint32_t value) __asm__("_ZN8Savedata13LiveMatchData16SetLiveEntryWorkEh");
extern "C" void YellowLeaf_0043a904(uint8_t* self, uint32_t value) { *reinterpret_cast<uint8_t*>(self + 0xad) = static_cast<uint8_t>(value); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0043B044
extern "C" uint32_t YellowLeaf_0043b044(const uint8_t* self) __asm__("_ZN8Savedata14BattleInstSave13GetBattleTypeEv");
extern "C" uint32_t YellowLeaf_0043b044(const uint8_t* self) { return *reinterpret_cast<const uint8_t*>(self + 0x20); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0043B304
extern "C" uint32_t YellowLeaf_0043b304(const uint8_t* self) __asm__("_ZN8Savedata14BattleInstSave7GetRankEv");
extern "C" uint32_t YellowLeaf_0043b304(const uint8_t* self) { return *reinterpret_cast<const uint8_t*>(self + 0x21); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0043B3D0
extern "C" void YellowLeaf_0043b3d0(uint8_t* self, uint32_t value) __asm__("_ZN8Savedata14BattleSpotData19SetInternetTimeZoneEa");
extern "C" void YellowLeaf_0043b3d0(uint8_t* self, uint32_t value) { *reinterpret_cast<uint8_t*>(self + 0x2e) = static_cast<uint8_t>(value); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0043B3D8
extern "C" void YellowLeaf_0043b3d8(uint8_t* self, uint32_t value) __asm__("_ZN8Savedata14BattleSpotData20SetInternetEntryWorkEh");
extern "C" void YellowLeaf_0043b3d8(uint8_t* self, uint32_t value) { *reinterpret_cast<uint8_t*>(self + 0x2c) = static_cast<uint8_t>(value); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0043B3E0
extern "C" void YellowLeaf_0043b3e0(uint8_t* self, uint32_t value) __asm__("_ZN8Savedata14BattleSpotData21SetInternetMatchCountEh");
extern "C" void YellowLeaf_0043b3e0(uint8_t* self, uint32_t value) { *reinterpret_cast<uint8_t*>(self + 0x2d) = static_cast<uint8_t>(value); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0043B64C
extern "C" uint32_t YellowLeaf_0043b64c(const uint8_t* self) __asm__("_ZN8Savedata14PokeFinderSave12GetHighValueEv");
extern "C" uint32_t YellowLeaf_0043b64c(const uint8_t* self) { return *reinterpret_cast<const uint32_t*>(self + 0x14); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0043B6C4
extern "C" uint32_t YellowLeaf_0043b6c4(const uint8_t* self) __asm__("_ZN8Savedata14PokeFinderSave13GetTotalValueEv");
extern "C" uint32_t YellowLeaf_0043b6c4(const uint8_t* self) { return *reinterpret_cast<const uint32_t*>(self + 0x10); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0043B6CC
extern "C" uint32_t YellowLeaf_0043b6cc(const uint8_t* self) __asm__("_ZN8Savedata14PokeFinderSave16GetCameraVersionEv");
extern "C" uint32_t YellowLeaf_0043b6cc(const uint8_t* self) { return *reinterpret_cast<const uint16_t*>(self + 0x4); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0043B6D4
extern "C" uint32_t YellowLeaf_0043b6d4(const uint8_t* self) __asm__("_ZN8Savedata14PokeFinderSave16GetTutorialFlagsEv");
extern "C" uint32_t YellowLeaf_0043b6d4(const uint8_t* self) { return *reinterpret_cast<const uint16_t*>(self + 0x18); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00443468
extern "C" uint32_t YellowLeaf_00443468(const uint8_t* self) __asm__("_ZN8Savedata7GtsData14GetReturnPosNoEv");
extern "C" uint32_t YellowLeaf_00443468(const uint8_t* self) { return *reinterpret_cast<const uint8_t*>(self + 0x12e); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00443470
extern "C" void YellowLeaf_00443470(uint8_t* self, uint32_t value) __asm__("_ZN8Savedata7GtsData14SetDepositFlagEb");
extern "C" void YellowLeaf_00443470(uint8_t* self, uint32_t value) { *reinterpret_cast<uint8_t*>(self + 0x12c) = static_cast<uint8_t>(value); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00443478
extern "C" uint32_t YellowLeaf_00443478(const uint8_t* self) __asm__("_ZN8Savedata7GtsData15GetReturnTrayNoEv");
extern "C" uint32_t YellowLeaf_00443478(const uint8_t* self) { return *reinterpret_cast<const uint8_t*>(self + 0x12d); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00443AAC
extern "C" uint32_t YellowLeaf_00443aac() __asm__("_ZN8Savedata8MyStatus20GetSerializeDataSizeEv");
extern "C" uint32_t YellowLeaf_00443aac() { return 0xc0; }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00443CB0
extern "C" void YellowLeaf_00443cb0(uint8_t* self, uint32_t value) __asm__("_ZN8Savedata8MyStatus6SetSexEh");
extern "C" void YellowLeaf_00443cb0(uint8_t* self, uint32_t value) { *reinterpret_cast<uint8_t*>(self + 0xd) = static_cast<uint8_t>(value); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A6CA4
extern "C" int32_t YellowLeaf_004a6ca4(const uint8_t* self) __asm__("_ZNK8Savedata12GameSyncSave11IsSignedPGLEv");
extern "C" int32_t YellowLeaf_004a6ca4(const uint8_t* self) { return *reinterpret_cast<const int8_t*>(self + 0x4); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A6CAC
extern "C" uint32_t YellowLeaf_004a6cac() __asm__("_ZNK8Savedata12GameSyncSave25GetGameSyncFirstConnectedEv");
extern "C" uint32_t YellowLeaf_004a6cac() { return 0x1; }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A6CC8
extern "C" void* YellowLeaf_004a6cc8(uint8_t* self) __asm__("_ZNK8Savedata13LiveMatchData14GetLiveResultsEv");
extern "C" void* YellowLeaf_004a6cc8(uint8_t* self) { return self + 0x4; }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A6CD0
extern "C" uint32_t YellowLeaf_004a6cd0(const uint8_t* self) __asm__("_ZNK8Savedata13LiveMatchData16GetLiveEntryWorkEv");
extern "C" uint32_t YellowLeaf_004a6cd0(const uint8_t* self) { return *reinterpret_cast<const uint8_t*>(self + 0xad); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A6ECC
extern "C" int32_t YellowLeaf_004a6ecc(const uint8_t* self) __asm__("_ZNK8Savedata14BattleSpotData19GetInternetTimeZoneEv");
extern "C" int32_t YellowLeaf_004a6ecc(const uint8_t* self) { return *reinterpret_cast<const int8_t*>(self + 0x2e); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A6F04
extern "C" uint32_t YellowLeaf_004a6f04(const uint8_t* self) __asm__("_ZNK8Savedata14BattleSpotData20GetInternetEntryWorkEv");
extern "C" uint32_t YellowLeaf_004a6f04(const uint8_t* self) { return *reinterpret_cast<const uint8_t*>(self + 0x2c); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A6F0C
extern "C" uint32_t YellowLeaf_004a6f0c(const uint8_t* self) __asm__("_ZNK8Savedata14BattleSpotData21GetInternetMatchCountEv");
extern "C" uint32_t YellowLeaf_004a6f0c(const uint8_t* self) { return *reinterpret_cast<const uint8_t*>(self + 0x2d); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A73D4
extern "C" uint32_t YellowLeaf_004a73d4(const uint8_t* self) __asm__("_ZNK8Savedata17JoinFestaDataSave12GetTotalCoinEv");
extern "C" uint32_t YellowLeaf_004a73d4(const uint8_t* self) { return *reinterpret_cast<const uint32_t*>(self + 0x514); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A7804
extern "C" uint32_t YellowLeaf_004a7804(const uint8_t* self) __asm__("_ZNK8Savedata17JoinFestaDataSave7GetCoinEv");
extern "C" uint32_t YellowLeaf_004a7804(const uint8_t* self) { return *reinterpret_cast<const uint32_t*>(self + 0x510); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A7818
extern "C" uint32_t YellowLeaf_004a7818(const uint8_t* self) __asm__("_ZNK8Savedata17JoinFestaDataSave8GetThemeEv");
extern "C" uint32_t YellowLeaf_004a7818(const uint8_t* self) { return *reinterpret_cast<const uint8_t*>(self + 0x1f); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A7C7C
extern "C" uint32_t YellowLeaf_004a7c7c(const uint8_t* self) __asm__("_ZNK8Savedata4Misc20GetKawaigariPastDaysEv");
extern "C" uint32_t YellowLeaf_004a7c7c(const uint8_t* self) { return *reinterpret_cast<const uint8_t*>(self + 0x127); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A8170
extern "C" void* YellowLeaf_004a8170(uint8_t* self) __asm__("_ZNK8Savedata7GtsData12GetUploadKeyEv");
extern "C" void* YellowLeaf_004a8170(uint8_t* self) { return self + 0x140; }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A8178
extern "C" void* YellowLeaf_004a8178(uint8_t* self) __asm__("_ZNK8Savedata7GtsData21GetUploadGtsIndexDataEv");
extern "C" void* YellowLeaf_004a8178(uint8_t* self) { return self + 0x188; }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A83E0
extern "C" uint32_t YellowLeaf_004a83e0(const uint8_t* self) __asm__("_ZNK8Savedata8MyStatus10GetRomCodeEv");
extern "C" uint32_t YellowLeaf_004a83e0(const uint8_t* self) { return *reinterpret_cast<const uint8_t*>(self + 0xc); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A8510
extern "C" uint32_t YellowLeaf_004a8510(const uint8_t* self) __asm__("_ZNK8Savedata8MyStatus13GetRegionCodeEv");
extern "C" uint32_t YellowLeaf_004a8510(const uint8_t* self) { return *reinterpret_cast<const uint8_t*>(self + 0x3c); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A8528
extern "C" uint32_t YellowLeaf_004a8528(const uint8_t* self) __asm__("_ZNK8Savedata8MyStatus14GetPrincipalIdEv");
extern "C" uint32_t YellowLeaf_004a8528(const uint8_t* self) { return *reinterpret_cast<const uint32_t*>(self + 0x30); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A85C4
extern "C" uint32_t YellowLeaf_004a85c4(const uint8_t* self) __asm__("_ZNK8Savedata8MyStatus17GetPokeLanguageIdEv");
extern "C" uint32_t YellowLeaf_004a85c4(const uint8_t* self) { return *reinterpret_cast<const uint8_t*>(self + 0x3d); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A8614
extern "C" uint32_t YellowLeaf_004a8614(const uint8_t* self) __asm__("_ZNK8Savedata8MyStatus18GetSimpleAddressIdEv");
extern "C" uint32_t YellowLeaf_004a8614(const uint8_t* self) { return *reinterpret_cast<const uint32_t*>(self + 0x34); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A86AC
extern "C" uint32_t YellowLeaf_004a86ac(const uint8_t* self) __asm__("_ZNK8Savedata8MyStatus5GetIDEv");
extern "C" uint32_t YellowLeaf_004a86ac(const uint8_t* self) { return *reinterpret_cast<const uint32_t*>(self + 0x8); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A86D4
extern "C" uint32_t YellowLeaf_004a86d4(const uint8_t* self) __asm__("_ZNK8Savedata8MyStatus6GetSexEv");
extern "C" uint32_t YellowLeaf_004a86d4(const uint8_t* self) { return *reinterpret_cast<const uint8_t*>(self + 0xd); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A86EC
extern "C" void* YellowLeaf_004a86ec(uint8_t* self) __asm__("_ZNK8Savedata8MyStatus7GetIconEv");
extern "C" void* YellowLeaf_004a86ec(uint8_t* self) { return self + 0x5c; }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A8748
extern "C" uint32_t YellowLeaf_004a8748(const uint8_t* self) __asm__("_ZNK8Savedata8PlayTime11GetPlayHourEv");
extern "C" uint32_t YellowLeaf_004a8748(const uint8_t* self) { return *reinterpret_cast<const uint16_t*>(self + 0x4); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A8750
extern "C" uint32_t YellowLeaf_004a8750(const uint8_t* self) __asm__("_ZNK8Savedata8PlayTime13GetPlayMinuteEv");
extern "C" uint32_t YellowLeaf_004a8750(const uint8_t* self) { return *reinterpret_cast<const uint8_t*>(self + 0x6); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A6C1C
extern "C" uint32_t YellowLeaf_004a6c1c(const uint8_t* self) __asm__("_ZNK8Savedata10ConfigSave15GetTalkingSpeedEv");
extern "C" uint32_t YellowLeaf_004a6c1c(const uint8_t* self) { return (*reinterpret_cast<const uint32_t*>(self + 0x4) & 0x3); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A746C
extern "C" uint32_t YellowLeaf_004a746c(const uint8_t* self) __asm__("_ZNK8Savedata17JoinFestaDataSave14IsRejectFriendEv");
extern "C" uint32_t YellowLeaf_004a746c(const uint8_t* self) { return (*reinterpret_cast<const uint8_t*>(self + 0x1e) & 0x1); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A7C70
extern "C" uint32_t YellowLeaf_004a7c70(const uint8_t* self) __asm__("_ZNK8Savedata4Misc20GetGakusyuusoutiFlagEv");
extern "C" uint32_t YellowLeaf_004a7c70(const uint8_t* self) { return (*reinterpret_cast<const uint32_t*>(self + 0xc) & 0x1); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0043B010
extern "C" void YellowLeaf_0043b010(uint8_t* self, uint32_t value) __asm__("_ZN8Savedata14BattleInstSave12SetBattleBgmEi");
extern "C" void YellowLeaf_0043b010(uint8_t* self, uint32_t value) { *reinterpret_cast<uint32_t*>(self + 0x1c) = static_cast<uint32_t>(value); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00343334
extern "C" void YellowLeaf_00343334(uint8_t* self, uint32_t value) __asm__("_ZN4gfl22qr12QREncodeData10SetVersionEj");
extern "C" void YellowLeaf_00343334(uint8_t* self, uint32_t value) { *reinterpret_cast<uint32_t*>(self + 0x18) = static_cast<uint32_t>(value); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002E65A8
extern "C" uint32_t YellowLeaf_002e65a8(const uint8_t* self) __asm__("_ZN3App9FieldMenu8PlayData12GetCursorPosEv");
extern "C" uint32_t YellowLeaf_002e65a8(const uint8_t* self) { return *reinterpret_cast<const uint16_t*>(self + 0x4); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002E65C0
extern "C" int32_t YellowLeaf_002e65c0(const uint8_t* self) __asm__("_ZN3App9FieldMenu8PlayData15GetEndInputModeEv");
extern "C" int32_t YellowLeaf_002e65c0(const uint8_t* self) { return *reinterpret_cast<const int8_t*>(self + 0x29); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002E65C8
extern "C" void YellowLeaf_002e65c8(uint8_t* self, uint32_t value) __asm__("_ZN3App9FieldMenu8PlayData15SetEndInputModeEb");
extern "C" void YellowLeaf_002e65c8(uint8_t* self, uint32_t value) { *reinterpret_cast<uint8_t*>(self + 0x29) = static_cast<uint8_t>(value); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002E6614
extern "C" void YellowLeaf_002e6614(uint8_t* self, uint32_t value) __asm__("_ZN3App9FieldMenu8PlayData15SetSelectRideIDEj");
extern "C" void YellowLeaf_002e6614(uint8_t* self, uint32_t value) { *reinterpret_cast<uint8_t*>(self + 0x7) = static_cast<uint8_t>(value); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002E661C
extern "C" uint32_t YellowLeaf_002e661c(const uint8_t* self) __asm__("_ZN3App9FieldMenu8PlayData16GetRideCursorPosEv");
extern "C" uint32_t YellowLeaf_002e661c(const uint8_t* self) { return *reinterpret_cast<const uint8_t*>(self + 0x6); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002E66C4
extern "C" int32_t YellowLeaf_002e66c4(const uint8_t* self) __asm__("_ZN3App9FieldMenu8PlayData25IsEndContinueRotomMessageEv");
extern "C" int32_t YellowLeaf_002e66c4(const uint8_t* self) { return *reinterpret_cast<const int8_t*>(self + 0x28); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0037FFEC
extern "C" void* YellowLeaf_0037ffec(uint8_t* self) __asm__("_ZN5Field11FieldScript17FieldScriptSystem14GetBgPartsInfoEv");
extern "C" void* YellowLeaf_0037ffec(uint8_t* self) { return self + 0xb0; }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00396CF8
extern "C" void* YellowLeaf_00396cf8(uint8_t* self) __asm__("_ZN5Field7Encount11EncountWork10GetPokeSetEv");
extern "C" void* YellowLeaf_00396cf8(uint8_t* self) { return self + 0x10; }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00473118
extern "C" void* YellowLeaf_00473118(uint8_t* self) __asm__("_ZN9NetAppLib9JoinFesta28JoinFestaPersonalDataManager20GetFieldPersonalListEv");
extern "C" void* YellowLeaf_00473118(uint8_t* self) { return self + 0x294; }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00473DB0
extern "C" uint32_t YellowLeaf_00473db0(const uint8_t* self) __asm__("_ZN9NetAppLib9JoinFesta28JoinFestaPersonalDataManager30GetScriptTalkFieldPersonalDataEv");
extern "C" uint32_t YellowLeaf_00473db0(const uint8_t* self) { return *reinterpret_cast<const uint32_t*>(self + 0x2a8); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0048D344
extern "C" void* YellowLeaf_0048d344(uint8_t* self) __asm__("_ZNK3App9FieldMenu8PlayData12GetRideParamEv");
extern "C" void* YellowLeaf_0048d344(uint8_t* self) { return self + 0x2a; }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0049CFAC
extern "C" int32_t YellowLeaf_0049cfac(const uint8_t* self) __asm__("_ZNK5Field11FieldScript17FieldScriptSystem9IsCreatedEv");
extern "C" int32_t YellowLeaf_0049cfac(const uint8_t* self) { return *reinterpret_cast<const int8_t*>(self + 0x4c); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0049E188
extern "C" uint32_t YellowLeaf_0049e188(const uint8_t* self) __asm__("_ZNK5Field5World10GetWorldIDEv");
extern "C" uint32_t YellowLeaf_0049e188(const uint8_t* self) { return *reinterpret_cast<const uint16_t*>(self + 0x0); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0049E190
extern "C" uint32_t YellowLeaf_0049e190(const uint8_t* self) __asm__("_ZNK5Field5World10GetZoneNumEv");
extern "C" uint32_t YellowLeaf_0049e190(const uint8_t* self) { return *reinterpret_cast<const uint32_t*>(self + 0x1c); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0049E1D0
extern "C" uint32_t YellowLeaf_0049e1d0(const uint8_t* self) __asm__("_ZNK5Field5World12GetWorldInfoEv");
extern "C" uint32_t YellowLeaf_0049e1d0(const uint8_t* self) { return *reinterpret_cast<const uint32_t*>(self + 0x18); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0049E604
extern "C" int32_t YellowLeaf_0049e604(const uint8_t* self) __asm__("_ZNK5Field7Encount13EncountEffect13IsInitializedEv");
extern "C" int32_t YellowLeaf_0049e604(const uint8_t* self) { return *reinterpret_cast<const int8_t*>(self + 0x1d); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0049E69C
extern "C" int32_t YellowLeaf_0049e69c(const uint8_t* self) __asm__("_ZNK5Field7Encount13EncountEffect18IsNeedFieldCaptureEv");
extern "C" int32_t YellowLeaf_0049e69c(const uint8_t* self) { return *reinterpret_cast<const int8_t*>(self + 0x1c); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0049F994
extern "C" uint32_t YellowLeaf_0049f994(const uint8_t* self) __asm__("_ZNK5Field9MoveModel27FieldMoveModelShadowManager19GetEffectShadowFootEv");
extern "C" uint32_t YellowLeaf_0049f994(const uint8_t* self) { return *reinterpret_cast<const uint32_t*>(self + 0x18); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002E65B0
extern "C" void YellowLeaf_002e65b0(uint8_t* self, uint32_t value) __asm__("_ZN3App9FieldMenu8PlayData12SetCursorPosEj");
extern "C" void YellowLeaf_002e65b0(uint8_t* self, uint32_t value) { *reinterpret_cast<uint16_t*>(self + 0x4) = static_cast<uint16_t>(value); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0039CE30
extern "C" void YellowLeaf_0039ce30(uint8_t* self, uint32_t value) __asm__("_ZN5Field9MoveModel14FieldMoveModel15SetMotionSignalEPNS_12MotionSignalE");
extern "C" void YellowLeaf_0039ce30(uint8_t* self, uint32_t value) { *reinterpret_cast<uint32_t*>(self + 0x460) = static_cast<uint32_t>(value); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003A84A0
extern "C" void YellowLeaf_003a84a0(uint8_t* self, uint32_t value) __asm__("_ZN5Field9SubScreen14FieldSubScreen13SetEventXMenuEPNS_10EventXMenuE");
extern "C" void YellowLeaf_003a84a0(uint8_t* self, uint32_t value) { *reinterpret_cast<uint32_t*>(self + 0x0) = static_cast<uint32_t>(value); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00159F64
extern "C" int32_t YellowLeaf_00159f64(const uint8_t* self) __asm__("_ZN10BattleInst10BattleInst6IsBossEv");
extern "C" int32_t YellowLeaf_00159f64(const uint8_t* self) { return *reinterpret_cast<const int8_t*>(self + 0x1); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A660C
extern "C" uint32_t YellowLeaf_004a660c(const uint8_t* self) __asm__("_ZNK7trainer15TrainerTypeData20GetBattleMainModelIDEv");
extern "C" uint32_t YellowLeaf_004a660c(const uint8_t* self) { return *reinterpret_cast<const uint16_t*>(self + 0x10); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004AAEF8
extern "C" void* YellowLeaf_004aaef8(uint8_t* self) __asm__("_ZNK9NetAppLib9JoinFesta21JoinFestaPersonalData21GetPacketBattleInviteEv");
extern "C" void* YellowLeaf_004aaef8(uint8_t* self) { return self + 0x208; }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004AAF28
extern "C" void* YellowLeaf_004aaf28(uint8_t* self) __asm__("_ZNK9NetAppLib9JoinFesta21JoinFestaPersonalData22GetPacketBattleRecieveEv");
extern "C" void* YellowLeaf_004aaf28(uint8_t* self) { return self + 0x208; }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0028836C
extern "C" void YellowLeaf_0028836c(uint8_t* self, uint32_t value) __asm__("_ZN2nw3eft10EmitterSet11SetStopCalcEb");
extern "C" void YellowLeaf_0028836c(uint8_t* self, uint32_t value) { *reinterpret_cast<uint8_t*>(self + 0x286) = static_cast<uint8_t>(value); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00288374
extern "C" void YellowLeaf_00288374(uint8_t* self, uint32_t value) __asm__("_ZN2nw3eft10EmitterSet11SetStopDrawEb");
extern "C" void YellowLeaf_00288374(uint8_t* self, uint32_t value) { *reinterpret_cast<uint8_t*>(self + 0x287) = static_cast<uint8_t>(value); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002C7A74
extern "C" uint32_t YellowLeaf_002c7a74(const uint8_t* self) __asm__("_ZN3App11TrainerPass8PlayData12GetStampPageEv");
extern "C" uint32_t YellowLeaf_002c7a74(const uint8_t* self) { return *reinterpret_cast<const uint32_t*>(self + 0x4); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002C7E10
extern "C" uint32_t YellowLeaf_002c7e10(const uint8_t* self) __asm__("_ZN3App3Box11BoxAppSetup15GetOtherMessageEv");
extern "C" uint32_t YellowLeaf_002c7e10(const uint8_t* self) { return *reinterpret_cast<const uint32_t*>(self + 0x94); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002C910C
extern "C" void YellowLeaf_002c910c(uint8_t* self, uint32_t value) __asm__("_ZN3App4Tool10MapManager10SetVisibleEb");
extern "C" void YellowLeaf_002c910c(uint8_t* self, uint32_t value) { *reinterpret_cast<uint8_t*>(self + 0x18) = static_cast<uint8_t>(value); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002CC1A0
extern "C" void YellowLeaf_002cc1a0(uint8_t* self, uint32_t value) __asm__("_ZN3App4Tool11NewPaneList13SetupSkipModeENS1_8SkipModeE");
extern "C" void YellowLeaf_002cc1a0(uint8_t* self, uint32_t value) { *reinterpret_cast<uint8_t*>(self + 0xdc) = static_cast<uint8_t>(value); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002CC534
extern "C" void YellowLeaf_002cc534(uint8_t* self, uint32_t value) __asm__("_ZN3App4Tool11NewPaneList15SetupEffectModeENS1_10EffectModeE");
extern "C" void YellowLeaf_002cc534(uint8_t* self, uint32_t value) { *reinterpret_cast<uint8_t*>(self + 0xdd) = static_cast<uint8_t>(value); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002E0CEC
extern "C" uint32_t YellowLeaf_002e0cec(const uint8_t* self) __asm__("_ZN3App8PokeList16IntermediateData12GetPokePartyEv");
extern "C" uint32_t YellowLeaf_002e0cec(const uint8_t* self) { return *reinterpret_cast<const uint32_t*>(self + 0x0); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002E6B10
extern "C" void YellowLeaf_002e6b10(uint8_t* self, uint32_t value) __asm__("_ZN3app2ui11UIResponder15SetTouchEnabledEb");
extern "C" void YellowLeaf_002e6b10(uint8_t* self, uint32_t value) { *reinterpret_cast<uint8_t*>(self + 0x30) = static_cast<uint8_t>(value); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002E6B20
extern "C" uint32_t YellowLeaf_002e6b20(const uint8_t* self) __asm__("_ZN3app2ui11UIResponder16GetButtonManagerEv");
extern "C" uint32_t YellowLeaf_002e6b20(const uint8_t* self) { return *reinterpret_cast<const uint32_t*>(self + 0x10); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002E6FB8
extern "C" void YellowLeaf_002e6fb8(uint8_t* self, uint32_t value) __asm__("_ZN3app2ui11UIResponder37SetInputExclusiveKeyByButtonAnimationEb");
extern "C" void YellowLeaf_002e6fb8(uint8_t* self, uint32_t value) { *reinterpret_cast<uint8_t*>(self + 0x31) = static_cast<uint8_t>(value); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002E71FC
extern "C" int32_t YellowLeaf_002e71fc(const uint8_t* self) __asm__("_ZN3app2ui13UIViewManager37GetInputExclusiveKeyByButtonAnimationEv");
extern "C" int32_t YellowLeaf_002e71fc(const uint8_t* self) { return *reinterpret_cast<const int8_t*>(self + 0x84); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002E7204
extern "C" void YellowLeaf_002e7204(uint8_t* self, uint32_t value) __asm__("_ZN3app2ui13UIViewManager37SetInputExclusiveKeyByButtonAnimationEb");
extern "C" void YellowLeaf_002e7204(uint8_t* self, uint32_t value) { *reinterpret_cast<uint8_t*>(self + 0x84) = static_cast<uint8_t>(value); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002E738C
extern "C" void YellowLeaf_002e738c(uint8_t* self, uint32_t value) __asm__("_ZN3app2ui6UIView10SetVisibleEb");
extern "C" void YellowLeaf_002e738c(uint8_t* self, uint32_t value) { *reinterpret_cast<uint8_t*>(self + 0x6c) = static_cast<uint8_t>(value); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002E74C4
extern "C" uint32_t YellowLeaf_002e74c4(const uint8_t* self) __asm__("_ZN3app2ui6UIView12GetSuperViewEv");
extern "C" uint32_t YellowLeaf_002e74c4(const uint8_t* self) { return *reinterpret_cast<const uint32_t*>(self + 0x40); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002E7FB0
extern "C" void YellowLeaf_002e7fb0(uint8_t* self, uint32_t value) __asm__("_ZN3app2ui6UIView8SetModalEb");
extern "C" void YellowLeaf_002e7fb0(uint8_t* self, uint32_t value) { *reinterpret_cast<uint8_t*>(self + 0x6d) = static_cast<uint8_t>(value); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002E8AA0
extern "C" uint32_t YellowLeaf_002e8aa0() __asm__("_ZN3app4tool10IconObject8InitFuncEv");
extern "C" uint32_t YellowLeaf_002e8aa0() { return 0x1; }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002E9730
extern "C" int32_t YellowLeaf_002e9730(const uint8_t* self) __asm__("_ZN3app4tool10MenuCursor12IsModuleFreeEv");
extern "C" int32_t YellowLeaf_002e9730(const uint8_t* self) { return *reinterpret_cast<const int8_t*>(self + 0x21); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002E9868
extern "C" uint32_t YellowLeaf_002e9868(const uint8_t* self) __asm__("_ZN3app4tool10MenuCursor13GetLayoutWorkEv");
extern "C" uint32_t YellowLeaf_002e9868(const uint8_t* self) { return *reinterpret_cast<const uint32_t*>(self + 0x10); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002EA930
extern "C" int32_t YellowLeaf_002ea930(const uint8_t* self) __asm__("_ZN3app4tool10MenuWindow8IsCreateEv");
extern "C" int32_t YellowLeaf_002ea930(const uint8_t* self) { return *reinterpret_cast<const int8_t*>(self + 0xc0); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002EBBB8
extern "C" uint32_t YellowLeaf_002ebbb8(const uint8_t* self) __asm__("_ZN3app4tool12PaneListView11GetPaneListEv");
extern "C" uint32_t YellowLeaf_002ebbb8(const uint8_t* self) { return *reinterpret_cast<const uint32_t*>(self + 0x88); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002EC018
extern "C" void YellowLeaf_002ec018(uint8_t* self, uint32_t value) __asm__("_ZN3app4tool13ButtonManager12SetInputModeENS1_9InputModeE");
extern "C" void YellowLeaf_002ec018(uint8_t* self, uint32_t value) { *reinterpret_cast<uint8_t*>(self + 0x2c) = static_cast<uint8_t>(value); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002F1910
extern "C" uint32_t YellowLeaf_002f1910() __asm__("_ZN3app4tool15TimerIconUIView12GetArcDataIdEv");
extern "C" uint32_t YellowLeaf_002f1910() { return 0x0; }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002F1B28
extern "C" uint32_t YellowLeaf_002f1b28() __asm__("_ZN3app4tool15TimerIconUIView8GetArcIdEv");
extern "C" uint32_t YellowLeaf_002f1b28() { return 0x99; }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002F203C
extern "C" void* YellowLeaf_002f203c(uint8_t* self) __asm__("_ZN3app4tool16CharaSimpleModel12GetBaseModelEv");
extern "C" void* YellowLeaf_002f203c(uint8_t* self) { return self + 0x74; }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002F221C
extern "C" uint32_t YellowLeaf_002f221c() __asm__("_ZN3app4tool16CharaSimpleModel25GetCharaBattltAnimeWaitIdEj");
extern "C" uint32_t YellowLeaf_002f221c() { return 0x4; }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002F5B84
extern "C" void YellowLeaf_002f5b84(uint8_t* self, uint32_t value) __asm__("_ZN3app4tool17ScrollPaneManager18SetInputKeyEnabledEb");
extern "C" void YellowLeaf_002f5b84(uint8_t* self, uint32_t value) { *reinterpret_cast<uint8_t*>(self + 0x134) = static_cast<uint8_t>(value); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002FB3E4
extern "C" void YellowLeaf_002fb3e4(uint8_t* self, uint32_t value) __asm__("_ZN3app4tool22PokeSimpleModelInFrame22SetInFrameDrawPositionEN6System6Camera19CModelViewerInFrame13EDrawPositionE");
extern "C" void YellowLeaf_002fb3e4(uint8_t* self, uint32_t value) { *reinterpret_cast<uint8_t*>(self + 0x4e) = static_cast<uint8_t>(value); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002FD210
extern "C" uint32_t YellowLeaf_002fd210() __asm__("_ZN3app4tool27AppToolTrainerIconRendering20GetTrainerModelArcIdEv");
extern "C" uint32_t YellowLeaf_002fd210() { return 0xaa; }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00302524
extern "C" int32_t YellowLeaf_00302524(const uint8_t* self) __asm__("_ZN3app4tool8PaneList14IsInputEnabledEv");
extern "C" int32_t YellowLeaf_00302524(const uint8_t* self) { return *reinterpret_cast<const int8_t*>(self + 0xcd); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003025DC
extern "C" void YellowLeaf_003025dc(uint8_t* self, uint32_t value) __asm__("_ZN3app4tool8PaneList15SetInputEnabledEb");
extern "C" void YellowLeaf_003025dc(uint8_t* self, uint32_t value) { *reinterpret_cast<uint8_t*>(self + 0xcd) = static_cast<uint8_t>(value); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00303800
extern "C" void YellowLeaf_00303800(uint8_t* self, uint32_t value) __asm__("_ZN3app4tool8PaneList17SetCrossKeyEnableEb");
extern "C" void YellowLeaf_00303800(uint8_t* self, uint32_t value) { *reinterpret_cast<uint8_t*>(self + 0xcc) = static_cast<uint8_t>(value); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0030F4C8
extern "C" uint32_t YellowLeaf_0030f4c8(const uint8_t* self) __asm__("_ZN3app4util7G2DUtil10GetMsgDataEv");
extern "C" uint32_t YellowLeaf_0030f4c8(const uint8_t* self) { return *reinterpret_cast<const uint32_t*>(self + 0x20); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003100F0
extern "C" uint32_t YellowLeaf_003100f0(const uint8_t* self) __asm__("_ZN3app4util7G2DUtil15GetLayoutSystemEv");
extern "C" uint32_t YellowLeaf_003100f0(const uint8_t* self) { return *reinterpret_cast<const uint32_t*>(self + 0x4); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00310980
extern "C" uint32_t YellowLeaf_00310980(const uint8_t* self) __asm__("_ZN3app4util7G2DUtil17GetAppLytAccessorEv");
extern "C" uint32_t YellowLeaf_00310980(const uint8_t* self) { return *reinterpret_cast<const uint32_t*>(self + 0x3c); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00310D2C
extern "C" uint32_t YellowLeaf_00310d2c(const uint8_t* self) __asm__("_ZN3app4util7G2DUtil19GetLayoutResourceIDEv");
extern "C" uint32_t YellowLeaf_00310d2c(const uint8_t* self) { return *reinterpret_cast<const uint32_t*>(self + 0x8); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00313CCC
extern "C" int32_t YellowLeaf_00313ccc(const uint8_t* self) __asm__("_ZN3btl8BgSystem8IsEnalbeEv");
extern "C" int32_t YellowLeaf_00313ccc(const uint8_t* self) { return *reinterpret_cast<const int8_t*>(self + 0x20); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00313CD4
extern "C" int32_t YellowLeaf_00313cd4(const uint8_t* self) __asm__("_ZN3btl8BgSystem9IsVisibleEv");
extern "C" int32_t YellowLeaf_00313cd4(const uint8_t* self) { return *reinterpret_cast<const int8_t*>(self + 0x21); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00329968
extern "C" uint32_t YellowLeaf_00329968(const uint8_t* self) __asm__("_ZN4gfl215renderingengine10scenegraph8instance17ModelInstanceNode13GetDrawTagNumEv");
extern "C" uint32_t YellowLeaf_00329968(const uint8_t* self) { return *reinterpret_cast<const uint32_t*>(self + 0x108); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00346EF4
extern "C" void YellowLeaf_00346ef4(uint8_t* self, uint32_t value) __asm__("_ZN4gfl22ui6Device22SetDeviceRunningEnableEb");
extern "C" void YellowLeaf_00346ef4(uint8_t* self, uint32_t value) { *reinterpret_cast<uint8_t*>(self + 0x1c) = static_cast<uint8_t>(value); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0035847C
extern "C" void* YellowLeaf_0035847c(uint8_t* self) __asm__("_ZN4gfl24heap7Manager18CalcCreateHeapSizeEiNS0_8HeapTypeE");
extern "C" void* YellowLeaf_0035847c(uint8_t* self) { return self + 0xa4; }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0035F83C
extern "C" int32_t YellowLeaf_0035f83c(const uint8_t* self) __asm__("_ZN4gfl27imagedb15ImageDBAccessor15GetResultDetailEv");
extern "C" int32_t YellowLeaf_0035f83c(const uint8_t* self) { return *reinterpret_cast<const int8_t*>(self + 0x2d); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0036D67C
extern "C" uint32_t YellowLeaf_0036d67c() __asm__("_ZN4item28ITEM_GetNormalWazaMashineMaxEv");
extern "C" uint32_t YellowLeaf_0036d67c() { return 0x64; }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003BECA8
extern "C" void YellowLeaf_003beca8(uint8_t* self, uint32_t value) __asm__("_ZN5print13MessageWindow17SetMessageAutoFlgEb");
extern "C" void YellowLeaf_003beca8(uint8_t* self, uint32_t value) { *reinterpret_cast<uint8_t*>(self + 0xd9) = static_cast<uint8_t>(value); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003D4DF4
extern "C" uint32_t YellowLeaf_003d4df4(const uint8_t* self) __asm__("_ZN6NetLib3P2P17P2pPacketTransfer20GetReceivedDataCountEv");
extern "C" uint32_t YellowLeaf_003d4df4(const uint8_t* self) { return *reinterpret_cast<const uint32_t*>(self + 0x820); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003E3210
extern "C" uint32_t YellowLeaf_003e3210() __asm__("_ZN6System10GetVersionEv");
extern "C" uint32_t YellowLeaf_003e3210() { return 0x1f; }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003E5454
extern "C" void* YellowLeaf_003e5454(uint8_t* self) __asm__("_ZN6System15ModelRenderPath20DrawableNodeOverrideEv");
extern "C" void* YellowLeaf_003e5454(uint8_t* self) { return self + 0x38; }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003F3B3C
extern "C" uint32_t YellowLeaf_003f3b3c() __asm__("_ZN7GameSys8GameProc17NextFrameMainFuncEPN4gfl24proc7ManagerE");
extern "C" uint32_t YellowLeaf_003f3b3c() { return 0x0; }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003F73A0
extern "C" uint32_t YellowLeaf_003f73a0(const uint8_t* self) __asm__("_ZN7gflnet23nex10NexManager12GetNgsFacadeEv");
extern "C" uint32_t YellowLeaf_003f73a0(const uint8_t* self) { return *reinterpret_cast<const uint32_t*>(self + 0x138); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003F7914
extern "C" uint32_t YellowLeaf_003f7914(const uint8_t* self) __asm__("_ZN7gflnet23nex10NexManager18GetDataStoreClientEv");
extern "C" uint32_t YellowLeaf_003f7914(const uint8_t* self) { return *reinterpret_cast<const uint32_t*>(self + 0x1a0); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003FB1E8
extern "C" uint32_t YellowLeaf_003fb1e8(const uint8_t* self) __asm__("_ZN7gflnet23nex18NexDataStoreClient18GetDataStoreClientEv");
extern "C" uint32_t YellowLeaf_003fb1e8(const uint8_t* self) { return *reinterpret_cast<const uint32_t*>(self + 0xc); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0040DA68
extern "C" void YellowLeaf_0040da68(uint8_t* self, uint32_t value) __asm__("_ZN7poke_3d5model10CharaModel11SetEyeIndexENS1_8EyeIndexE");
extern "C" void YellowLeaf_0040da68(uint8_t* self, uint32_t value) { *reinterpret_cast<uint8_t*>(self + 0xdc) = static_cast<uint8_t>(value); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00411E3C
extern "C" uint32_t YellowLeaf_00411e3c() __asm__("_ZN7poke_3d5model17CharaModelFactory19WaitInitializeAsyncEv");
extern "C" uint32_t YellowLeaf_00411e3c() { return 0x1; }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00425E64
extern "C" void YellowLeaf_00425e64(uint8_t* self, uint32_t value) __asm__("_ZN8NetEvent23JoinFestaEventLinkEvent12SetRequestIDEN5Field9SubScreen21FieldMenuOutRequestIDE");
extern "C" void YellowLeaf_00425e64(uint8_t* self, uint32_t value) { *reinterpret_cast<uint8_t*>(self + 0x19) = static_cast<uint8_t>(value); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0045B0CC
extern "C" uint32_t YellowLeaf_0045b0cc() __asm__("_ZN9NetAppLib4Util11BossUtility12GetRegionURLEv");
extern "C" uint32_t YellowLeaf_0045b0cc() { return 0x0; }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0045DFE4
extern "C" void* YellowLeaf_0045dfe4(uint8_t* self) __asm__("_ZN9NetAppLib4Util30NetAppPokemonValidationUtility12GetSignatureEv");
extern "C" void* YellowLeaf_0045dfe4(uint8_t* self) { return self + 0x19; }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0045E17C
extern "C" uint32_t YellowLeaf_0045e17c(const uint8_t* self) __asm__("_ZN9NetAppLib4Util30NetAppPokemonValidationUtility16GetSignatureSizeEv");
extern "C" uint32_t YellowLeaf_0045e17c(const uint8_t* self) { return *reinterpret_cast<const uint32_t*>(self + 0x11c); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00466610
extern "C" void YellowLeaf_00466610(uint8_t* self, uint32_t value) __asm__("_ZN9NetAppLib9JoinFesta21JoinFestaPersonalData11SetRelationENS0_15JoinFestaDefine21E_JOIN_FESTA_RELATIONE");
extern "C" void YellowLeaf_00466610(uint8_t* self, uint32_t value) { *reinterpret_cast<uint8_t*>(self + 0x239) = static_cast<uint8_t>(value); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004680C0
extern "C" void YellowLeaf_004680c0(uint8_t* self, uint32_t value) __asm__("_ZN9NetAppLib9JoinFesta21JoinFestaPersonalData21SetScriptListSelectedEb");
extern "C" void YellowLeaf_004680c0(uint8_t* self, uint32_t value) { *reinterpret_cast<uint8_t*>(self + 0x203) = static_cast<uint8_t>(value); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00468AA0
extern "C" void YellowLeaf_00468aa0(uint8_t* self, uint32_t value) __asm__("_ZN9NetAppLib9JoinFesta21JoinFestaPersonalData28SetAttractionAppearanceStateENS0_25JoinFestaAttractionDefine15AppearanceStateE");
extern "C" void YellowLeaf_00468aa0(uint8_t* self, uint32_t value) { *reinterpret_cast<uint8_t*>(self + 0x23d) = static_cast<uint8_t>(value); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0046AD64
extern "C" uint32_t YellowLeaf_0046ad64(const uint8_t* self) __asm__("_ZN9NetAppLib9JoinFesta22JoinFestaPacketManager30GetJoinFestaInformationMessageEv");
extern "C" uint32_t YellowLeaf_0046ad64(const uint8_t* self) { return *reinterpret_cast<const uint32_t*>(self + 0x20); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00470774
extern "C" uint32_t YellowLeaf_00470774(const uint8_t* self) __asm__("_ZN9NetAppLib9JoinFesta26JoinFestaAttractionManager10GetMyScoreEv");
extern "C" uint32_t YellowLeaf_00470774(const uint8_t* self) { return *reinterpret_cast<const uint16_t*>(self + 0xc); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0047094C
extern "C" void* YellowLeaf_0047094c(uint8_t* self) __asm__("_ZN9NetAppLib9JoinFesta26JoinFestaAttractionManager13GetResultDataEv");
extern "C" void* YellowLeaf_0047094c(uint8_t* self) { return self + 0x38; }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00470954
extern "C" uint32_t YellowLeaf_00470954(const uint8_t* self) __asm__("_ZN9NetAppLib9JoinFesta26JoinFestaAttractionManager13GetTotalScoreEv");
extern "C" uint32_t YellowLeaf_00470954(const uint8_t* self) { return *reinterpret_cast<const uint32_t*>(self + 0x10); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0047095C
extern "C" int32_t YellowLeaf_0047095c(const uint8_t* self) __asm__("_ZN9NetAppLib9JoinFesta26JoinFestaAttractionManager13IsErrorRetireEv");
extern "C" int32_t YellowLeaf_0047095c(const uint8_t* self) { return *reinterpret_cast<const int8_t*>(self + 0x32); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00470C7C
extern "C" int32_t YellowLeaf_00470c7c(const uint8_t* self) __asm__("_ZN9NetAppLib9JoinFesta26JoinFestaAttractionManager15IsRetireRequestEv");
extern "C" int32_t YellowLeaf_00470c7c(const uint8_t* self) { return *reinterpret_cast<const int8_t*>(self + 0x31); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004715B8
extern "C" uint32_t YellowLeaf_004715b8(const uint8_t* self) __asm__("_ZN9NetAppLib9JoinFesta26JoinFestaAttractionManager16GetRequestResultEv");
extern "C" uint32_t YellowLeaf_004715b8(const uint8_t* self) { return *reinterpret_cast<const uint8_t*>(self + 0x9); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0047168C
extern "C" uint32_t YellowLeaf_0047168c(const uint8_t* self) __asm__("_ZN9NetAppLib9JoinFesta26JoinFestaAttractionManager19GetPlayAttractionIdEv");
extern "C" uint32_t YellowLeaf_0047168c(const uint8_t* self) { return *reinterpret_cast<const uint8_t*>(self + 0xa); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00472B64
extern "C" void* YellowLeaf_00472b64(uint8_t* self) __asm__("_ZN9NetAppLib9JoinFesta28JoinFestaPersonalDataManager18GetLastP2pPersonalEv");
extern "C" void* YellowLeaf_00472b64(uint8_t* self) { return self + 0x740; }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0047382C
extern "C" void* YellowLeaf_0047382c(uint8_t* self) __asm__("_ZN9NetAppLib9JoinFesta28JoinFestaPersonalDataManager23GetScriptSelectPersonalEv");
extern "C" void* YellowLeaf_0047382c(uint8_t* self) { return self + 0x2b0; }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00473F6C
extern "C" void* YellowLeaf_00473f6c(uint8_t* self) __asm__("_ZN9NetAppLib9JoinFesta28JoinFestaPersonalDataManager9GetMyDataEv");
extern "C" void* YellowLeaf_00473f6c(uint8_t* self) { return self + 0x8; }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0048CAAC
extern "C" uint32_t YellowLeaf_0048caac(const uint8_t* self) __asm__("_ZNK3App4Tool10TalkWindow15GetStrWinResultEv");
extern "C" uint32_t YellowLeaf_0048caac(const uint8_t* self) { return *reinterpret_cast<const uint8_t*>(self + 0xb1); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0048CAB4
extern "C" uint32_t YellowLeaf_0048cab4(const uint8_t* self) __asm__("_ZNK3App4Tool10TalkWindow9GetStatusEv");
extern "C" uint32_t YellowLeaf_0048cab4(const uint8_t* self) { return *reinterpret_cast<const uint8_t*>(self + 0x94); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0048CB0C
extern "C" uint32_t YellowLeaf_0048cb0c(const uint8_t* self) __asm__("_ZNK3App4Tool11SlideScroll9GetResultEv");
extern "C" uint32_t YellowLeaf_0048cb0c(const uint8_t* self) { return *reinterpret_cast<const uint8_t*>(self + 0x4); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0048D34C
extern "C" int32_t YellowLeaf_0048d34c(const uint8_t* self) __asm__("_ZNK3app2ui11UIResponder14IsInputEnabledEv");
extern "C" int32_t YellowLeaf_0048d34c(const uint8_t* self) { return *reinterpret_cast<const int8_t*>(self + 0x2d); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0048D37C
extern "C" uint32_t YellowLeaf_0048d37c(const uint8_t* self) __asm__("_ZNK3app2ui6UIView10GetG2DUtilEv");
extern "C" uint32_t YellowLeaf_0048d37c(const uint8_t* self) { return *reinterpret_cast<const uint32_t*>(self + 0x60); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0048D460
extern "C" int32_t YellowLeaf_0048d460(const uint8_t* self) __asm__("_ZNK3app2ui6UIView9IsVisibleEv");
extern "C" int32_t YellowLeaf_0048d460(const uint8_t* self) { return *reinterpret_cast<const int8_t*>(self + 0x6c); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0048D604
extern "C" void* YellowLeaf_0048d604(uint8_t* self) __asm__("_ZNK3app4tool10LytTexData10GetTexInfoEv");
extern "C" void* YellowLeaf_0048d604(uint8_t* self) { return self + 0x8; }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0048D60C
extern "C" uint32_t YellowLeaf_0048d60c(const uint8_t* self) __asm__("_ZNK3app4tool10LytTexData10GetTexSizeEv");
extern "C" uint32_t YellowLeaf_0048d60c(const uint8_t* self) { return *reinterpret_cast<const uint32_t*>(self + 0x30); }
#endif
