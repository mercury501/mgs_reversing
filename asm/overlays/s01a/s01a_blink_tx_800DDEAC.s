	opt	c+, at+, e+, n-
	section overlay.text

	xdef s01a_blink_tx_800DDEAC
s01a_blink_tx_800DDEAC:
	dw 0x3C02800E ; 800DDEAC
	dw 0x2442DB18 ; 800DDEB0
	dw 0xAC820BD0 ; 800DDEB4
	dw 0xAC800BD8 ; 800DDEB8
	dw 0xA4800070 ; 800DDEBC
	dw 0x03E00008 ; 800DDEC0
	dw 0xA480006C ; 800DDEC4