	opt	c+, at+, e+, n-
	section overlay.text

	xdef s02c_ripple_800DA93C
s02c_ripple_800DA93C:
	dw 0x24C6FFFF ; 800DA93C
	dw 0x04C0000C ; 800DA940
	dw 0x24A50006 ; 800DA944
	dw 0x24840006 ; 800DA948
	dw 0xA087FFFE ; 800DA94C
	dw 0xA087FFFF ; 800DA950
	dw 0xA0870000 ; 800DA954
	dw 0x24840028 ; 800DA958
	dw 0xA0A7FFFE ; 800DA95C
	dw 0xA0A7FFFF ; 800DA960
	dw 0xA0A70000 ; 800DA964
	dw 0x24C6FFFF ; 800DA968
	dw 0x04C1FFF7 ; 800DA96C
	dw 0x24A50028 ; 800DA970
	dw 0x03E00008 ; 800DA974
	dw 0x00000000 ; 800DA978