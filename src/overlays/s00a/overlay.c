#include "libgcl/libgcl.h"
#include "Anime/animeconv/anime.h"


GCL_ActorTableEntry s00aOverlayCharas[] =
{
    { 0x63AA, (TGCL_ActorCreateFn)0x800D872C },
    { 0xCBF8, (TGCL_ActorCreateFn)0x800C37EC },
    { 0xFED1, (TGCL_ActorCreateFn)0x8005D508 },
    { 0x4170, (TGCL_ActorCreateFn)0x800C3A1C },
    { 0x3F9A, (TGCL_ActorCreateFn)0x800DF424 },
    { 0x7BC2, (TGCL_ActorCreateFn)0x800DF6AC },
    { 0x51C6, (TGCL_ActorCreateFn)0x800DFA88 },
    { 0x7A05, (TGCL_ActorCreateFn)0x800DE4D8 },
    { 0x3ED7, (TGCL_ActorCreateFn)0x800DCFD4 },
    { 0xB103, (TGCL_ActorCreateFn)0x800DEBEC },
    { 0x92BC, (TGCL_ActorCreateFn)0x800D3808 },
    { 0x02C4, (TGCL_ActorCreateFn)0x800D1A70 },
    { 0xEC77, (TGCL_ActorCreateFn)0x800D3118 },
    { 0xBA52, (TGCL_ActorCreateFn)0x800DEEE0 },
    { 0x30CE, (TGCL_ActorCreateFn)0x800D7A2C },
    { 0xC6D7, (TGCL_ActorCreateFn)0x800D0908 },
    { 0xDBA3, (TGCL_ActorCreateFn)0x800DACCC },
    { 0x6E9A, (TGCL_ActorCreateFn)0x800C5034 },
    { 0x170C, (TGCL_ActorCreateFn)0x800D2BEC },
    { 0x32E5, (TGCL_ActorCreateFn)0x800C3E50 },
    { 0x2ABC, (TGCL_ActorCreateFn)0x800D9F30 },
    { 0xD4A5, (TGCL_ActorCreateFn)0x800D5234 },
    { 0x81EA, (TGCL_ActorCreateFn)0x800D8244 },
    { 0x7FF7, (TGCL_ActorCreateFn)0x800DDB34 },
    { 0x1A02, (TGCL_ActorCreateFn)0x800D5D9C },
    { 0x5D64, (TGCL_ActorCreateFn)0x800DE9C8 },
    { 0xA12E, (TGCL_ActorCreateFn)0x800DD4A8 },
    { 0, 0 }
};

ANIMATION anm_breath_800C32E8  = { 20781, 8, 4, 30, 1, 300, 1, 500, 500, 0, 0, (const char*)0x800DFBE0 };
ANIMATION anm_unknown_800C3304 = { 20781, 8, 4, 30, 1, 300, 1, 500, 500, 0, 0, (const char*)0x800DFC30 };
RECT rect_800C3320 = { 1000, 1000, 2000, 2000 };
int s00a_dword_800C3328[8] = { 2500, 3500, 4000, 5000, 5500, 5600, 5700, 5800 };
unsigned short s00a_dword_800C3348[8] = { 450, 15, 30, 60, 90, 0, 32001, 30000 };

short ActTable_800C3358[54] =
{
    0x13,
    0x14,
    0x0A,
    0x16,
    0x09,
    0x22,
    0x23,
    0x24,
    0x2D,
    0x0D,
    0x0C,
    0x1A,
    0x0F,
    0x0E,
    0x10,
    0x1B,
    0x08,
    0x2E,
    0x32,
    0x15,
    0x1E,
    0x1F,
    0x20,
    0x21,
    0x25,
    0x34,
    0x35,
    0x19,
    0x05,
    0x02,
    0x2A,
    0x04,
    0x27,
    0x28,
    0x06,
    0x07,
    0x26,
    0x03,
    0x29,
    0x11,
    0x12,
    0x2B,
    0x17,
    0x18,
    0x1C,
    0x1D,
    0x00,
    0x01,
    0x33,
    0x11,
    0x12,
    0x2B,
    0x16,
    0x0B
};

SVECTOR s00a_dword_800C33C4 = { -150, 0, 300 };
SVECTOR s00a_dword_800C33CC = { 0, -550, 950 };
SVECTOR s00a_dword_800C33D4 = { 0, 0, 100 };
SVECTOR s00a_dword_800C33DC = { -1024, 0, 0 };

int s00a_dword_800C33E4 = 0x00000000;
int s00a_dword_800C33E8 = 0x00000064;
int s00a_dword_800C33EC = 0x0000FC00;
int s00a_dword_800C33F0 = 0x00000000;
int s00a_dword_800C33F4 = 0x800DFE94;
int s00a_dword_800C33F8 = 0x800DFE80;
int s00a_dword_800C33FC = 0x800DFE6C;
int s00a_dword_800C3400 = 0x800C9414;
int s00a_dword_800C3404 = 0x800C94B8;
int s00a_dword_800C3408 = 0x800C9600;
int s00a_dword_800C340C = 0x800C963C;
int s00a_dword_800C3410 = 0xFE0C0005;
int s00a_dword_800C3414 = 0x00000050;
int s00a_dword_800C3418 = 0x0001DCD3;
int s00a_dword_800C341C = 0x00010001;
int s00a_dword_800C3420 = 0x01F40001;
int s00a_dword_800C3424 = 0x00500001;
int s00a_dword_800C3428 = 0x00000050;
int s00a_dword_800C342C = 0x00000000;
int s00a_dword_800C3430 = 0x800DFEB4;
int s00a_dword_800C3434 = 0x0001FAD3;
int s00a_dword_800C3438 = 0x00010001;
int s00a_dword_800C343C = 0x01F40001;
int s00a_dword_800C3440 = 0x00500001;
int s00a_dword_800C3444 = 0x00000050;
int s00a_dword_800C3448 = 0x00000000;
int s00a_dword_800C344C = 0x800E0018;
int s00a_dword_800C3450 = 0x0001FAD3;
int s00a_dword_800C3454 = 0x00010001;
int s00a_dword_800C3458 = 0x01F40001;
int s00a_dword_800C345C = 0x00500001;
int s00a_dword_800C3460 = 0x00000050;
int s00a_dword_800C3464 = 0x00000000;
int s00a_dword_800C3468 = 0x800E011C;
int s00a_dword_800C346C = 0x00011968;
int s00a_dword_800C3470 = 0x00010001;
int s00a_dword_800C3474 = 0x00000001;
int s00a_dword_800C3478 = 0x00460001;
int s00a_dword_800C347C = 0x00FF0046;
int s00a_dword_800C3480 = 0x00000000;
int s00a_dword_800C3484 = 0x800E0220;
int s00a_dword_800C3488 = 0xFAD3DCD3;
int s00a_dword_800C348C = 0x00001968;
int s00a_dword_800C3490 = 0x0001F314;
int s00a_dword_800C3494 = 0x00010001;
int s00a_dword_800C3498 = 0x03200001;
int s00a_dword_800C349C = 0x02580003;
int s00a_dword_800C34A0 = 0x00FA0258;
int s00a_dword_800C34A4 = 0x00000000;
int s00a_dword_800C34A8 = 0x800E0288;
int s00a_dword_800C34AC = 0x0001CAFE;
int s00a_dword_800C34B0 = 0x00010001;
int s00a_dword_800C34B4 = 0x00000001;
int s00a_dword_800C34B8 = 0x00C80001;
int s00a_dword_800C34BC = 0x008000C8;
int s00a_dword_800C34C0 = 0x00000000;
int s00a_dword_800C34C4 = 0x800E02AC;
int s00a_dword_800C34C8 = 0x00014184;
int s00a_dword_800C34CC = 0x00010001;
int s00a_dword_800C34D0 = 0x00000001;
int s00a_dword_800C34D4 = 0x000A0005;
int s00a_dword_800C34D8 = 0x0080000A;
int s00a_dword_800C34DC = 0x00000000;
int s00a_dword_800C34E0 = 0x800E054C;
int s00a_dword_800C34E4 = 0x0008512D;
int s00a_dword_800C34E8 = 0x001E0004;
int s00a_dword_800C34EC = 0x00000001;
int s00a_dword_800C34F0 = 0x000A0001;
int s00a_dword_800C34F4 = 0x00FF000A;
int s00a_dword_800C34F8 = 0x00000000;
int s00a_dword_800C34FC = 0x800E05A8;
int s00a_dword_800C3500 = 0x0001F7BB;
int s00a_dword_800C3504 = 0x00010001;
int s00a_dword_800C3508 = 0x00000001;
int s00a_dword_800C350C = 0x00020001;
int s00a_dword_800C3510 = 0x00000002;
int s00a_dword_800C3514 = 0x00000000;
int s00a_dword_800C3518 = 0x800E05F0;
int s00a_dword_800C351C = 0x00320064;
int s00a_dword_800C3520 = 0x000A0019;
int s00a_dword_800C3524 = 0x00000000;
int s00a_dword_800C3528 = 0x00000001;
int s00a_dword_800C352C = 0x00000002;
int s00a_dword_800C3530 = 0x00000004;
int s00a_dword_800C3534 = 0x00002000;
int s00a_dword_800C3538 = 0x00000040;
int s00a_dword_800C353C = 0x00000080;
int s00a_dword_800C3540 = 0x00000200;
int s00a_dword_800C3544 = 0x00000400;
int s00a_dword_800C3548 = 0x00000800;
int s00a_dword_800C354C = 0x00000100;
int s00a_dword_800C3550 = 0x00800000;
int s00a_dword_800C3554 = 0x01000000;
int s00a_dword_800C3558 = 0x04000000;
int s00a_dword_800C355C = 0x08000000;
int s00a_dword_800C3560 = 0x00000000;
int s00a_dword_800C3564 = 0x00000000;
int s00a_dword_800C3568 = 0x00000001;
int s00a_dword_800C356C = 0x00000002;
int s00a_dword_800C3570 = 0x00000004;
int s00a_dword_800C3574 = 0x00002000;
int s00a_dword_800C3578 = 0x00000040;
int s00a_dword_800C357C = 0x00000080;
int s00a_dword_800C3580 = 0x00000200;
int s00a_dword_800C3584 = 0x00000400;
int s00a_dword_800C3588 = 0x00000800;
int s00a_dword_800C358C = 0x00000000;
int s00a_dword_800C3590 = 0x00000000;
int s00a_dword_800C3594 = 0x00000000;
int s00a_dword_800C3598 = 0x00000000;
int s00a_dword_800C359C = 0x00000000;
int s00a_dword_800C35A0 = 0x0000001F;


SVECTOR ENEMY_TARGET_SIZE_800C35A4  = { 300, 1000, 300 };
SVECTOR ENEMY_TARGET_FORCE_800C35AC = { 0, 0, 0 };
SVECTOR ENEMY_ATTACK_SIZE_800C35B4  = { 800, 500, 800 };
SVECTOR ENEMY_ATTACK_FORCE_800C35BC = { 100, 0, 0 };
SVECTOR ENEMY_TOUCH_SIZE_800C35C4   = { 300, 800, 300 };
SVECTOR ENEMY_TOUCH_FORCE_800C35CC  = { 0, 0, 0, 0 };
SVECTOR COM_NO_POINT_800C35D4       = { 30000, 30000, 30000 };

int s00a_dword_800C35DC = 0x00000101;
int s00a_dword_800C35E0 = 0x000001FF;
int s00a_dword_800C35E4 = 0x000009C4;
int s00a_dword_800C35E8 = 0x00000DAC;
int s00a_dword_800C35EC = 0x00000FA0;
int s00a_dword_800C35F0 = 0x00001388;
int s00a_dword_800C35F4 = 0x0000157C;
int s00a_dword_800C35F8 = 0x000015E0;
int s00a_dword_800C35FC = 0x00001644;
int s00a_dword_800C3600 = 0x000016A8;
int s00a_dword_800C3604 = 0x00500000;
int s00a_dword_800C3608 = 0x00000032;
int s00a_dword_800C360C = 0x00500000;
int s00a_dword_800C3610 = 0x00000050;
int s00a_dword_800C3614 = 0x00140000;
int s00a_dword_800C3618 = 0x000001F4;
int s00a_dword_800C361C = 0x03E801F4;
int s00a_dword_800C3620 = 0x07D003E8;
int s00a_dword_800C3624 = 0x00280028;
int s00a_dword_800C3628 = 0x00500050;
int s00a_dword_800C362C = 0xFE700000;
int s00a_dword_800C3630 = 0x0000003C;
int s00a_dword_800C3634 = 0x085BACDC;
int s00a_dword_800C3638 = 0xDBC9804B;
int s00a_dword_800C363C = 0x027F0200;
int s00a_dword_800C3640 = 0x00000000;
int s00a_dword_800C3644 = 0x01550487;
int s00a_dword_800C3648 = 0x087D0169;
int s00a_dword_800C364C = 0x0A46085F;
int s00a_dword_800C3650 = 0x0E2D0C37;
int s00a_dword_800C3654 = 0x00000000;
int s00a_dword_800C3658 = 0x0000047F;
int s00a_dword_800C365C = 0x084B06A5;
int s00a_dword_800C3660 = 0x00000C2D;

//OPEN_MES, CLOSE_MES
unsigned short mes_list_800C3664[] = { 0x43D3, 0x4235 };
SVECTOR mouth_offset_800C3668 = { 0, 0, 100 };
RECT rect_800C3670 = { 50, 50, 100, 100 };
unsigned short mes_list_800C3678[] = { 0xD182, 0x006B };
unsigned short mes_list_800C367C[] = { 0x3223, 0x71F1 };
unsigned short mes_list_800C3680[] = { 0xD420, 0x745D };

const char s00a_dword_800DFB9C[] = {0x2, 0x0, 0x2, '$'};
const char s00a_dword_800DFBA0[] = {0x3, 0x0, 0x82, 0xa0};
const char s00a_dword_800DFBA4[] = {0x2, 0x0, 0xa0, 0x10};
const char s00a_dword_800DFBA8[] = {0x0, 0xe6, 0x3, '<'};
const char s00a_dword_800DFBAC[] = {0x2, 0x0, 'c', '4'};
const char s00a_dword_800DFBB0[] = {'+', 0x10, 0x6, 0x0};
const char s00a_dword_800DFBB4[] = {'%', 0x10, 'b', 0x0};
const char s00a_dword_800DFBB8[] = {0x4, 0x0, 0x82, 0xac};
const char s00a_dword_800DFBBC[] = {0x8, 0x0, 0xe0, 0x3};
const char s00a_dword_800DFBC0[] = {0x8, 0x0, 0x80, 0xac};
const char s00a_dword_800DFBC4[] = {0x0, 0x0, 0x0, 0x0};
const char s00a_dword_800DFBC8[] = {0x0, 0x0, 0x0, 0x0};

const char aPadC_800DFBCC[] = "pad.c";
const short s00a_dword_800DFBD2 = 0x4E5F;
const char aBreathC_800DFBD4[] = "breath.c";
const char s00a_dword_800DFBDD = 0xC;
const char s00a_dword_800DFBDE = 0xD;
const char s00a_dword_800DFBDF = 0x0;
const char s00a_dword_800DFBE0[] = {0x0, 'I', 0x2, 0x0};
const char s00a_dword_800DFBE4[] = {0x7, 0x0, ')', 0x1};
const char s00a_dword_800DFBE8[] = {0xfe, 0xc, 0x0, 0x6};
const char s00a_dword_800DFBEC[] = {0x8, 0x6, 0x6, 0x6};
const char s00a_dword_800DFBF0[] = {0x1, 0xff, 0x2, 0x0};
const char s00a_dword_800DFBF4[] = {0x1, 0xd, 0xc, 0x0};
const char s00a_dword_800DFBF8[] = {'#', 0x8, 0xff, 0xff};
const char s00a_dword_800DFBFC[] = {0xff, '\n', 0x0, 0x8};
const char s00a_dword_800DFC00[] = {0x0, 0x8, 0x1, 0xff};
const char s00a_dword_800DFC04[] = {0x2, 0x0, 0x1, 0xd};
const char s00a_dword_800DFC08[] = {0xf, '\n', 0xff, '8'};
const char s00a_dword_800DFC0C[] = {0xff, '8', 0x1, 0xfe};
const char s00a_dword_800DFC10[] = {0xc, 0x0, 0x6, 0x8};
const char s00a_dword_800DFC14[] = {0x6, 0x6, 0x6, 0x1};
const char s00a_dword_800DFC18[] = {0xff, 0x2, 0x0, 0x1};
const char s00a_dword_800DFC1C[] = {0xd, 0xc, 0x0, '#'};
const char s00a_dword_800DFC20[] = {0x8, 0xff, 0xff, 0xff};
const char s00a_dword_800DFC24[] = {'\n', 0x0, 0x6, 0x0};
const char s00a_dword_800DFC28[] = {0x6, 0x1, 0xff, 0x2};
const char s00a_dword_800DFC2C[] = {0x0, 0x1, 0xd, 0xf};
const char s00a_dword_800DFC30[] = {0x0, ',', 0x1, 0x0};
const char s00a_dword_800DFC34[] = {0x5, 0x1, 0xfe, 0xc};
const char s00a_dword_800DFC38[] = {0x0, 0x3, 0x8, 0x6};
const char s00a_dword_800DFC3C[] = {0x6, 0x6, 0x1, 0xff};
const char s00a_dword_800DFC40[] = {0x2, 0x0, 0x1, 0xd};
const char s00a_dword_800DFC44[] = {0xc, 0x0, 0x10, 0x8};
const char s00a_dword_800DFC48[] = {0xff, 0xff, 0xff, '\n'};
const char s00a_dword_800DFC4C[] = {0x0, 0x4, 0x0, 0x4};
const char s00a_dword_800DFC50[] = {0x1, 0xff, 0x2, 0x0};
const char s00a_dword_800DFC54[] = {0x1, '\n', 0x0, 0x4};
const char s00a_dword_800DFC58[] = {0x0, 0x4, 0x1, 0xff};
const char s00a_dword_800DFC5C[] = {0x2, 0x0, 0x1, 0xd};
const char s00a_dword_800DFC60[] = {0xf, 0x0, 0x0, 0x0};
const char aSfex_800DFC64[] = "sfex0236";
const char aEmitterc_800DFC70[] = "emitter.c";
const char aErrerrerrsettimeover_800DFC7C[] = "Err Err Err  Set time Over\n";
const char aErrerrerrsetdirover_800DFC98[] = "Err Err Err  Set Dir Over\n";
const char aErrnotenoughwork_800DFCB4[] = "Err not enough work !!\n";
const char aWatcharcactionpointerr_800DFCCC[] = "watchar.c : action point Err\n";
const char aWatcherc_800DFCEC[] = "watcher.c";
const int s00a_dword_800DFCF8 = 0x800C5278;
const int s00a_dword_800DFCFC = 0x800C52D8;
const int s00a_dword_800DFD00 = 0x800C5200;
const int s00a_dword_800DFD04 = 0x800C5260;
const int s00a_dword_800DFD08 = 0x800C5310;
const int s00a_dword_800DFD0C = 0x800C5350;
const int s00a_dword_800DFD10 = 0x800C5350;
const int s00a_dword_800DFD14 = 0x800C5350;
const int s00a_dword_800DFD18 = 0x800C532C;
const char aPlayxresetdwarpd_800DFD1C[] = " play = %x  reset = %d warp = %d \n";
const char aErrnozoneidingcl_800DFD40[] = "!!!!!!Err No Zone ID In Gcl !!!!!!!!\n";
const char aErrerrenemyresetnumerrcallkorekadoooooooooo_800DFD68[] = " Err Err Enemy Reset Num Err CALL KOREKADOOOOOOOOOO!!\n";
const SVECTOR s00a_dword_800DFDA0 = { -200, 100, 600 };
const SVECTOR s00a_dword_800DFDA8 = { 5, 0, 100 };
const SVECTOR s00a_dword_800DFDB0 = { 400, 1000, 400 };
const char aComstdanbowl0_800DFDB8[] = " ~COM_ST_DANBOWL 0 !! \n ";
const char aComstdanbowl1_800DFDD4[] = " ~COM_ST_DANBOWL 1 !! \n ";
const char aComstdanbowl2_800DFDF0[] = " ~COM_ST_DANBOWL 2 !! \n ";
const char aMapchange_800DFE0C[] = " map change \n";
const char s00a_dword_800DFE1C[] = {0x0, 0x0, 0x0, 0x0};
const int s00a_dword_800DFE20 = 0x800C7970;
const int s00a_dword_800DFE24 = 0x800C79C4;
const int s00a_dword_800DFE28 = 0x800C7AD0;
const int s00a_dword_800DFE2C = 0x800C7A88;
const int s00a_dword_800DFE30 = 0x800C7B18;
const int s00a_dword_800DFE34 = 0x800C7B4C;
const int s00a_dword_800DFE38 = 0x800C7BA4;
const int s00a_dword_800DFE3C = 0x800C7BEC;
const int s00a_dword_800DFE40 = 0x800C7C2C;
const int s00a_dword_800DFE44 = 0x800C7C0C;
const int s00a_dword_800DFE48 = 0x800C7C58;
const int s00a_dword_800DFE4C = 0x800C7C58;
const char s00a_aEnemyresetmaxdnumd_800DFE50[] = "enemy reset max=%d num=%d \n";
const char s00a_aFamasbullet_800DFE6C[] = "FA-MAS/BULLET * 25";
const char s00a_aSocombullet_800DFE80[] = "SOCOM/BULLET * 12";
const char s00a_aRation_800DFE94[] = "RATION";
const char s00a_dword_800DFE9C[] = {0x0, 0x0, 0x0, 0x0};
const int s00a_dword_800DFEA0 = 0x800C916C;
const int s00a_dword_800DFEA4 = 0x800C917C;
const int s00a_dword_800DFEA8 = 0x800C9184;
const int s00a_dword_800DFEAC = 0x800C918C;
const int s00a_dword_800DFEB0 = 0x800C9194;
const char s00a_dword_800DFEB4[] = {0x1, 'V', 0x4, 0x0};
const char s00a_dword_800DFEB8[] = {0xb, 0x0, '^', 0x0};
const char s00a_dword_800DFEBC[] = {0xb1, 0x1, 0x9, 0x1};
const char s00a_dword_800DFEC0[] = {0x0, 0xc, 0x0, 0x4};
const char s00a_dword_800DFEC4[] = {'\n', 0x0, 'd', 0x0};
const char s00a_dword_800DFEC8[] = {'d', 0x8, '2', 0x19};
const char s00a_dword_800DFECC[] = {0x14, 0x2, 0x0, 0x1};
const char s00a_dword_800DFED0[] = {0xd, '\n', 0x0, 'd'};
const char s00a_dword_800DFED4[] = {0x0, 'd', 0x8, '2'};
const char s00a_dword_800DFED8[] = {0x96, 0xaa, 0x2, 0x0};
const char s00a_dword_800DFEDC[] = {0x3, '\n', 0xff, 0x9c};
const char s00a_dword_800DFEE0[] = {0xff, 0x9c, 0x8, 0xce};
const char s00a_dword_800DFEE4[] = {'j', 'V', 0x2, 0x0};
const char s00a_dword_800DFEE8[] = {0x16, '\n', 0x1, ','};
const char s00a_dword_800DFEEC[] = {0xfe, 0x98, 0x8, 0xce};
const char s00a_dword_800DFEF0[] = {0xe7, 0xec, 0x2, 0x0};
const char s00a_dword_800DFEF4[] = {0x1, '\n', 0x1, ','};
const char s00a_dword_800DFEF8[] = {0xff, 0xe2, 0x8, 0xce};
const char s00a_dword_800DFEFC[] = {0xe7, 0xec, 0x2, 0x0};
const char s00a_dword_800DFF00[] = {0x1, '\n', 0x1, ','};
const char s00a_dword_800DFF04[] = {0xff, 0xf4, 0x2, 0x0};
const char s00a_dword_800DFF08[] = {0x1, '\n', 0xfa, 0xba};
const char s00a_dword_800DFF0C[] = {0x0, 0xf0, 0x2, 0x0};
const char s00a_dword_800DFF10[] = {0x1, 0xf, 0x1, 0x0};
const char s00a_dword_800DFF14[] = {0xc, 0x0, 0x4, '\n'};
const char s00a_dword_800DFF18[] = {0x0, '2', 0x0, '2'};
const char s00a_dword_800DFF1C[] = {0x8, '2', 0x19, 0x14};
const char s00a_dword_800DFF20[] = {0x2, 0x0, 0x1, 0xd};
const char s00a_dword_800DFF24[] = {'\n', 0x0, '2', 0x0};
const char s00a_dword_800DFF28[] = {'2', 0x8, '2', 0x96};
const char s00a_dword_800DFF2C[] = {0xaa, 0x2, 0x0, 0x3};
const char s00a_dword_800DFF30[] = {'\n', 0xff, 0xce, 0xff};
const char s00a_dword_800DFF34[] = {0xce, 0x8, 0xce, 'j'};
const char s00a_dword_800DFF38[] = {'V', 0x2, 0x0, 0x16};
const char s00a_dword_800DFF3C[] = {'\n', 0x0, 0x96, 0xff};
const char s00a_dword_800DFF40[] = {'L', 0x8, 0xce, 0xe7};
const char s00a_dword_800DFF44[] = {0xec, 0x2, 0x0, 0x1};
const char s00a_dword_800DFF48[] = {'\n', 0x0, 0x96, 0xff};
const char s00a_dword_800DFF4C[] = {0xf1, 0x8, 0xce, 0xe7};
const char s00a_dword_800DFF50[] = {0xec, 0x2, 0x0, 0x1};
const char s00a_dword_800DFF54[] = {'\n', 0x0, 0x96, 0xff};
const char s00a_dword_800DFF58[] = {0xfa, 0x2, 0x0, 0x1};
const char s00a_dword_800DFF5C[] = {'\n', 0xfd, ']', 0x0};
const char s00a_dword_800DFF60[] = {'x', 0x2, 0x0, 0x1};
const char s00a_dword_800DFF64[] = {0xf, '\n', 0xff, 0xd8};
const char s00a_dword_800DFF68[] = {0xff, 0xd8, 0x1, 0x0};
const char s00a_dword_800DFF6C[] = {0xc, 0x0, 0x4, '\n'};
const char s00a_dword_800DFF70[] = {0x0, 0x19, 0x0, 0x19};
const char s00a_dword_800DFF74[] = {0x8, '2', 0x19, 0x14};
const char s00a_dword_800DFF78[] = {0x2, 0x0, 0x1, 0xd};
const char s00a_dword_800DFF7C[] = {'\n', 0x0, 0x19, 0x0};
const char s00a_dword_800DFF80[] = {0x19, 0x8, '2', 0x96};
const char s00a_dword_800DFF84[] = {0xaa, 0x2, 0x0, 0x3};
const char s00a_dword_800DFF88[] = {'\n', 0xff, 0xe7, 0xff};
const char s00a_dword_800DFF8C[] = {0xe7, 0x8, 0xce, 'j'};
const char s00a_dword_800DFF90[] = {'V', 0x2, 0x0, 0x16};
const char s00a_dword_800DFF94[] = {'\n', 0x0, 'K', 0xff};
const char s00a_dword_800DFF98[] = {0xa6, 0x8, 0xce, 0xe7};
const char s00a_dword_800DFF9C[] = {0xec, 0x2, 0x0, 0x1};
const char s00a_dword_800DFFA0[] = {'\n', 0x0, 'K', 0xff};
const char s00a_dword_800DFFA4[] = {0xf9, 0x8, 0xce, 0xe7};
const char s00a_dword_800DFFA8[] = {0xec, 0x2, 0x0, 0x1};
const char s00a_dword_800DFFAC[] = {'\n', 0x0, 'K', 0xff};
const char s00a_dword_800DFFB0[] = {0xf9, 0x2, 0x0, 0x1};
const char s00a_dword_800DFFB4[] = {'\n', 0xfe, 0xd4, 0x0};
const char s00a_dword_800DFFB8[] = {'<', 0x2, 0x0, 0x1};
const char s00a_dword_800DFFBC[] = {0xf, '\n', 0xff, 0xc4};
const char s00a_dword_800DFFC0[] = {0xff, 0xc4, 0x1, 0x0};
const char s00a_dword_800DFFC4[] = {0xc, 0x0, 0x4, '\n'};
const char s00a_dword_800DFFC8[] = {0x0, '\n', 0x0, '\n'};
const char s00a_dword_800DFFCC[] = {0x8, '2', 0x19, 0x14};
const char s00a_dword_800DFFD0[] = {0x2, 0x0, 0x1, 0xd};
const char s00a_dword_800DFFD4[] = {'\n', 0x0, '\n', 0x0};
const char s00a_dword_800DFFD8[] = {'\n', 0x8, '2', 0x96};
const char s00a_dword_800DFFDC[] = {0xaa, 0x2, 0x0, 0x3};
const char s00a_dword_800DFFE0[] = {'\n', 0xff, 0xf6, 0xff};
const char s00a_dword_800DFFE4[] = {0xf6, 0x8, 0xce, 'j'};
const char s00a_dword_800DFFE8[] = {'V', 0x2, 0x0, 0x16};
const char s00a_dword_800DFFEC[] = {'\n', 0x0, 0x1e, 0xff};
const char s00a_dword_800DFFF0[] = {0xdc, 0x8, 0xce, 0xe7};
const char s00a_dword_800DFFF4[] = {0xec, 0x2, 0x0, 0x1};
const char s00a_dword_800DFFF8[] = {'\n', 0x0, 0x1e, 0xff};
const char s00a_dword_800DFFFC[] = {0xfe, 0x8, 0xce, 0xe7};
const char s00a_dword_800E0000[] = {0xec, 0x2, 0x0, 0x1};
const char s00a_dword_800E0004[] = {'\n', 0x0, 0x1e, 0xff};
const char s00a_dword_800E0008[] = {0xfe, 0x2, 0x0, 0x1};
const char s00a_dword_800E000C[] = {'\n', 0xff, 0xb0, 0x0};
const char s00a_dword_800E0010[] = {'\n', 0x2, 0x0, 0x1};
const char s00a_dword_800E0014[] = {0xf, 0x0, 0x0, 0x0};
const char s00a_dword_800E0018[] = {0x0, 0xf9, 0x3, 0x0};
const char s00a_dword_800E001C[] = {0x9, 0x0, '\\', 0x0};
const char s00a_dword_800E0020[] = {0xaf, 0x1, 0x0, 0xc};
const char s00a_dword_800E0024[] = {0x0, 0x4, '\n', 0x0};
const char s00a_dword_800E0028[] = {'d', 0x0, 'd', 0x8};
const char s00a_dword_800E002C[] = {'-', '#', 0x14, 0x2};
const char s00a_dword_800E0030[] = {0x0, 0x1, 0xd, '\n'};
const char s00a_dword_800E0034[] = {0x0, 'd', 0x0, 'd'};
const char s00a_dword_800E0038[] = {0x8, 'F', 'n', 0xaa};
const char s00a_dword_800E003C[] = {0x2, 0x0, 0x3, '\n'};
const char s00a_dword_800E0040[] = {0xff, 0x9c, 0xff, 0x9c};
const char s00a_dword_800E0044[] = {0x8, 0xba, 0x92, 'V'};
const char s00a_dword_800E0048[] = {0x2, 0x0, 0x16, '\n'};
const char s00a_dword_800E004C[] = {0x1, ',', 0xfe, 0x98};
const char s00a_dword_800E0050[] = {0x8, 0xd3, 0xdd, 0xec};
const char s00a_dword_800E0054[] = {0x2, 0x0, 0x1, '\n'};
const char s00a_dword_800E0058[] = {0x1, ',', 0xff, 0xe2};
const char s00a_dword_800E005C[] = {0x8, 0xd3, 0xdd, 0xec};
const char s00a_dword_800E0060[] = {0x2, 0x0, 0x1, '\n'};
const char s00a_dword_800E0064[] = {0x1, ',', 0xff, 0xf4};
const char s00a_dword_800E0068[] = {0x2, 0x0, 0x1, '\n'};
const char s00a_dword_800E006C[] = {0xfa, 0xba, 0x0, 0xf0};
const char s00a_dword_800E0070[] = {0x2, 0x0, 0x1, 0xf};
const char s00a_dword_800E0074[] = {0x1, 0x0, 0xc, 0x0};
const char s00a_dword_800E0078[] = {0x4, '\n', 0x0, '2'};
const char s00a_dword_800E007C[] = {0x0, '2', 0x8, '-'};
const char s00a_dword_800E0080[] = {'#', 0x14, 0x2, 0x0};
const char s00a_dword_800E0084[] = {0x1, 0xd, '\n', 0x0};
const char s00a_dword_800E0088[] = {'2', 0x0, '2', 0x8};
const char s00a_dword_800E008C[] = {'F', 'n', 0xaa, 0x2};
const char s00a_dword_800E0090[] = {0x0, 0x3, '\n', 0xff};
const char s00a_dword_800E0094[] = {0xce, 0xff, 0xce, 0x8};
const char s00a_dword_800E0098[] = {0xba, 0x92, 'V', 0x2};
const char s00a_dword_800E009C[] = {0x0, 0x16, '\n', 0x0};
const char s00a_dword_800E00A0[] = {0x96, 0xff, 'L', 0x8};
const char s00a_dword_800E00A4[] = {0xd3, 0xdd, 0xec, 0x2};
const char s00a_dword_800E00A8[] = {0x0, 0x1, '\n', 0x0};
const char s00a_dword_800E00AC[] = {0x96, 0xff, 0xf1, 0x8};
const char s00a_dword_800E00B0[] = {0xd3, 0xdd, 0xec, 0x2};
const char s00a_dword_800E00B4[] = {0x0, 0x1, '\n', 0x0};
const char s00a_dword_800E00B8[] = {0x96, 0xff, 0xfa, 0x2};
const char s00a_dword_800E00BC[] = {0x0, 0x1, '\n', 0xfd};
const char s00a_dword_800E00C0[] = {']', 0x0, 'x', 0x2};
const char s00a_dword_800E00C4[] = {0x0, 0x1, 0xf, 0x1};
const char s00a_dword_800E00C8[] = {0x0, 0xc, 0x0, 0x4};
const char s00a_dword_800E00CC[] = {'\n', 0x0, 0x19, 0x0};
const char s00a_dword_800E00D0[] = {0x19, 0x8, '2', 0x19};
const char s00a_dword_800E00D4[] = {0x14, 0x2, 0x0, 0x1};
const char s00a_dword_800E00D8[] = {0xd, '\n', 0x0, 0x19};
const char s00a_dword_800E00DC[] = {0x0, 0x19, 0x8, '2'};
const char s00a_dword_800E00E0[] = {0x96, 0xaa, 0x2, 0x0};
const char s00a_dword_800E00E4[] = {0x3, '\n', 0xff, 0xe7};
const char s00a_dword_800E00E8[] = {0xff, 0xe7, 0x8, 0xce};
const char s00a_dword_800E00EC[] = {'j', 'V', 0x2, 0x0};
const char s00a_dword_800E00F0[] = {0x16, '\n', 0x0, 'K'};
const char s00a_dword_800E00F4[] = {0xff, 0xa6, 0x8, 0xce};
const char s00a_dword_800E00F8[] = {0xe7, 0xec, 0x2, 0x0};
const char s00a_dword_800E00FC[] = {0x1, '\n', 0x0, 'K'};
const char s00a_dword_800E0100[] = {0xff, 0xf9, 0x8, 0xce};
const char s00a_dword_800E0104[] = {0xe7, 0xec, 0x2, 0x0};
const char s00a_dword_800E0108[] = {0x1, '\n', 0x0, 'K'};
const char s00a_dword_800E010C[] = {0xff, 0xf9, 0x2, 0x0};
const char s00a_dword_800E0110[] = {0x1, '\n', 0xfe, 0xd4};
const char s00a_dword_800E0114[] = {0x0, '<', 0x2, 0x0};
const char s00a_dword_800E0118[] = {0x1, 0xf, 0x0, 0x0};
const char s00a_dword_800E011C[] = {0x0, 0xf9, 0x3, 0x0};
const char s00a_dword_800E0120[] = {0x9, 0x0, '\\', 0x0};
const char s00a_dword_800E0124[] = {0xaf, 0x1, 0x0, 0xc};
const char s00a_dword_800E0128[] = {0x0, 0x4, '\n', 0x0};
const char s00a_dword_800E012C[] = {'d', 0x0, 'd', 0x8};
const char s00a_dword_800E0130[] = {0x19, '&', '-', 0x2};
const char s00a_dword_800E0134[] = {0x0, 0x1, 0xd, '\n'};
const char s00a_dword_800E0138[] = {0x0, 'd', 0x0, 'd'};
const char s00a_dword_800E013C[] = {0x8, 0x96, 'b', 'F'};
const char s00a_dword_800E0140[] = {0x2, 0x0, 0x3, '\n'};
const char s00a_dword_800E0144[] = {0xff, 0x9c, 0xff, 0x9c};
const char s00a_dword_800E0148[] = {0x8, 'j', 0x9e, 0xba};
const char s00a_dword_800E014C[] = {0x2, 0x0, 0x16, '\n'};
const char s00a_dword_800E0150[] = {0x1, ',', 0xfe, 0x98};
const char s00a_dword_800E0154[] = {0x8, 0xe7, 0xda, 0xd3};
const char s00a_dword_800E0158[] = {0x2, 0x0, 0x1, '\n'};
const char s00a_dword_800E015C[] = {0x1, ',', 0xff, 0xe2};
const char s00a_dword_800E0160[] = {0x8, 0xe7, 0xda, 0xd3};
const char s00a_dword_800E0164[] = {0x2, 0x0, 0x1, '\n'};
const char s00a_dword_800E0168[] = {0x1, ',', 0xff, 0xf4};
const char s00a_dword_800E016C[] = {0x2, 0x0, 0x1, '\n'};
const char s00a_dword_800E0170[] = {0xfa, 0xba, 0x0, 0xf0};
const char s00a_dword_800E0174[] = {0x2, 0x0, 0x1, 0xf};
const char s00a_dword_800E0178[] = {0x1, 0x0, 0xc, 0x0};
const char s00a_dword_800E017C[] = {0x4, '\n', 0x0, '2'};
const char s00a_dword_800E0180[] = {0x0, '2', 0x8, '-'};
const char s00a_dword_800E0184[] = {'#', 0x14, 0x2, 0x0};
const char s00a_dword_800E0188[] = {0x1, 0xd, '\n', 0x0};
const char s00a_dword_800E018C[] = {'2', 0x0, '2', 0x8};
const char s00a_dword_800E0190[] = {'F', 'n', 0xaa, 0x2};
const char s00a_dword_800E0194[] = {0x0, 0x3, '\n', 0xff};
const char s00a_dword_800E0198[] = {0xce, 0xff, 0xce, 0x8};
const char s00a_dword_800E019C[] = {0xba, 0x92, 'V', 0x2};
const char s00a_dword_800E01A0[] = {0x0, 0x16, '\n', 0x0};
const char s00a_dword_800E01A4[] = {0x96, 0xff, 'L', 0x8};
const char s00a_dword_800E01A8[] = {0xd3, 0xdd, 0xec, 0x2};
const char s00a_dword_800E01AC[] = {0x0, 0x1, '\n', 0x0};
const char s00a_dword_800E01B0[] = {0x96, 0xff, 0xf1, 0x8};
const char s00a_dword_800E01B4[] = {0xd3, 0xdd, 0xec, 0x2};
const char s00a_dword_800E01B8[] = {0x0, 0x1, '\n', 0x0};
const char s00a_dword_800E01BC[] = {0x96, 0xff, 0xfa, 0x2};
const char s00a_dword_800E01C0[] = {0x0, 0x1, '\n', 0xfd};
const char s00a_dword_800E01C4[] = {']', 0x0, 'x', 0x2};
const char s00a_dword_800E01C8[] = {0x0, 0x1, 0xf, 0x1};
const char s00a_dword_800E01CC[] = {0x0, 0xc, 0x0, 0x4};
const char s00a_dword_800E01D0[] = {'\n', 0x0, 0x19, 0x0};
const char s00a_dword_800E01D4[] = {0x19, 0x8, '2', 0x19};
const char s00a_dword_800E01D8[] = {0x14, 0x2, 0x0, 0x1};
const char s00a_dword_800E01DC[] = {0xd, '\n', 0x0, 0x19};
const char s00a_dword_800E01E0[] = {0x0, 0x19, 0x8, '2'};
const char s00a_dword_800E01E4[] = {0x96, 0xaa, 0x2, 0x0};
const char s00a_dword_800E01E8[] = {0x3, '\n', 0xff, 0xe7};
const char s00a_dword_800E01EC[] = {0xff, 0xe7, 0x8, 0xce};
const char s00a_dword_800E01F0[] = {'j', 'V', 0x2, 0x0};

const char s00a_dword_800E01F4[] = {0x16, '\n', 0x0, 'K'};

const char s00a_dword_800E01F8[] = {0xff, 0xa6, 0x8, 0xce};
const char s00a_dword_800E01FC[] = {0xe7, 0xec, 0x2, 0x0};
const char s00a_dword_800E0200[] = {0x1, '\n', 0x0, 'K'};
const char s00a_dword_800E0204[] = {0xff, 0xf9, 0x8, 0xce};
const char s00a_dword_800E0208[] = {0xe7, 0xec, 0x2, 0x0};
const char s00a_dword_800E020C[] = {0x1, '\n', 0x0, 'K'};
const char s00a_dword_800E0210[] = {0xff, 0xf9, 0x2, 0x0};
const char s00a_dword_800E0214[] = {0x1, '\n', 0xfe, 0xd4};
const char s00a_dword_800E0218[] = {0x0, '<', 0x2, 0x0};
const char s00a_dword_800E021C[] = {0x1, 0xf, 0x0, 0x0};
const char s00a_dword_800E0220[] = {0x0, 0x4, 0x1, 0x0};
const char s00a_dword_800E0224[] = {0x5, 0x2, 0x0, 0x1};
const char s00a_dword_800E0228[] = {0xf, 0x0, 0x0, 0x0};
const int s00a_dword_800E022C = 0x800CA268;
const int s00a_dword_800E0230 = 0x800CA278;
const int s00a_dword_800E0234 = 0x800CA290;
const int s00a_dword_800E0238 = 0x800CA2A0;
const int s00a_dword_800E023C = 0x800CA2B8;
const int s00a_dword_800E0240 = 0x800CA2C8;
const int s00a_dword_800E0244 = 0x800CA2E0;
const char s00a_dword_800E0248[] = {0x0, 0x0, 0x0, 0x0};
const int s00a_dword_800E024C = 0x800CA3A0;
const int s00a_dword_800E0250 = 0x800CA3B0;
const int s00a_dword_800E0254 = 0x800CA3C8;
const int s00a_dword_800E0258 = 0x800CA3D8;
const int s00a_dword_800E025C = 0x800CA3F0;
const int s00a_dword_800E0260 = 0x800CA400;
const int s00a_dword_800E0264 = 0x800CA418;
const char s00a_dword_800E0268[] = {0x0, 0x0, 0x0, 0x0};
const int s00a_dword_800E026C = 0x800CA4D8;
const int s00a_dword_800E0270 = 0x800CA4EC;
const int s00a_dword_800E0274 = 0x800CA504;
const int s00a_dword_800E0278 = 0x800CA514;
const int s00a_dword_800E027C = 0x800CA52C;
const int s00a_dword_800E0280 = 0x800CA53C;
const int s00a_dword_800E0284 = 0x800CA554;
const char s00a_dword_800E0288[] = {0x0, 0x1c, 0x1, 0x0};
const char s00a_dword_800E028C[] = {0x5, 0x1, 0xfe, 0x4};
const char s00a_dword_800E0290[] = {0x0, 0x0, 0x1, 0x90};
const char s00a_dword_800E0294[] = {0x0, 0x0, 0xc, 0x0};
const char s00a_dword_800E0298[] = {0x9, 0x1, 0xff, '\n'};
const char s00a_dword_800E029C[] = {0x0, 0x14, 0x0, 0x14};
const char s00a_dword_800E02A0[] = {0x8, 0xe7, 0xe7, 0xe7};
const char s00a_dword_800E02A4[] = {0x2, 0x0, 0x1, 0xd};
const char s00a_dword_800E02A8[] = {0xf, 0x0, 0x0, 0x0};
const char s00a_dword_800E02AC[] = {0x2, 0x97, 0x3, 0x0};
const char s00a_dword_800E02B0[] = {0x9, 0x0, 0xe6, 0x1};
const char s00a_dword_800E02B4[] = {0xc3, 0x8, 0x0, 0xfc};
const char s00a_dword_800E02B8[] = {0xde, 0x4, 0x0, 'd'};
const char s00a_dword_800E02BC[] = {0x1, 0xf4, 0xff, 'S'};
const char s00a_dword_800E02C0[] = {0xc, 0x0, 0x3, 0x2};
const char s00a_dword_800E02C4[] = {0x0, 0x1, 0xd, 0xc};
const char s00a_dword_800E02C8[] = {0x0, 0x3, '\n', 0xfe};
const char s00a_dword_800E02CC[] = {'p', 0x0, 0x0, 0x4};
const char s00a_dword_800E02D0[] = {0xff, 0x9c, 0x0, 0x0};
const char s00a_dword_800E02D4[] = {0xff, 0xe5, 0xc, 0x0};
const char s00a_dword_800E02D8[] = {0x3, 0x2, 0x0, 0x1};
const char s00a_dword_800E02DC[] = {0xd, 0x4, 0xff, 0x9c};
const char s00a_dword_800E02E0[] = {0x0, 0x0, 0x0, 0x1b};
const char s00a_dword_800E02E4[] = {0xc, 0x0, 0x3, 0x2};
const char s00a_dword_800E02E8[] = {0x0, 0x1, 0xd, '\n'};
const char s00a_dword_800E02EC[] = {0x1, 0x90, 0x0, 0x0};
const char s00a_dword_800E02F0[] = {0x4, 0xff, 0xb7, 0x0};
const char s00a_dword_800E02F4[] = {0x0, 0x0, 'I', 0xc};
const char s00a_dword_800E02F8[] = {0x0, 0x3, 0x2, 0x0};
const char s00a_dword_800E02FC[] = {0x1, 0xd, 0x4, 0xff};
const char s00a_dword_800E0300[] = {0xe5, 0x0, 0x0, 0x0};
const char s00a_dword_800E0304[] = {'d', 0xc, 0x0, 0x3};
const char s00a_dword_800E0308[] = {0x2, 0x0, 0x1, 0xd};
const char s00a_dword_800E030C[] = {'\n', 0xfe, 'p', 0x0};
const char s00a_dword_800E0310[] = {0x0, 0x4, 0x0, 0x1b};
const char s00a_dword_800E0314[] = {0x0, 0x0, 0x0, 'd'};
const char s00a_dword_800E0318[] = {0xc, 0x0, 0x3, 0x2};
const char s00a_dword_800E031C[] = {0x0, 0x1, 0xd, 0x4};
const char s00a_dword_800E0320[] = {0x0, 'I', 0x0, 0x0};
const char s00a_dword_800E0324[] = {0x0, 'I', 0xc, 0x0};
const char s00a_dword_800E0328[] = {0x3, 0x2, 0x0, 0x1};
const char s00a_dword_800E032C[] = {0xd, '\n', 0x1, 0x90};
const char s00a_dword_800E0330[] = {0x0, 0x0, 0x4, 0x0};
const char s00a_aD_800E0334[] = "d";
const char s00a_dword_800E0338[] = {0x1b, 0xc, 0x0, 0x3};
const char s00a_dword_800E033C[] = {0x2, 0x0, 0x1, 0xd};
const char s00a_dword_800E0340[] = {0x4, 0x0, 'd', 0x0};
const char s00a_dword_800E0344[] = {0x0, 0xff, 0xe5, 0xc};
const char s00a_dword_800E0348[] = {0x0, 0x3, 0x2, 0x0};
const char s00a_dword_800E034C[] = {0x1, 0xd, '\n', 0xfe};
const char s00a_dword_800E0350[] = {'p', 0x0, 0x0, 0x4};
const char s00a_dword_800E0354[] = {0x0, 'I', 0x0, 0x0};
const char s00a_dword_800E0358[] = {0xff, 0xb7, 0xc, 0x0};
const char s00a_dword_800E035C[] = {0x3, 0x2, 0x0, 0x1};
const char s00a_dword_800E0360[] = {0xd, 0x4, 0x0, 0x1b};
const char s00a_dword_800E0364[] = {0x0, 0x0, 0xff, 0x9c};
const char s00a_dword_800E0368[] = {0xc, 0x0, 0x3, 0x2};
const char s00a_dword_800E036C[] = {0x0, 0x1, 0xd, '\n'};
const char s00a_dword_800E0370[] = {0x1, 0x90, 0x0, 0x0};
const char s00a_dword_800E0374[] = {0x4, 0xff, 0xe5, 0x0};
const char s00a_dword_800E0378[] = {0x0, 0xff, 0x9c, 0xc};
const char s00a_dword_800E037C[] = {0x0, 0x3, 0x2, 0x0};
const char s00a_dword_800E0380[] = {0x1, 0xd, 0x4, 0xff};
const char s00a_dword_800E0384[] = {0xb7, 0x0, 0x0, 0xff};
const char s00a_dword_800E0388[] = {0xb7, 0xc, 0x0, 0x3};
const char s00a_dword_800E038C[] = {0x2, 0x0, 0x1, 0xd};
const char s00a_dword_800E0390[] = {0xd, 0xf, 0x8, 0x0};
const char s00a_dword_800E0394[] = {0xfc, 0xde, 0x4, 0xff};
const char s00a_dword_800E0398[] = {'8', 0x1, 0xf4, 0x0};
const char s00a_dword_800E039C[] = {0x0, 0xc, 0x0, 0x3};
const char s00a_dword_800E03A0[] = {0x2, 0x0, 0x1, 0xd};
const char s00a_dword_800E03A4[] = {0xc, 0x0, 0x3, '\n'};
const char s00a_dword_800E03A8[] = {0xfe, 'p', 0x0, 0x0};
const char s00a_dword_800E03AC[] = {0x4, 0x0, 0x1b, 0x0};
const char s00a_dword_800E03B0[] = {0x0, 0x0, 'd', 0xc};
const char s00a_dword_800E03B4[] = {0x0, 0x3, 0x2, 0x0};
const char s00a_dword_800E03B8[] = {0x1, 0xd, 0x4, 0x0};
const char s00a_aI_800E03BC[] = "I";
const char s00a_dword_800E03C0[] = {'I', 0xc, 0x0, 0x3};
const char s00a_dword_800E03C4[] = {0x2, 0x0, 0x1, 0xd};
const char s00a_dword_800E03C8[] = {'\n', 0x1, 0x90, 0x0};
const char s00a_dword_800E03CC[] = {0x0, 0x4, 0x0, 'd'};
const char s00a_dword_800E03D0[] = {0x0, 0x0, 0x0, 0x1b};
const char s00a_dword_800E03D4[] = {0xc, 0x0, 0x3, 0x2};
const char s00a_dword_800E03D8[] = {0x0, 0x1, 0xd, 0x4};
const char s00a_dword_800E03DC[] = {0x0, 'd', 0x0, 0x0};
const char s00a_dword_800E03E0[] = {0xff, 0xe5, 0xc, 0x0};
const char s00a_dword_800E03E4[] = {0x3, 0x2, 0x0, 0x1};
const char s00a_dword_800E03E8[] = {0xd, '\n', 0xfe, 'p'};
const char s00a_dword_800E03EC[] = {0x0, 0x0, 0x4, 0x0};
const char s00a_dword_800E03F0[] = {'I', 0x0, 0x0, 0xff};
const char s00a_dword_800E03F4[] = {0xb7, 0xc, 0x0, 0x3};
const char s00a_dword_800E03F8[] = {0x2, 0x0, 0x1, 0xd};
const char s00a_dword_800E03FC[] = {0x4, 0x0, 0x1b, 0x0};
const char s00a_dword_800E0400[] = {0x0, 0xff, 0x9c, 0xc};
const char s00a_dword_800E0404[] = {0x0, 0x3, 0x2, 0x0};
const char s00a_dword_800E0408[] = {0x1, 0xd, '\n', 0x1};
const char s00a_dword_800E040C[] = {0x90, 0x0, 0x0, 0x4};
const char s00a_dword_800E0410[] = {0xff, 0xe5, 0x0, 0x0};
const char s00a_dword_800E0414[] = {0xff, 0x9c, 0xc, 0x0};
const char s00a_dword_800E0418[] = {0x3, 0x2, 0x0, 0x1};
const char s00a_dword_800E041C[] = {0xd, 0x4, 0xff, 0xb7};
const char s00a_dword_800E0420[] = {0x0, 0x0, 0xff, 0xb7};
const char s00a_dword_800E0424[] = {0xc, 0x0, 0x3, 0x2};
const char s00a_dword_800E0428[] = {0x0, 0x1, 0xd, '\n'};
const char s00a_dword_800E042C[] = {0xfe, 'p', 0x0, 0x0};
const char s00a_dword_800E0430[] = {0x4, 0xff, 0x9c, 0x0};
const char s00a_dword_800E0434[] = {0x0, 0xff, 0xe5, 0xc};
const char s00a_dword_800E0438[] = {0x0, 0x3, 0x2, 0x0};
const char s00a_dword_800E043C[] = {0x1, 0xd, 0x4, 0xff};
const char s00a_dword_800E0440[] = {0x9c, 0x0, 0x0, 0x0};
const char s00a_dword_800E0444[] = {0x1b, 0xc, 0x0, 0x3};
const char s00a_dword_800E0448[] = {0x2, 0x0, 0x1, 0xd};
const char s00a_dword_800E044C[] = {'\n', 0x1, 0x90, 0x0};
const char s00a_dword_800E0450[] = {0x0, 0x4, 0xff, 0xb7};
const char s00a_dword_800E0454[] = {0x0, 0x0, 0x0, 'I'};
const char s00a_dword_800E0458[] = {0xc, 0x0, 0x3, 0x2};
const char s00a_dword_800E045C[] = {0x0, 0x1, 0xd, 0x4};
const char s00a_dword_800E0460[] = {0xff, 0xe5, 0x0, 0x0};
const char s00a_dword_800E0464[] = {0x0, 'd', 0xc, 0x0};
const char s00a_dword_800E0468[] = {0x3, 0x2, 0x0, 0x1};
const char s00a_dword_800E046C[] = {0xd, 0xd, 0xf, 0x8};
const char s00a_dword_800E0470[] = {0x0, 0xfc, 0xde, 0x4};
const char s00a_dword_800E0474[] = {0x0, 'd', 0x1, 0xf4};
const char s00a_dword_800E0478[] = {0x0, 0xad, 0xc, 0x0};
const char s00a_dword_800E047C[] = {0x3, 0x2, 0x0, 0x1};
const char s00a_dword_800E0480[] = {0xd, 0xc, 0x0, 0x3};
const char s00a_dword_800E0484[] = {'\n', 0xfe, 'p', 0x0};
const char s00a_dword_800E0488[] = {0x0, 0x4, 0x0, 'I'};
const char s00a_dword_800E048C[] = {0x0, 0x0, 0xff, 0xb7};
const char s00a_dword_800E0490[] = {0xc, 0x0, 0x3, 0x2};
const char s00a_dword_800E0494[] = {0x0, 0x1, 0xd, 0x4};
const char s00a_dword_800E0498[] = {0x0, 0x1b, 0x0, 0x0};
const char s00a_dword_800E049C[] = {0xff, 0x9c, 0xc, 0x0};
const char s00a_dword_800E04A0[] = {0x3, 0x2, 0x0, 0x1};
const char s00a_dword_800E04A4[] = {0xd, '\n', 0x1, 0x90};
const char s00a_dword_800E04A8[] = {0x0, 0x0, 0x4, 0xff};
const char s00a_dword_800E04AC[] = {0xe5, 0x0, 0x0, 0xff};
const char s00a_dword_800E04B0[] = {0x9c, 0xc, 0x0, 0x3};
const char s00a_dword_800E04B4[] = {0x2, 0x0, 0x1, 0xd};
const char s00a_dword_800E04B8[] = {0x4, 0xff, 0xb7, 0x0};
const char s00a_dword_800E04BC[] = {0x0, 0xff, 0xb7, 0xc};
const char s00a_dword_800E04C0[] = {0x0, 0x3, 0x2, 0x0};
const char s00a_dword_800E04C4[] = {0x1, 0xd, '\n', 0xfe};
const char s00a_dword_800E04C8[] = {'p', 0x0, 0x0, 0x4};
const char s00a_dword_800E04CC[] = {0xff, 0x9c, 0x0, 0x0};
const char s00a_dword_800E04D0[] = {0xff, 0xe5, 0xc, 0x0};
const char s00a_dword_800E04D4[] = {0x3, 0x2, 0x0, 0x1};
const char s00a_dword_800E04D8[] = {0xd, 0x4, 0xff, 0x9c};
const char s00a_dword_800E04DC[] = {0x0, 0x0, 0x0, 0x1b};
const char s00a_dword_800E04E0[] = {0xc, 0x0, 0x3, 0x2};
const char s00a_dword_800E04E4[] = {0x0, 0x1, 0xd, '\n'};
const char s00a_dword_800E04E8[] = {0x1, 0x90, 0x0, 0x0};
const char s00a_dword_800E04EC[] = {0x4, 0xff, 0xb7, 0x0};
const char s00a_dword_800E04F0[] = {0x0, 0x0, 'I', 0xc};
const char s00a_dword_800E04F4[] = {0x0, 0x3, 0x2, 0x0};
const char s00a_dword_800E04F8[] = {0x1, 0xd, 0x4, 0xff};
const char s00a_dword_800E04FC[] = {0xe5, 0x0, 0x0, 0x0};
const char s00a_dword_800E0500[] = {'d', 0xc, 0x0, 0x3};
const char s00a_dword_800E0504[] = {0x2, 0x0, 0x1, 0xd};
const char s00a_dword_800E0508[] = {'\n', 0xfe, 'p', 0x0};
const char s00a_dword_800E050C[] = {0x0, 0x4, 0x0, 0x1b};
const char s00a_dword_800E0510[] = {0x0, 0x0, 0x0, 'd'};
const char s00a_dword_800E0514[] = {0xc, 0x0, 0x3, 0x2};
const char s00a_dword_800E0518[] = {0x0, 0x1, 0xd, 0x4};
const char s00a_dword_800E051C[] = {0x0, 'I', 0x0, 0x0};
const char s00a_dword_800E0520[] = {0x0, 'I', 0xc, 0x0};
const char s00a_dword_800E0524[] = {0x3, 0x2, 0x0, 0x1};
const char s00a_dword_800E0528[] = {0xd, '\n', 0x1, 0x90};
const char s00a_dword_800E052C[] = {0x0, 0x0, 0x4, 0x0};
const char s00a_aD_800E0530[] = "d";
const char s00a_dword_800E0534[] = {0x1b, 0xc, 0x0, 0x3};
const char s00a_dword_800E0538[] = {0x2, 0x0, 0x1, 0xd};
const char s00a_dword_800E053C[] = {0x4, 0x0, 'd', 0x0};
const char s00a_dword_800E0540[] = {0x0, 0xff, 0xe5, 0xc};
const char s00a_dword_800E0544[] = {0x0, 0x3, 0x2, 0x0};
const char s00a_dword_800E0548[] = {0x1, 0xd, 0xd, 0xf};
const char s00a_dword_800E054C[] = {0x0, 'W', 0x1, 0x0};
const char s00a_dword_800E0550[] = {0x5, 0xc, 0x0, 0x1c};
const char s00a_dword_800E0554[] = {'\n', 0x0, 0x5, 0x0};
const char s00a_dword_800E0558[] = {0x5, 0x4, 0x0, 0x0};
const char s00a_dword_800E055C[] = {0x0, '\n', 0x0, 0x0};
const char s00a_dword_800E0560[] = {0x2, 0x0, 0x1, 0xd};
const char s00a_dword_800E0564[] = {0xc, 0x0, 0x4, 0xc};
const char s00a_dword_800E0568[] = {0x0, 0x5, '\n', 0xff};
const char s00a_dword_800E056C[] = {0xf6, 0xff, 0xf6, 0x4};
const char s00a_dword_800E0570[] = {0x0, 0x0, 0x0, '\n'};
const char s00a_dword_800E0574[] = {0x0, 0x0, 0x2, 0x0};
const char s00a_dword_800E0578[] = {0x1, 0xd, 0x2, 0x0};
const char s00a_dword_800E057C[] = {0x1, 0xc, 0x0, 0x5};
const char s00a_dword_800E0580[] = {'\n', 0x0, '\n', 0x0};
const char s00a_dword_800E0584[] = {'\n', 0x4, 0x0, 0x0};
const char s00a_dword_800E0588[] = {0x0, '\n', 0x0, 0x0};
const char s00a_dword_800E058C[] = {0x2, 0x0, 0x1, 0xd};
const char s00a_dword_800E0590[] = {0x2, 0x0, 0x1, 0xd};
const char s00a_dword_800E0594[] = {0xc, 0x0, 0xe, '\n'};
const char s00a_dword_800E0598[] = {0xff, 0xf6, 0xff, 0xf6};
const char s00a_dword_800E059C[] = {0x4, 0x0, 0x0, 0x0};
const char s00a_dword_800E05A0[] = {'\n', 0x0, 0x0, 0x2};
const char s00a_dword_800E05A4[] = {0x0, 0x1, 0xd, 0xf};
const char s00a_dword_800E05A8[] = {0x0, 'A', 0x1, 0x0};
const char s00a_dword_800E05AC[] = {0x5, 0x1, 0xfe, 0xc};
const char s00a_dword_800E05B0[] = {0x0, 0x1c, 0x1, 0xff};
const char s00a_dword_800E05B4[] = {'\n', 0x0, 0x2, 0x0};
const char s00a_dword_800E05B8[] = {'\n', 0x4, 0x0, 0x0};
const char s00a_dword_800E05BC[] = {0x0, '\n', 0x0, 0x0};
const char s00a_dword_800E05C0[] = {0x2, 0x0, 0x1, 0xd};
const char s00a_dword_800E05C4[] = {0xc, 0x0, 0x4, 0xc};
const char s00a_dword_800E05C8[] = {0x0, 0x5, 0x1, 0xff};
const char s00a_dword_800E05CC[] = {0x4, 0x0, 0x0, 0x0};
const char s00a_dword_800E05D0[] = {'\n', 0x0, 0x0, 0x2};
const char s00a_dword_800E05D4[] = {0x0, 0x1, 0xd, 0xd};
const char s00a_dword_800E05D8[] = {0xc, 0x0, 0xe, 0x1};
const char s00a_dword_800E05DC[] = {0xff, '\n', 0xff, 0xfc};
const char s00a_dword_800E05E0[] = {0xff, 0xec, 0x4, 0x0};
const char s00a_dword_800E05E4[] = {0x0, 0x0, '\n', 0x0};
const char s00a_dword_800E05E8[] = {0x0, 0x2, 0x0, 0x1};
const char s00a_dword_800E05EC[] = {0xd, 0xf, 0x0, 0x0};
const char s00a_dword_800E05F0[] = {0x0, 0x96, 0x3, 0x0};
const char s00a_dword_800E05F4[] = {0x9, 0x0, ';', 0x0};
const char s00a_dword_800E05F8[] = {'m', 0x8, 0x0, 0x2};
const char s00a_dword_800E05FC[] = {0x1e, 0x2, 0x0, 0x1};
const char s00a_dword_800E0600[] = {0xc, 0x0, 0x19, 0x8};
const char s00a_dword_800E0604[] = {0x4, 0x6, 0x6, '\n'};
const char s00a_dword_800E0608[] = {0x0, 0x4, 0x0, 0x4};
const char s00a_dword_800E060C[] = {0x4, 0x0, 0x4, 0x0};
const char s00a_dword_800E0610[] = {0x14, 0x0, 0x0, 0x2};
const char s00a_dword_800E0614[] = {0x0, 0x1, 0xd, 0xc};
const char s00a_dword_800E0618[] = {0x0, 0xf, '\n', 0x0};
const char s00a_dword_800E061C[] = {0x4, 0x0, 0x4, 0x4};
const char s00a_dword_800E0620[] = {0x0, 0x4, 0x0, 0x14};
const char s00a_dword_800E0624[] = {0x0, 0x0, 0x2, 0x0};
const char s00a_dword_800E0628[] = {0x1, 0xd, 0xf, 0x8};
const char s00a_dword_800E062C[] = {0x0, 0x2, 0x1e, 0x2};
const char s00a_dword_800E0630[] = {0x0, 0xb, 0xc, 0x0};
const char s00a_dword_800E0634[] = {0x19, 0x8, 0x4, 0x6};
const char s00a_dword_800E0638[] = {0x6, '\n', 0x0, 0x4};
const char s00a_dword_800E063C[] = {0x0, 0x4, 0x4, 0x0};
const char s00a_dword_800E0640[] = {0x4, 0x0, 0x14, 0x0};
const char s00a_dword_800E0644[] = {0x0, 0x2, 0x0, 0x1};
const char s00a_dword_800E0648[] = {0xd, 0xc, 0x0, 0xf};
const char s00a_dword_800E064C[] = {'\n', 0x0, 0x4, 0x0};
const char s00a_dword_800E0650[] = {0x4, 0x4, 0x0, 0x4};
const char s00a_dword_800E0654[] = {0x0, 0x14, 0x0, 0x0};
const char s00a_dword_800E0658[] = {0x2, 0x0, 0x1, 0xd};
const char s00a_dword_800E065C[] = {0xf, 0x8, 0x0, 0x2};
const char s00a_dword_800E0660[] = {0x1e, 0x2, 0x0, 0x15};
const char s00a_dword_800E0664[] = {0xc, 0x0, 0x19, 0x8};
const char s00a_dword_800E0668[] = {0x4, 0x6, 0x6, '\n'};
const char s00a_dword_800E066C[] = {0x0, 0x4, 0x0, 0x4};
const char s00a_dword_800E0670[] = {0x4, 0x0, 0x4, 0x0};
const char s00a_dword_800E0674[] = {0x14, 0x0, 0x0, 0x2};
const char s00a_dword_800E0678[] = {0x0, 0x1, 0xd, 0xc};
const char s00a_dword_800E067C[] = {0x0, 0xf, '\n', 0x0};
const char s00a_dword_800E0680[] = {0x4, 0x0, 0x4, 0x4};
const char s00a_dword_800E0684[] = {0x0, 0x4, 0x0, 0x14};
const char s00a_dword_800E0688[] = {0x0, 0x0, 0x2, 0x0};
const char s00a_dword_800E068C[] = {0x1, 0xd, 0xf, 0x0};
const char s00a_aErrerrerrnotlinkroutedtod_800E0690[] = " Err Err Err Not Link Route [%d] to [%d] !!!!\n";
const char s00a_aErrnozoneidingcl_800E06C0[] = "!!!!!!Err No Zone ID In Gcl !!!!!!!!\n";
const char s00a_aKirari_800E06E8[] = "kirari01";
const char s00a_aBefmapnamed_800E06F4[] = "bef map name =%d \n";
const char s00a_aAftmapnamed_800E0708[] = "aft map name =%d \n";
const char s00a_aRootchange_800E071C[] = " Root Change !!\n";
const int s00a_dword_800E0730 = 0x800CD654;
const int s00a_dword_800E0734 = 0x800CD800;
const int s00a_dword_800E0738 = 0x800CD800;
const int s00a_dword_800E073C = 0x800CD800;
const int s00a_dword_800E0740 = 0x800CD69C;
const int s00a_dword_800E0744 = 0x800CD71C;
const int s00a_dword_800E0748 = 0x800CD774;
const int s00a_dword_800E074C = 0x800CD79C;
const int s00a_dword_800E0750 = 0x800CD7AC;
const char s00a_dword_800E0754[] = {0x0, 0x0, 0x0, 0x0};
const int s00a_dword_800E0758 = 0x800CD95C;
const int s00a_dword_800E075C = 0x800CD914;
const int s00a_dword_800E0760 = 0x800CDABC;
const int s00a_dword_800E0764 = 0x800CDA68;
const int s00a_dword_800E0768 = 0x800CD9D4;
const int s00a_dword_800E076C = 0x800CDABC;
const int s00a_dword_800E0770 = 0x800CDA40;
const int s00a_dword_800E0774 = 0x800CDABC;
const int s00a_dword_800E0778 = 0x800CDABC;
const int s00a_dword_800E077C = 0x800CD944;
const int s00a_dword_800E0780 = 0x800CD8FC;
const char s00a_dword_800E0784[] = {0x0, 0x0, 0x0, 0x0};
const int s00a_dword_800E0788 = 0x800CDEDC;
const int s00a_dword_800E078C = 0x800CDF54;
const int s00a_dword_800E0790 = 0x800CDF54;
const int s00a_dword_800E0794 = 0x800CDEF4;
const int s00a_dword_800E0798 = 0x800CDF0C;
const int s00a_dword_800E079C = 0x800CDF24;
const int s00a_dword_800E07A0 = 0x800CDF3C;
const char s00a_dword_800E07A4[] = {0x0, 0x0, 0x0, 0x0};
const int s00a_dword_800E07A8 = 0x800CE684;
const int s00a_dword_800E07AC = 0x800CE694;
const int s00a_dword_800E07B0 = 0x800CE6B0;
const int s00a_dword_800E07B4 = 0x800CE6CC;
const int s00a_dword_800E07B8 = 0x800CE6E8;
const int s00a_dword_800E07BC = 0x800CE704;
const int s00a_dword_800E07C0 = 0x800CE674;
const int s00a_dword_800E07C4 = 0x800CE720;
const int s00a_dword_800E07C8 = 0x800CE8C0;
const int s00a_dword_800E07CC = 0x800CE8D0;
const int s00a_dword_800E07D0 = 0x800CE8F8;
const int s00a_dword_800E07D4 = 0x800CE8E0;
const int s00a_dword_800E07D8 = 0x800CE8B0;
const int s00a_dword_800E07DC = 0x800CE8F8;
const int s00a_dword_800E07E0 = 0x800CE8F0;
const int s00a_dword_800E07E4 = 0x800CE8F8;
const int s00a_dword_800E07E8 = 0x800CE8F8;
const int s00a_dword_800E07EC = 0x800CE8F8;
const int s00a_dword_800E07F0 = 0x800CE880;
const int s00a_dword_800E07F4 = 0x800CE890;
const int s00a_dword_800E07F8 = 0x800CE8A0;
const char s00a_aCresetposd_800E07FC[] = " c_reset_pos = %d \n";
const char s00a_aKottida_800E0810[] = "kottida !!\n";
const int s00a_dword_800E081C = 0x800CF174;
const int s00a_dword_800E0820 = 0x800CF184;
const int s00a_dword_800E0824 = 0x800CF194;
const int s00a_dword_800E0828 = 0x800CF1A4;
const int s00a_dword_800E082C = 0x800CF1B4;
const int s00a_dword_800E0830 = 0x800CF1C4;
const int s00a_dword_800E0834 = 0x800CF1D4;
const int s00a_dword_800E0838 = 0x800CF1E4;
const char s00a_aResetmaxdnumd_800E083C[] = "reset max=%d num=%d \n";
const char s00a_aGmenemywatchcountd_800E0854[] = " GM_EnemyWatchCount = [%d] \n";
const char s00a_aNowzonedrzoned_800E0874[] = " now zone = %d r_zone=%d\n";
const char s00a_aNotrestrctedaread_800E0890[] = " ? ? ? Not Restrcted Area [%d] !!!!\n";
const char s00a_aErrerrerrnotlinkroutedtod_800E08B8[] = " Err Err Err Not Link Route [%d] to [%d] !!!!\n";
const char s00a_aCommanderrnozoneidingclzdidd_800E08E8[] = "command:!!!Err No Zone ID In Gcl z%d id%d!!!!!!!!\n";
const char s00a_aCommandcwhereissnake_800E091C[] = "command.c:  Where Is Snake ????\n";
const char aCom_noisemode_disD_800E0940[] = " COM_NOISEMODE_DIS =%d \n";
const char aEeeDDDTD_800E095C[] = "eee %d %d %d t %d \n";
const char aCommandC_800E0970[] = "command.c";
const char s00a_dword_800E097C[] = {0xaf, 0x0, 'd', 0x0};
const char s00a_dword_800E0980[] = {'^', 0x1, 0xc8, 0x0};
const char s00a_aKirari_800E0984[] = "kirari";
const char s00a_aEyeflashc_800E098C[] = "eyeflash.c";
const char aAsiatoc_800E0998[] = "asiato.c";
const char s00a_aLsightc_800E09A4[] = "l_sight.c";
const char s00a_aGrenademodeld_800E09B0[] = "grenade model=%d \n";
const char s00a_aGrnadec_800E09C4[] = "grnad_e.c";
const char s00a_dword_800E09D0[] = {0xa5, 0xb9, 0xa5, 0xcd};
const char s00a_dword_800E09D4[] = {0xa1, 0xbc, 0xa5, 0xaf};
const char s00a_dword_800E09D8[] = {0x0, 0x0, 0x0, 0x0};
const char s00a_dword_800E09DC[] = {0xc3, 0xca, 0xa5, 0xdc};
const char s00a_dword_800E09E0[] = {0xa1, 0xbc, 0xa5, 0xeb};
const char s00a_dword_800E09E4[] = {0x0, 0x0, 0x0, 0x0};
const char s00a_aCbbox_800E09E8[] = "cb_box";
const char s00a_aBoxkeric_800E09F0[] = "boxkeri.c";
const char s00a_aSmoke_800E09FC[] = "smoke";
const char s00a_aSmokec_800E0A04[] = "smoke.c";

// Enemy/wall.c
const char aDestroy[] = "destroy\n";
const char aBox01[] = "box_01";
const char aDbx1[] = "dbx1";
const char aDbx2[] = "dbx2";
const char aWallC[] = "wall.c";

const char s00a_aAsiotoseseterr_800E0A38[] = " asioto se set err \n";
const char s00a_aAsiotosenoiseseterr_800E0A50[] = " asioto se noise set err \n";
const char s00a_aMigisodesurid_800E0A6C[] = " migi sodesuri %d \n";
const char aAsiotoC_800E0A80[] = "asioto.c";
const char s00a_dword_800E0A89 = 0x0A;
const char s00a_dword_800E0A8A = 0x10;
const char s00a_dword_800E0A8B = 0x19;
const char s00a_aFamasl_800E0A8C[] = "famas_l";
const char aGlightC_800E0A94[] = "glight.c";
const char s00a_dword_800E0A9D = 0x00;
const char s00a_dword_800E0A9E = 0x00;
const char s00a_dword_800E0A9F = 0x54;
const char s00a_aMouse_800E0AA0[] = "mouse";
const char s00a_aMousec_800E0AA8[] = "mouse.c";
const char s00a_dword_800E0AB0[] = {0xa5, 0xd0, 0xa5, 0xd6};
const char s00a_dword_800E0AB4[] = {0xa5, 0xeb, 0xa4, 0xcf};
const char s00a_dword_800E0AB8[] = {0xa4, 0xb8, 0xa4, 0xb1};
const char s00a_dword_800E0ABC[] = {0xa4, 0xed, 0x0, 0x0};
const char s00a_aKill_800E0AC0[] = "kill";
const char s00a_aAwas_800E0AC8[] = "awa_s";
const char s00a_aBubblesc_800E0AD0[] = "bubble_s.c";
const char s00a_dword_800E0ADC[] = {0xb3, 0xab, 0xa4, 0xaf};
const char s00a_dword_800E0AE0[] = {0x0, 0x0, 0x0, 0x0};
const char s00a_dword_800E0AE4[] = {0xca, 0xc4, 0xa4, 0xe1};
const char s00a_dword_800E0AE8[] = {0xa4, 0xeb, 0x0, 0x0};
const char s00a_aOpen_800E0AEC[] = "open";
const char s00a_aClose_800E0AF4[] = "close";
const char s00a_aSeon_800E0AFC[] = "se_on";
const char s00a_aSeoff_800E0B04[] = "se_off";
const int s00a_dword_800E0B0C = 0x800D6750;
const int s00a_dword_800E0B10 = 0x800D676C;
const int s00a_dword_800E0B14 = 0x800D6750;
const int s00a_dword_800E0B18 = 0x800D676C;
const int s00a_dword_800E0B1C = 0x800D6780;
const int s00a_dword_800E0B20 = 0x800D678C;
const char s00a_aPatlit_800E0B24[] = "patlit";
const char s00a_aPatbody_800E0B2C[] = "pat_body";
const char s00a_aPatlamp_800E0B38[] = "pat_lamp";
const char s00a_aPatspt_800E0B44[] = "pat_spt1";
const char aPatoLmpC_800E0B50[] = "pato_lmp.c";
const char s00a_dword_800E0B5B = 0xFF;
const char aRipple_800E0B5C[] = "ripple";
const char aRippleC_800E0B64[] = "ripple.c";
const char s00a_dword_800E0B6D = 0x34;
const char s00a_dword_800E0B6E = 0x0F;
const char s00a_dword_800E0B6F = 0x00;
const char aRsurfaceC_800E0B70[] = "rsurface.c";
const char s00a_dword_800E0B7B = 0x38;
const char aRipplesC_800E0B7C[] = "ripples.c";
const char s00a_dword_800E0B86 = 0x23;
const char s00a_dword_800E0B87 = 0x18;
const char aElevatorC_800E0B88[] = "elevator.c";
const char s00a_dword_800E0B93 = 0x10;
const char aWtAreaC_800E0B94[] = "wt_area.c";
const char s00a_aAwa_800E0B9E = 0xF4;
const char s00a_aAwa_800E0B9F = 0x03;
const char aAwa_800E0BA0[] = "awa_3";
const char aSplash2C_800E0BA8[] = "splash2.c";
const char s00a_aWtviewc_800E0BB2 = 0x3F;
const char s00a_aWtviewc_800E0BB3 = 0x00;
const char s00a_aWtviewc_800E0BB4[] = "wt_view.c";
const char s00a_aWtviewcoverprims_800E0BC0[] = "(wt_view.c) Over prims !!!\n";
const char s00a_aMosaicc_800E0BDC[] = "mosaic.c";
const char aMosaic_800E0BE8[] = "Mosaic";
const char s00a_dword_800E0BEF = 0xB0;
const char s00a_aPadrecstart_800E0BF0[] = "Pad rec start\n";
const char aPadDemoC_800E0C00[] = "pad_demo.c";
const char s00a_dword_800E0C0B = 0x10;
const char aFadeIOC_800E0C0C[] = "fadeio.c";
const char s00a_dword_800E0C15 = 0x30;
const char s00a_dword_800E0C16 = 0x03;
const char s00a_dword_800E0C17 = 0x00;
const int s00a_dword_800E0C18 = 0x800DD778;
const int s00a_dword_800E0C1C = 0x800DD7BC;
const int s00a_dword_800E0C20 = 0x800DD818;
const int s00a_dword_800E0C24 = 0x800DD850;
const int s00a_dword_800E0C28 = 0x800DD8B4;
const char s00a_aTelopc_800E0C2C[] = "telop.c";
const char aCinemaC[] = "cinema.c";
const char s00a_dword_800E0C3D = 0x2;
const char s00a_dword_800E0C3E = 0x0;
const char s00a_dword_800E0C3F = 0x0;
