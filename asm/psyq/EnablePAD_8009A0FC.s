	opt	c+, at+, e+, n-
	section .text

	xdef EnablePAD_8009A0FC
EnablePAD_8009A0FC:
	dw 0x3C09800C ; 0x8009A0FC
	dw 0x8D292F48 ; 0x8009A100
	dw 0x00000000 ; 0x8009A104
	dw 0x01200008 ; 0x8009A108
	dw 0x00000000 ; 0x8009A10C