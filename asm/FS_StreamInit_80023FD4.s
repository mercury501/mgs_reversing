	opt	c+, at+, e+, n-
	section .text

	xdef FS_StreamInit_80023FD4
FS_StreamInit_80023FD4:
	dw 0x27BDFFE8 ; 0x80023FD4
	dw 0x00803821 ; 0x80023FD8
	dw 0x00A03021 ; 0x80023FDC
	dw 0x3C02800B ; 0x80023FE0
	dw 0xAC4752A4 ; 0x80023FE4
	dw 0x3C02800B ; 0x80023FE8
	dw 0x3C03800B ; 0x80023FEC
	dw 0xAC4652AC ; 0x80023FF0
	dw 0x00E61021 ; 0x80023FF4
	dw 0x3C048001 ; 0x80023FF8
	dw 0x2484073C ; 0x80023FFC
	dw 0x00E02821 ; 0x80024000
	dw 0xAFBF0010 ; 0x80024004
	dw 0x0C022EE8 ; 0x80024008
	dw 0xAC6252A8 ; 0x8002400C
	dw 0x24020001 ; 0x80024010
	dw 0x8FBF0010 ; 0x80024014
	dw 0x3C03800B ; 0x80024018
	dw 0xAC605298 ; 0x8002401C
	dw 0x03E00008 ; 0x80024020
	dw 0x27BD0018 ; 0x80024024