#ifndef _SCN_MASK_H_
#define _SCN_MASK_H_

#include "linker.h"
#include "actor.h"
#include "libdg.h"
#include "dgd.h"
#include <sys/types.h>
#include <libgte.h>
#include <libgpu.h>

typedef struct scn_mask_prims
{
    DR_TPAGE field_0_unknown1[2];
    TILE field_10_tile_big[2];
    DR_TPAGE field_30_unknown2[2];
    TILE field_40_tile_lines[2][112];
} scn_mask_prims;

typedef struct Actor_scn_mask
{
    Actor field_0_actor;
    struct scn_mask_prims *field_20_pPrims;
    int field_24;
    int field_28;
} Actor_scn_mask;

#endif // _SCN_MASK_H_