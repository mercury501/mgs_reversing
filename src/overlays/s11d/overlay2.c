#include "linker.h"


int s11d_dword_800C3260 = 0x0000047F;
int s11d_dword_800C3264 = 0x02FF01E1;
int s11d_dword_800C3268 = 0x00000000;
int s11d_dword_800C326C = 0x0000067F;
int s11d_dword_800C3270 = 0x04FF01E1;
int s11d_dword_800C3274 = 0x084B02E1;
int s11d_dword_800C3278 = 0x00000000;
int s11d_dword_800C327C = 0x0000017F;
int s11d_dword_800C3280 = 0x032804AF;
int s11d_dword_800C3284 = 0x0C1E0323;
int s11d_dword_800C3288 = 0x00000000;
int s11d_dword_800C328C = 0x0000067F;
int s11d_dword_800C3290 = 0x020006FF;
int s11d_dword_800C3294 = 0x083706A5;
int s11d_dword_800C3298 = 0x00000273;
int s11d_dword_800C329C = 0x017F0100;
int s11d_dword_800C32A0 = 0x00000000;
int s11d_dword_800C32A4 = 0x04460296;
int s11d_dword_800C32A8 = 0x021E0332;
int s11d_dword_800C32AC = 0x00000000;
int s11d_dword_800C32B0 = 0x000003AA;
int s11d_dword_800C32B4 = 0x0000017F;
int s11d_dword_800C32B8 = 0x000002D2;
int s11d_dword_800C32BC = 0x00000000;
int s11d_dword_800C32C0 = 0x00000064;
int s11d_dword_800C32C4 = 0x0000FC00;
int s11d_dword_800C32C8 = 0x00000000;
int s11d_dword_800C32CC = 0x0384012C;
int s11d_dword_800C32D0 = 0x0000012C;
int s11d_dword_800C32D4 = 0x0008512D;
int s11d_dword_800C32D8 = 0x001E0004;
int s11d_dword_800C32DC = 0x00000001;
int s11d_dword_800C32E0 = 0x05DC0002;
int s11d_dword_800C32E4 = 0x004005DC;
int s11d_dword_800C32E8 = 0x00000000;
int s11d_dword_800C32EC = 0x800D1DCC;
int s11d_dword_800C32F0 = 0x0008512D;
int s11d_dword_800C32F4 = 0x001E0004;
int s11d_dword_800C32F8 = 0x00000001;
int s11d_dword_800C32FC = 0x03200001;
int s11d_dword_800C3300 = 0x00400320;
int s11d_dword_800C3304 = 0x00000000;
int s11d_dword_800C3308 = 0x800D1DE8;
int s11d_dword_800C330C = 0x00000060;
int s11d_dword_800C3310 = 0xFA600000;
int s11d_dword_800C3314 = 0x00000BA4;
int s11d_dword_800C3318 = 0x01180118;
int s11d_dword_800C331C = 0x00000118;
int s11d_dword_800C3320 = 0x00000024;
int s11d_dword_800C3324 = 0x00000000;
int s11d_dword_800C3328 = 0x00000000;
int s11d_dword_800C332C = 0xFFFFFFFF;
int s11d_dword_800C3330 = 0xFFFFFFFF;
int s11d_dword_800C3334 = 0x00000000;
int s11d_dword_800C3338 = 0x00000000;
int s11d_dword_800C333C = 0x00000000;
int s11d_dword_800C3340 = 0x00000000;
int s11d_dword_800C3344 = 0x00000000;
int s11d_dword_800C3348 = 0x0000027F;
int s11d_dword_800C334C = 0x000002FF;
int s11d_dword_800C3350 = 0x00000000;
int s11d_dword_800C3354 = 0x00000000;
int s11d_dword_800C3358 = 0x00000000;


const char s11d_aTosi_800D1D5C[] = "to_s11i";
const int s11d_dword_800D1D64 = 0x800C5458;
const int s11d_dword_800D1D68 = 0x800C5458;
const int s11d_dword_800D1D6C = 0x800C54A8;
const int s11d_dword_800D1D70 = 0x800C54A8;
const int s11d_dword_800D1D74 = 0x800C54A8;
const int s11d_dword_800D1D78 = 0x800C54A8;
const int s11d_dword_800D1D7C = 0x800C54A8;
const int s11d_dword_800D1D80 = 0x800C54A8;
const int s11d_dword_800D1D84 = 0x800C54A8;
const int s11d_dword_800D1D88 = 0x800C54A8;
const int s11d_dword_800D1D8C = 0x800C5478;
const int s11d_dword_800D1D90 = 0x800C54A8;
const int s11d_dword_800D1D94 = 0x800C54A8;
const int s11d_dword_800D1D98 = 0x800C54A8;
const int s11d_dword_800D1D9C = 0x800C548C;
const int s11d_dword_800D1DA0 = 0x800C548C;
const char s11d_aWire_800D1DA4[] = "wire";
const char s11d_aShadow_800D1DAC[] = "shadow";
const char s11d_aSnake_800D1DB4[] = "snake";
const char s11d_aSned_800D1DBC[] = "sne_11d";
const char s11d_dword_800D1DC4[] = {'r', 'o', 'p', 'e'};
const char s11d_dword_800D1DC8[] = {'.', 'c', 0x0, 0xa4};
const char s11d_dword_800D1DCC[] = {0x0, 0x15, 0x1, 0x0};
const char s11d_dword_800D1DD0[] = {0x5, 0x1, 0xfe, 0xc};
const char s11d_dword_800D1DD4[] = {0x0, 0x7, '\n', 0x0};
const char s11d_dword_800D1DD8[] = {0xc8, 0x0, 0xc8, 0x1};
const char s11d_dword_800D1DDC[] = {0xff, 0x8, 0xf8, 0xf8};
const char s11d_dword_800D1DE0[] = {0xf8, 0x2, 0x0, 0x1};
const char s11d_dword_800D1DE4[] = {0xd, 0xf, 0x0, 0x0};
const char s11d_dword_800D1DE8[] = {0x0, '6', 0x2, 0x0};
const char s11d_dword_800D1DEC[] = {0x7, 0x0, 0x1c, 0x1};
const char s11d_dword_800D1DF0[] = {0xfe, 0xc, 0x0, 0x7};
const char s11d_dword_800D1DF4[] = {'\n', 0x1, ',', 0x1};
const char s11d_dword_800D1DF8[] = {',', 0x1, 0xff, 0x8};
const char s11d_dword_800D1DFC[] = {0xf8, 0xf8, 0xf8, 0x2};
const char s11d_dword_800D1E00[] = {0x0, 0x1, 0xd, 0xf};
const char s11d_dword_800D1E04[] = {0x1, 0xfe, '\n', 0x1};
const char s11d_dword_800D1E08[] = {0xf4, 0x1, 0xf4, 0x8};
const char s11d_dword_800D1E0C[] = {0xbe, 0xbe, 0xbe, 0x2};
const char s11d_dword_800D1E10[] = {0x0, 0x1, 0xc, 0x0};
const char s11d_dword_800D1E14[] = {0xf, '\n', 0x0, 0xc8};
const char s11d_dword_800D1E18[] = {0x0, 0xc8, 0x1, 0xff};
const char s11d_dword_800D1E1C[] = {0x8, 0xf0, 0xf0, 0xf0};
const char s11d_dword_800D1E20[] = {0x2, 0x0, 0x1, 0xd};
const char s11d_dword_800D1E24[] = {0xf, 0x0, 'i', 0x89};
const char s11d_aInvalidattackmode_800D1E28[] = "invalid attack mode\n";
const char s11d_aSocomf_800D1E40[] = "socom_f";
const char s11d_dword_800D1E48[] = {'h', 'i', 'n', 'd'};
const char s11d_dword_800D1E4C[] = {'.', 'c', 0x0, 0xa7};
const char s11d_aBullet_800D1E50[] = "bullet";
const char s11d_dword_800D1E58[] = {'h', 'i', 'n', 'd'};
const char s11d_dword_800D1E5C[] = {'_', 'b', 'u', 'l'};
const char s11d_dword_800D1E60[] = {'.', 'c', 0x0, 0x8c};
const char s11d_aSmoke_800D1E64[] = "smoke";
const char s11d_dword_800D1E6C[] = {'d', 's', 'm', 'o'};
const char s11d_dword_800D1E70[] = {'k', 'e', '2', '.'};
const char s11d_dword_800D1E74[] = {'c', 0x0, 'c', 0x94};
const char s11d_aTimeoutd_800D1E78[] = "timeout %d\n";
const char s11d_aShadow_800D1E84[] = "shadow";
const char s11d_aWire_800D1E8C[] = "wire";
const char s11d_aSnake_800D1E94[] = "snake";
const char s11d_aSned_800D1E9C[] = "sne_11d2";
const char s11d_dword_800D1EA8[] = {'l', 'a', 'n', 'd'};
const char s11d_dword_800D1EAC[] = {'i', 'n', 'g', '.'};
const char s11d_dword_800D1EB0[] = {'c', 0x0, 'c', 0x94};


int SECTION("overlay.bss") s11d_dword_800D1F78;
int SECTION("overlay.bss") s11d_dword_800D1F7C;
int SECTION("overlay.bss") s11d_dword_800D1F80;
int SECTION("overlay.bss") s11d_dword_800D1F84;
int SECTION("overlay.bss") s11d_dword_800D1F88;
int SECTION("overlay.bss") s11d_dword_800D1F8C;
int SECTION("overlay.bss") s11d_dword_800D1F90;
int SECTION("overlay.bss") s11d_dword_800D1F94;
int SECTION("overlay.bss") s11d_dword_800D1F98;
int SECTION("overlay.bss") s11d_dword_800D1F9C;
int SECTION("overlay.bss") s11d_dword_800D1FA0;