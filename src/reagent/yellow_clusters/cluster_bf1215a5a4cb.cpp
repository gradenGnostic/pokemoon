// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00248FC4
const uint16_t* f00480fa4(const uint32_t*);
uint8_t* f0018de4c(uint8_t*, const uint16_t*);
uint8_t* f0018daec(uint8_t*, uint32_t);
void f0018dd80(uint8_t*);
uint32_t f00100ea4(const uint16_t*);
void f0018dc1c(uint8_t*, uint32_t);
void f00100d0c(uint8_t*, const uint16_t*);
extern const uint16_t* dat_2490cc;
extern const uint16_t* dat_2490d0;
extern const uint16_t* dat_2490d4;
extern const uint16_t* dat_2490d8;
extern const uint16_t* dat_2490dc;
extern "C" uint8_t* YellowAuto_00248fc4(uint8_t* arg0, const uint32_t* arg1) __asm__("_ZN2nn3nexlsERNS0_12StringStreamERKNS0_7qResultE");
extern "C" uint8_t* YellowAuto_00248fc4(uint8_t* arg0, const uint32_t* arg1) {
const uint16_t* d = f00480fa4(arg1);
uint8_t s[536];
uint8_t* p = s;
p = f0018de4c(p, dat_2490cc);
*(s + 528) = 1;
*(s + 531) = 0;
p = f0018daec(p, arg1[0]);
p = f0018de4c(p, dat_2490d0);
p = f0018de4c(p, d);
f0018de4c(arg0, *(const uint16_t**)(p + 4));
f0018dd80(s);
if (arg1[1] != 0) {
p = f0018de4c(arg0, dat_2490d4);
p = f0018de4c(p, *(const uint16_t**)(arg1 + 1));
p = f0018de4c(p, dat_2490d8);
p = f0018daec(p, arg1[2]);
uint32_t n = f00100ea4(dat_2490dc);
f0018dc1c(p, n + 1);
f00100d0c(*(uint8_t**)(p + 12), dat_2490dc);
*(uint32_t*)(p + 12) = *(uint32_t*)(p + 12) + (n * 2);
}
return arg0;
}
#endif
