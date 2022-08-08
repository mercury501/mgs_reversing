#include "SD/sd.h"

extern int keyoffs_800BF29C;
extern int keyd_800C0524;
extern SOUND_W* sptr_800C057C;
extern int mtrack_800BF1EC;
extern SPU_TRACK_REG spu_tr_wk_800C0658[];
extern int mdata2_800BF0D4;
extern int mdata3_800BF0D8;
extern int mdata4_800BF0DC;
extern unsigned char* mptr_800C0570;
extern int spu_ch_tbl_800A2AC8[];
extern int dword_800BF210;
extern SEPLAYTBL se_playing_800BF068[8];
extern int dword_800BF064;

void keyoff_80087F80(void);
void tone_set_80087FA8(int a1); // TODO: char ?

void SD_MDX_F2_rest_set_80086D18()
{
    sptr_800C057C->field_CC_rest_fg = 1;
    keyoff_80087F80();
    sptr_800C057C->field_6_ngs = mdata2_800BF0D4;
    sptr_800C057C->field_7_ngg = 0;
    sptr_800C057C->field_44_vol = 0;
    sptr_800C057C->field_4_ngc = sptr_800C057C->field_6_ngs;
    sptr_800C057C->field_5_ngo = 0;
}

void tie_set_80086D9C()
{
    int temp1; // $v1

    sptr_800C057C->field_CC_rest_fg = 1;
    sptr_800C057C->field_6_ngs = mdata2_800BF0D4;
    sptr_800C057C->field_7_ngg = mdata3_800BF0D8;
    sptr_800C057C->field_4_ngc = sptr_800C057C->field_6_ngs;
    temp1 = (sptr_800C057C->field_7_ngg * sptr_800C057C->field_4_ngc) / 100;
    if ( !temp1 )
    {
       temp1 = 1;
    }

    sptr_800C057C->field_5_ngo = temp1;
}

void SD_MDX_D2_sno_set_80086E38()
{
    sptr_800C057C->field_A4_snos = mdata2_800BF0D4;
    keyoff_80087F80();
    tone_set_80087FA8((char)mdata2_800BF0D4); // TODO: Arg type wrong?
}

void svl_set_80086E78()
{
    sptr_800C057C->field_A4_snos = mdata2_800BF0D4;
    keyoff_80087F80();
    tone_set_80087FA8((char)mdata2_800BF0D4);
}

void svp_set_80086EB8()
{
    sptr_800C057C->field_A4_snos = mdata2_800BF0D4;
    keyoff_80087F80();
    tone_set_80087FA8((char)mdata2_800BF0D4);
}

void use_set_80086EF8(void)
{

}
void SD_pan_set_80086F00()
{
    sptr_800C057C->field_56_panmod = mdata2_800BF0D4;
    sptr_800C057C->field_54_panf = mdata3_800BF0D8 + 20;
    sptr_800C057C->field_48_pand = sptr_800C057C->field_54_panf << 8;
    sptr_800C057C->field_45_panc = 0;
}

void SD_MDX_DE_pan_move_80086F50()
{
    unsigned char temp1; // $v0
    int temp2; // $v0

    sptr_800C057C->field_45_panc = mdata2_800BF0D4;
    temp1 = (mdata3_800BF0D8 + 0x14);
    sptr_800C057C->field_50_panm = temp1 << 8;
    temp2 = temp1 - sptr_800C057C->field_54_panf;

    if ( temp2 < 0 )
    {
        sptr_800C057C->field_4C_panad = -(((-temp2) << 8) / (unsigned int)mdata2_800BF0D4);
        if ( sptr_800C057C->field_4C_panad < -2032 )
        {
            sptr_800C057C->field_4C_panad = -2032;
        }
    }
    else
    {
        sptr_800C057C->field_4C_panad = (temp2 << 8) / (unsigned int)mdata2_800BF0D4;
        if ( sptr_800C057C->field_4C_panad > 2032 )
        {
            sptr_800C057C->field_4C_panad = 2032;
        }
        
    }
}

void SD_MDX_E1_vib_set_80087018()
{
    sptr_800C057C->field_84_vibhs = mdata2_800BF0D4;
    sptr_800C057C->field_86_vibcad = mdata3_800BF0D8;
    if ( sptr_800C057C->field_86_vibcad < 64 )
    {
        if ( sptr_800C057C->field_86_vibcad < 32 )
        {
            sptr_800C057C->field_79_vib_tc_ofst = 1;
            sptr_800C057C->field_86_vibcad = sptr_800C057C->field_86_vibcad << 3;
        }
        else
        {
            sptr_800C057C->field_79_vib_tc_ofst = 2;
            sptr_800C057C->field_86_vibcad = sptr_800C057C->field_86_vibcad << 2;
        }
    }
    else
    {
        if ( sptr_800C057C->field_86_vibcad < 128 )
        {
            sptr_800C057C->field_79_vib_tc_ofst = 4;
            sptr_800C057C->field_86_vibcad = sptr_800C057C->field_86_vibcad << 1;
        }
        else if ( sptr_800C057C->field_86_vibcad != 255 )
        {
            sptr_800C057C->field_79_vib_tc_ofst = 8;
        }
        else
        {
            sptr_800C057C->field_79_vib_tc_ofst = 16;
        }
    }

    sptr_800C057C->field_7C_vibd = mdata4_800BF0DC << 8;
    sptr_800C057C->field_80_vibdm = mdata4_800BF0DC << 8;
}

void SD_MDX_E2_vib_change_80087120()
{
    sptr_800C057C->field_85_vibcs = mdata2_800BF0D4;
    sptr_800C057C->field_88_vibad = sptr_800C057C->field_80_vibdm / (unsigned int)mdata2_800BF0D4;
}

void SD_MDX_E3_rdm_set_8008716C()
{
    sptr_800C057C->field_94_rdms = mdata2_800BF0D4;
    sptr_800C057C->field_98_rdmd = (mdata3_800BF0D8 << 8) + mdata4_800BF0DC;
    sptr_800C057C->field_8C_rdmc = 0;
    sptr_800C057C->field_90_rdmo = 0;
}

#pragma INCLUDE_ASM("asm/SD/SD_MDX_E7_800871B4.s")
#pragma INCLUDE_ASM("asm/SD/SD_MDX_E8_800871E0.s")
#pragma INCLUDE_ASM("asm/SD/SD_MDX_E9_800872C0.s")
#pragma INCLUDE_ASM("asm/SD/SD_MDX_EA_800872EC.s")
#pragma INCLUDE_ASM("asm/SD/SD_MDX_EB_8008736C.s")
#pragma INCLUDE_ASM("asm/SD/SD_MDX_EC_80087384.s")
#pragma INCLUDE_ASM("asm/SD/tempo_set_800873CC.s")
#pragma INCLUDE_ASM("asm/SD/tempo_move_800873E4.s")
#pragma INCLUDE_ASM("asm/SD/trans_set_8008750C.s")
#pragma INCLUDE_ASM("asm/sub_80087524.s")
#pragma INCLUDE_ASM("asm/SD/se_adrs_set_8008756C.s")
#pragma INCLUDE_ASM("asm/SD/SD_MDX_D6_8008758C.s")
#pragma INCLUDE_ASM("asm/SD/SD_MDX_E6_80087670.s")
#pragma INCLUDE_ASM("asm/SD/sws_set_800876D4.s")

void SD_MDX_E0_detune_set_80087730()
{
    sptr_800C057C->field_B0_tund = (signed char)mdata2_800BF0D4 << 2;
}

void swp_set_8008774C(void)
{

}

void echo_set1_80087754(void)
{

}

void echo_set2_8008775C(void)
{

}

void SD_MDX_F6_80087764()
{
    if ( (unsigned int)(mtrack_800BF1EC - 13) < 8 && !se_playing_800BF068[mtrack_800BF1EC - 13].field_1_kind )
    {
        dword_800BF064 |= spu_ch_tbl_800A2AC8[mtrack_800BF1EC];
    }
}

void SD_MDX_F7_800877CC()
{
    if ( (unsigned int)(mtrack_800BF1EC - 13) < 8 && !se_playing_800BF068[mtrack_800BF1EC - 13].field_1_kind )
    {
        dword_800BF210 |= spu_ch_tbl_800A2AC8[mtrack_800BF1EC];
    }
}

void SD_MDX_ED_kakko_start_80087834()
{
    sptr_800C057C->field_2C_kak1ptr = mptr_800C0570;
    sptr_800C057C->field_28_kakfg = 0;
}

void SD_MDX_EE_kakko_end_80087854()
{
    switch (sptr_800C057C->field_28_kakfg)
    {
    case 0:
        sptr_800C057C->field_28_kakfg++;
        break;

    case 1:
        sptr_800C057C->field_28_kakfg++;
        sptr_800C057C->field_30_kak2ptr = mptr_800C0570;
        mptr_800C0570 = sptr_800C057C->field_2C_kak1ptr;
        break;

    case 2:
        sptr_800C057C->field_28_kakfg--;
        mptr_800C0570 = sptr_800C057C->field_30_kak2ptr;
        break;
    }
}

void sub_800878FC(void)
{

}

void SD_MDX_D7_80087904()
{
    spu_tr_wk_800C0658[mtrack_800BF1EC].field_18_a_mode = 1;
    spu_tr_wk_800C0658[mtrack_800BF1EC].field_1C_ar = ~mdata2_800BF0D4 & 0x7F;
    spu_tr_wk_800C0658[mtrack_800BF1EC].field_1E_dr = ~mdata3_800BF0D8 & 0xF;
    spu_tr_wk_800C0658[mtrack_800BF1EC].field_2A_sl = mdata4_800BF0DC & 0xF;
    spu_tr_wk_800C0658[mtrack_800BF1EC].field_20_env1_fg = 1;
}

void SD_MDX_D8_srs_set_8008798C()
{
    spu_tr_wk_800C0658[mtrack_800BF1EC].field_24_s_mode = 3;
    spu_tr_wk_800C0658[mtrack_800BF1EC].field_28_sr = ~mdata2_800BF0D4 & 0x7F;
    spu_tr_wk_800C0658[mtrack_800BF1EC].field_2C_env2_fg = 1;
}

void SD_MDX_D9_800879E4()
{
    const short flags = ~mdata2_800BF0D4 & 0x1F;
    spu_tr_wk_800C0658[mtrack_800BF1EC].field_30_r_mode = 3;
    spu_tr_wk_800C0658[mtrack_800BF1EC].field_34_rr = flags;
    sptr_800C057C->field_D2_rrd = flags;
    spu_tr_wk_800C0658[mtrack_800BF1EC].field_38_env3_fg = 1;
}

void sub_80087A48(void)
{

}

void sub_80087A50(void)
{

}

void SD_MDX_FF_block_end_80087A58()
{
    keyoffs_800BF29C |= keyd_800C0524;
}

void no_cmd_80087A80(void)
{

}
