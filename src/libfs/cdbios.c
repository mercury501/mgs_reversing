#include "linker.h"
#include "mts/mts_new.h"
#include "data/data/data.h"
#include "libfs.h"
#include "mts/mts_new.h"
#include "psyq.h"
#include <LIBCD.H>

extern unsigned char         heap_80117000[];
extern FS_FILE_INFO_8009D49C gDirFiles_8009D49C[];
extern int                   gDiskNum_800ACBF0;
extern int                   dword_8009D4DC;
extern int                   dword_8009D4E0;
extern int                   dword_cdbios_stop_8009D4E4;
extern CDBIOS_TASK           cd_bios_task_800B4E58;
extern struct Loader_Record *gLoaderRec_800B5288;
extern FS_FILE_TABLE         fs_file_table_8009D4E8;
extern const char           *MGS_DiskName_8009D2FC[3];

extern const char aPositionEnd[];    // = "Position end\n"
extern const char aDiskD[];          // = "DISK %d\n"
extern const char aIllegalDisk[];    // = "illegal DISK\n"
extern const char aCdfsSkipErrorD[]; // = "CDFS: skip error %d %d %d\n"
extern const char asc_800105B4[];    // = "[T]"
extern const char a__800105B8[];     // = "."
extern const char aD[];              // = "[%d]"
extern const char aFileSTopDSizeD[]; // = "FILE %s : top %d size %d set %d\n"
extern const char aPlaystation[];    // = "PLAYSTATION"
extern const char aMgs[];            // = "MGS"
extern const char aMgsReadSectorD[]; // = "MGS read_sector %d\n"
extern const char aXXD[];            // = "%X %X %d\n"

int FS_ResetCdFilePosition_80021E2C(void *pHeap)
{
    int disk_num = FS_CdMakePositionTable_80022B5C(pHeap, gDirFiles_8009D49C);
    mts_printf_8008BBA0(aPositionEnd);
    if (disk_num >= 0)
    {
        mts_printf_8008BBA0(aDiskD, disk_num);
        FS_CdStageFileInit_80022D00(pHeap, gDirFiles_8009D49C[0].field_4_sector);
        FS_MovieFileInit_80023860(pHeap, gDirFiles_8009D49C[3].field_4_sector);
    }
    else
    {
        mts_printf_8008BBA0(aIllegalDisk);
    }
    return disk_num;
}

void CDFS_Init_80021EC4()
{
    CDBIOS_Reset_80021F70();
    // TODO: hardcoded pointer
    gDiskNum_800ACBF0 = FS_ResetCdFilePosition_80021E2C((void *)0x80117000 /*heap_80117000*/); // addi vs ori
    FS_StreamCD_80023F8C();
    FS_StreamTaskInit_80023E1C();
    mts_wait_vbl_800895F4(2);
}

void FS_LoadFileRequest_80021F0C(int dirFile, int startSector, int sectorSize, void *pBuffer)
{
    CDBIOS_ReadRequest_8002280C(pBuffer, gDirFiles_8009D49C[dirFile].field_4_sector + startSector, sectorSize, 0);
}

int FS_LoadFileSync_80021F48(void)
{
    return CDBIOS_ReadSync_80022854();
}

void MakeFullPath_80021F68(void)
{

}

int CDBIOS_Reset_80021F70(void)
{
    int retries;
    unsigned char params[8];

    CDBIOS_TaskStart_800227A8();

    for (retries = 4; retries >= 0; retries--)
    {
        if (CdInit())
        {
            goto success;
        }
    }

    return 0;

success:
    params[0] = CdlModeSpeed | CdlModeSize1;
    while (!CdControl(CdlSetmode, params, 0));

    mts_wait_vbl_800895F4(3);
    return 1;
}

void sub_80021FE0(void)
{
    CdReadyCallback(0);
    CdSyncCallback(0);
    CdFlush();
    CdControl(CdlPause, 0, 0);
    dword_8009D4DC = 0;
}

void sub_80022024(void)
{
    if (cd_bios_task_800B4E58.field_10_ticks == 0)
    {
        cd_bios_task_800B4E58.field_10_ticks = mts_get_tick_count_8008BBB0();
    }

    dword_8009D4DC = 3;
    CdReadyCallback(0);
    CdSyncCallback(0);
    CdFlush();
}

void CDBIOS_Sync_Callback_80022088(u_char status, u_char *result)
{

}

static inline unsigned long get_time(CdlLOC *loc)
{
    return (btoi(loc->minute) * 4500 + btoi(loc->second) * 75 + btoi(loc->sector));
}

void CDBIOS_Ready_Callback_80022090(u_char status, u_char *result)
{
    int sector;
    int callback_status;
    unsigned int size;
    CDBIOS_TASK *task;
    CdlLOC loc[3];

    if (dword_cdbios_stop_8009D4E4 != 0)
    {
        sub_80021FE0();
        return;
    }

    if (status == 1)
    {
        task = &cd_bios_task_800B4E58;

        CdGetSector(loc, 3);

        sector = get_time(&loc[0]);

        if (sector < task->field_4_sector)
        {
            return;
        }

        if (sector > task->field_4_sector)
        {
            mts_printf_8008BBA0(aCdfsSkipErrorD, task->field_10_ticks, sector, task->field_4_sector);
        }
        else
        {
            size = 0x200;

            if (task->field_1C_remaining <= 512u)
            {
                size = task->field_1C_remaining;
            }

            if (task->field_8_buffer)
            {
                CdGetSector(task->field_8_buffer, size);
            }

            task->field_1C_remaining -= size;
            task->field_C = size;

            if (task->field_20_callback)
            {
                callback_status = task->field_20_callback(&cd_bios_task_800B4E58);

                if (callback_status == 0)
                {
                    sub_80021FE0();
                }
                else if (callback_status == 2)
                {
                    size = 0;
                }
            }

            if (task->field_8_buffer)
            {
                task->field_8_buffer = (int *)task->field_8_buffer + size;
            }

            task->field_4_sector++;
            task->field_14++;
            task->field_10_ticks = 0;

            if (task->field_1C_remaining <= 0)
            {
                sub_80021FE0();
            }

            return;
        }
    }

    sub_80022024();
}

static inline void set_time(char *buffer, int lba)
{
    int seconds;

    seconds = lba / 75;
    buffer[2] = itob(lba % 75);
    buffer[1] = itob(seconds % 60);
    buffer[0] = itob(seconds / 60);
}

void CDBIOS_Main_80022264(void)
{
    u_char param[4];
    u_char result[8];
    u_char param2[3];

    CDBIOS_TASK *pTask;

    int last_ticks;
    int last_sector;
    int failed_reads;
    int ticks;

    mts_set_vsync_task_800892B8();

    pTask = &cd_bios_task_800B4E58;

    last_ticks = 0;
    last_sector = 0;
    failed_reads = 0;

    while (1)
    {
        ticks = mts_get_tick_count_8008BBB0();

        if (dword_cdbios_stop_8009D4E4 != 0)
        {
            dword_cdbios_stop_8009D4E4 = 0;
            sub_80021FE0();
        }

        if (dword_8009D4DC >= 0)
        {
            pTask->field_0_state = dword_8009D4DC;
            dword_8009D4DC = -1;
        }

        if (dword_8009D4E0 != 0)
        {
            pTask->field_0_state = 1;
            dword_8009D4E0 = 0;
            dword_cdbios_stop_8009D4E4 = 0;
            dword_8009D4DC = -1;
        }

        switch (pTask->field_0_state)
        {
        case 0:
            break;

        case 1:
            last_sector = pTask->field_4_sector;
            failed_reads = 0;

            set_time(param, pTask->field_4_sector);

            CdFlush();
            CdSyncCallback(&CDBIOS_Sync_Callback_80022088);
            CdReadyCallback(&CDBIOS_Ready_Callback_80022090);

            pTask->field_10_ticks = 0;
            pTask->field_0_state = 2;

            if (!CdControl(CdlReadN, param, result))
            {
                sub_80022024();
            }

            last_ticks = ticks;
            break;

        case 2:
            if (last_sector != pTask->field_4_sector)
            {
                last_ticks = ticks;
                last_sector = pTask->field_4_sector;
            }
            else if ((ticks - last_ticks) > 500)
            {
                sub_80022024();
                mts_printf_8008BBA0(asc_800105B4);
            }
            break;

        case 3:
            mts_printf_8008BBA0(a__800105B8);

            CdFlush();
            CdReadyCallback(NULL);
            CdSyncCallback(NULL);

            if ((ticks - pTask->field_10_ticks) > 800)
            {
                if (CdReset(0))
                {
                    param2[0] = CdlModeSpeed | CdlModeSize1;

                    if (CdControl(CdlSetmode, param2, NULL))
                    {
                        mts_wait_vbl_800895F4(1);
                        mts_wait_vbl_800895F4(3);
                        pTask->field_10_ticks = mts_get_tick_count_8008BBB0();
                    }
                    else
                    {
                        break;
                    }
                }
                else
                {
                    break;
                }
            }

            CdFlush();

            if ((failed_reads % 4) < 3)
            {
                set_time(param, pTask->field_4_sector);
            }
            else
            {
                set_time(param, pTask->field_4_sector - 4);
            }

            CdFlush();
            CdSyncCallback(&CDBIOS_Sync_Callback_80022088);
            CdReadyCallback(&CDBIOS_Ready_Callback_80022090);

            if (dword_cdbios_stop_8009D4E4 == 0)
            {
                pTask->field_0_state = 2;

                if (!CdControl(CdlReadN, param, NULL))
                {
                    failed_reads++;
                    pTask->field_0_state = 3;
                }
                else
                {
                    last_sector = pTask->field_4_sector;
                    last_ticks = mts_get_tick_count_8008BBB0();
                }
            }
            break;

        default:
            mts_printf_8008BBA0(aD, pTask->field_0_state);
            break;
        }

        mts_wait_vbl_800895F4(1);
    }
}

void CDBIOS_TaskStart_800227A8(void)
{
    cd_bios_task_800B4E58.field_0_state = 0;

    dword_8009D4DC = -1;
    dword_cdbios_stop_8009D4E4 = 0;

    mts_set_stack_check_8008B648(10, (unsigned int *)&gLoaderRec_800B5288, 1024);
    mts_sta_tsk_8008B47C(10, &CDBIOS_Main_80022264, &gLoaderRec_800B5288);
}

void CDBIOS_ReadRequest_8002280C(void *pHeap, unsigned int startSector, unsigned int sectorSize, void *fnCallBack)
{
    cd_bios_task_800B4E58.field_8_buffer = pHeap;

    if (sectorSize == 0)
    {
        sectorSize = 0x7fff0000;
    }

    cd_bios_task_800B4E58.field_1C_remaining = (sectorSize + 3) >> 2;
    cd_bios_task_800B4E58.field_18_size = (sectorSize + 3) >> 2;
    cd_bios_task_800B4E58.field_4_sector = startSector;
    cd_bios_task_800B4E58.field_20_callback = fnCallBack;
    cd_bios_task_800B4E58.field_14 = 0;

    dword_cdbios_stop_8009D4E4 = 0;
    dword_8009D4E0 = 1;
}

int CDBIOS_ReadSync_80022854(void)
{
    return cd_bios_task_800B4E58.field_1C_remaining * 4;
}

void CDBIOS_ForceStop_80022864(void)
{
    if (cd_bios_task_800B4E58.field_0_state != 0)
    {
        dword_cdbios_stop_8009D4E4 = 1;
    }
}

int CDBIOS_TaskState_80022888(void)
{
    return cd_bios_task_800B4E58.field_0_state;
}

void CDFS_ParseFileName_80022898(char *pOutput, char *pInput, int input_len)
{
    while (input_len > 0)
    {
        *pOutput++ = *pInput++;
        if (!*pInput)
        {
            break;
        }

        --input_len;
        if (*pInput == ';')
        {
            break;
        }
    }
    *pOutput = 0;
}

int FS_CdMakePositionTable_helper2_800228D4(void *pBuffer, int startSector, int sectorSize)
{
    CDBIOS_ReadRequest_8002280C(pBuffer, startSector + 150, sectorSize, 0);

    while (1)
    {
        if (CDBIOS_ReadSync_80022854() <= 0)
        {
            break;
        }
        mts_wait_vbl_800895F4(1);
    }

    return 1;
}

FS_FILE_INFO_8009D49C *FS_FindDirEntry_80022918(char *pFileName, FS_FILE_INFO_8009D49C *pFile)
{
    FS_FILE_INFO_8009D49C *file;

    for (file = pFile; file->pDatName; file++)
    {
        if (!strcmp_8008E6F8(pFileName, file->pDatName))
        {
            return file;
        }
    }

    return 0;
}

// See: https://psx-spx.consoledev.net/cdromdrive/#cdrom-iso-file-and-directory-descriptors
static inline char getXAUserID(int directoryRecord, int fileIdentifierLength, int basicRecordLength)
{
    int xaRecord;
    int padding;

    xaRecord = fileIdentifierLength;
    xaRecord += directoryRecord;
    xaRecord = xaRecord + basicRecordLength;

    padding = fileIdentifierLength & 1;
    xaRecord = xaRecord - padding;
    return *((char *)xaRecord + 3);
}

#define byteswap_ulong(p) p[0] | (p[1] << 8) | (p[2] << 16) | (p[3] << 24)

int FS_CdMakePositionTable_helper_8002297C(char *inDirectoryRecord, FS_FILE_INFO_8009D49C *inDirectoryRecords)
{
    FS_FILE_INFO_8009D49C *foundRecord;
    const char           **diskNameIterator;
    const char            *currentStringPtr;
    int                    fileIdentifierLength;
    char                   parsedFileName[32];
    char                  *sectorBaseValues;
    char                  *topValues;
    char                  *sizeValues;
    int                    sectorBase;
    int                    top;
    int                    size;
    int                    returnValue;
    int                    stringCount;
    int                    basicRecordLength;
    char                  *fileIdentifier;
    char                  *directoryRecord;
    FS_FILE_INFO_8009D49C *directoryRecords;

    directoryRecords = inDirectoryRecords;
    directoryRecord = inDirectoryRecord;
    returnValue = -1;

    while (*directoryRecord != 0)
    {
        fileIdentifierLength = directoryRecord[32];

        if (fileIdentifierLength != 1)
        {
            fileIdentifier = directoryRecord + 33;
            CDFS_ParseFileName_80022898(parsedFileName, fileIdentifier, fileIdentifierLength);

            if ((directoryRecord[25] & 2) == 0)
            {
                foundRecord = FS_FindDirEntry_80022918(parsedFileName, directoryRecords);

                if (foundRecord)
                {
                    basicRecordLength = 35;

                    if (parsedFileName[0] == 'Z' && getXAUserID((int)directoryRecord, fileIdentifierLength, basicRecordLength) == 0xd)
                    {
                        foundRecord->field_4_sector = 0;
                    }
                    else
                    {
                        sectorBaseValues = (directoryRecord + 2);
                        sectorBase = byteswap_ulong(sectorBaseValues);
                        foundRecord->field_4_sector = sectorBase + 150;
                    }
                }
                else
                {
                    diskNameIterator = MGS_DiskName_8009D2FC;
                    currentStringPtr = *diskNameIterator;
                    stringCount = 0;

                    while (currentStringPtr)
                    {
                        if (strcmp_8008E6F8(parsedFileName, diskNameIterator[0]) == 0)
                        {
                            returnValue = stringCount;
                        }

                        diskNameIterator++;
                        currentStringPtr = *diskNameIterator;
                        stringCount++;
                    }
                }

                topValues = (directoryRecord + 2);
                top = byteswap_ulong(topValues);

                sizeValues = (directoryRecord + 10);
                size = byteswap_ulong(sizeValues);

                mts_printf_8008BBA0(aFileSTopDSizeD, parsedFileName, top, size, foundRecord->field_4_sector);
            }
        }

        directoryRecord += *directoryRecord;
    }

    return returnValue;
}

int FS_CdMakePositionTable_80022B5C(char *pHeap, FS_FILE_INFO_8009D49C *pDirRecs)
{
    char *buffer2;
    char *dir_block_ptr;
    int directory_block;
    int path_table_size;
    int ret;
    int uVar7;
    int directory_length;
    char *directory_block_data;
    char directory_name[16];

    FS_CdMakePositionTable_helper2_800228D4(pHeap, 16, 2048);

    if (strncmp_8008E7F8(pHeap + 8, aPlaystation, 11))
    {
        return -1;
    }

    path_table_size = *(int *)(pHeap + 0x84);

    FS_CdMakePositionTable_helper2_800228D4(pHeap, *(int *)(pHeap + 0x8c), path_table_size);
    directory_block_data = pHeap + ((((unsigned int)path_table_size + 3) >> 2) << 2);

    ret = -1;
    buffer2 = pHeap;

    while (path_table_size > 0)
    {
        directory_length = *buffer2;
        uVar7 = directory_length + 8;

        CDFS_ParseFileName_80022898(directory_name, buffer2 + 8, directory_length);

        dir_block_ptr = buffer2 + 2;
        directory_block = *dir_block_ptr | (*(dir_block_ptr + 1) << 8) | (*(dir_block_ptr + 2) << 16) | (*(dir_block_ptr + 3) << 24);

        if (!strcmp_8008E6F8(directory_name, aMgs))
        {
            mts_printf_8008BBA0(aMgsReadSectorD, directory_block);
            FS_CdMakePositionTable_helper2_800228D4(directory_block_data, directory_block, 2048);
            ret = FS_CdMakePositionTable_helper_8002297C(directory_block_data, pDirRecs);
        }

        if (uVar7 & 1)
        {
            uVar7 = directory_length + 9;
        }

        path_table_size -= uVar7;
        buffer2 += uVar7;
    }

    return ret;
}

int FS_CdStageFileInit_helper_80022CBC(CDBIOS_TASK *task)
{
    unsigned int size, rounded;

    if (!task->field_14)
    {
        size = *(unsigned int *)task->field_8_buffer;
        rounded = (size + 3) / 4;

        task->field_18_size = rounded;
        task->field_1C_remaining = rounded - 512;

        fs_file_table_8009D4E8.field_4_size = size;
    }

    return 1;
}

void FS_CdStageFileInit_80022D00(void *pHeap, int startSector)
{
    int size;

    fs_file_table_8009D4E8.field_0_start = startSector;
    CDBIOS_ReadRequest_8002280C(pHeap, startSector, 2048, &FS_CdStageFileInit_helper_80022CBC);

    while (CDBIOS_ReadSync_80022854() > 0)
    {
        mts_wait_vbl_800895F4(1);
    }

    size = fs_file_table_8009D4E8.field_4_size;

    if (!fs_file_table_8009D4E8.field_C_files)
    {
        fs_file_table_8009D4E8.field_C_files = GV_AllocResidentMemory_800163D8(size);
    }

    mts_printf_8008BBA0(aXXD, (char *)pHeap + 4, fs_file_table_8009D4E8.field_C_files, size);
    GV_CopyMemory_800160D8((char *)pHeap + 4, fs_file_table_8009D4E8.field_C_files, size);

    fs_file_table_8009D4E8.field_8_count = size / sizeof(FS_FILE);
}

int FS_CdGetStageFileTop_80022DCC(char *pFileName)
{
    FS_FILE *file;
    int count;

    file = fs_file_table_8009D4E8.field_C_files;

    for (count = fs_file_table_8009D4E8.field_8_count; count > 0; count--)
    {
        if (!strncmp_8008E7F8(file->field_0_name, pFileName, 8))
        {
            return file->field_4_offset + fs_file_table_8009D4E8.field_0_start;
        }

        file++;
    }

    return -1;
}
