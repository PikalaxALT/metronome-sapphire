SecretBase_BrownCave2_MapBorder:: @ 82E7D28
	.incbin "data/layouts/SecretBase_BrownCave2/border.bin"

SecretBase_BrownCave2_MapBlockdata:: @ 82E7D30
	.incbin "data/layouts/SecretBase_BrownCave2/map.bin"

	.align 2
SecretBase_BrownCave2_Layout:: @ 82E7E2C
	.4byte 0xe
	.4byte 0x9
	.4byte SecretBase_BrownCave2_MapBorder
	.4byte SecretBase_BrownCave2_MapBlockdata
	.4byte gTileset_SecretBase
	.4byte gTileset_SecretBaseBrownCave
