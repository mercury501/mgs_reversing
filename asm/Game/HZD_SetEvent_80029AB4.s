	opt	c+, at+, e+, n-
	section .text

	xdef HZD_SetEvent_80029AB4
HZD_SetEvent_80029AB4:
	dw 0x24830008 ; 0x80029AB4
	dw 0x24020006 ; 0x80029AB8
	dw 0xA4850000 ; 0x80029ABC
	dw 0xA4800006 ; 0x80029AC0
	dw 0xA4800004 ; 0x80029AC4
	dw 0xA4800002 ; 0x80029AC8
	dw 0xA4600000 ; 0x80029ACC
	dw 0x2442FFFF ; 0x80029AD0
	dw 0x1C40FFFD ; 0x80029AD4
	dw 0x24630002 ; 0x80029AD8
	dw 0xA4800018 ; 0x80029ADC
	dw 0xA4800016 ; 0x80029AE0
	dw 0x03E00008 ; 0x80029AE4
	dw 0xA4800014 ; 0x80029AE8