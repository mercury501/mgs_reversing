	opt	c+, at+, e+, n-
	section .text

	xdef change_800C3C68
change_800C3C68:
	dw 0x02202021 ; 800C3C68
	dw 0x08030F2C ; 800C3C6C
	dw 0x00002821 ; 800C3C70
	dw 0x02202021 ; 800C3C74
	dw 0x24050001 ; 800C3C78
	dw 0x0C030ECD ; 800C3C7C
	dw 0x24066739 ; 800C3C80
	dw 0x02202021 ; 800C3C84
	dw 0x08030F2C ; 800C3C88
	dw 0x24050002 ; 800C3C8C
	dw 0x02202021 ; 800C3C90
	dw 0x08030F2C ; 800C3C94
	dw 0x24050003 ; 800C3C98
	dw 0x02202021 ; 800C3C9C
	dw 0x08030F2C ; 800C3CA0
	dw 0x24050004 ; 800C3CA4
	dw 0x02202021 ; 800C3CA8
	dw 0x24050005 ; 800C3CAC
	dw 0x24066739 ; 800C3CB0
	dw 0x0C030ECD ; 800C3CB4
	dw 0x00000000 ; 800C3CB8
	dw 0x8FBF0018 ; 800C3CBC
	dw 0x8FB10014 ; 800C3CC0
	dw 0x8FB00010 ; 800C3CC4
	dw 0x03E00008 ; 800C3CC8
	dw 0x27BD0020 ; 800C3CCC