#include "enemy.h"

void EnemyResetThink_800CB224( WatcherWork* work ) 
{
    work->think1 = 0;
    work->think2 = 0;
    work->think3 = 0;
    work->count3 = 0;
    work->field_B4C = 0;
    work->pad.field_08 = 0;
}

void s00a_command_800CB240( WatcherWork* work ) 
{
    work->think2 = 7;
    work->think3 = 14;
    work->count3 = 0;
}

void s00a_command_800CB258( WatcherWork *work )
{
    if ( work->field_B7C == 0xFF )
    {
        work->think1 = 1;
        work->think2 = 8;
        work->think3 = 19;
    }
    else
    {
        work->think1 = 1;
        work->think2 = 10;
        work->think3 = 28; 
        s00a_command_800CB0E0( work );
    }
    work->count3 = 0;
    work->pad.field_08 = 1;
}

void s00a_command_800CB2C8( WatcherWork *work )
{

    work->think1 = 1;
    work->think2 = 9;
    work->think3 = 27;
    work->count3 = 32;
    work->pad.field_08 = 1;
}

void s00a_command_800CB2F4( WatcherWork *work )
{
    if ( work->field_B7C == 0xFF )
    {
        s00a_command_800CAFD4( work );
        work->think1 = 1;

        if ( EnemyCommand_800E0D98.field_0x40 == 1 )
        {
            work->think2 = 8;
            work->think3 = 18;
        }
        else
        {
            work->think2 = 10;
            work->think3 = 29;
        }
    }
    else
    {
        s00a_command_800CB0E0( work );
        work->think1 = 1;
        work->think2 = 10;
        work->think3 = 28;
    }
    work->count3 = 0;
    work->pad.field_08 = 1;
}

void s00a_command_800CB394( WatcherWork *work )
{
    work->think1 = 1;
    work->think2 = 10;
    
    if ( work->field_B7C == 0xFF )
    {
        work->think3 = 29;
    }
    else
    {
        s00a_command_800CB0E0( work );
        work->think3 = 28;
    }
    
    work->count3 = 0;
    work->pad.field_08 = 1;
}

void s00a_command_800CB3F0( WatcherWork *work )
{

    work->think2 = 4;

    if ( (work->act_status & 0x10) && (work->field_BA1 & 8) )
    {
        work->think3 = 0xE;
    }
    else
    {
        work->think3 = 4;
    }
    
    work->count3 = 0;
    work->modetime[2] = 0;
}

void SetThink_Move_800CB42C( WatcherWork* work )
{
    EnemyCommand_800E0D98.field_0x40 = 0;
    if ( work->act_status & 4 )
    {
        work->think1 = 2;
        s00a_command_800CB3F0( work );
        work->pad.field_08 = 0;
        return;       
    }

    if ( work->field_B7C != 0xFF )
    {
        if ( !( sub_8005D134( work->control.field_2C_map->field_8_hzd, &work->control.field_0_mov, work->field_B7C ) ) )
        {
            s00a_command_800CB0E0( work );
            work->think1 = 2;
            work->think2 = 11;
            work->pad.field_08 = 1;
        }
        else
        {
            work->think1 = 2;
            work->think2 = 13;
            work->think3 = 34;
            work->think4 = 3;
            work->pad.field_08 = 0;
        }
    }
    else
    {
        if ( work->field_BFC >= 5800 )
        {
            work->think1 = 2;
            work->think2 = 13;
            work->think3 = 34;
            work->think4 = 3;
            work->pad.field_08 = 0;
        }
        else
        {
            work->think1 = 2;
            work->think2 = 11;
            work->pad.field_08 = 1;
        }
    }
    work->count3 = 0;
}

void s00a_command_800CB504( WatcherWork* work )
{
    switch( GM_NoisePower_800ABA24 )
    {
    case 5:
        work->think2 = 1;
        work->think3 = 8;
        break;
    case 200:
        s00a_command_800CAB74( work );
        s00a_command_800CEB54();
        work->think2 = 1;

        if (work->act_status & 0x10 )
        {
            work->think3 = 15;
        }
        else 
        {
            work->think3 = 6;
        }
        break;
    case 255:
        s00a_command_800CAB74( work );
        s00a_command_800CEB54();
        work->think2 = 7;
        work->think3 = 16;
        break;
    default:
    case 100:
        s00a_command_800CAB74( work );
        work->think2 = 1;

        if ( work->act_status & 0x10 )
        {
            work->think3 = 14;
        } 
        else
        {
            work->think3 = 5;
        }
        work->modetime[0] = 0;
        break;
    }
    work->count3 = 0;
}

void s00a_command_800CB610( WatcherWork* work ) 
{
    work->think2 = 2;
    work->think3 = 5;
    work->count3 = 0;
}


extern char NearAsiato_800D13A0();

void s00a_command_800CB628( WatcherWork *work )
{
    work->think2 = 5;
    work->think3 = 5;
    work->field_BA0 = NearAsiato_800D13A0();
    work->count3 = 0;
}

void s00a_command_800CB660( WatcherWork *work )
{
    int addr;
    HZD_HDL *hzd;

    hzd  = work->control.field_2C_map->field_8_hzd;
    addr = HZD_GetAddress_8005C6C4( hzd, &work->control.field_0_mov, -1 );

    work->field_C04 = addr;
    if ( sub_8005CD1C( hzd, addr & 0xFF, work->target_addr & 0xFF ) < 200 )
    {
        work->pad.field_08 = 0;
    }
    else
    {
        work->pad.field_08 = 1;
    }
}

int s00a_command_800CB6CC( WatcherWork* work )
{
    int count;
    int v1;

    count = work->l_count;
    v1 = count / 30;
    v1 = v1 + work->field_B78;

    if ( v1 == 1 || v1 == 4 )
    {
        work->pad.press |= 0x2;
    }
    else if ( v1 == 2 || v1 == 5 )
    {
        work->pad.press |= 0x1;
    }

    if ( count > 90 )
    {
        work->l_count = 0;
        return 1;
    }
    else
    {
        work->l_count++;
        return 0;
    }
}

int s00a_command_800CB770( WatcherWork* work )
{
    int count;

    count = work->l_count;

    if ( count == 0 )
    {
        work->control.field_4C_turn_vec.vy = ( work->control.field_4C_turn_vec.vy + 0x800 ) & 0xFFF;
    }

    if ( count == 24 )
    {
        work->control.field_4C_turn_vec.vy = ( work->control.field_4C_turn_vec.vy + 0x800 ) & 0xFFF;
    }

    if ( count > 30 )
    {
        work->l_count = 0;
        return 1;
    }
    else
    {
        work->l_count++;
        return 0;
    }
}

int s00a_command_800CB7E0( WatcherWork *work )
{
    work->count3++;
    work->pad.dir = work->sn_dir;
    return 0;
}

int s00a_command_800CB7FC( WatcherWork *work )
{
    int count = work->count3;
    
    if ( count == 0 )
    {
        work->pad.sound = 245;
    }
    else
    {
        if ( count > 32 )
        {
            return 1;
        }       
    }
    work->count3++;
    return 0;
}

extern SVECTOR GM_PlayerPosition_800ABA10;

int s00a_command_800CB838( WatcherWork *work )
{
    int temp;
    SVECTOR svec;
    CONTROL *ctrl;
    HZD_HDL *hzd;
    HZD_ZON *zone;
    int addr, addr2, addr3;
    int reach;
    
    ctrl = &work->control;
    hzd  = work->control.field_2C_map->field_8_hzd;
    addr = work->target_addr;

    addr2 = HZD_GetAddress_8005C6C4( hzd, &ctrl->field_0_mov, work->field_C04 );
    work->field_C04 = addr2;

    reach = HZD_ReachTo_8005C89C( hzd, addr2, work->field_C08 );

    if ( addr != work->field_BF0 || reach <= 0 )
    {
        work->field_BF0 = addr;
        if ( sub_8005D134( hzd, &work->control.field_0_mov, work->target_addr & 0xFF ) )
        {
            work->field_C14 = work->target_pos;
            work->field_C08 = addr;

            GV_SubVec3_80016D40( &work->field_C14, &ctrl->field_0_mov, &svec );

            work->pad.dir = GV_YawVec3_80016EF8( &svec );
            return -1;
        }
    
        if ( !( work->field_C00 & 1 ) )
        {
            addr3 = sub_8005CB48( hzd, addr2, addr, &ctrl->field_0_mov );
            zone = &hzd->f00_header->navmeshes[ addr3 ];
    
            if ( GM_PlayerPosition_800ABA10.vx & 1 )
            {
                work->field_C14.vx = zone->x + 230;
            }
            else
            {
                 work->field_C14.vx = zone->x - 230;
            }
    
            if ( GM_PlayerPosition_800ABA10.vz & 1 )
            {
                work->field_C14.vz = zone->z + 230;
            }
            else
            {
                 work->field_C14.vz = zone->z - 230;
            }
            work->field_C14.vy = zone->y;
        }
        else
        {
            addr3 = HZD_LinkRoute_8005C974( hzd, addr2, addr, &ctrl->field_0_mov );
            zone = &hzd->f00_header->navmeshes[ addr3 ];
            work->field_C14.vx = zone->x;
            work->field_C14.vy = zone->y;
            work->field_C14.vz = zone->z;
        }
        temp = addr3 & 0xFF;
        work->field_C08 = temp | temp << 8;
    }

    GV_SubVec3_80016D40( &work->field_C14, &work->control.field_0_mov, &svec );
    return GV_YawVec3_80016EF8( &svec );
}

int s00a_command_800CBA50( WatcherWork *work )
{
    int i;
    MAP *map;
    HZD_PAT *patrol;
    HZD_PTP *points;

    map = Map_FromId_800314C0( work->start_map );
    patrol = map->field_8_hzd->f00_header->routes;
    patrol = &patrol[ work->field_B7D ];
    
    work->field_9E8 = patrol->n_points;

    if ( work->field_9E8 <= 0 ) return -1;

    points = patrol->points;
    for ( i = 0 ; i < work->field_9E8 ; i++ )
    {
        work->nodes[i].vx  = points->x;
        work->nodes[i].vy  = points->y;
        work->nodes[i].vz  = points->z;
        work->nodes[i].pad = points->command;
        points++;
    }
    
    work->start_pos = work->nodes[0];
    work->start_addr = HZD_GetAddress_8005C6C4( map->field_8_hzd, &work->start_pos, -1 );
    return 0;
}

extern int GV_Time_800AB330;
extern int s00a_dword_800C3524[];
extern unsigned short s00a_dword_800C351C[];

int s00a_command_800CBB44( WatcherWork *work )
{
    int a2;
    int a0, a3;
    int t0, t1, t2;
    int v0;
    
start:
    //    starting from lo      
    //   | a3 |t2 |t1 | t0   //
    //000|0 00|00 |000|0 0000//
    
    v0 = work->target_pos.pad;
    t0 = ( v0 & 0x1F );         //5 bits
    t1 = ( v0 & 0xE0 ) >> 5;    //3 bits
    t2 = ( v0 & 0x300) >> 8;    //2 bits
    a3 = ( v0 & 0x1C00 ) >> 10; //3 bits

    if ( s00a_dword_800C3524[ t0 ] == 0x1F )
    {
        work->field_B7E = a3 + (t2 * 8);
        return 0;
    }
    
    if ( t1 != 6 )
    {

        a2 = GV_Time_800AB330 % 100;
        a0 = a3 & 3;
        a3 = a3 & 4;
    
        if ( a2 >= s00a_dword_800C351C[ a0 ] || work->field_B4C == 1 )
        {
            work->field_B4C = 0;
            s00a_command_800CB13C( work );
            if ( !DirectTrace_800CC154( work , 350 ) )
            {
                return 0;
            }
            goto start;
        }
        
        if ( a3 != 0 )
        {
            work->field_B4C = 1;
        }    
    }
    
    work->pad.time = work->field_BB0[t1];
    work->pad.tmp = s00a_dword_800C3524[t0];

    if ( COM_GameStatus_800E0F3C & 1 )
    {
        if ( work->pad.tmp == 0x80 || work->pad.tmp == 0x200 || work->pad.tmp == 0x400 || work->pad.tmp == 0x800 )
        {
            work->pad.tmp = 0;
            if ( work->pad.time == 450 )
            {
                work->pad.time = 90;
            }
        }
    }

    if ( t0 == 0 && t1 == 0 )
    {
        work->pad.time = 0;
        work->pad.dir = work->control.field_8_rotator.vy;
        s00a_command_800CB13C( work );
        return 0;
    }
    else
    {
        
    }

    if ( t0 & 0x10 && t0 != 0x1F )
    {        
        s00a_command_800CB13C( work );
        return 0;
    }

    work->pad.dir = work->field_BD0[t2];
    return 1;
}

int s00a_command_800CBD2C( WatcherWork* work )
{
    int len; 
    CONTROL *ctrl;
    GV_MSG  *msg;
    
    ctrl = &work->control;
    len = ctrl->field_56;
    msg = ctrl->field_5C_mesg;

    for ( ; len > 0 ; len--, msg++ )
    {
        if ( msg->message[0]  == work->field_B4C )
        {
            return 1;
        }
    }
    return 0;
}

int s00a_command_800CBD6C( WatcherWork* work )
{
    if ( work->pad.time == 32001 )
    {
        if ( s00a_command_800CBD2C( work ) )
        {
            work->field_B4C = 0;
            work->pad.time  = 0;
            return 1;
        }
        work->pad.press |= work->pad.tmp;
        return 0;
    }

    if ( !work->pad.time )
    {
        return 1;
    }
    
    work->pad.press |= work->pad.tmp;
    work->pad.time--;
    return 0; 
}

extern const char aKirari_800E06E8[]; //"kirari01";
extern void NewEyeflash_800D0CF4( MATRIX *, SVECTOR *, const char *, int );

int s00a_command_800CBDFC( WatcherWork* work )
{
    int count;

    count = work->count3;

    if ( count == 0 )
    {
        ENE_PutMark_800C9378( work, 0 );
        NewEyeflash_800D0CF4( &work->body.objs->objs[6].world, &work->control.field_0_mov, aKirari_800E06E8, 0 );
        COM_VibTime_800E0F68 = 10;
    }

    if ( count < 20 )
    {
        work->pad.press |= 0x20;
        work->count3++;
        return 0;
    }

    return 1;
    
}

int s00a_command_800CBE90( WatcherWork* work )
{
    if ( work->count3 == 0 )
    {
        ENE_PutMark_800C9378( work, 0 );
        s00a_command_800CC210( work );
        COM_VibTime_800E0F68 = 10;
    }

    if ( work->count3 > 20 )
    {
        return 1;
    }

    work->count3++;
    return 0;
}

extern const char aErrnozoneidingcl_800E06C0[];
extern const char aBefmapnamed_800E06F4[];// "bef map name =%d \n";
extern const char aAftmapnamed_800E0708[];// "aft map name =%d \n";

int s00a_command_800CBF00( WatcherWork *work )
{
    int addr2;
    SVECTOR svec;
    int addr;
    CONTROL *ctrl;
    DG_OBJS* objs;
    HZD_ZON *zone;
    MAP *map;

    objs = work->body.objs;
    if ( objs->bound_mode )
    {
        return 0;
    }

    if (!( work->act_status & 0x100 ) )
    {
        return 0;
    }

    ctrl = &work->control;
    addr2 = work->field_C04 & 0xFF;
    addr = sub_8005CFAC( ctrl->field_2C_map->field_8_hzd, work->target_addr & 0xFF, addr2,  0xC8 );

    if ( addr == addr2 )
    {
        return 0;
    }

    zone = &ctrl->field_2C_map->field_8_hzd->f00_header->navmeshes[ addr ];
    svec.vx = zone->x;
    svec.vy = zone->y;
    svec.vz = zone->z;
    DG_PointCheck_8001BF34( &svec, 1 );

    if ( svec.pad == 1 )
    {
        return 0;
    }

    ctrl->field_0_mov.vx = zone->x;
    ctrl->field_0_mov.vy = zone->y + 1000;
    ctrl->field_0_mov.vz = zone->z;

    printf( aBefmapnamed_800E06F4, ctrl->field_2C_map->field_0_map_index_bit );
    
    map = Map_FindByZoneId_80031624( 1 << zone->padding );
    if ( map )
    {
        ctrl->field_2C_map = map;
    }
    else
    {
        printf( aErrnozoneidingcl_800E06C0 );
    }

    printf( aAftmapnamed_800E0708, ctrl->field_2C_map->field_0_map_index_bit );
    return 1;
}

int s00a_command_800CC064( WatcherWork* work ) 
{
    if ( !(work->count3 & 31 ) )
    {
        work->field_C04 = -1;
        work->field_BF0 = -1;
        s00a_command_800CB838( work );
    }

    work->pad.dir = s00a_command_800CB838( work );
    if ( work->pad.dir < 0 )
    {
        return 1;
    }

    work->count3++;
    return 0;  
}

int s00a_command_800CC0D4( WatcherWork* work )
{
    if ( s00a_command_800CBF00( work ) )
    {
        return 1;
    }

    if ( !(work->count3 & 31 ) )
    {
        work->field_C04 = -1;
        work->field_BF0 = -1;
        s00a_command_800CB838( work );
    }

    work->pad.dir = s00a_command_800CB838( work );
    if ( work->pad.dir < 0 )
    {
        return 1;
    }

    work->count3++;
    return 0;  
}

int DirectTrace_800CC154( WatcherWork* work, int a1 )
{
    int x, z;
    SVECTOR svec;
    

    svec.vx = x = work->target_pos.vx - work->control.field_0_mov.vx;
    svec.vz = z = work->target_pos.vz - work->control.field_0_mov.vz;

    if ( -a1 >= x || x >= a1 || -a1 >= z || z >= a1 )
    {
        work->pad.dir = GV_YawVec3_80016EF8( &svec );
        work->count3++;
        return 0;
    }

    return 1;
}

int s00a_command_800CC1DC(SVECTOR* arg0, SVECTOR* arg1 )
{
    SVECTOR svec;

    GV_SubVec3_80016D40(arg1, arg0, &svec);
    return GV_YawVec3_80016EF8(&svec);
}

void s00a_command_800CC210( WatcherWork* work )
{
    work->pad.dir = s00a_command_800CC1DC( &work->control.field_0_mov, &work->target_pos );
}

int s00a_command_800CC240(SVECTOR* svec, SVECTOR* svec2, int a1) {
    int x, z;   

    x = svec->vx - svec2->vx;
    z = svec->vz - svec2->vz;

    if ( -a1 < x || x < a1 || -a1 < z || z < a1 )
    {
        return 0;
    }

    return 1;
}

int NextAsiato_800D12D0( HZD_HDL*, signed char, SVECTOR * );

int s00a_command_800CC294( WatcherWork *work )
{
    int x;

    x = NextAsiato_800D12D0( work->control.field_2C_map->field_8_hzd, work->field_BA0, &work->control.field_0_mov );

    if ( x >= 0 )
    {
        work->field_BA0 = x;
        return 1;
    }
    
    work->field_BA0 = -1;
    return 0;
}

extern const char aRootchange_800E071C[];//" Root Change !!\n";

int s00a_command_800CC2E8( WatcherWork* work )
{

    if ( work->field_B7E != work->field_B7D )
    {
        fprintf( 1, aRootchange_800E071C );
        work->field_B7D = work->field_B7E;
        s00a_command_800CBA50( work );
        return 1;
    }

    return 0;
}

int s00a_command_800CC344( WatcherWork *work )
{
    if ( work->count3 == 0 )
    {
       if ( COM_GameStatus_800E0F3C & 0x2000 )
       {
           work->think3 = 13;
           return 0;
       }

        COM_GameStatus_800E0F3C |= 0x2000;
        work->pad.dir = work->sn_dir;
    }

    if ( work->count3 == 63 && !( work->field_BA1 & 16 ) && EnemyCommand_800E0D98.mode == TOP_COMM_TRAVEL )
    {
        work->pad.sound = 140;
    }

    if ( work->actend || work->count3 >= 301 )
    {
        return 1;
    }

    work->pad.press |= SP_DANBOWLKERI;
    work->count3++;

    return 0;
}

int s00a_command_800CC40C( WatcherWork *work )
{
    if ( !( COM_GameStatus_800E0F3C & 0x2000 ) )
    {
        return 1;
    }
    
    work->pad.press |= 0x4;
    work->count3++;
    return 0;
}

int s00a_command_800CC44C( WatcherWork *work ) 
{
    int count;
    int v1;

    count = work->l_count;

    if ( count == 0 && work->field_C00 == 0 )
    {
        work->pad.sound = 132;
    }
    
    v1 = count / 30;
    v1 = v1 + work->field_B78;

    if ( v1 == 1 || v1 == 4 )
    {
        work->pad.press |= 0x2;
    }
    else if ( v1 == 2 || v1 == 5 )
    {
        work->pad.press |= 0x1;
    }

    if ( count > 90 )
    {
        work->l_count = 0;
        return 1;
    }
    else
    {
        work->l_count++;
        return 0;
    }
}

int Think3_GoNext_800CC514( WatcherWork* work ) {
    if ( work->pad.time ) {
        (work->pad.press |= (  work->pad.tmp  )) ;
        work->pad.time -- ;
    }

    if ( DirectTrace_800CC154( work, 350 ) ) {
        return 1 ;
    }

    return 0 ;
}

int	Think3_BikkuriGetUp_800CC568( WatcherWork* work )
{
    if( work->count3 == 0){
        work->pad.press |= 0x00001000  ;
    } else  if( work->count3 > 90 || work->actend ){

        return 1 ;
    }
    work->count3 ++ ;
    return 0 ;
}

int	Think3_NoiseModeWatch_800CC5C0( WatcherWork *work )
{
    if ( work->act_status & 0x00000080  )
    {
        work->pad.press |= 0x00800000  ;
    }

    if( work->count3 == 0)
    {
        if(	EnemyCommand_800E0D98.mode  == TOP_COMM_TRAVEL )
        {
            if( work->modetime[(  T_NOISE  )]  <= 1 )
            {
                work->pad.sound = (  0x88   ) ;
            }
            if( work->modetime[(  T_NOISE  )]  <= 3 )
            {
                ENE_PutMark_800C9378( work ,BW_MARK );
            }
            if ( !(work->act_status & 0x00000080 ) )
            {
                work->pad.dir = work->sn_dir;
            }
        }
        else
        {
            if( work->modetime[(  T_NOISE  )] ) return 1;
            work->pad.sound = 0x95;
            ENE_PutMark_800C9378( work ,BW_MARK );
            work->pad.dir = work->sn_dir;
        }
    }
    else
    {
        work->pad.dir = -1;
    }

    switch( work->modetime[(  T_NOISE  )] )
    {
        case 0:
            if( work->count3 >= 16)
            {
                if(	EnemyCommand_800E0D98.mode  == TOP_COMM_TRAVEL )
                {
                    if ( !(work->act_status & 0x00000080 ) )
                    {
                        work->pad.sound = 0xF1;
                    }
                }
                return 1;
            }
            break;
        case 1:
        case 2:
            if ( work->count3 >= 48 )
            {
                return 1;
            }
            break;
        case 3:
            return 1;
    }
    work->count3++;
    return 0;
}