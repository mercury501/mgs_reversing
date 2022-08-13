#include "SD/sd.h"
#include "psyq.h"
#include "unknown.h"
#include "mts/mts_new.h"

extern int sng_status_800BF158;
extern int se_load_code_800BF28C;
extern int bstr_fade_inProgress_800BF0CC;
extern int gStreamVol_800BF15C;
extern int dword_800C04F4;

extern const char aStartTaskSdint[];
extern const char aSdSngdataloadi[];

extern unsigned int sng_status_800C04F8;
extern int sd_sng_data_800C0420;
extern const char aLoadsefileFile[];
extern const char aErrorSeFileAlr[];

extern int se_fp_800BF014;
extern int dword_800C0500;
extern int gStr_fadeout_2_800C0584;

void sd_init_80081C7C();
void IntSdMain_80084494();
void WaveSpuTrans_80083944(void);
int SpuIsTransferCompleted_80096F58(int a1);
void StrSpuTrans_800833FC(void);
int StrFadeInt_800839C8();

void SdInt_Task_80081BDC();
void SD_nullsub_20_800827A4();
int SD_8008341C();
int SD_800854F0();
void KeyOffStr_80081FE8();
int StartStream_80082448();

extern const char aBgmTerminate[];
extern const char aStartTaskSdmai[];

extern int sd_flags_800C0BFC;
extern int dword_800BEFC8;
extern int dword_800BEFCC;
extern int dword_800BF1A4;
extern int dword_800BF26C;
extern int gStr_FadeOut1_800BF16C;


extern const char aSoundLaunchArg[];
extern const char aArgDS[];

extern int sd_debug_800BEFD4;
extern unsigned int byte_800BE7C8[512];
extern const char aSoundErrorSpuO[];
extern const char aSoundErrorSpuO_0[];

extern int gStream_800C04F0;
extern int dword_800BF258;
extern int dword_800C0580;
extern int se_exp_table_800C0520;

void sub_80081910(int argc, const char **argv)
{
    int i; // $s1

    sd_debug_800BEFD4 = 0;
    mts_printf_8008BBA0(aSoundLaunchArg, argc);
    
    for (i = 0 ; i < argc; ++i )
    {
        if ( argv[i][0] == '-' && argv[i][1] == 'd' )
        {
            sd_debug_800BEFD4 = 1;
        }
        mts_printf_8008BBA0(aArgDS, i, argv[i]);
    }

    mts_set_stack_check_8008B648(5, byte_800BE7C8, 0x800);
    mts_sta_tsk_8008B47C(5, SdMain_80081A18, byte_800BE7C8);
}

void nullsub_7_80081A10(int a1, int a2, int a3)
{
    
}

void SdMain_80081A18()
{
    sd_flags_800C0BFC = 0;
    mts_printf_8008BBA0(aStartTaskSdmai);
    sd_sng_alloc_80082194();
    mts_set_stack_check_8008B648(1, &dword_800BEFC8, 2048);
    mts_sta_tsk_8008B47C(1, SdInt_Task_80081BDC, &dword_800BEFC8); // TODO: Alloc BSS stack buffer
    mts_slp_tsk_8008A400();
    sd_flags_800C0BFC = 128;
    while ( 1 )
    {
        mts_slp_tsk_8008A400();
        if ( sng_status_800BF158 == 1 )
        {
            if ( SD_800854F0() )
            {
                sng_status_800BF158 = 0;
            }
            else
            {
                sng_status_800BF158 = 2;
            }
        }
        
        if ( dword_800BF26C == 1 )
        {
            dword_800BF26C = 2;
        }
        
        if ( dword_800BEFCC )
        {
            KeyOffStr_80081FE8();
            dword_800BEFCC = 0;
        }

        switch ( (unsigned int)gStr_FadeOut1_800BF16C )
        {     
            case 1:
                if ( StartStream_80082448() )
                {
                    gStr_FadeOut1_800BF16C = 0;
                }
                else
                {
                    gStr_FadeOut1_800BF16C = 2;
                    dword_800BF1A4 = 0;
                }
                break;
            
            case 2:
            case 3:
            case 4:
            case 5:
                
                SD_nullsub_20_800827A4();
                break;

            case 7:
                KeyOffStr_80081FE8();
                mts_printf_8008BBA0(aBgmTerminate);
                break;
            
            case 6:
            default:
                break;
        }

        if ( se_load_code_800BF28C )
        {
            SD_8008341C();
        }
    }
}

void SdInt_Task_80081BDC()
{
    char buffer[100]; // not enough stack used without this
    mts_printf_8008BBA0(aStartTaskSdint);
    sd_init_80081C7C();
    mts_wup_tsk_8008A540(5);
    while ( 1 )
    {
        mts_receive_80089D24(-1, 0);
        IntSdMain_80084494();
        if ( SpuIsTransferCompleted_80096F58(0) == 1 )
        {
            WaveSpuTrans_80083944();
            mts_wup_tsk_8008A540(5);
        }
        StrFadeInt_800839C8();
        if ( SpuIsTransferCompleted_80096F58(0) == 1 )
        {
            StrSpuTrans_800833FC();
            mts_wup_tsk_8008A540(5);
        }
    }
}

extern const char aBlankDataAddrX[];
extern const char aSpuWaveStartPt[];
extern const char aSpuBgmStartPtr[];
extern const char aSpuBgmStartPtr_0[];
extern const char aSpuReverbBuffe[];
extern const char aSpuBufferOver[];

extern SEPLAYTBL se_playing_800BF068[8];

extern int dword_800BF210;
extern int dword_800BF064;
extern int dword_800BF1A8;
extern int blank_data_800A2B28;
extern int dword_800BF27C;

extern unsigned char byte_800C0588[200];
extern int blank_data_addr_800BF00C;
extern int spu_bgm_start_ptr_r_800BF0C8;
extern int spu_bgm_start_ptr_l_800BF060;
extern int spu_wave_start_ptr_800C052C;
extern SpuVoiceAttr voiceAttr_800BF218;

void UserSpuIRQProc_80082640();

#pragma INCLUDE_ASM("asm/SD/sd_init_80081C7C.s")

#pragma INCLUDE_ASM("asm/SD/sub_80081F8C.s")

void SD_80081FC4(int param_1)
{
    SpuSetKey_80096C18(0, param_1);
}

void KeyOffStr_80081FE8()
{
    SpuVoiceAttr attr; // [sp+10h] [-40h] BYREF

    switch (SpuGetKeyStatus_80096DD8(0x600000))
    {
        case SPU_OFF: 
            break;
        
        case SPU_ON:
        case SPU_ON_ENV_OFF:
            SpuSetKey_80096C18(0, 0x600000);
            break;
        
        case SPU_OFF_ENV_ON:
            attr.voice = 0x200000;
            SpuGetVoiceAttr_80097D18(&attr);
            if ( attr.rr != 8 )
            {
                mts_printf_8008BBA0(aSoundErrorSpuO, attr.rr);
            }
            attr.voice = 0x400000;
            SpuGetVoiceAttr_80097D18(&attr);
            if ( attr.rr != 8 )
            {
                mts_printf_8008BBA0(aSoundErrorSpuO_0, attr.rr);
            }
    }
    
    dword_800C0580 = 0;
    gStream_800C04F0 = 0;
    
    if ( dword_800BF258 )
    {
        SD_8008395C(dword_800BF258, 1);
        dword_800BF258 = 0;
    }
    gStr_FadeOut1_800BF16C = 0;
    StrSpuTransClose_80083394();  
}

#pragma INCLUDE_ASM("asm/SD/sub_800820EC.s")

void SD_80082170(int param_1)
{
    SpuSetKey_80096C18(1, param_1);
}

#pragma INCLUDE_ASM("asm/SD/sd_sng_alloc_80082194.s")

void StrFadeIn_800822C8(unsigned int a1)
{
    bstr_fade_inProgress_800BF0CC = gStreamVol_800BF15C / a1;
    if ( !(gStreamVol_800BF15C / a1) )
    {
        bstr_fade_inProgress_800BF0CC = 1;
    }
    dword_800C04F4 = 0;
}

int StrFadeOut_80082310(unsigned int a1)
{
    if ( gStr_FadeOut1_800BF16C )
    {
        if ( gStr_fadeout_2_800C0584 != gStreamVol_800BF15C )
        {
            dword_800C04F4 = gStreamVol_800BF15C / a1;
            if ( !(gStreamVol_800BF15C / a1) )
            {
                dword_800C04F4 = 1;
            }
            bstr_fade_inProgress_800BF0CC = 0;
            return 0;
        }
    }
    return -1;
}

#pragma INCLUDE_ASM("asm/SD/StrFadeOutStop_80082380.s")
#pragma INCLUDE_ASM("asm/SD/StartStream_80082448.s")
#pragma INCLUDE_ASM("asm/SD/UserSpuIRQProc_80082640.s")

void sub_8008279C(void)
{

}

void SD_nullsub_20_800827A4()
{
    
}

#pragma INCLUDE_ASM("asm/SD/StrSpuTransWithNoLoop_800827AC.s")
#pragma INCLUDE_ASM("asm/SD/StrSpuTransClose_80083394.s")

void StrSpuTrans_800833FC(void)
{
    StrSpuTransWithNoLoop_800827AC();
}

int SD_8008341C()
{
    if ( se_fp_800BF014 )
    {
        mts_printf_8008BBA0(aErrorSeFileAlr);
        SD_8008395C(se_fp_800BF014, 4);
        se_fp_800BF014 = 0;
    }
    se_fp_800BF014 = SD_SongLoadData_8008394C(se_load_code_800BF28C, 4);
    if ( se_fp_800BF014 < 0 )
    {
        se_fp_800BF014 = 0;
        mts_printf_8008BBA0(aLoadsefileFile, se_load_code_800BF28C);
        nullsub_7_80081A10(&dword_800C0500, -4, se_load_code_800BF28C); // TODO: Not sure if last arg exists
        return -1;
    }
    else
    {
        SD_80083954(se_fp_800BF014, se_exp_table_800C0520, 0x2800);
        SD_8008395C(se_fp_800BF014, 4);
        se_load_code_800BF28C = 0;
        se_fp_800BF014 = 0;
        return 0;
    }
}

#pragma INCLUDE_ASM("asm/sub_800834FC.s")
#pragma INCLUDE_ASM("asm/SD/sub_80083804.s")

void WaveSpuTrans_80083944(void)
{

}

int SD_SongLoadData_8008394C(void)
{
    return -1;
}

int SD_80083954(void)
{
    return -1;
}

int SD_8008395C(int a1, int a2)
{
    return -1;
}

#pragma INCLUDE_ASM("asm/SD/StrFadeWkSet_80083964.s")
#pragma INCLUDE_ASM("asm/SD/StrFadeInt_800839C8.s")
#pragma INCLUDE_ASM("asm/SD/sub_80083BB4.s")

int num2char_80083E68(unsigned int num)
{
    num &= 0xf;
    if (num < 10)
    {
        num += 0x30;
    }
    else
    {
        num += 0x57;
    }
    return num & 0xff;
}

int SD_SngDataLoadInit_80083E8C()
{
    sng_status_800C04F8 = 0;
    sng_status_800BF158 = 0;
    sng_off_80087E2C();
    mts_printf_8008BBA0(aSdSngdataloadi);
    return sd_sng_data_800C0420;
}

void SD_80083ED4(void)
{
    sng_status_800BF158 = 2;
}

int SD_80083EE8()
{
    return se_exp_table_800C0520;
}

void SD_80083EF8(void)
{
    se_load_code_800BF28C = 0;
}

#pragma INCLUDE_ASM("asm/SD/LoadInit_80083F08.s")
#pragma INCLUDE_ASM("asm/SD/SD_80083F54.s")
#pragma INCLUDE_ASM("asm/SD/SD_WavLoadBuf_800841D4.s")
#pragma INCLUDE_ASM("asm/SD/SD_Unload_800843BC.s")