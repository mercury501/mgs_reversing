	opt	c+, at+, e+, n-
	section .text

	xdef mts_PadRead_8008C324
mts_PadRead_8008C324:
	dw 0x3C02800C ; 0x8008C324
	dw 0x844214E0 ; 0x8008C328
	dw 0x00000000 ; 0x8008C32C
	dw 0x10400006 ; 0x8008C330
	dw 0x00001821 ; 0x8008C334
	dw 0x3C02800C ; 0x8008C338
	dw 0x944214E2 ; 0x8008C33C
	dw 0x00000000 ; 0x8008C340
	dw 0x00021027 ; 0x8008C344
	dw 0x3043FFFF ; 0x8008C348
	dw 0x3C02800C ; 0x8008C34C
	dw 0x844214E8 ; 0x8008C350
	dw 0x00000000 ; 0x8008C354
	dw 0x10400007 ; 0x8008C358
	dw 0x00000000 ; 0x8008C35C
	dw 0x3C02800C ; 0x8008C360
	dw 0x944214EA ; 0x8008C364
	dw 0x00000000 ; 0x8008C368
	dw 0x00021027 ; 0x8008C36C
	dw 0x00021400 ; 0x8008C370
	dw 0x00621825 ; 0x8008C374
	dw 0x03E00008 ; 0x8008C378
	dw 0x00601021 ; 0x8008C37C