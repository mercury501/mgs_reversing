	opt	c+, at+, e+, n-
	section overlay.text

	xdef s03b_800CC41C
s03b_800CC41C:
	dw 0x8C830040 ; 800CC41C
	dw 0x8FA20010 ; 800CC420
	dw 0xA0660004 ; 800CC424
	dw 0xA0670005 ; 800CC428
	dw 0xA0620006 ; 800CC42C
	dw 0x8C830044 ; 800CC430
	dw 0x00000000 ; 800CC434
	dw 0xA0660004 ; 800CC438
	dw 0xA0670005 ; 800CC43C
	dw 0x03E00008 ; 800CC440
	dw 0xA0620006 ; 800CC444
