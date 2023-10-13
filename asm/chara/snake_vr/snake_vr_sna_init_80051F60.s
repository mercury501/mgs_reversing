	opt	c+, at+, e+, n-
	section .text

	xdef snake_vr_sna_init_80051F60
snake_vr_sna_init_80051F60:
	dw 0x27BDFFE8 ; 80051F60
	dw 0xAFB00010 ; 80051F64
	dw 0xAFBF0014 ; 80051F68
	dw 0x0C013FEB ; 80051F6C
	dw 0x00808021 ; 80051F70
	dw 0x14400053 ; 80051F74
	dw 0x00000000 ; 80051F78
	dw 0x8E0209AC ; 80051F7C
	dw 0x00000000 ; 80051F80
	dw 0x94420002 ; 80051F84
	dw 0x00000000 ; 80051F88
	dw 0x30420040 ; 80051F8C
	dw 0x10400006 ; 80051F90
	dw 0x02002021 ; 80051F94
	dw 0x3C058005 ; 80051F98
	dw 0x0C01389B ; 80051F9C
	dw 0x24A518E4 ; 80051FA0
	dw 0x08014831 ; 80051FA4
	dw 0x00000000 ; 80051FA8
	dw 0x3C02800B ; 80051FAC
	dw 0x8C429660 ; 80051FB0
	dw 0x00000000 ; 80051FB4
	dw 0x28420003 ; 80051FB8
	dw 0x14400008 ; 80051FBC
	dw 0x00000000 ; 80051FC0
	dw 0x8E0209B0 ; 80051FC4
	dw 0x00000000 ; 80051FC8
	dw 0x8C420000 ; 80051FCC
	dw 0x00000000 ; 80051FD0
	dw 0x90450001 ; 80051FD4
	dw 0x080147FD ; 80051FD8
	dw 0x02002021 ; 80051FDC
	dw 0x8E0209B0 ; 80051FE0
	dw 0x00000000 ; 80051FE4
	dw 0x8C420000 ; 80051FE8
	dw 0x00000000 ; 80051FEC
	dw 0x90450000 ; 80051FF0
	dw 0x0C0138A9 ; 80051FF4
	dw 0x24060004 ; 80051FF8
	dw 0x86020A34 ; 80051FFC
	dw 0x96030A34 ; 80052000
	dw 0x18400002 ; 80052004
	dw 0x2462FFFF ; 80052008
	dw 0xA6020A34 ; 8005200C
	dw 0x86020A34 ; 80052010
	dw 0x00000000 ; 80052014
	dw 0x1440002A ; 80052018
	dw 0x00000000 ; 8005201C
	dw 0x8F8208C8 ; 80052020
	dw 0x00000000 ; 80052024
	dw 0x04400026 ; 80052028
	dw 0x24020001 ; 8005202C
	dw 0x8F8308EC ; 80052030
	dw 0x00000000 ; 80052034
	dw 0x10620007 ; 80052038
	dw 0x02002021 ; 8005203C
	dw 0x1060000A ; 80052040
	dw 0x24020002 ; 80052044
	dw 0x8E03079C ; 80052048
	dw 0x00000000 ; 8005204C
	dw 0x14620006 ; 80052050
	dw 0x00000000 ; 80052054
	dw 0x3C058005 ; 80052058
	dw 0x0C01389B ; 8005205C
	dw 0x24A51B64 ; 80052060
	dw 0x08014831 ; 80052064
	dw 0x00000000 ; 80052068
	dw 0x8604006E ; 8005206C
	dw 0x8F8508C8 ; 80052070
	dw 0x0C005BF9 ; 80052074
	dw 0x00000000 ; 80052078
	dw 0x00401821 ; 8005207C
	dw 0x28620101 ; 80052080
	dw 0x14400009 ; 80052084
	dw 0x02002021 ; 80052088
	dw 0x00601021 ; 8005208C
	dw 0x04410002 ; 80052090
	dw 0x00000000 ; 80052094
	dw 0x244203FF ; 80052098
	dw 0x00021283 ; 8005209C
	dw 0x24420001 ; 800520A0
	dw 0x0801482E ; 800520A4
	dw 0xA6020A34 ; 800520A8
	dw 0x3C058005 ; 800520AC
	dw 0x0C01389B ; 800520B0
	dw 0x24A52AC8 ; 800520B4
	dw 0x978208C8 ; 800520B8
	dw 0x00000000 ; 800520BC
	dw 0xA602006E ; 800520C0
	dw 0x8FBF0014 ; 800520C4
	dw 0x8FB00010 ; 800520C8
	dw 0x03E00008 ; 800520CC
	dw 0x27BD0018 ; 800520D0
	dw 0x27BDFFD8 ; 800520D4
	dw 0xAFB00018 ; 800520D8
	dw 0x00808021 ; 800520DC
	dw 0xAFBF0020 ; 800520E0
	dw 0xAFB1001C ; 800520E4
	dw 0x8E0209AC ; 800520E8
	dw 0x00000000 ; 800520EC
	dw 0x94420002 ; 800520F0
	dw 0x00000000 ; 800520F4
	dw 0x30420040 ; 800520F8
	dw 0x10400019 ; 800520FC
	dw 0x2402044C ; 80052100
	dw 0xAFA20010 ; 80052104
	dw 0x00002821 ; 80052108
	dw 0x00A03021 ; 8005210C
	dw 0x0C013A0A ; 80052110
	dw 0x00A03821 ; 80052114
	dw 0x14400044 ; 80052118
	dw 0x24110008 ; 8005211C
	dw 0x9602002A ; 80052120
	dw 0x3C040100 ; 80052124
	dw 0x0C0138C5 ; 80052128
	dw 0xA602006E ; 8005212C
	dw 0x10400002 ; 80052130
	dw 0x26040020 ; 80052134
	dw 0x241100B7 ; 80052138
	dw 0x0C00CA55 ; 8005213C
	dw 0x02202821 ; 80052140
	dw 0x0C0138D3 ; 80052144
	dw 0x24040020 ; 80052148
	dw 0x02002021 ; 8005214C
	dw 0x3C058005 ; 80052150
	dw 0x0C01389B ; 80052154
	dw 0x24A51864 ; 80052158
	dw 0x0801488B ; 8005215C
	dw 0x00000000 ; 80052160
	dw 0x86020A34 ; 80052164
	dw 0x96030A34 ; 80052168
	dw 0x18400002 ; 8005216C
	dw 0x2462FFFF ; 80052170
	dw 0xA6020A34 ; 80052174
	dw 0x86020A34 ; 80052178
	dw 0x00000000 ; 8005217C
	dw 0x1440002A ; 80052180
	dw 0x00000000 ; 80052184
	dw 0x8F8208C8 ; 80052188
	dw 0x00000000 ; 8005218C
	dw 0x04400026 ; 80052190
	dw 0x24020001 ; 80052194
	dw 0x8F8308EC ; 80052198
	dw 0x00000000 ; 8005219C
	dw 0x10620007 ; 800521A0
	dw 0x02002021 ; 800521A4
	dw 0x1060000A ; 800521A8
	dw 0x24020002 ; 800521AC
	dw 0x8E03079C ; 800521B0
	dw 0x00000000 ; 800521B4
	dw 0x14620006 ; 800521B8
	dw 0x00000000 ; 800521BC
	dw 0x3C058005 ; 800521C0
	dw 0x0C01389B ; 800521C4
	dw 0x24A51DD4 ; 800521C8
	dw 0x0801488B ; 800521CC
	dw 0x00000000 ; 800521D0
	dw 0x8604006E ; 800521D4
	dw 0x8F8508C8 ; 800521D8
	dw 0x0C005BF9 ; 800521DC
	dw 0x00000000 ; 800521E0
	dw 0x00401821 ; 800521E4
	dw 0x28620101 ; 800521E8
	dw 0x14400009 ; 800521EC
	dw 0x02002021 ; 800521F0
	dw 0x00601021 ; 800521F4
	dw 0x04410002 ; 800521F8
	dw 0x00000000 ; 800521FC
	dw 0x244203FF ; 80052200
	dw 0x00021283 ; 80052204
	dw 0x24420001 ; 80052208
	dw 0x08014888 ; 8005220C
	dw 0xA6020A34 ; 80052210
	dw 0x3C058005 ; 80052214
	dw 0x0C01389B ; 80052218
	dw 0x24A52B28 ; 8005221C
	dw 0x978208C8 ; 80052220
	dw 0x00000000 ; 80052224
	dw 0xA602006E ; 80052228
	dw 0x8FBF0020 ; 8005222C
	dw 0x8FB1001C ; 80052230
	dw 0x8FB00018 ; 80052234
	dw 0x03E00008 ; 80052238
	dw 0x27BD0028 ; 8005223C
	dw 0x27BDFFE0 ; 80052240
	dw 0xAFB00018 ; 80052244
	dw 0x00808021 ; 80052248
	dw 0xAFBF001C ; 8005224C
	dw 0x86020A34 ; 80052250
	dw 0x96030A34 ; 80052254
	dw 0x18400002 ; 80052258
	dw 0x2462FFFF ; 8005225C
	dw 0xA6020A34 ; 80052260
	dw 0x0C0140AA ; 80052264
	dw 0x02002021 ; 80052268
	dw 0x14400034 ; 8005226C
	dw 0x00000000 ; 80052270
	dw 0x86020A34 ; 80052274
	dw 0x00000000 ; 80052278
	dw 0x14400030 ; 8005227C
	dw 0x00000000 ; 80052280
	dw 0x8F8208C8 ; 80052284
	dw 0x00000000 ; 80052288
	dw 0x0440002C ; 8005228C
	dw 0x24020001 ; 80052290
	dw 0x8F8308EC ; 80052294
	dw 0x00000000 ; 80052298
	dw 0x10620007 ; 8005229C
	dw 0x240205DC ; 800522A0
	dw 0x10600017 ; 800522A4
	dw 0x24020002 ; 800522A8
	dw 0x8E03079C ; 800522AC
	dw 0x00000000 ; 800522B0
	dw 0x14620013 ; 800522B4
	dw 0x240205DC ; 800522B8
	dw 0xAFA20010 ; 800522BC
	dw 0x02002021 ; 800522C0
	dw 0x00002821 ; 800522C4
	dw 0x00A03021 ; 800522C8
	dw 0x0C013A0A ; 800522CC
	dw 0x00A03821 ; 800522D0
	dw 0x1440001A ; 800522D4
	dw 0x24040040 ; 800522D8
	dw 0x9602002A ; 800522DC
	dw 0x0C0138D3 ; 800522E0
	dw 0xA602006E ; 800522E4
	dw 0x3C040001 ; 800522E8
	dw 0x0C0138CB ; 800522EC
	dw 0x34840020 ; 800522F0
	dw 0x02002021 ; 800522F4
	dw 0x3C058005 ; 800522F8
	dw 0x080148CE ; 800522FC
	dw 0x24A51DD4 ; 80052300
	dw 0x8604006E ; 80052304
	dw 0x8F8508C8 ; 80052308
	dw 0x0C01391F ; 8005230C
	dw 0x00000000 ; 80052310
	dw 0x24030003 ; 80052314
	dw 0x14430003 ; 80052318
	dw 0x24020001 ; 8005231C
	dw 0x080148CB ; 80052320
	dw 0xA6020A50 ; 80052324
	dw 0xA6000A50 ; 80052328
	dw 0x02002021 ; 8005232C
	dw 0x3C058005 ; 80052330
	dw 0x24A51AC8 ; 80052334
	dw 0x0C01389B ; 80052338
	dw 0x00000000 ; 8005233C
	dw 0x8FBF001C ; 80052340
	dw 0x8FB00018 ; 80052344
	dw 0x03E00008 ; 80052348
	dw 0x27BD0020 ; 8005234C
	dw 0x27BDFFE0 ; 80052350
	dw 0xAFB10014 ; 80052354
	dw 0x00808821 ; 80052358
	dw 0xAFBF0018 ; 8005235C
	dw 0x0C013FEB ; 80052360
	dw 0xAFB00010 ; 80052364
	dw 0x14400078 ; 80052368
	dw 0x00000000 ; 8005236C
	dw 0x8E2209AC ; 80052370
	dw 0x00000000 ; 80052374
	dw 0x94420002 ; 80052378
	dw 0x00000000 ; 8005237C
	dw 0x30420040 ; 80052380
	dw 0x10400009 ; 80052384
	dw 0x00000000 ; 80052388
	dw 0x0C0138D3 ; 8005238C
	dw 0x24040010 ; 80052390
	dw 0x02202021 ; 80052394
	dw 0x3C058005 ; 80052398
	dw 0x0C01389B ; 8005239C
	dw 0x24A518E4 ; 800523A0
	dw 0x08014953 ; 800523A4
	dw 0x00000000 ; 800523A8
	dw 0x8F8208C8 ; 800523AC
	dw 0x00000000 ; 800523B0
	dw 0x04410012 ; 800523B4
	dw 0x00000000 ; 800523B8
	dw 0x96220A36 ; 800523BC
	dw 0x00000000 ; 800523C0
	dw 0x24420001 ; 800523C4
	dw 0xA6220A36 ; 800523C8
	dw 0x00021400 ; 800523CC
	dw 0x00021403 ; 800523D0
	dw 0x28420005 ; 800523D4
	dw 0x1440000A ; 800523D8
	dw 0x00000000 ; 800523DC
	dw 0x0C0138D3 ; 800523E0
	dw 0x24040010 ; 800523E4
	dw 0x02202021 ; 800523E8
	dw 0x3C058005 ; 800523EC
	dw 0x0C01389B ; 800523F0
	dw 0x24A51864 ; 800523F4
	dw 0x08014953 ; 800523F8
	dw 0x00000000 ; 800523FC
	dw 0xA6200A36 ; 80052400
	dw 0x8F8308EC ; 80052404
	dw 0x24020001 ; 80052408
	dw 0x10620007 ; 8005240C
	dw 0x00000000 ; 80052410
	dw 0x10600016 ; 80052414
	dw 0x24020002 ; 80052418
	dw 0x8E23079C ; 8005241C
	dw 0x00000000 ; 80052420
	dw 0x14620012 ; 80052424
	dw 0x00000000 ; 80052428
	dw 0x96220A34 ; 8005242C
	dw 0x00000000 ; 80052430
	dw 0x24420001 ; 80052434
	dw 0xA6220A34 ; 80052438
	dw 0x00021400 ; 8005243C
	dw 0x00021403 ; 80052440
	dw 0x28420003 ; 80052444
	dw 0x1440000A ; 80052448
	dw 0x00000000 ; 8005244C
	dw 0x0C0138D3 ; 80052450
	dw 0x24040010 ; 80052454
	dw 0x02202021 ; 80052458
	dw 0x3C058005 ; 8005245C
	dw 0x0C01389B ; 80052460
	dw 0x24A51B64 ; 80052464
	dw 0x08014953 ; 80052468
	dw 0x00000000 ; 8005246C
	dw 0xA6200A34 ; 80052470
	dw 0x86220A34 ; 80052474
	dw 0x00000000 ; 80052478
	dw 0x14400009 ; 8005247C
	dw 0x00000000 ; 80052480
	dw 0x8F8508C8 ; 80052484
	dw 0x00000000 ; 80052488
	dw 0x04A00009 ; 8005248C
	dw 0x00000000 ; 80052490
	dw 0x0C013939 ; 80052494
	dw 0x02202021 ; 80052498
	dw 0x0801492E ; 8005249C
	dw 0x00408021 ; 800524A0
	dw 0x8F9008C8 ; 800524A4
	dw 0x00000000 ; 800524A8
	dw 0x06010002 ; 800524AC
	dw 0x00000000 ; 800524B0
	dw 0x8630006E ; 800524B4
	dw 0x8624006E ; 800524B8
	dw 0x0C005BF9 ; 800524BC
	dw 0x02002821 ; 800524C0
	dw 0x28420419 ; 800524C4
	dw 0x14400009 ; 800524C8
	dw 0x02202021 ; 800524CC
	dw 0x0C0138D3 ; 800524D0
	dw 0x24040010 ; 800524D4
	dw 0x02202021 ; 800524D8
	dw 0x3C058005 ; 800524DC
	dw 0x0C01389B ; 800524E0
	dw 0x24A51864 ; 800524E4
	dw 0x08014953 ; 800524E8
	dw 0xA630006E ; 800524EC
	dw 0x02002821 ; 800524F0
	dw 0x0C013A9C ; 800524F4
	dw 0xA625006E ; 800524F8
	dw 0x3C02800B ; 800524FC
	dw 0x8C429660 ; 80052500
	dw 0x00000000 ; 80052504
	dw 0x28420003 ; 80052508
	dw 0x14400008 ; 8005250C
	dw 0x02202021 ; 80052510
	dw 0x8E2209B0 ; 80052514
	dw 0x00000000 ; 80052518
	dw 0x8C420004 ; 8005251C
	dw 0x00000000 ; 80052520
	dw 0x90450007 ; 80052524
	dw 0x08014951 ; 80052528
	dw 0x00000000 ; 8005252C
	dw 0x8E2209B0 ; 80052530
	dw 0x00000000 ; 80052534
	dw 0x8C420004 ; 80052538
	dw 0x00000000 ; 8005253C
	dw 0x90450000 ; 80052540
	dw 0x0C0138A9 ; 80052544
	dw 0x24060004 ; 80052548
	dw 0x8FBF0018 ; 8005254C
	dw 0x8FB10014 ; 80052550
	dw 0x8FB00010 ; 80052554
	dw 0x03E00008 ; 80052558
	dw 0x27BD0020 ; 8005255C
	dw 0x27BDFFD0 ; 80052560
	dw 0xAFB1001C ; 80052564
	dw 0x00808821 ; 80052568
	dw 0x24040002 ; 8005256C
	dw 0xAFBF0028 ; 80052570
	dw 0xAFB30024 ; 80052574
	dw 0xAFB20020 ; 80052578
	dw 0x0C0138C5 ; 8005257C
	dw 0xAFB00018 ; 80052580
	dw 0x10400009 ; 80052584
	dw 0x02202021 ; 80052588
	dw 0x3C058005 ; 8005258C
	dw 0x0C01389B ; 80052590
	dw 0x24A52DDC ; 80052594
	dw 0x02202021 ; 80052598
	dw 0x0C013C98 ; 8005259C
	dw 0x00002821 ; 800525A0
	dw 0x080149BE ; 800525A4
	dw 0x00000000 ; 800525A8
	dw 0x0C0140AA ; 800525AC
	dw 0x02202021 ; 800525B0
	dw 0x14400050 ; 800525B4
	dw 0x00000000 ; 800525B8
	dw 0x8F8208C8 ; 800525BC
	dw 0x00000000 ; 800525C0
	dw 0x04410010 ; 800525C4
	dw 0x24020001 ; 800525C8
	dw 0x0C0138D3 ; 800525CC
	dw 0x24040010 ; 800525D0
	dw 0x8E2209B0 ; 800525D4
	dw 0x00000000 ; 800525D8
	dw 0x8C420000 ; 800525DC
	dw 0x02202021 ; 800525E0
	dw 0x90450003 ; 800525E4
	dw 0x0C0138A9 ; 800525E8
	dw 0x24060004 ; 800525EC
	dw 0x02202021 ; 800525F0
	dw 0x3C058005 ; 800525F4
	dw 0x0C01389B ; 800525F8
	dw 0x24A519C4 ; 800525FC
	dw 0x080149BE ; 80052600
	dw 0x00000000 ; 80052604
	dw 0x8F8308EC ; 80052608
	dw 0x00000000 ; 8005260C
	dw 0x10620007 ; 80052610
	dw 0x240205DC ; 80052614
	dw 0x10600019 ; 80052618
	dw 0x24020002 ; 8005261C
	dw 0x8E23079C ; 80052620
	dw 0x00000000 ; 80052624
	dw 0x14620015 ; 80052628
	dw 0x240205DC ; 8005262C
	dw 0xAFA20010 ; 80052630
	dw 0x02202021 ; 80052634
	dw 0x00002821 ; 80052638
	dw 0x00A03021 ; 8005263C
	dw 0x0C013A0A ; 80052640
	dw 0x00A03821 ; 80052644
	dw 0x1440002B ; 80052648
	dw 0x24040050 ; 8005264C
	dw 0x9622002A ; 80052650
	dw 0x0C0138D3 ; 80052654
	dw 0xA622006E ; 80052658
	dw 0x3C040001 ; 8005265C
	dw 0x0C0138CB ; 80052660
	dw 0x34840020 ; 80052664
	dw 0x02202021 ; 80052668
	dw 0x3C058005 ; 8005266C
	dw 0x0C01389B ; 80052670
	dw 0x24A51DD4 ; 80052674
	dw 0x080149BE ; 80052678
	dw 0x00000000 ; 8005267C
	dw 0x8E2209B0 ; 80052680
	dw 0x00000000 ; 80052684
	dw 0x8C420004 ; 80052688
	dw 0x862300AA ; 8005268C
	dw 0x90520004 ; 80052690
	dw 0x90530003 ; 80052694
	dw 0x14720004 ; 80052698
	dw 0x00000000 ; 8005269C
	dw 0x8F8208C8 ; 800526A0
	dw 0x080149AC ; 800526A4
	dw 0x24500800 ; 800526A8
	dw 0x8F9008C8 ; 800526AC
	dw 0x8624006E ; 800526B0
	dw 0x0C01391F ; 800526B4
	dw 0x02002821 ; 800526B8
	dw 0x24030003 ; 800526BC
	dw 0x1443000A ; 800526C0
	dw 0x02202021 ; 800526C4
	dw 0x862200AA ; 800526C8
	dw 0x02602821 ; 800526CC
	dw 0x14450003 ; 800526D0
	dw 0x26100800 ; 800526D4
	dw 0x02402821 ; 800526D8
	dw 0x02202021 ; 800526DC
	dw 0x0C0138A9 ; 800526E0
	dw 0x24060004 ; 800526E4
	dw 0x02202021 ; 800526E8
	dw 0x0C013939 ; 800526EC
	dw 0x02002821 ; 800526F0
	dw 0xA622006E ; 800526F4
	dw 0x8FBF0028 ; 800526F8
	dw 0x8FB30024 ; 800526FC
	dw 0x8FB20020 ; 80052700
	dw 0x8FB1001C ; 80052704
	dw 0x8FB00018 ; 80052708
	dw 0x03E00008 ; 8005270C
	dw 0x27BD0030 ; 80052710
	dw 0x27BDFFE0 ; 80052714
	dw 0xAFB00010 ; 80052718
	dw 0x00808021 ; 8005271C
	dw 0xAFB10014 ; 80052720
	dw 0xAFBF0018 ; 80052724
	dw 0x86020A34 ; 80052728
	dw 0x96030A34 ; 8005272C
	dw 0x10400003 ; 80052730
	dw 0x00A08821 ; 80052734
	dw 0x2462FFFF ; 80052738
	dw 0xA6020A34 ; 8005273C
	dw 0x0C0141B7 ; 80052740
	dw 0x02002021 ; 80052744
	dw 0x1440002B ; 80052748
	dw 0x00000000 ; 8005274C
	dw 0x8E0209AC ; 80052750
	dw 0x00000000 ; 80052754
	dw 0x94420002 ; 80052758
	dw 0x00000000 ; 8005275C
	dw 0x30420040 ; 80052760
	dw 0x1040000A ; 80052764
	dw 0x02002021 ; 80052768
	dw 0x0C0138E5 ; 8005276C
	dw 0x24050100 ; 80052770
	dw 0x14400006 ; 80052774
	dw 0x02002021 ; 80052778
	dw 0x3C058005 ; 8005277C
	dw 0x0C01389B ; 80052780
	dw 0x24A51DD4 ; 80052784
	dw 0x080149FE ; 80052788
	dw 0x00000000 ; 8005278C
	dw 0x8F8308EC ; 80052790
	dw 0x24020002 ; 80052794
	dw 0x10620003 ; 80052798
	dw 0x24020004 ; 8005279C
	dw 0x14620007 ; 800527A0
	dw 0x00000000 ; 800527A4
	dw 0x02002021 ; 800527A8
	dw 0x3C058005 ; 800527AC
	dw 0x978208EC ; 800527B0
	dw 0x24A51CB0 ; 800527B4
	dw 0x0C01389B ; 800527B8
	dw 0xA6020A50 ; 800527BC
	dw 0x8F8208F8 ; 800527C0
	dw 0x8603002A ; 800527C4
	dw 0x2442F800 ; 800527C8
	dw 0x10430005 ; 800527CC
	dw 0x02002021 ; 800527D0
	dw 0x978208F8 ; 800527D4
	dw 0xA6000A36 ; 800527D8
	dw 0x2442F800 ; 800527DC
	dw 0xA602006E ; 800527E0
	dw 0x0C014042 ; 800527E4
	dw 0x02202821 ; 800527E8
	dw 0x02002021 ; 800527EC
	dw 0x0C014063 ; 800527F0
	dw 0x02202821 ; 800527F4
	dw 0x8FBF0018 ; 800527F8
	dw 0x8FB10014 ; 800527FC
	dw 0x8FB00010 ; 80052800
	dw 0x03E00008 ; 80052804
	dw 0x27BD0020 ; 80052808
	dw 0x27BDFFE0 ; 8005280C
	dw 0xAFB00010 ; 80052810
	dw 0x00808021 ; 80052814
	dw 0xAFB10014 ; 80052818
	dw 0xAFBF0018 ; 8005281C
	dw 0x86020A34 ; 80052820
	dw 0x96030A34 ; 80052824
	dw 0x10400003 ; 80052828
	dw 0x00A08821 ; 8005282C
	dw 0x2462FFFF ; 80052830
	dw 0xA6020A34 ; 80052834
	dw 0x0C0141B7 ; 80052838
	dw 0x02002021 ; 8005283C
	dw 0x1440004F ; 80052840
	dw 0x00000000 ; 80052844
	dw 0x8E02004C ; 80052848
	dw 0x00000000 ; 8005284C
	dw 0x8C440008 ; 80052850
	dw 0x0C00C30E ; 80052854
	dw 0x26050020 ; 80052858
	dw 0x8E0209AC ; 8005285C
	dw 0x00000000 ; 80052860
	dw 0x94420002 ; 80052864
	dw 0x00000000 ; 80052868
	dw 0x30420040 ; 8005286C
	dw 0x1040000D ; 80052870
	dw 0x02002021 ; 80052874
	dw 0x0C0138E5 ; 80052878
	dw 0x24050100 ; 8005287C
	dw 0x14400009 ; 80052880
	dw 0x00000000 ; 80052884
	dw 0x0C0138D3 ; 80052888
	dw 0x24040010 ; 8005288C
	dw 0x02002021 ; 80052890
	dw 0x3C058005 ; 80052894
	dw 0x0C01389B ; 80052898
	dw 0x24A51DD4 ; 8005289C
	dw 0x08014A60 ; 800528A0
	dw 0x00000000 ; 800528A4
	dw 0x8F8308EC ; 800528A8
	dw 0x24020001 ; 800528AC
	dw 0x14620009 ; 800528B0
	dw 0x00000000 ; 800528B4
	dw 0x0C0138D3 ; 800528B8
	dw 0x24040010 ; 800528BC
	dw 0x02002021 ; 800528C0
	dw 0x3C058005 ; 800528C4
	dw 0x0C01389B ; 800528C8
	dw 0x24A51B64 ; 800528CC
	dw 0x08014A60 ; 800528D0
	dw 0x00000000 ; 800528D4
	dw 0x8F8208F8 ; 800528D8
	dw 0x8603002A ; 800528DC
	dw 0x2442F800 ; 800528E0
	dw 0x14430006 ; 800528E4
	dw 0x00000000 ; 800528E8
	dw 0x8F8308F0 ; 800528EC
	dw 0x8F8208F4 ; 800528F0
	dw 0x00000000 ; 800528F4
	dw 0x10620006 ; 800528F8
	dw 0x02002021 ; 800528FC
	dw 0x978208F8 ; 80052900
	dw 0xA6000A36 ; 80052904
	dw 0x2442F800 ; 80052908
	dw 0xA602006E ; 8005290C
	dw 0x02002021 ; 80052910
	dw 0x0C014042 ; 80052914
	dw 0x02202821 ; 80052918
	dw 0x02002021 ; 8005291C
	dw 0x0C014063 ; 80052920
	dw 0x02202821 ; 80052924
	dw 0x8F8308EC ; 80052928
	dw 0x24020002 ; 8005292C
	dw 0x14620008 ; 80052930
	dw 0x00000000 ; 80052934
	dw 0x8E0209B0 ; 80052938
	dw 0x00000000 ; 8005293C
	dw 0x8C420004 ; 80052940
	dw 0x00000000 ; 80052944
	dw 0x90510005 ; 80052948
	dw 0x08014A5A ; 8005294C
	dw 0x00000000 ; 80052950
	dw 0x8E0209B0 ; 80052954
	dw 0x00000000 ; 80052958
	dw 0x8C420004 ; 8005295C
	dw 0x00000000 ; 80052960
	dw 0x90510006 ; 80052964
	dw 0x0C0138CB ; 80052968
	dw 0x24040010 ; 8005296C
	dw 0x02002021 ; 80052970
	dw 0x02202821 ; 80052974
	dw 0x0C0138A9 ; 80052978
	dw 0x24060004 ; 8005297C
	dw 0x8FBF0018 ; 80052980
	dw 0x8FB10014 ; 80052984
	dw 0x8FB00010 ; 80052988
	dw 0x03E00008 ; 8005298C
	dw 0x27BD0020 ; 80052990
	dw 0x27BDFFD8 ; 80052994
	dw 0xAFB1001C ; 80052998
	dw 0x00808821 ; 8005299C
	dw 0xAFB00018 ; 800529A0
	dw 0xAFBF0020 ; 800529A4
	dw 0x86220A34 ; 800529A8
	dw 0x96230A34 ; 800529AC
	dw 0x10400003 ; 800529B0
	dw 0x00A08021 ; 800529B4
	dw 0x2462FFFF ; 800529B8
	dw 0xA6220A34 ; 800529BC
	dw 0x0C0141B7 ; 800529C0
	dw 0x02202021 ; 800529C4
	dw 0x14400038 ; 800529C8
	dw 0x00000000 ; 800529CC
	dw 0x8E2209AC ; 800529D0
	dw 0x00000000 ; 800529D4
	dw 0x94420002 ; 800529D8
	dw 0x00000000 ; 800529DC
	dw 0x30420040 ; 800529E0
	dw 0x1040001D ; 800529E4
	dw 0x02202021 ; 800529E8
	dw 0x0C0138E5 ; 800529EC
	dw 0x24050100 ; 800529F0
	dw 0x14400019 ; 800529F4
	dw 0x2402044C ; 800529F8
	dw 0xAFA20010 ; 800529FC
	dw 0x02202021 ; 80052A00
	dw 0x00002821 ; 80052A04
	dw 0x00A03021 ; 80052A08
	dw 0x0C013A0A ; 80052A0C
	dw 0x00A03821 ; 80052A10
	dw 0x14400025 ; 80052A14
	dw 0x00000000 ; 80052A18
	dw 0x0C0138D3 ; 80052A1C
	dw 0x24040020 ; 80052A20
	dw 0x24100008 ; 80052A24
	dw 0x0C0138C5 ; 80052A28
	dw 0x3C040100 ; 80052A2C
	dw 0x10400002 ; 80052A30
	dw 0x26240020 ; 80052A34
	dw 0x241000B7 ; 80052A38
	dw 0x0C00CA55 ; 80052A3C
	dw 0x02002821 ; 80052A40
	dw 0x02202021 ; 80052A44
	dw 0x3C058005 ; 80052A48
	dw 0x0C01389B ; 80052A4C
	dw 0x24A51B64 ; 80052A50
	dw 0x08014AAB ; 80052A54
	dw 0x00000000 ; 80052A58
	dw 0x3C02800B ; 80052A5C
	dw 0x8C429020 ; 80052A60
	dw 0x00000000 ; 80052A64
	dw 0x30420010 ; 80052A68
	dw 0x1440000A ; 80052A6C
	dw 0x02202021 ; 80052A70
	dw 0x8F8208F8 ; 80052A74
	dw 0x8623002A ; 80052A78
	dw 0x2442F800 ; 80052A7C
	dw 0x10430005 ; 80052A80
	dw 0x00000000 ; 80052A84
	dw 0x978208F8 ; 80052A88
	dw 0xA6200A36 ; 80052A8C
	dw 0x2442F800 ; 80052A90
	dw 0xA622006E ; 80052A94
	dw 0x0C014042 ; 80052A98
	dw 0x02002821 ; 80052A9C
	dw 0x02202021 ; 80052AA0
	dw 0x0C014063 ; 80052AA4
	dw 0x02002821 ; 80052AA8
	dw 0x8FBF0020 ; 80052AAC
	dw 0x8FB1001C ; 80052AB0
	dw 0x8FB00018 ; 80052AB4
	dw 0x03E00008 ; 80052AB8
	dw 0x27BD0028 ; 80052ABC
	dw 0x03E00008 ; 80052AC0
	dw 0x00000000 ; 80052AC4
	dw 0x27BDFFE8 ; 80052AC8
	dw 0xAFB00010 ; 80052ACC
	dw 0x00808021 ; 80052AD0
	dw 0x14A00010 ; 80052AD4
	dw 0xAFBF0014 ; 80052AD8
	dw 0x24040010 ; 80052ADC
	dw 0x3C028005 ; 80052AE0
	dw 0x24423254 ; 80052AE4
	dw 0xAE0209C4 ; 80052AE8
	dw 0x3C028005 ; 80052AEC
	dw 0x244260B8 ; 80052AF0
	dw 0x0C0138CB ; 80052AF4
	dw 0xAE0209C8 ; 80052AF8
	dw 0x8E0209B0 ; 80052AFC
	dw 0x00000000 ; 80052B00
	dw 0x8C420004 ; 80052B04
	dw 0x02002021 ; 80052B08
	dw 0x90450001 ; 80052B0C
	dw 0x0C0138A9 ; 80052B10
	dw 0x24060004 ; 80052B14
	dw 0x8FBF0014 ; 80052B18
	dw 0x8FB00010 ; 80052B1C
	dw 0x03E00008 ; 80052B20
	dw 0x27BD0018 ; 80052B24
	dw 0x27BDFFE0 ; 80052B28
	dw 0xAFB00010 ; 80052B2C
	dw 0x00808021 ; 80052B30
	dw 0xAFB10014 ; 80052B34
	dw 0x00A08821 ; 80052B38
	dw 0x16200017 ; 80052B3C
	dw 0xAFBF0018 ; 80052B40
	dw 0x24050030 ; 80052B44
	dw 0x3C028005 ; 80052B48
	dw 0x24422AC0 ; 80052B4C
	dw 0xAE0209C4 ; 80052B50
	dw 0x0C0138DB ; 80052B54
	dw 0xAE0209C8 ; 80052B58
	dw 0x8E0209B0 ; 80052B5C
	dw 0x00000000 ; 80052B60
	dw 0x8C420008 ; 80052B64
	dw 0x02002021 ; 80052B68
	dw 0x90450000 ; 80052B6C
	dw 0x0C0138A9 ; 80052B70
	dw 0x24060004 ; 80052B74
	dw 0x24040020 ; 80052B78
	dw 0x92020075 ; 80052B7C
	dw 0x24030002 ; 80052B80
	dw 0xA6030A22 ; 80052B84
	dw 0x3442000A ; 80052B88
	dw 0x0C0138D3 ; 80052B8C
	dw 0xA2020075 ; 80052B90
	dw 0x0C0138CB ; 80052B94
	dw 0x24040040 ; 80052B98
	dw 0x24020007 ; 80052B9C
	dw 0x16220005 ; 80052BA0
	dw 0x00000000 ; 80052BA4
	dw 0x92020075 ; 80052BA8
	dw 0x00000000 ; 80052BAC
	dw 0x304200FD ; 80052BB0
	dw 0xA2020075 ; 80052BB4
	dw 0x86030A34 ; 80052BB8
	dw 0x00000000 ; 80052BBC
	dw 0x10600005 ; 80052BC0
	dw 0x24020001 ; 80052BC4
	dw 0x1062001A ; 80052BC8
	dw 0x00000000 ; 80052BCC
	dw 0x08014B28 ; 80052BD0
	dw 0x00000000 ; 80052BD4
	dw 0x8E020798 ; 80052BD8
	dw 0x00000000 ; 80052BDC
	dw 0x284200FA ; 80052BE0
	dw 0x10400005 ; 80052BE4
	dw 0x00000000 ; 80052BE8
	dw 0x92020075 ; 80052BEC
	dw 0x00000000 ; 80052BF0
	dw 0x304200F7 ; 80052BF4
	dw 0xA2020075 ; 80052BF8
	dw 0x860200B6 ; 80052BFC
	dw 0x00000000 ; 80052C00
	dw 0x10400026 ; 80052C04
	dw 0x02002021 ; 80052C08
	dw 0x8E0209B0 ; 80052C0C
	dw 0x00000000 ; 80052C10
	dw 0x8C420000 ; 80052C14
	dw 0x00000000 ; 80052C18
	dw 0x90450003 ; 80052C1C
	dw 0x0C0138A9 ; 80052C20
	dw 0x24060004 ; 80052C24
	dw 0x24020001 ; 80052C28
	dw 0x08014B28 ; 80052C2C
	dw 0xA6020A34 ; 80052C30
	dw 0x0C0140D4 ; 80052C34
	dw 0x02002021 ; 80052C38
	dw 0x0C0138C5 ; 80052C3C
	dw 0x24040002 ; 80052C40
	dw 0x10400010 ; 80052C44
	dw 0x02002021 ; 80052C48
	dw 0x3C058005 ; 80052C4C
	dw 0x0C01389B ; 80052C50
	dw 0x24A52DDC ; 80052C54
	dw 0x02002021 ; 80052C58
	dw 0x0C013C98 ; 80052C5C
	dw 0x00002821 ; 80052C60
	dw 0x8E0209B0 ; 80052C64
	dw 0x00000000 ; 80052C68
	dw 0x8C420004 ; 80052C6C
	dw 0x02002021 ; 80052C70
	dw 0x90450003 ; 80052C74
	dw 0x0C0138A9 ; 80052C78
	dw 0x24060004 ; 80052C7C
	dw 0x08014B28 ; 80052C80
	dw 0x00000000 ; 80052C84
	dw 0x0C0138E0 ; 80052C88
	dw 0x24050030 ; 80052C8C
	dw 0x02002021 ; 80052C90
	dw 0x3C058005 ; 80052C94
	dw 0x0C01389B ; 80052C98
	dw 0x24A519C4 ; 80052C9C
	dw 0x8FBF0018 ; 80052CA0
	dw 0x8FB10014 ; 80052CA4
	dw 0x8FB00010 ; 80052CA8
	dw 0x03E00008 ; 80052CAC
	dw 0x27BD0020 ; 80052CB0
	dw 0x27BDFFE0 ; 80052CB4
	dw 0xAFB00010 ; 80052CB8
	dw 0x00808021 ; 80052CBC
	dw 0xAFB20018 ; 80052CC0
	dw 0x00A09021 ; 80052CC4
	dw 0xAFBF001C ; 80052CC8
	dw 0x16400018 ; 80052CCC
	dw 0xAFB10014 ; 80052CD0
	dw 0x0C0138D3 ; 80052CD4
	dw 0x24040040 ; 80052CD8
	dw 0x02002021 ; 80052CDC
	dw 0x3C028005 ; 80052CE0
	dw 0x8E0309B0 ; 80052CE4
	dw 0x24422AC0 ; 80052CE8
	dw 0xAE0209C4 ; 80052CEC
	dw 0xAE0209C8 ; 80052CF0
	dw 0x8C620008 ; 80052CF4
	dw 0x24110008 ; 80052CF8
	dw 0x90450002 ; 80052CFC
	dw 0x0C0138A9 ; 80052D00
	dw 0x24060004 ; 80052D04
	dw 0x0C0138C5 ; 80052D08
	dw 0x3C040100 ; 80052D0C
	dw 0x10400002 ; 80052D10
	dw 0x26040020 ; 80052D14
	dw 0x241100B7 ; 80052D18
	dw 0x0C00CA55 ; 80052D1C
	dw 0x02202821 ; 80052D20
	dw 0x02002021 ; 80052D24
	dw 0x0C0138DB ; 80052D28
	dw 0x24050030 ; 80052D2C
	dw 0x86020052 ; 80052D30
	dw 0x00000000 ; 80052D34
	dw 0x284200FA ; 80052D38
	dw 0x14400005 ; 80052D3C
	dw 0x00000000 ; 80052D40
	dw 0x92020075 ; 80052D44
	dw 0x00000000 ; 80052D48
	dw 0x34420008 ; 80052D4C
	dw 0xA2020075 ; 80052D50
	dw 0x86020052 ; 80052D54
	dw 0x00000000 ; 80052D58
	dw 0x284201F5 ; 80052D5C
	dw 0x14400002 ; 80052D60
	dw 0x24020002 ; 80052D64
	dw 0xA6000A22 ; 80052D68
	dw 0x16420002 ; 80052D6C
	dw 0x24020007 ; 80052D70
	dw 0xA600006C ; 80052D74
	dw 0x16420005 ; 80052D78
	dw 0x00000000 ; 80052D7C
	dw 0x92020075 ; 80052D80
	dw 0x00000000 ; 80052D84
	dw 0x34420002 ; 80052D88
	dw 0xA2020075 ; 80052D8C
	dw 0x860200B6 ; 80052D90
	dw 0x00000000 ; 80052D94
	dw 0x1040000A ; 80052D98
	dw 0x02002021 ; 80052D9C
	dw 0x3C058005 ; 80052DA0
	dw 0x92020075 ; 80052DA4
	dw 0x24A51864 ; 80052DA8
	dw 0x304200F5 ; 80052DAC
	dw 0x0C01389B ; 80052DB0
	dw 0xA2020075 ; 80052DB4
	dw 0x02002021 ; 80052DB8
	dw 0x0C0138E0 ; 80052DBC
	dw 0x24050030 ; 80052DC0
	dw 0x8FBF001C ; 80052DC4
	dw 0x8FB20018 ; 80052DC8
	dw 0x8FB10014 ; 80052DCC
	dw 0x8FB00010 ; 80052DD0
	dw 0x03E00008 ; 80052DD4
	dw 0x27BD0020 ; 80052DD8
	dw 0x27BDFFE0 ; 80052DDC
	dw 0xAFB00010 ; 80052DE0
	dw 0x00808021 ; 80052DE4
	dw 0xAFB10014 ; 80052DE8
	dw 0x00A08821 ; 80052DEC
	dw 0x1620001D ; 80052DF0
	dw 0xAFBF0018 ; 80052DF4
	dw 0x3C042000 ; 80052DF8
	dw 0x34848000 ; 80052DFC
	dw 0x3C028005 ; 80052E00
	dw 0x244232C0 ; 80052E04
	dw 0xAE0209C4 ; 80052E08
	dw 0x3C028005 ; 80052E0C
	dw 0x24422AC0 ; 80052E10
	dw 0x0C0138CB ; 80052E14
	dw 0xAE0209C8 ; 80052E18
	dw 0x02002021 ; 80052E1C
	dw 0x0C0138DB ; 80052E20
	dw 0x24050030 ; 80052E24
	dw 0x0C0138C5 ; 80052E28
	dw 0x24040002 ; 80052E2C
	dw 0x1440000A ; 80052E30
	dw 0x24020018 ; 80052E34
	dw 0x8E0209B0 ; 80052E38
	dw 0x00000000 ; 80052E3C
	dw 0x8C420004 ; 80052E40
	dw 0x860300AA ; 80052E44
	dw 0x90420004 ; 80052E48
	dw 0x00000000 ; 80052E4C
	dw 0x14620002 ; 80052E50
	dw 0x24020018 ; 80052E54
	dw 0x24020030 ; 80052E58
	dw 0xA6020A34 ; 80052E5C
	dw 0x0C0138CB ; 80052E60
	dw 0x24040010 ; 80052E64
	dw 0x86020A34 ; 80052E68
	dw 0x00000000 ; 80052E6C
	dw 0x16220018 ; 80052E70
	dw 0x00000000 ; 80052E74
	dw 0x0C013CAB ; 80052E78
	dw 0x02002021 ; 80052E7C
	dw 0x0C0140D4 ; 80052E80
	dw 0x02002021 ; 80052E84
	dw 0x02002021 ; 80052E88
	dw 0x0C0138E0 ; 80052E8C
	dw 0x24050034 ; 80052E90
	dw 0x0C0138D3 ; 80052E94
	dw 0x24040010 ; 80052E98
	dw 0x3C042000 ; 80052E9C
	dw 0x0C0138D3 ; 80052EA0
	dw 0x34848000 ; 80052EA4
	dw 0x0C0138C5 ; 80052EA8
	dw 0x24040002 ; 80052EAC
	dw 0x10400004 ; 80052EB0
	dw 0x02002021 ; 80052EB4
	dw 0x3C058005 ; 80052EB8
	dw 0x08014BB3 ; 80052EBC
	dw 0x24A53330 ; 80052EC0
	dw 0x3C058005 ; 80052EC4
	dw 0x24A519C4 ; 80052EC8
	dw 0x0C01389B ; 80052ECC
	dw 0x00000000 ; 80052ED0
	dw 0x8FBF0018 ; 80052ED4
	dw 0x8FB10014 ; 80052ED8
	dw 0x8FB00010 ; 80052EDC
	dw 0x03E00008 ; 80052EE0
	dw 0x27BD0020 ; 80052EE4
	dw 0x27BDFFE0 ; 80052EE8
	dw 0xAFB00010 ; 80052EEC
	dw 0x00808021 ; 80052EF0
	dw 0xAFBF0018 ; 80052EF4
	dw 0x14A0001E ; 80052EF8
	dw 0xAFB10014 ; 80052EFC
	dw 0x3C028005 ; 80052F00
	dw 0x8E0309B0 ; 80052F04
	dw 0x24422AC0 ; 80052F08
	dw 0xAE0209C4 ; 80052F0C
	dw 0xAE0209C8 ; 80052F10
	dw 0x8C620010 ; 80052F14
	dw 0x00000000 ; 80052F18
	dw 0x90450003 ; 80052F1C
	dw 0x0C0138A9 ; 80052F20
	dw 0x24060002 ; 80052F24
	dw 0x02002021 ; 80052F28
	dw 0x0C0138DB ; 80052F2C
	dw 0x24050004 ; 80052F30
	dw 0x0C0138D3 ; 80052F34
	dw 0x24040800 ; 80052F38
	dw 0x02002021 ; 80052F3C
	dw 0x00002821 ; 80052F40
	dw 0x24060004 ; 80052F44
	dw 0x3C028005 ; 80052F48
	dw 0x2442300C ; 80052F4C
	dw 0x96030A50 ; 80052F50
	dw 0x00A03821 ; 80052F54
	dw 0xA6000A50 ; 80052F58
	dw 0xAE020908 ; 80052F5C
	dw 0xAE00090C ; 80052F60
	dw 0xA6000922 ; 80052F64
	dw 0xA6000920 ; 80052F68
	dw 0x0C0138B6 ; 80052F6C
	dw 0xA603006E ; 80052F70
	dw 0x8E0209AC ; 80052F74
	dw 0x860300B6 ; 80052F78
	dw 0x94510000 ; 80052F7C
	dw 0x14600004 ; 80052F80
	dw 0x02002021 ; 80052F84
	dw 0x32220080 ; 80052F88
	dw 0x1440001A ; 80052F8C
	dw 0x00000000 ; 80052F90
	dw 0x0C0138E0 ; 80052F94
	dw 0x24050004 ; 80052F98
	dw 0x32220080 ; 80052F9C
	dw 0x10400011 ; 80052FA0
	dw 0xAE00090C ; 80052FA4
	dw 0x26040020 ; 80052FA8
	dw 0x0C00CA55 ; 80052FAC
	dw 0x24050009 ; 80052FB0
	dw 0x0C0138CB ; 80052FB4
	dw 0x24040800 ; 80052FB8
	dw 0x02002021 ; 80052FBC
	dw 0x3C058005 ; 80052FC0
	dw 0x0C01389B ; 80052FC4
	dw 0x24A56648 ; 80052FC8
	dw 0x3C028005 ; 80052FCC
	dw 0x24427548 ; 80052FD0
	dw 0xAE020908 ; 80052FD4
	dw 0xAE00090C ; 80052FD8
	dw 0xA6000922 ; 80052FDC
	dw 0x08014BFE ; 80052FE0
	dw 0xA6000920 ; 80052FE4
	dw 0x02002021 ; 80052FE8
	dw 0x3C058005 ; 80052FEC
	dw 0x0C01389B ; 80052FF0
	dw 0x24A51864 ; 80052FF4
	dw 0x8FBF0018 ; 80052FF8
	dw 0x8FB10014 ; 80052FFC
	dw 0x8FB00010 ; 80053000
	dw 0x03E00008 ; 80053004
	dw 0x27BD0020 ; 80053008
