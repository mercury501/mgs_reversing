	opt	c+, at+, e+, n-
	section overlay.text

	xdef s01a_blink_tx_800DEB60
s01a_blink_tx_800DEB60:
	dw 0x27BDFFE0 ; 800DEB60
	dw 0xAFB00010 ; 800DEB64
	dw 0x00A08021 ; 800DEB68
	dw 0xAFB10014 ; 800DEB6C
	dw 0x00008821 ; 800DEB70
	dw 0xAFBF0018 ; 800DEB74
	dw 0x0C0082A9 ; 800DEB78
	dw 0x00000000 ; 800DEB7C
	dw 0x10400006 ; 800DEB80
	dw 0x00402021 ; 800DEB84
	dw 0x0C008285 ; 800DEB88
	dw 0x02002821 ; 800DEB8C
	dw 0x26100008 ; 800DEB90
	dw 0x08037ADE ; 800DEB94
	dw 0x26310001 ; 800DEB98
	dw 0x02201021 ; 800DEB9C
	dw 0x8FBF0018 ; 800DEBA0
	dw 0x8FB10014 ; 800DEBA4
	dw 0x8FB00010 ; 800DEBA8
	dw 0x03E00008 ; 800DEBAC
	dw 0x27BD0020 ; 800DEBB0