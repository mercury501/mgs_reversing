#include "linker.h"

int s08a_dword_800C3550 = 0x0008512D;
int s08a_dword_800C3554 = 0x001E0004;
int s08a_dword_800C3558 = 0x03E80001;
int s08a_dword_800C355C = 0x0FA00003;
int s08a_dword_800C3560 = 0x00FF0FA0;
int s08a_dword_800C3564 = 0x00000000;
int s08a_dword_800C3568 = 0x800D7FA4;
int s08a_dword_800C356C = 0x0008512D;
int s08a_dword_800C3570 = 0x001E0004;
int s08a_dword_800C3574 = 0x03E80001;
int s08a_dword_800C3578 = 0x0BB80003;
int s08a_dword_800C357C = 0x00200BB8;
int s08a_dword_800C3580 = 0x00000000;
int s08a_dword_800C3584 = 0x800D7FC0;
int s08a_dword_800C3588 = 0x0008512D;
int s08a_dword_800C358C = 0x001E0004;
int s08a_dword_800C3590 = 0x03E80001;
int s08a_dword_800C3594 = 0x05DC0002;
int s08a_dword_800C3598 = 0x008005DC;
int s08a_dword_800C359C = 0x00000000;
int s08a_dword_800C35A0 = 0x800D7FDC;
int s08a_dword_800C35A4 = 0x0008512D;
int s08a_dword_800C35A8 = 0x001E0004;
int s08a_dword_800C35AC = 0x03E80001;
int s08a_dword_800C35B0 = 0x01F40002;
int s08a_dword_800C35B4 = 0x000801F4;
int s08a_dword_800C35B8 = 0x00000000;
int s08a_dword_800C35BC = 0x800D801C;
int s08a_dword_800C35C0 = 0x0008512D;
int s08a_dword_800C35C4 = 0x001E0004;
int s08a_dword_800C35C8 = 0x03E80001;
int s08a_dword_800C35CC = 0x01F40002;
int s08a_dword_800C35D0 = 0x001001F4;
int s08a_dword_800C35D4 = 0x00000000;
int s08a_dword_800C35D8 = 0x800D801C;
int s08a_dword_800C35DC = 0x0008512D;
int s08a_dword_800C35E0 = 0x001E0004;
int s08a_dword_800C35E4 = 0x0BB80001;
int s08a_dword_800C35E8 = 0x03E80002;
int s08a_dword_800C35EC = 0x002003E8;
int s08a_dword_800C35F0 = 0x00000000;
int s08a_dword_800C35F4 = 0x800D80D0;
int s08a_dword_800C35F8 = 0x0008512D;
int s08a_dword_800C35FC = 0x001E0004;
int s08a_dword_800C3600 = 0x0BB80001;
int s08a_dword_800C3604 = 0x03E80002;
int s08a_dword_800C3608 = 0x002003E8;
int s08a_dword_800C360C = 0x00000000;
int s08a_dword_800C3610 = 0x800D80D0;
int s08a_dword_800C3614 = 0x0008512D;
int s08a_dword_800C3618 = 0x001E0004;
int s08a_dword_800C361C = 0x03E80001;
int s08a_dword_800C3620 = 0x01F40003;
int s08a_dword_800C3624 = 0x00FF01F4;
int s08a_dword_800C3628 = 0x00000000;
int s08a_dword_800C362C = 0x800D8110;
int s08a_dword_800C3630 = 0x0008512D;
int s08a_dword_800C3634 = 0x001E0004;
int s08a_dword_800C3638 = 0x03E80001;
int s08a_dword_800C363C = 0x01F40002;
int s08a_dword_800C3640 = 0x001001F4;
int s08a_dword_800C3644 = 0x00000000;
int s08a_dword_800C3648 = 0x800D81C8;
int s08a_dword_800C364C = 0x0008512D;
int s08a_dword_800C3650 = 0x001E0004;
int s08a_dword_800C3654 = 0x03E80001;
int s08a_dword_800C3658 = 0x01F40003;
int s08a_dword_800C365C = 0x000001F4;
int s08a_dword_800C3660 = 0x00000000;
int s08a_dword_800C3664 = 0x800D8280;
int s08a_dword_800C3668 = 0x0008512D;
int s08a_dword_800C366C = 0x001E0004;
int s08a_dword_800C3670 = 0x03E80001;
int s08a_dword_800C3674 = 0x01F40003;
int s08a_dword_800C3678 = 0x00FF01F4;
int s08a_dword_800C367C = 0x00000000;
int s08a_dword_800C3680 = 0x800D8348;
int s08a_dword_800C3684 = 0x0008512D;
int s08a_dword_800C3688 = 0x001E0004;
int s08a_dword_800C368C = 0x03E80001;
int s08a_dword_800C3690 = 0x01F40002;
int s08a_dword_800C3694 = 0x001001F4;
int s08a_dword_800C3698 = 0x00000000;
int s08a_dword_800C369C = 0x800D83DC;
int s08a_dword_800C36A0 = 0x0008512D;
int s08a_dword_800C36A4 = 0x001E0004;
int s08a_dword_800C36A8 = 0x03E80001;
int s08a_dword_800C36AC = 0x00010003;
int s08a_dword_800C36B0 = 0x00FF0001;
int s08a_dword_800C36B4 = 0x00000000;
int s08a_dword_800C36B8 = 0x800D8470;
int s08a_dword_800C36BC = 0x3C808080;
int s08a_dword_800C36C0 = 0x0008512D;
int s08a_dword_800C36C4 = 0x001E0004;
int s08a_dword_800C36C8 = 0x00FF0001;
int s08a_dword_800C36CC = 0x00640001;
int s08a_dword_800C36D0 = 0x00500064;
int s08a_dword_800C36D4 = 0x00000000;
int s08a_dword_800C36D8 = 0x800D84E0;



const char s08a_dword_800D7F98[] = {'d', 'e', 'a', 't'};
const char s08a_dword_800D7F9C[] = {'h', '_', 's', 'p'};
const char s08a_dword_800D7FA0[] = {'.', 'c', 0x0, 'V'};
const char s08a_dword_800D7FA4[] = {0x0, 0x15, 0x1, 0x0};
const char s08a_dword_800D7FA8[] = {0x5, 0x1, 0xfe, 0xc};
const char s08a_dword_800D7FAC[] = {0x0, '\n', '\n', 0x0};
const char s08a_dword_800D7FB0[] = {0xc8, 0x0, 0xc8, 0x1};
const char s08a_dword_800D7FB4[] = {0xff, 0x8, 0xe7, 0xe7};
const char s08a_dword_800D7FB8[] = {0xe7, 0x2, 0x0, 0x1};
const char s08a_dword_800D7FBC[] = {0xd, 0xf, 0x0, 0x0};
const char s08a_dword_800D7FC0[] = {0x0, 0x15, 0x1, 0x0};
const char s08a_dword_800D7FC4[] = {0x5, 0x1, 0xfe, 0xc};
const char s08a_dword_800D7FC8[] = {0x0, 0x7, '\n', 0x0};
const char s08a_dword_800D7FCC[] = {0xc8, 0x0, 0xc8, 0x1};
const char s08a_dword_800D7FD0[] = {0xff, 0x8, 0xfc, 0xfc};
const char s08a_dword_800D7FD4[] = {0xfc, 0x2, 0x0, 0x1};
const char s08a_dword_800D7FD8[] = {0xd, 0xf, 0x0, 0x0};
const char s08a_dword_800D7FDC[] = {0x0, ':', 0x1, 0x0};
const char s08a_dword_800D7FE0[] = {0x5, 0x1, 0xfe, 0xc};
const char s08a_dword_800D7FE4[] = {0x0, 0x7, 0x4, 0x0};
const char s08a_dword_800D7FE8[] = {0x0, 0x0, 0x96, 0x0};
const char s08a_dword_800D7FEC[] = {0x0, '\n', 0x1, ','};
const char s08a_dword_800D7FF0[] = {0x1, ',', 0x2, 0x0};
const char s08a_dword_800D7FF4[] = {0x1, 0x4, 0x0, 0x0};
const char s08a_dword_800D7FF8[] = {0x0, 0x96, 0x0, 0x0};
const char s08a_dword_800D7FFC[] = {'\n', 0x1, ',', 0x1};
const char s08a_dword_800D8000[] = {',', 0x2, 0x0, 0x1};
const char s08a_dword_800D8004[] = {0x4, 0x0, 0x0, 0x0};
const char s08a_dword_800D8008[] = {0x96, 0x0, 0x0, '\n'};
const char s08a_dword_800D800C[] = {0x1, ',', 0x1, ','};
const char s08a_dword_800D8010[] = {0x1, 0xff, 0x8, 0xf0};
const char s08a_dword_800D8014[] = {0xf0, 0xf0, 0x2, 0x0};
const char s08a_dword_800D8018[] = {0x1, 0xd, 0xf, 0x0};
const char s08a_dword_800D801C[] = {0x0, 0xa7, 0x4, 0x0};
const char s08a_dword_800D8020[] = {0xb, 0x0, '1', 0x0};
const char s08a_dword_800D8024[] = {'\\', 0x0, 0x87, 0x1};
const char s08a_dword_800D8028[] = {0xfe, 0xc, 0x0, 0x7};
const char s08a_dword_800D802C[] = {0x2, 0x0, 0x1, '\n'};
const char s08a_dword_800D8030[] = {0x0, '2', 0x0, '2'};
const char s08a_dword_800D8034[] = {0x1, 0xff, 0x2, 0x0};
const char s08a_dword_800D8038[] = {0x1, 0xd, 0xc, 0x0};
const char s08a_dword_800D803C[] = {0x7, 0x1, 0xff, 0x2};
const char s08a_dword_800D8040[] = {0x0, 0x1, 0x1, 0xff};
const char s08a_dword_800D8044[] = {0x8, 0xff, 0xff, 0xff};
const char s08a_dword_800D8048[] = {0x2, 0x0, 0x1, 0xd};
const char s08a_dword_800D804C[] = {0xf, '\n', 0x1, 0xf4};
const char s08a_dword_800D8050[] = {0x1, 0xf4, 0x1, 0xfe};
const char s08a_dword_800D8054[] = {0xc, 0x0, 0x7, 0x2};
const char s08a_dword_800D8058[] = {0x0, 0x1, '\n', 0x0};
const char s08a_dword_800D805C[] = {'d', 0x0, 'd', 0x1};
const char s08a_dword_800D8060[] = {0xff, 0x2, 0x0, 0x1};
const char s08a_dword_800D8064[] = {0xd, 0xc, 0x0, 0x7};
const char s08a_dword_800D8068[] = {0x1, 0xff, 0x2, 0x0};
const char s08a_dword_800D806C[] = {0x1, 0x1, 0xff, 0x8};
const char s08a_dword_800D8070[] = {0xff, 0xff, 0xff, 0x2};
const char s08a_dword_800D8074[] = {0x0, 0x1, 0xd, 0xf};
const char s08a_dword_800D8078[] = {'\n', 0x3, 0xe8, 0x3};
const char s08a_dword_800D807C[] = {0xe8, 0x1, 0xfe, 0xc};
const char s08a_dword_800D8080[] = {0x0, 0x7, 0x2, 0x0};
const char s08a_dword_800D8084[] = {0x1, '\n', 0x0, 0xc8};
const char s08a_dword_800D8088[] = {0x0, 'd', 0x1, 0xff};
const char s08a_dword_800D808C[] = {0x2, 0x0, 0x1, 0xd};
const char s08a_dword_800D8090[] = {0xc, 0x0, 0x7, 0x1};
const char s08a_dword_800D8094[] = {0xff, 0x2, 0x0, 0x1};
const char s08a_dword_800D8098[] = {0x1, 0xff, 0x8, 0xff};
const char s08a_dword_800D809C[] = {0xff, 0xff, 0x2, 0x0};
const char s08a_dword_800D80A0[] = {0x1, 0xd, 0xf, '\n'};
const char s08a_dword_800D80A4[] = {0x7, 0xd0, 0x7, 0xd0};
const char s08a_dword_800D80A8[] = {0x1, 0xfe, 0xc, 0x0};
const char s08a_dword_800D80AC[] = {0x7, 0x2, 0x0, 0x1};
const char s08a_dword_800D80B0[] = {'\n', 0x1, 0x90, 0x1};
const char s08a_dword_800D80B4[] = {0x90, 0x1, 0xff, 0x2};
const char s08a_dword_800D80B8[] = {0x0, 0x1, 0xd, 0xc};
const char s08a_dword_800D80BC[] = {0x0, 0x7, 0x1, 0xff};
const char s08a_dword_800D80C0[] = {0x2, 0x0, 0x1, 0x1};
const char s08a_dword_800D80C4[] = {0xff, 0x8, 0xff, 0xff};
const char s08a_dword_800D80C8[] = {0xff, 0x2, 0x0, 0x1};
const char s08a_dword_800D80CC[] = {0xd, 0xf, 0x0, 0x0};
const char s08a_dword_800D80D0[] = {0x0, ':', 0x1, 0x0};
const char s08a_dword_800D80D4[] = {0x5, 0x1, 0xfe, 0xc};
const char s08a_dword_800D80D8[] = {0x0, 0x7, 0x4, 0x0};
const char s08a_dword_800D80DC[] = {0x0, 0x0, 0x96, 0x0};
const char s08a_dword_800D80E0[] = {0x0, '\n', 0x1, ','};
const char s08a_dword_800D80E4[] = {0x1, ',', 0x2, 0x0};
const char s08a_dword_800D80E8[] = {0x1, 0x4, 0x0, 0x0};
const char s08a_dword_800D80EC[] = {0x0, 0x96, 0x0, 0x0};
const char s08a_dword_800D80F0[] = {'\n', 0x1, ',', 0x1};
const char s08a_dword_800D80F4[] = {',', 0x2, 0x0, 0x1};
const char s08a_dword_800D80F8[] = {0x4, 0x0, 0x0, 0x0};
const char s08a_dword_800D80FC[] = {0x96, 0x0, 0x0, '\n'};
const char s08a_dword_800D8100[] = {0x1, ',', 0x1, ','};
const char s08a_dword_800D8104[] = {0x1, 0xff, 0x8, 0xfc};
const char s08a_dword_800D8108[] = {0xfc, 0xfc, 0x2, 0x0};
const char s08a_dword_800D810C[] = {0x1, 0xd, 0xf, 0x0};
const char s08a_dword_800D8110[] = {0x0, 0xab, 0x4, 0x0};
const char s08a_dword_800D8114[] = {0xb, 0x0, '2', 0x0};
const char s08a_dword_800D8118[] = {'^', 0x0, 0x8a, 0x1};
const char s08a_dword_800D811C[] = {0xfe, 0xc, 0x0, 0xf};
const char s08a_dword_800D8120[] = {'\n', 0x0, '2', 0x0};
const char s08a_dword_800D8124[] = {'2', 0x1, 0xff, 0x2};
const char s08a_dword_800D8128[] = {0x0, 0x1, 0xd, 0xc};
const char s08a_dword_800D812C[] = {0x0, 0x1e, 0x1, 0xff};
const char s08a_dword_800D8130[] = {0x2, 0x0, 0x1, 0xd};
const char s08a_dword_800D8134[] = {0xc, 0x0, 0xf, 0x1};
const char s08a_dword_800D8138[] = {0xff, 0x8, 0xf0, 0xf0};
const char s08a_dword_800D813C[] = {0xf0, 0x2, 0x0, 0x1};
const char s08a_dword_800D8140[] = {0xd, 0xf, '\n', 0x0};
const char s08a_dword_800D8144[] = {0xfa, 0x0, 0xfa, 0x1};
const char s08a_dword_800D8148[] = {0xfe, 0xc, 0x0, 0xf};
const char s08a_dword_800D814C[] = {'\n', 0x0, 'F', 0x0};
const char s08a_dword_800D8150[] = {'F', 0x1, 0xff, 0x2};
const char s08a_dword_800D8154[] = {0x0, 0x1, 0xd, 0xc};
const char s08a_dword_800D8158[] = {0x0, 0x1e, 0x1, 0xff};
const char s08a_dword_800D815C[] = {0x2, 0x0, 0x1, 0xd};
const char s08a_dword_800D8160[] = {0xc, 0x0, 0xf, 0x1};
const char s08a_dword_800D8164[] = {0xff, 0x8, 0xf0, 0xf0};
const char s08a_dword_800D8168[] = {0xf0, 0x2, 0x0, 0x1};
const char s08a_dword_800D816C[] = {0xd, 0xf, '\n', 0x1};
const char s08a_dword_800D8170[] = {0xf4, 0x1, 0xf4, 0x1};
const char s08a_dword_800D8174[] = {0xfe, 0xc, 0x0, 0xf};
const char s08a_dword_800D8178[] = {'\n', 0x0, 'Z', 0x0};
const char s08a_dword_800D817C[] = {'Z', 0x1, 0xff, 0x2};
const char s08a_dword_800D8180[] = {0x0, 0x1, 0xd, 0xc};
const char s08a_dword_800D8184[] = {0x0, 0x1e, 0x1, 0xff};
const char s08a_dword_800D8188[] = {0x2, 0x0, 0x1, 0xd};
const char s08a_dword_800D818C[] = {0xc, 0x0, 0xf, 0x1};
const char s08a_dword_800D8190[] = {0xff, 0x8, 0xf0, 0xf0};
const char s08a_dword_800D8194[] = {0xf0, 0x2, 0x0, 0x1};
const char s08a_dword_800D8198[] = {0xd, 0xf, '\n', 0x2};
const char s08a_dword_800D819C[] = {0xee, 0x2, 0xee, 0x1};
const char s08a_dword_800D81A0[] = {0xfe, 0xc, 0x0, 0xf};
const char s08a_dword_800D81A4[] = {'\n', 0x0, 'n', 0x0};
const char s08a_dword_800D81A8[] = {'n', 0x1, 0xff, 0x2};
const char s08a_dword_800D81AC[] = {0x0, 0x1, 0xd, 0xc};
const char s08a_dword_800D81B0[] = {0x0, 0x1e, 0x1, 0xff};
const char s08a_dword_800D81B4[] = {0x2, 0x0, 0x1, 0xd};
const char s08a_dword_800D81B8[] = {0xc, 0x0, 0xf, 0x1};
const char s08a_dword_800D81BC[] = {0xff, 0x8, 0xf0, 0xf0};
const char s08a_dword_800D81C0[] = {0xf0, 0x2, 0x0, 0x1};
const char s08a_dword_800D81C4[] = {0xd, 0xf, 0x0, 0x0};
const char s08a_dword_800D81C8[] = {0x0, 0xab, 0x4, 0x0};
const char s08a_dword_800D81CC[] = {0xb, 0x0, '2', 0x0};
const char s08a_dword_800D81D0[] = {'^', 0x0, 0x8a, 0x1};
const char s08a_dword_800D81D4[] = {0xfe, 0xc, 0x0, 0xf};
const char s08a_dword_800D81D8[] = {'\n', 0x0, '2', 0x0};
const char s08a_dword_800D81DC[] = {'2', 0x1, 0xff, 0x2};
const char s08a_dword_800D81E0[] = {0x0, 0x1, 0xd, 0xc};
const char s08a_dword_800D81E4[] = {0x0, 0x1e, 0x1, 0xff};
const char s08a_dword_800D81E8[] = {0x2, 0x0, 0x1, 0xd};
const char s08a_dword_800D81EC[] = {0xc, 0x0, 0xf, 0x1};
const char s08a_dword_800D81F0[] = {0xff, 0x8, 0xff, 0xff};
const char s08a_dword_800D81F4[] = {0xff, 0x2, 0x0, 0x1};
const char s08a_dword_800D81F8[] = {0xd, 0xf, '\n', 0x0};
const char s08a_dword_800D81FC[] = {0xfa, 0x0, 0xfa, 0x1};
const char s08a_dword_800D8200[] = {0xfe, 0xc, 0x0, 0xf};
const char s08a_dword_800D8204[] = {'\n', 0x0, 'F', 0x0};
const char s08a_dword_800D8208[] = {'F', 0x1, 0xff, 0x2};
const char s08a_dword_800D820C[] = {0x0, 0x1, 0xd, 0xc};
const char s08a_dword_800D8210[] = {0x0, 0x1e, 0x1, 0xff};
const char s08a_dword_800D8214[] = {0x2, 0x0, 0x1, 0xd};
const char s08a_dword_800D8218[] = {0xc, 0x0, 0xf, 0x1};
const char s08a_dword_800D821C[] = {0xff, 0x8, 0xff, 0xff};
const char s08a_dword_800D8220[] = {0xff, 0x2, 0x0, 0x1};
const char s08a_dword_800D8224[] = {0xd, 0xf, '\n', 0x1};
const char s08a_dword_800D8228[] = {0xf4, 0x1, 0xf4, 0x1};
const char s08a_dword_800D822C[] = {0xfe, 0xc, 0x0, 0xf};
const char s08a_dword_800D8230[] = {'\n', 0x0, 'Z', 0x0};
const char s08a_dword_800D8234[] = {'Z', 0x1, 0xff, 0x2};
const char s08a_dword_800D8238[] = {0x0, 0x1, 0xd, 0xc};
const char s08a_dword_800D823C[] = {0x0, 0x1e, 0x1, 0xff};
const char s08a_dword_800D8240[] = {0x2, 0x0, 0x1, 0xd};
const char s08a_dword_800D8244[] = {0xc, 0x0, 0xf, 0x1};
const char s08a_dword_800D8248[] = {0xff, 0x8, 0xff, 0xff};
const char s08a_dword_800D824C[] = {0xff, 0x2, 0x0, 0x1};
const char s08a_dword_800D8250[] = {0xd, 0xf, '\n', 0x2};
const char s08a_dword_800D8254[] = {0xee, 0x2, 0xee, 0x1};
const char s08a_dword_800D8258[] = {0xfe, 0xc, 0x0, 0xf};
const char s08a_dword_800D825C[] = {'\n', 0x0, 'n', 0x0};
const char s08a_dword_800D8260[] = {'n', 0x1, 0xff, 0x2};
const char s08a_dword_800D8264[] = {0x0, 0x1, 0xd, 0xc};
const char s08a_dword_800D8268[] = {0x0, 0x1e, 0x1, 0xff};
const char s08a_dword_800D826C[] = {0x2, 0x0, 0x1, 0xd};
const char s08a_dword_800D8270[] = {0xc, 0x0, 0xf, 0x1};
const char s08a_dword_800D8274[] = {0xff, 0x8, 0xff, 0xff};
const char s08a_dword_800D8278[] = {0xff, 0x2, 0x0, 0x1};
const char s08a_dword_800D827C[] = {0xd, 0xf, 0x0, 0x0};
const char s08a_dword_800D8280[] = {0x0, 0xbb, 0x4, 0x0};
const char s08a_dword_800D8284[] = {0xb, 0x0, '6', 0x0};
const char s08a_dword_800D8288[] = {'f', 0x0, 0x96, 0x8};
const char s08a_dword_800D828C[] = {0xff, 0xff, 0xff, 0x1};
const char s08a_dword_800D8290[] = {0xfe, 0xc, 0x0, 0xf};
const char s08a_dword_800D8294[] = {'\n', 0x0, '2', 0x0};
const char s08a_dword_800D8298[] = {'2', 0x1, 0xff, 0x2};
const char s08a_dword_800D829C[] = {0x0, 0x1, 0xd, 0xc};
const char s08a_dword_800D82A0[] = {0x0, 0x1e, 0x1, 0xff};
const char s08a_dword_800D82A4[] = {0x2, 0x0, 0x1, 0xd};
const char s08a_dword_800D82A8[] = {0xc, 0x0, 0xf, 0x1};
const char s08a_dword_800D82AC[] = {0xff, 0x8, 0xf0, 0xf0};
const char s08a_dword_800D82B0[] = {0xf0, 0x2, 0x0, 0x1};
const char s08a_dword_800D82B4[] = {0xd, 0xf, 0x8, 0xff};
const char s08a_dword_800D82B8[] = {0xff, 0xff, '\n', 0x0};
const char s08a_dword_800D82BC[] = {0xfa, 0x0, 0xfa, 0x1};
const char s08a_dword_800D82C0[] = {0xfe, 0xc, 0x0, 0xf};
const char s08a_dword_800D82C4[] = {'\n', 0x0, 'F', 0x0};
const char s08a_dword_800D82C8[] = {'F', 0x1, 0xff, 0x2};
const char s08a_dword_800D82CC[] = {0x0, 0x1, 0xd, 0xc};
const char s08a_dword_800D82D0[] = {0x0, 0x1e, 0x1, 0xff};
const char s08a_dword_800D82D4[] = {0x2, 0x0, 0x1, 0xd};
const char s08a_dword_800D82D8[] = {0xc, 0x0, 0xf, 0x1};
const char s08a_dword_800D82DC[] = {0xff, 0x8, 0xf0, 0xf0};
const char s08a_dword_800D82E0[] = {0xf0, 0x2, 0x0, 0x1};
const char s08a_dword_800D82E4[] = {0xd, 0xf, 0x8, 0xff};
const char s08a_dword_800D82E8[] = {0xff, 0xff, '\n', 0x1};
const char s08a_dword_800D82EC[] = {0xf4, 0x1, 0xf4, 0x1};
const char s08a_dword_800D82F0[] = {0xfe, 0xc, 0x0, 0xf};
const char s08a_dword_800D82F4[] = {'\n', 0x0, 'Z', 0x0};
const char s08a_dword_800D82F8[] = {'Z', 0x1, 0xff, 0x2};
const char s08a_dword_800D82FC[] = {0x0, 0x1, 0xd, 0xc};
const char s08a_dword_800D8300[] = {0x0, 0x1e, 0x1, 0xff};
const char s08a_dword_800D8304[] = {0x2, 0x0, 0x1, 0xd};
const char s08a_dword_800D8308[] = {0xc, 0x0, 0xf, 0x1};
const char s08a_dword_800D830C[] = {0xff, 0x8, 0xf0, 0xf0};
const char s08a_dword_800D8310[] = {0xf0, 0x2, 0x0, 0x1};
const char s08a_dword_800D8314[] = {0xd, 0xf, 0x8, 0xff};
const char s08a_dword_800D8318[] = {0xff, 0xff, '\n', 0x2};
const char s08a_dword_800D831C[] = {0xee, 0x2, 0xee, 0x1};
const char s08a_dword_800D8320[] = {0xfe, 0xc, 0x0, 0xf};
const char s08a_dword_800D8324[] = {'\n', 0x0, 'n', 0x0};
const char s08a_dword_800D8328[] = {'n', 0x1, 0xff, 0x2};
const char s08a_dword_800D832C[] = {0x0, 0x1, 0xd, 0xc};
const char s08a_dword_800D8330[] = {0x0, 0x1e, 0x1, 0xff};
const char s08a_dword_800D8334[] = {0x2, 0x0, 0x1, 0xd};
const char s08a_dword_800D8338[] = {0xc, 0x0, 0xf, 0x1};
const char s08a_dword_800D833C[] = {0xff, 0x8, 0xf0, 0xf0};
const char s08a_dword_800D8340[] = {0xf0, 0x2, 0x0, 0x1};
const char s08a_dword_800D8344[] = {0xd, 0xf, 0x0, 0x0};
const char s08a_dword_800D8348[] = {0x0, 0x87, 0x4, 0x0};
const char s08a_dword_800D834C[] = {0xb, 0x0, ')', 0x0};
const char s08a_dword_800D8350[] = {'L', 0x0, 'o', 0x1};
const char s08a_dword_800D8354[] = {0xfe, 0xc, 0x0, 0x7};
const char s08a_dword_800D8358[] = {'\n', 0x0, 'd', 0x0};
const char s08a_dword_800D835C[] = {'d', 0x1, 0xff, 0x2};
const char s08a_dword_800D8360[] = {0x0, 0x1, 0xd, 0xc};
const char s08a_dword_800D8364[] = {0x0, 0x3, 0x1, 0xff};
const char s08a_dword_800D8368[] = {0x8, 0xc0, 0xc0, 0xc0};
const char s08a_dword_800D836C[] = {0x2, 0x0, 0x1, 0xd};
const char s08a_dword_800D8370[] = {0xf, '\n', 0x0, 0xfa};
const char s08a_dword_800D8374[] = {0x0, 0xfa, 0x1, 0xfe};
const char s08a_dword_800D8378[] = {0xc, 0x0, 0x7, '\n'};
const char s08a_dword_800D837C[] = {0x0, 0x96, 0x0, 0x96};
const char s08a_dword_800D8380[] = {0x1, 0xff, 0x2, 0x0};
const char s08a_dword_800D8384[] = {0x1, 0xd, 0xc, 0x0};
const char s08a_dword_800D8388[] = {0x3, 0x1, 0xff, 0x8};
const char s08a_dword_800D838C[] = {0xc0, 0xc0, 0xc0, 0x2};
const char s08a_dword_800D8390[] = {0x0, 0x1, 0xd, 0xf};
const char s08a_dword_800D8394[] = {'\n', 0x1, 0xf4, 0x1};
const char s08a_dword_800D8398[] = {0xf4, 0x1, 0xfe, 0xc};
const char s08a_dword_800D839C[] = {0x0, 0x7, '\n', 0x0};
const char s08a_dword_800D83A0[] = {0xc8, 0x0, 0xc8, 0x1};
const char s08a_dword_800D83A4[] = {0xff, 0x2, 0x0, 0x1};
const char s08a_dword_800D83A8[] = {0xd, 0xc, 0x0, 0x3};
const char s08a_dword_800D83AC[] = {0x1, 0xff, 0x8, 0xc0};
const char s08a_dword_800D83B0[] = {0xc0, 0xc0, 0x2, 0x0};
const char s08a_dword_800D83B4[] = {0x1, 0xd, 0xf, '\n'};
const char s08a_dword_800D83B8[] = {0x2, 0xee, 0x2, 0xee};
const char s08a_dword_800D83BC[] = {0x1, 0xfe, 0xc, 0x0};
const char s08a_dword_800D83C0[] = {0x7, '\n', 0x0, 0xfa};
const char s08a_dword_800D83C4[] = {0x0, 0xfa, 0x1, 0xff};
const char s08a_dword_800D83C8[] = {0x2, 0x0, 0x1, 0xd};
const char s08a_dword_800D83CC[] = {0xc, 0x0, 0x3, 0x1};
const char s08a_dword_800D83D0[] = {0xff, 0x8, 0xc0, 0xc0};
const char s08a_dword_800D83D4[] = {0xc0, 0x2, 0x0, 0x1};
const char s08a_dword_800D83D8[] = {0xd, 0xf, 0x0, 0x0};
const char s08a_dword_800D83DC[] = {0x0, 0x87, 0x4, 0x0};
const char s08a_dword_800D83E0[] = {0xb, 0x0, ')', 0x0};
const char s08a_dword_800D83E4[] = {'L', 0x0, 'o', 0x1};
const char s08a_dword_800D83E8[] = {0xfe, 0xc, 0x0, 0x7};
const char s08a_dword_800D83EC[] = {'\n', 0x0, 'd', 0x0};
const char s08a_dword_800D83F0[] = {'d', 0x1, 0xff, 0x2};
const char s08a_dword_800D83F4[] = {0x0, 0x1, 0xd, 0xc};
const char s08a_dword_800D83F8[] = {0x0, 0x3, 0x1, 0xff};
const char s08a_dword_800D83FC[] = {0x8, 0xfc, 0xfc, 0xfc};
const char s08a_dword_800D8400[] = {0x2, 0x0, 0x1, 0xd};
const char s08a_dword_800D8404[] = {0xf, '\n', 0x0, 0xfa};
const char s08a_dword_800D8408[] = {0x0, 0xfa, 0x1, 0xfe};
const char s08a_dword_800D840C[] = {0xc, 0x0, 0x7, '\n'};
const char s08a_dword_800D8410[] = {0x0, 0x96, 0x0, 0x96};
const char s08a_dword_800D8414[] = {0x1, 0xff, 0x2, 0x0};
const char s08a_dword_800D8418[] = {0x1, 0xd, 0xc, 0x0};
const char s08a_dword_800D841C[] = {0x3, 0x1, 0xff, 0x8};
const char s08a_dword_800D8420[] = {0xfc, 0xfc, 0xfc, 0x2};
const char s08a_dword_800D8424[] = {0x0, 0x1, 0xd, 0xf};
const char s08a_dword_800D8428[] = {'\n', 0x1, 0xf4, 0x1};
const char s08a_dword_800D842C[] = {0xf4, 0x1, 0xfe, 0xc};
const char s08a_dword_800D8430[] = {0x0, 0x7, '\n', 0x0};
const char s08a_dword_800D8434[] = {0xc8, 0x0, 0xc8, 0x1};
const char s08a_dword_800D8438[] = {0xff, 0x2, 0x0, 0x1};
const char s08a_dword_800D843C[] = {0xd, 0xc, 0x0, 0x3};
const char s08a_dword_800D8440[] = {0x1, 0xff, 0x8, 0xfc};
const char s08a_dword_800D8444[] = {0xfc, 0xfc, 0x2, 0x0};
const char s08a_dword_800D8448[] = {0x1, 0xd, 0xf, '\n'};
const char s08a_dword_800D844C[] = {0x2, 0xee, 0x2, 0xee};
const char s08a_dword_800D8450[] = {0x1, 0xfe, 0xc, 0x0};
const char s08a_dword_800D8454[] = {0x7, '\n', 0x0, 0xfa};
const char s08a_dword_800D8458[] = {0x0, 0xfa, 0x1, 0xff};
const char s08a_dword_800D845C[] = {0x2, 0x0, 0x1, 0xd};
const char s08a_dword_800D8460[] = {0xc, 0x0, 0x3, 0x1};
const char s08a_dword_800D8464[] = {0xff, 0x8, 0xfc, 0xfc};
const char s08a_dword_800D8468[] = {0xfc, 0x2, 0x0, 0x1};
const char s08a_dword_800D846C[] = {0xd, 0xf, 0x0, 0x0};
const char s08a_dword_800D8470[] = {0x0, '*', 0x1, 0x0};
const char s08a_dword_800D8474[] = {0x5, 0x1, 0xfe, 0xc};
const char s08a_dword_800D8478[] = {0x0, 0x2, 0x2, 0x0};
const char s08a_dword_800D847C[] = {0x1, 0xd, '\n', 0x3};
const char s08a_dword_800D8480[] = {0xe8, 0x3, 0xe8, 0xc};
const char s08a_dword_800D8484[] = {0x0, 0x7, '\n', 0x0};
const char s08a_dword_800D8488[] = {'d', 0x0, 'd', 0x1};
const char s08a_dword_800D848C[] = {0xff, 0x2, 0x0, 0x1};
const char s08a_dword_800D8490[] = {0xd, 0xc, 0x0, 0x3};
const char s08a_dword_800D8494[] = {0x1, 0xff, 0x8, 0xc0};
const char s08a_dword_800D8498[] = {0xc0, 0xc0, 0x2, 0x0};
const char s08a_dword_800D849C[] = {0x1, 0xd, 0xf, '5'};
const char s08a_dword_800D84A0[] = {0xa4, 0xcf, 0xa4, 0xb8};
const char s08a_dword_800D84A4[] = {0xa4, 0xe1, 0x0, 0x0};
const char s08a_dword_800D84A8[] = {0xa4, 0xe4, 0xa4, 0xe1};
const char s08a_dword_800D84AC[] = {0x0, 0x0, 0x0, 0x0};
const char s08a_dword_800D84B0[] = {'f', 'l', 'r', '_'};
const char s08a_dword_800D84B4[] = {'s', 'p', 'a', '.'};
const char s08a_dword_800D84B8[] = {'c', 0x0, '0', '1'};
const char s08a_aPlasma_800D84BC[] = "plasma";
const char s08a_dword_800D84C4[] = {'p', 'l', 'a', 's'};
const char s08a_dword_800D84C8[] = {'m', 'a', '_', 'h'};
const char s08a_dword_800D84CC[] = {'.', 'c', 0x0, 'e'};
const char s08a_aMonid_800D84D0[] = "moni_d";
const char s08a_aPanelc_800D84D8[] = "panel.c";
const char s08a_dword_800D84E0[] = {0x0, '3', 0x1, 0x0};
const char s08a_dword_800D84E4[] = {0x5, 0x1, 0xfe, 0xc};
const char s08a_dword_800D84E8[] = {0x0, 0x4, 0x1, 0xff};
const char s08a_dword_800D84EC[] = {'\n', 0x0, '\n', 0x0};
const char s08a_dword_800D84F0[] = {'\n', 0x2, 0x0, 0x1};
const char s08a_dword_800D84F4[] = {0xd, 0xc, 0x0, ' '};
const char s08a_dword_800D84F8[] = {0x1, 0xff, 0x4, 0x0};
const char s08a_dword_800D84FC[] = {0x0, 0x0, 0x14, 0x0};
const char s08a_dword_800D8500[] = {0x0, 0x2, 0x0, 0x1};
const char s08a_dword_800D8504[] = {0xd, 0xc, 0x0, '/'};
const char s08a_dword_800D8508[] = {0x8, 0xff, 0xff, 0xff};
const char s08a_dword_800D850C[] = {0x1, 0xff, '\n', 0x0};
const char s08a_dword_800D8510[] = {'\n', 0x0, '\n', 0x2};
const char s08a_dword_800D8514[] = {0x0, 0x1, 0xd, 0xf};
const char s08a_dword_800D8518[] = {0x0, 0x0, 0x0, 0x0};
const char s08a_dword_800D851C[] = {0xf4, 0x1, 0x0, 0x0};
const char s08a_dword_800D8520[] = {'s', 'p', 'a', 'r'};
const char s08a_dword_800D8524[] = {'k', '2', '.', 'c'};
const char s08a_dword_800D8528[] = {0x0, 'a', 'e', 'm'};
const char s08a_aGlass_800D852C[] = "glass";
const char s08a_aGlassc_800D8534[] = "glass.c";