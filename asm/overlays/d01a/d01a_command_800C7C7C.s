	opt	c+, at+, e+, n-
	section overlay.text

	xdef d01a_command_800C7C7C
d01a_command_800C7C7C:
	dw 0x3C02800D ; 800C7C7C
	dw 0x8C4213D4 ; 800C7C80
	dw 0x00000000 ; 800C7C84
	dw 0x30420001 ; 800C7C88
	dw 0x10400004 ; 800C7C8C
	dw 0x24020080 ; 800C7C90
	dw 0x24020082 ; 800C7C94
	dw 0x03E00008 ; 800C7C98
	dw 0xAC820000 ; 800C7C9C
	dw 0x03E00008 ; 800C7CA0
	dw 0xAC820000 ; 800C7CA4