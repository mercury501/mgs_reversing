	opt	c+, at+, e+, n-
	section overlay.text

	xdef s00a_command_800CB240
s00a_command_800CB240:
	dw 0x24020007 ; 800CDDA0
	dw 0xA4820B22 ; 800CDDA4
	dw 0x2402000E ; 800CDDA8
	dw 0xA4820B24 ; 800CDDAC
	dw 0x03E00008 ; 800CDDB0
	dw 0xAC800B28 ; 800CDDB4