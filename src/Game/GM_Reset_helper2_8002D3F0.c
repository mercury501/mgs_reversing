#include "linker.h"

extern int dword_800ABA6C;
extern int dword_800ABA68;

int SECTION(".sbss") dword_800ABA6C;
int SECTION(".sbss") dword_800ABA68;

void GM_Reset_helper2_8002D3F0(void)
{
    dword_800ABA68 = 0;
    dword_800ABA6C = 0;
    return;
}
