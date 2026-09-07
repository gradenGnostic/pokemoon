// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00458D78
void* GflHeapAllocMemoryBlockAlign(void*, uint32_t, uint32_t);
void __aeabi_memcpy(void*, const void*, uint32_t);
void __aeabi_memset(void*, uint32_t, uint32_t);
void FUN_00343da8(uint32_t, uint32_t, uint32_t, const void*, void*);
uint32_t FUN_00311558(void*);
uint32_t nngxGetPhysicalAddr(void*);
void GflHeapFreeMemoryBlock(void*);
extern "C" void YellowAuto_00458d78(uint8_t* arg0, const uint8_t* arg1) __asm__("_ZN9NetAppLib2UI15NetAppQRTexture5BuildEPKN4gfl22qr14QRRGBImageInfoE");
extern "C" void YellowAuto_00458d78(uint8_t* arg0, const uint8_t* arg1) {
if (*reinterpret_cast<uint32_t*>(arg0 + 8U) != 0U) {
return;
}
uint32_t imageWidth = *reinterpret_cast<const uint16_t*>(arg1 + 24U);
uint32_t imageHeight = *reinterpret_cast<const uint16_t*>(arg1 + 26U);
uint32_t realWidth = 1U;
while (realWidth < imageWidth) {
realWidth <<= 1U;
}
uint32_t realHeight = 1U;
while (realHeight < imageHeight) {
realHeight <<= 1U;
}
uint32_t workBaseAddr = *reinterpret_cast<const uint32_t*>(arg0 + 4U);
uint32_t appHeapAddr = *reinterpret_cast<const uint32_t*>(reinterpret_cast<const uint8_t*>(workBaseAddr) + 8U);
void* deviceHeap = reinterpret_cast<void*>(*reinterpret_cast<const uint32_t*>(reinterpret_cast<const uint8_t*>(appHeapAddr) + 8U));
uint32_t imageBufferSize = realWidth * realHeight * 3U;
uint8_t* textureBuffer = static_cast<uint8_t*>(GflHeapAllocMemoryBlockAlign(deviceHeap, imageBufferSize, 128U));
*reinterpret_cast<uint32_t*>(arg0 + 8U) = reinterpret_cast<uint32_t>(textureBuffer);
uint8_t* reverseBuffer = static_cast<uint8_t*>(GflHeapAllocMemoryBlockAlign(deviceHeap, imageBufferSize, 128U));
uint32_t qrLineBytes = imageWidth * 3U;
uint32_t texLineBytes = realWidth * 3U;
uint32_t strideBytes = texLineBytes - qrLineBytes;
const uint8_t* src = reinterpret_cast<const uint8_t*>(*reinterpret_cast<const uint32_t*>(arg1 + 8U));
for (uint32_t line = 0U; line < imageHeight; ++line) {
uint8_t* dst = reverseBuffer + texLineBytes * ((realHeight - 1U) - line);
__aeabi_memcpy(dst, src, qrLineBytes);
src += qrLineBytes;
__aeabi_memset(dst + qrLineBytes, strideBytes, 68U);
}
__aeabi_memset(reverseBuffer, texLineBytes * (realHeight - imageHeight), 15U);
FUN_00343da8(*reinterpret_cast<const uint32_t*>(0x00458F3CU), realWidth, realHeight, reverseBuffer, textureBuffer);
uint32_t texObject = FUN_00311558(textureBuffer);
uint32_t physicalAddr = nngxGetPhysicalAddr(textureBuffer);
*reinterpret_cast<uint32_t*>(arg0 + 12U) = texObject;
*reinterpret_cast<uint32_t*>(arg0 + 16U) = *reinterpret_cast<const uint32_t*>(arg1 + 24U);
*reinterpret_cast<uint32_t*>(arg0 + 24U) = (realWidth & 65535U) | (realHeight << 16U);
*reinterpret_cast<uint32_t*>(arg0 + 28U) = physicalAddr;
*(arg0 + 20U) = 6U;
*(arg0 + 21U) = 0U;
GflHeapFreeMemoryBlock(reverseBuffer);
return;
}
#endif
