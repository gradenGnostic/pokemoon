// Compile-first semantic reconstructions; runtime-inactive.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002E66E0
extern "C" void Speculative_002e66e0(uint8_t* self) __asm__("_ZN3App9FieldMenu8PlayData26SetEndContinueRotomMessageEv");
extern "C" void Speculative_002e66e0(uint8_t* self) { *reinterpret_cast<uint8_t*>(self + 0x28) = 0x1; }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0032C7EC
extern "C" void Speculative_0032c7ec(uint8_t* self) __asm__("_ZN4gfl215renderingengine10scenegraph8resource15GfBinaryEnvDataD1Ev");
extern "C" void Speculative_0032c7ec(uint8_t* self) { *reinterpret_cast<uint32_t*>(self + 0x0) = 0x618b1c; }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0032C9C0
extern "C" void Speculative_0032c9c0(uint8_t* self) __asm__("_ZN4gfl215renderingengine10scenegraph8resource15GfBinaryMdlDataD1Ev");
extern "C" void Speculative_0032c9c0(uint8_t* self) { *reinterpret_cast<uint32_t*>(self + 0x0) = 0x618b48; }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0032CCC4
extern "C" void Speculative_0032ccc4(uint8_t* self) __asm__("_ZN4gfl215renderingengine10scenegraph8resource15GfBinaryShdDataD1Ev");
extern "C" void Speculative_0032ccc4(uint8_t* self) { *reinterpret_cast<uint32_t*>(self + 0x0) = 0x618ba0; }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0032CE98
extern "C" void Speculative_0032ce98(uint8_t* self) __asm__("_ZN4gfl215renderingengine10scenegraph8resource15GfBinaryTexDataD1Ev");
extern "C" void Speculative_0032ce98(uint8_t* self) { *reinterpret_cast<uint32_t*>(self + 0x0) = 0x618bcc; }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003309AC
extern "C" void Speculative_003309ac(uint8_t* self) __asm__("_ZN4gfl215renderingengine10scenegraph8resource24GfBinaryCollisionMdlDataD1Ev");
extern "C" void Speculative_003309ac(uint8_t* self) { *reinterpret_cast<uint32_t*>(self + 0x0) = 0x618f7c; }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00340F18
extern "C" void Speculative_00340f18(uint8_t* self) __asm__("_ZN4gfl22fs17BinLinkerAccessorC1Ev");
extern "C" void Speculative_00340f18(uint8_t* self) { *reinterpret_cast<uint32_t*>(self + 0x0) = 0x0; }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0036CE0C
extern "C" void Speculative_0036ce0c(uint8_t* self) __asm__("_ZN4gfl29collision14CollisionModelC1Ev");
extern "C" void Speculative_0036ce0c(uint8_t* self) { *reinterpret_cast<uint32_t*>(self + 0x0) = 0x0; }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003BECB0
extern "C" void Speculative_003becb0(uint8_t* self) __asm__("_ZN5print13MessageWindow18SetMessageAutoOnceEv");
extern "C" void Speculative_003becb0(uint8_t* self) { *reinterpret_cast<uint8_t*>(self + 0xda) = 0x1; }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003D8F30
extern "C" void Speculative_003d8f30(uint8_t* self) __asm__("_ZN6NetLib3Pgl12PGLConnector26RemovePGLConnectorListenerEv");
extern "C" void Speculative_003d8f30(uint8_t* self) { *reinterpret_cast<uint32_t*>(self + 0xb54) = 0x0; }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0043DE98
extern "C" void Speculative_0043de98(uint8_t* self) __asm__("_ZN8Savedata16QRReaderSaveData23ResetScannedDataHistoryEv");
extern "C" void Speculative_0043de98(uint8_t* self) { *reinterpret_cast<uint32_t*>(self + 0x158) = 0x0; }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0045AEE4
extern "C" void Speculative_0045aee4(uint8_t* self) __asm__("_ZN9NetAppLib2UI25NetAppRegulationUpperView23ResetRegulationDrawInfoEv");
extern "C" void Speculative_0045aee4(uint8_t* self) { *reinterpret_cast<uint32_t*>(self + 0xac) = 0x0; }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0045C378
extern "C" void Speculative_0045c378(uint8_t* self) __asm__("_ZN9NetAppLib4Util22NetAppPokeModelUtility14CleanupRequestEv");
extern "C" void Speculative_0045c378(uint8_t* self) { *reinterpret_cast<uint8_t*>(self + 0x1c) = 0x1; }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0045FFD4
extern "C" void Speculative_0045ffd4(uint8_t* self) __asm__("_ZN9NetAppLib6System21ApplicationSystemBase17NonUseFadeRequestEv");
extern "C" void Speculative_0045ffd4(uint8_t* self) { *reinterpret_cast<uint8_t*>(self + 0x49) = 0x1; }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00471680
extern "C" void Speculative_00471680(uint8_t* self) __asm__("_ZN9NetAppLib9JoinFesta26JoinFestaAttractionManager18TimeCountDownStartEv");
extern "C" void Speculative_00471680(uint8_t* self) { *reinterpret_cast<uint8_t*>(self + 0x30) = 0x1; }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00473200
extern "C" void Speculative_00473200(uint8_t* self) __asm__("_ZN9NetAppLib9JoinFesta28JoinFestaPersonalDataManager21SetRecruiterVisibleOnEv");
extern "C" void Speculative_00473200(uint8_t* self) { *reinterpret_cast<uint8_t*>(self + 0x988) = 0x1; }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00473A14
extern "C" void Speculative_00473a14(uint8_t* self) __asm__("_ZN9NetAppLib9JoinFesta28JoinFestaPersonalDataManager24ResetScriptTalkFriendKeyEv");
extern "C" void Speculative_00473a14(uint8_t* self) { *reinterpret_cast<uint32_t*>(self + 0x2a8) = 0x0; }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00557F40
extern "C" void Speculative_00557f40(uint8_t* self) __asm__("_ZN2nw4font16TagProcessorBaseIwEC1Ev");
extern "C" void Speculative_00557f40(uint8_t* self) { *reinterpret_cast<uint32_t*>(self + 0x0) = 0x616a44; }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00341CD4
extern "C" void Speculative_00341cd4(uint8_t* self) __asm__("_ZN4gfl22fs6ResultC1Ev");
extern "C" void Speculative_00341cd4(uint8_t* self) { *reinterpret_cast<uint32_t*>(self + 0x0) = 0; *reinterpret_cast<uint32_t*>(self + 0x4) = 0; }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00361890
extern "C" void Speculative_00361890(uint8_t* self) __asm__("_ZN4gfl29animation17AnimationPackListC1Ev");
extern "C" void Speculative_00361890(uint8_t* self) { *reinterpret_cast<uint32_t*>(self + 0x0) = 0; *reinterpret_cast<uint32_t*>(self + 0x4) = 0; }
#endif
