	opt	c+, at+, e+, n-
	section overlay.text

	xdef SetCameraActCall_800D043C
SetCameraActCall_800D043C:
	dw 0x3C04800E ; 800D2F9C
	dw 0x8C834DDC ; 800D2FA0
	dw 0x00000000 ; 800D2FA4
	dw 0x30621000 ; 800D2FA8
	dw 0x14400009 ; 800D2FAC
	dw 0x34621000 ; 800D2FB0
	dw 0xAC824DDC ; 800D2FB4
	dw 0x3C02800E ; 800D2FB8
	dw 0x3C04800B ; 800D2FBC
	dw 0xAC404BCC ; 800D2FC0
	dw 0x8C82B3CC ; 800D2FC4
	dw 0x3C031000 ; 800D2FC8
	dw 0x00431025 ; 800D2FCC
	dw 0xAC82B3CC ; 800D2FD0
	dw 0x03E00008 ; 800D2FD4
	dw 0x00000000 ; 800D2FD8