#include "common.h"
#include "libdg/libdg.h"
#include "Anime/animeconv/anime.h"
#include "strcode.h"

const char s00a_dword_800E02AC[] = {
    0x02, 0x97, 0x03, 0x00,
    0x09, 0x00, 0xE6, 0x01,
    0xC3, 0x08, 0x00, 0xFC,
    0xDE, 0x04, 0x00, 0x64,
    0x01, 0xF4, 0xFF, 0x53,
    0x0C, 0x00, 0x03, 0x02,
    0x00, 0x01, 0x0D, 0x0C,
    0x00, 0x03, 0x0A, 0xFE,
    0x70, 0x00, 0x00, 0x04,
    0xFF, 0x9C, 0x00, 0x00,
    0xFF, 0xE5, 0x0C, 0x00,
    0x03, 0x02, 0x00, 0x01,
    0x0D, 0x04, 0xFF, 0x9C,
    0x00, 0x00, 0x00, 0x1B,
    0x0C, 0x00, 0x03, 0x02,
    0x00, 0x01, 0x0D, 0x0A,
    0x01, 0x90, 0x00, 0x00,
    0x04, 0xFF, 0xB7, 0x00,
    0x00, 0x00, 0x49, 0x0C,
    0x00, 0x03, 0x02, 0x00,
    0x01, 0x0D, 0x04, 0xFF,
    0xE5, 0x00, 0x00, 0x00,
    0x64, 0x0C, 0x00, 0x03,
    0x02, 0x00, 0x01, 0x0D,
    0x0A, 0xFE, 0x70, 0x00,
    0x00, 0x04, 0x00, 0x1B,
    0x00, 0x00, 0x00, 0x64,
    0x0C, 0x00, 0x03, 0x02,
    0x00, 0x01, 0x0D, 0x04,
    0x00, 0x49, 0x00, 0x00,
    0x00, 0x49, 0x0C, 0x00,
    0x03, 0x02, 0x00, 0x01,
    0x0D, 0x0A, 0x01, 0x90,
    0x00, 0x00, 0x04, 0x00,
    0x64, 0x00, 0x00, 0x00,
    0x1B, 0x0C, 0x00, 0x03,
    0x02, 0x00, 0x01, 0x0D,
    0x04, 0x00, 0x64, 0x00,
    0x00, 0xFF, 0xE5, 0x0C,
    0x00, 0x03, 0x02, 0x00,
    0x01, 0x0D, 0x0A, 0xFE,
    0x70, 0x00, 0x00, 0x04,
    0x00, 0x49, 0x00, 0x00,
    0xFF, 0xB7, 0x0C, 0x00,
    0x03, 0x02, 0x00, 0x01,
    0x0D, 0x04, 0x00, 0x1B,
    0x00, 0x00, 0xFF, 0x9C,
    0x0C, 0x00, 0x03, 0x02,
    0x00, 0x01, 0x0D, 0x0A,
    0x01, 0x90, 0x00, 0x00,
    0x04, 0xFF, 0xE5, 0x00,
    0x00, 0xFF, 0x9C, 0x0C,
    0x00, 0x03, 0x02, 0x00,
    0x01, 0x0D, 0x04, 0xFF,
    0xB7, 0x00, 0x00, 0xFF,
    0xB7, 0x0C, 0x00, 0x03,
    0x02, 0x00, 0x01, 0x0D,
    0x0D, 0x0F, 0x08, 0x00,
    0xFC, 0xDE, 0x04, 0xFF,
    0x38, 0x01, 0xF4, 0x00,
    0x00, 0x0C, 0x00, 0x03,
    0x02, 0x00, 0x01, 0x0D,
    0x0C, 0x00, 0x03, 0x0A,
    0xFE, 0x70, 0x00, 0x00,
    0x04, 0x00, 0x1B, 0x00,
    0x00, 0x00, 0x64, 0x0C,
    0x00, 0x03, 0x02, 0x00,
    0x01, 0x0D, 0x04, 0x00,
    0x49, 0x00, 0x00, 0x00,
    0x49, 0x0C, 0x00, 0x03,
    0x02, 0x00, 0x01, 0x0D,
    0x0A, 0x01, 0x90, 0x00,
    0x00, 0x04, 0x00, 0x64,
    0x00, 0x00, 0x00, 0x1B,
    0x0C, 0x00, 0x03, 0x02,
    0x00, 0x01, 0x0D, 0x04,
    0x00, 0x64, 0x00, 0x00,
    0xFF, 0xE5, 0x0C, 0x00,
    0x03, 0x02, 0x00, 0x01,
    0x0D, 0x0A, 0xFE, 0x70,
    0x00, 0x00, 0x04, 0x00,
    0x49, 0x00, 0x00, 0xFF,
    0xB7, 0x0C, 0x00, 0x03,
    0x02, 0x00, 0x01, 0x0D,
    0x04, 0x00, 0x1B, 0x00,
    0x00, 0xFF, 0x9C, 0x0C,
    0x00, 0x03, 0x02, 0x00,
    0x01, 0x0D, 0x0A, 0x01,
    0x90, 0x00, 0x00, 0x04,
    0xFF, 0xE5, 0x00, 0x00,
    0xFF, 0x9C, 0x0C, 0x00,
    0x03, 0x02, 0x00, 0x01,
    0x0D, 0x04, 0xFF, 0xB7,
    0x00, 0x00, 0xFF, 0xB7,
    0x0C, 0x00, 0x03, 0x02,
    0x00, 0x01, 0x0D, 0x0A,
    0xFE, 0x70, 0x00, 0x00,
    0x04, 0xFF, 0x9C, 0x00,
    0x00, 0xFF, 0xE5, 0x0C,
    0x00, 0x03, 0x02, 0x00,
    0x01, 0x0D, 0x04, 0xFF,
    0x9C, 0x00, 0x00, 0x00,
    0x1B, 0x0C, 0x00, 0x03,
    0x02, 0x00, 0x01, 0x0D,
    0x0A, 0x01, 0x90, 0x00,
    0x00, 0x04, 0xFF, 0xB7,
    0x00, 0x00, 0x00, 0x49,
    0x0C, 0x00, 0x03, 0x02,
    0x00, 0x01, 0x0D, 0x04,
    0xFF, 0xE5, 0x00, 0x00,
    0x00, 0x64, 0x0C, 0x00,
    0x03, 0x02, 0x00, 0x01,
    0x0D, 0x0D, 0x0F, 0x08,
    0x00, 0xFC, 0xDE, 0x04,
    0x00, 0x64, 0x01, 0xF4,
    0x00, 0xAD, 0x0C, 0x00,
    0x03, 0x02, 0x00, 0x01,
    0x0D, 0x0C, 0x00, 0x03,
    0x0A, 0xFE, 0x70, 0x00,
    0x00, 0x04, 0x00, 0x49,
    0x00, 0x00, 0xFF, 0xB7,
    0x0C, 0x00, 0x03, 0x02,
    0x00, 0x01, 0x0D, 0x04,
    0x00, 0x1B, 0x00, 0x00,
    0xFF, 0x9C, 0x0C, 0x00,
    0x03, 0x02, 0x00, 0x01,
    0x0D, 0x0A, 0x01, 0x90,
    0x00, 0x00, 0x04, 0xFF,
    0xE5, 0x00, 0x00, 0xFF,
    0x9C, 0x0C, 0x00, 0x03,
    0x02, 0x00, 0x01, 0x0D,
    0x04, 0xFF, 0xB7, 0x00,
    0x00, 0xFF, 0xB7, 0x0C,
    0x00, 0x03, 0x02, 0x00,
    0x01, 0x0D, 0x0A, 0xFE,
    0x70, 0x00, 0x00, 0x04,
    0xFF, 0x9C, 0x00, 0x00,
    0xFF, 0xE5, 0x0C, 0x00,
    0x03, 0x02, 0x00, 0x01,
    0x0D, 0x04, 0xFF, 0x9C,
    0x00, 0x00, 0x00, 0x1B,
    0x0C, 0x00, 0x03, 0x02,
    0x00, 0x01, 0x0D, 0x0A,
    0x01, 0x90, 0x00, 0x00,
    0x04, 0xFF, 0xB7, 0x00,
    0x00, 0x00, 0x49, 0x0C,
    0x00, 0x03, 0x02, 0x00,
    0x01, 0x0D, 0x04, 0xFF,
    0xE5, 0x00, 0x00, 0x00,
    0x64, 0x0C, 0x00, 0x03,
    0x02, 0x00, 0x01, 0x0D,
    0x0A, 0xFE, 0x70, 0x00,
    0x00, 0x04, 0x00, 0x1B,
    0x00, 0x00, 0x00, 0x64,
    0x0C, 0x00, 0x03, 0x02,
    0x00, 0x01, 0x0D, 0x04,
    0x00, 0x49, 0x00, 0x00,
    0x00, 0x49, 0x0C, 0x00,
    0x03, 0x02, 0x00, 0x01,
    0x0D, 0x0A, 0x01, 0x90,
    0x00, 0x00, 0x04, 0x00,
    0x64, 0x00, 0x00, 0x00,
    0x1B, 0x0C, 0x00, 0x03,
    0x02, 0x00, 0x01, 0x0D,
    0x04, 0x00, 0x64, 0x00,
    0x00, 0xFF, 0xE5, 0x0C,
    0x00, 0x03, 0x02, 0x00,
    0x01, 0x0D, 0x0D, 0x0F
};

const char s00a_dword_800E054C[] = {
    0x00, 0x57, 0x01, 0x00,
    0x05, 0x0C, 0x00, 0x1C,
    0x0A, 0x00, 0x05, 0x00,
    0x05, 0x04, 0x00, 0x00,
    0x00, 0x0A, 0x00, 0x00,
    0x02, 0x00, 0x01, 0x0D,
    0x0C, 0x00, 0x04, 0x0C,
    0x00, 0x05, 0x0A, 0xFF,
    0xF6, 0xFF, 0xF6, 0x04,
    0x00, 0x00, 0x00, 0x0A,
    0x00, 0x00, 0x02, 0x00,
    0x01, 0x0D, 0x02, 0x00,
    0x01, 0x0C, 0x00, 0x05,
    0x0A, 0x00, 0x0A, 0x00,
    0x0A, 0x04, 0x00, 0x00,
    0x00, 0x0A, 0x00, 0x00,
    0x02, 0x00, 0x01, 0x0D,
    0x02, 0x00, 0x01, 0x0D,
    0x0C, 0x00, 0x0E, 0x0A,
    0xFF, 0xF6, 0xFF, 0xF6,
    0x04, 0x00, 0x00, 0x00,
    0x0A, 0x00, 0x00, 0x02,
    0x00, 0x01, 0x0D, 0x0F
};

const char s00a_dword_800E05A8[] =
{
    0x00, 0x41, 0x01, 0x00,
    0x05, 0x01, 0xFE, 0x0C,
    0x00, 0x1C, 0x01, 0xFF,
    0x0A, 0x00, 0x02, 0x00,
    0x0A, 0x04, 0x00, 0x00,
    0x00, 0x0A, 0x00, 0x00,
    0x02, 0x00, 0x01, 0x0D,
    0x0C, 0x00, 0x04, 0x0C,
    0x00, 0x05, 0x01, 0xFF,
    0x04, 0x00, 0x00, 0x00,
    0x0A, 0x00, 0x00, 0x02,
    0x00, 0x01, 0x0D, 0x0D,
    0x0C, 0x00, 0x0E, 0x01,
    0xFF, 0x0A, 0xFF, 0xFC,
    0xFF, 0xEC, 0x04, 0x00,
    0x00, 0x00, 0x0A, 0x00,
    0x00, 0x02, 0x00, 0x01,
    0x0D, 0x0F
};

ANIMATION s00a_dword_800C34AC = { PCX_HOSI, 1, 1,  1, 1,   0, 1, 200, 200, 128, 0, (char *)s00a_dword_800E02AC };
ANIMATION s00a_dword_800C34C8 = { 0x4184, 1, 1,  1, 1,   0, 5,  10,  10, 128, 0, (char *)s00a_dword_800E054C };
ANIMATION s00a_dword_800C34E4 = { PCX_SMOKE, 8, 4, 30, 1,   0, 1,  10,  10, 255, 0, (char *)s00a_dword_800E05A8 };

void s00a_command_800CA69C( SVECTOR *pos )
{
    ANIMATION *anm;
    PRESCRIPT  pre;

    pre.pos = *pos;
    pre.speed = DG_ZeroVector;
    pre.s_anim = 0;

    anm = &s00a_dword_800C34AC;
    anm->pre_script = &pre;

    pre.scr_num = 0;
    NewAnime( NULL, 0, anm );

    pre.scr_num = 1;
    NewAnime( NULL, 0, anm );

    pre.scr_num = 2;
    NewAnime( NULL, 0, anm );
}

void s00a_command_800CA758( SVECTOR* pos )
{
    ANIMATION *anm;
    PRESCRIPT  pre;

    pre.pos = *pos;
    pre.speed = DG_ZeroVector;
    pre.s_anim = 0;

    anm = &s00a_dword_800C34E4;
    anm->pre_script = &pre;
    pre.scr_num = 0;

    NewAnime( NULL, 0, anm );
}
