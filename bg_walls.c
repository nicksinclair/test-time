
//{{BLOCK(bg_walls)

//======================================================================
//
//	bg_walls, 512x512@4, 
//	+ palette 256 entries, not compressed
//	+ 6 tiles (t|f|p reduced) not compressed
//	+ regular map (in SBBs), not compressed, 64x64 
//	Total size: 512 + 192 + 8192 = 8896
//
//	Time-stamp: 2018-11-29, 17:14:49
//	Exported by Cearn's GBA Image Transmogrifier, v0.8.3
//	( http://www.coranac.com/projects/#grit )
//
//======================================================================

const unsigned short bg_wallsTiles[96] __attribute__((aligned(4)))=
{
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x1111,0x1111,0x1111,0x1111,0x1111,0x1111,0x1111,0x1111,
	0x1111,0x1111,0x1111,0x1111,0x1111,0x1111,0x1111,0x1111,
	0x1111,0x1111,0x4451,0x4444,0x3341,0x3333,0x2341,0x2222,
	0x2341,0x2222,0x2341,0x2222,0x2341,0x2222,0x2341,0x2222,
	0x1111,0x1111,0x4444,0x1644,0x3333,0x1633,0x2222,0x1632,
	0x2222,0x1632,0x2222,0x1632,0x2222,0x1632,0x2222,0x1632,

	0x2341,0x2222,0x3341,0x3333,0x6661,0x6666,0x1111,0x1111,
	0x3341,0x3333,0x3341,0x3333,0x3341,0x3333,0x1111,0x1111,
	0x2222,0x1632,0x3333,0x1633,0x6666,0x1666,0x1111,0x1111,
	0x3333,0x1633,0x3333,0x1633,0x3333,0x1633,0x1111,0x1111,
};

const unsigned short bg_wallsMap[4096] __attribute__((aligned(4)))=
{
	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,
	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,
	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,
	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,
	0x0002,0x0003,0x0002,0x0003,0x0002,0x0003,0x0002,0x0003,
	0x0002,0x0003,0x0002,0x0003,0x0002,0x0003,0x0002,0x0003,
	0x0002,0x0003,0x0002,0x0003,0x0002,0x0003,0x0002,0x0003,
	0x0002,0x0003,0x0002,0x0003,0x0002,0x0003,0x0002,0x0003,

	0x0004,0x0005,0x0004,0x0005,0x0004,0x0005,0x0004,0x0005,
	0x0004,0x0005,0x0004,0x0005,0x0004,0x0005,0x0004,0x0005,
	0x0004,0x0005,0x0004,0x0005,0x0004,0x0005,0x0004,0x0005,
	0x0004,0x0005,0x0004,0x0005,0x0004,0x0005,0x0004,0x0005,
	0x0002,0x0003,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0002,0x0003,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0004,0x0005,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0004,0x0005,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0002,0x0003,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0002,0x0003,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0004,0x0005,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0004,0x0005,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0002,0x0003,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0002,0x0003,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0004,0x0005,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0004,0x0005,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0002,0x0003,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0002,0x0003,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0002,0x0003,0x0002,0x0003,

	0x0004,0x0005,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0004,0x0005,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0004,0x0005,0x0004,0x0005,
	0x0002,0x0003,0x0002,0x0003,0x0002,0x0003,0x0000,0x0000,
	0x0000,0x0000,0x0002,0x0003,0x0002,0x0003,0x0002,0x0003,
	0x0002,0x0003,0x0002,0x0003,0x0002,0x0003,0x0002,0x0003,
	0x0000,0x0000,0x0000,0x0000,0x0002,0x0003,0x0000,0x0000,

	0x0004,0x0005,0x0004,0x0005,0x0004,0x0005,0x0000,0x0000,
	0x0000,0x0000,0x0004,0x0005,0x0004,0x0005,0x0004,0x0005,
	0x0004,0x0005,0x0004,0x0005,0x0004,0x0005,0x0004,0x0005,
	0x0000,0x0000,0x0000,0x0000,0x0004,0x0005,0x0000,0x0000,
	0x0002,0x0003,0x0002,0x0003,0x0002,0x0003,0x0000,0x0000,
	0x0000,0x0000,0x0002,0x0003,0x0002,0x0003,0x0002,0x0003,
	0x0002,0x0003,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0002,0x0003,0x0000,0x0000,

	0x0004,0x0005,0x0004,0x0005,0x0004,0x0005,0x0000,0x0000,
	0x0000,0x0000,0x0004,0x0005,0x0004,0x0005,0x0004,0x0005,
	0x0004,0x0005,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0004,0x0005,0x0000,0x0000,
	0x0002,0x0003,0x0002,0x0003,0x0002,0x0003,0x0000,0x0000,
	0x0000,0x0000,0x0002,0x0003,0x0002,0x0003,0x0002,0x0003,
	0x0002,0x0003,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0002,0x0003,0x0000,0x0000,

	0x0004,0x0005,0x0004,0x0005,0x0004,0x0005,0x0000,0x0000,
	0x0000,0x0000,0x0004,0x0005,0x0004,0x0005,0x0004,0x0005,
	0x0004,0x0005,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0004,0x0005,0x0000,0x0000,
	0x0002,0x0003,0x0002,0x0003,0x0002,0x0003,0x0000,0x0000,
	0x0000,0x0000,0x0002,0x0003,0x0002,0x0003,0x0002,0x0003,
	0x0002,0x0003,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0002,0x0003,0x0000,0x0000,

	0x0004,0x0005,0x0004,0x0005,0x0004,0x0005,0x0000,0x0000,
	0x0000,0x0000,0x0004,0x0005,0x0004,0x0005,0x0004,0x0005,
	0x0004,0x0005,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0004,0x0005,0x0000,0x0000,
	0x0002,0x0003,0x0002,0x0003,0x0002,0x0003,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0002,0x0003,
	0x0000,0x0000,0x0000,0x0000,0x0002,0x0003,0x0000,0x0000,

	0x0004,0x0005,0x0004,0x0005,0x0004,0x0005,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0004,0x0005,
	0x0000,0x0000,0x0000,0x0000,0x0004,0x0005,0x0000,0x0000,
	0x0002,0x0003,0x0002,0x0003,0x0002,0x0003,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0002,0x0003,
	0x0000,0x0000,0x0000,0x0000,0x0002,0x0003,0x0000,0x0000,

	0x0004,0x0005,0x0004,0x0005,0x0004,0x0005,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0004,0x0005,
	0x0000,0x0000,0x0000,0x0000,0x0004,0x0005,0x0000,0x0000,
	0x0002,0x0003,0x0002,0x0003,0x0002,0x0003,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0002,0x0003,
	0x0000,0x0000,0x0000,0x0000,0x0002,0x0003,0x0000,0x0000,

	0x0004,0x0005,0x0004,0x0005,0x0004,0x0005,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0004,0x0005,
	0x0000,0x0000,0x0000,0x0000,0x0004,0x0005,0x0000,0x0000,
	0x0002,0x0003,0x0002,0x0003,0x0002,0x0003,0x0002,0x0003,
	0x0002,0x0003,0x0002,0x0003,0x0002,0x0003,0x0002,0x0003,
	0x0002,0x0003,0x0002,0x0003,0x0002,0x0003,0x0002,0x0003,
	0x0002,0x0003,0x0002,0x0003,0x0002,0x0003,0x0000,0x0000,

	0x0004,0x0005,0x0004,0x0005,0x0004,0x0005,0x0004,0x0005,
	0x0004,0x0005,0x0004,0x0005,0x0004,0x0005,0x0004,0x0005,
	0x0004,0x0005,0x0004,0x0005,0x0004,0x0005,0x0004,0x0005,
	0x0004,0x0005,0x0004,0x0005,0x0004,0x0005,0x0000,0x0000,
	0x0002,0x0003,0x0002,0x0003,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0004,0x0005,0x0004,0x0005,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0002,0x0003,0x0002,0x0003,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0004,0x0005,0x0004,0x0005,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0002,0x0003,0x0002,0x0003,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,
	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,
	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,
	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,
	0x0002,0x0003,0x0002,0x0003,0x0002,0x0003,0x0002,0x0003,
	0x0002,0x0003,0x0002,0x0003,0x0002,0x0003,0x0002,0x0003,
	0x0002,0x0003,0x0002,0x0003,0x0002,0x0003,0x0002,0x0003,
	0x0002,0x0003,0x0002,0x0003,0x0002,0x0003,0x0002,0x0003,

	0x0004,0x0005,0x0004,0x0005,0x0004,0x0005,0x0004,0x0005,
	0x0004,0x0005,0x0004,0x0005,0x0004,0x0005,0x0004,0x0005,
	0x0004,0x0005,0x0004,0x0005,0x0004,0x0005,0x0004,0x0005,
	0x0004,0x0005,0x0004,0x0005,0x0004,0x0005,0x0004,0x0005,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0002,0x0003,0x0002,0x0003,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0004,0x0005,0x0004,0x0005,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0002,0x0003,0x0002,0x0003,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0004,0x0005,0x0004,0x0005,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0002,0x0003,0x0002,0x0003,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0004,0x0005,0x0004,0x0005,
	0x0002,0x0003,0x0002,0x0003,0x0002,0x0003,0x0002,0x0003,
	0x0002,0x0003,0x0002,0x0003,0x0002,0x0003,0x0002,0x0003,
	0x0002,0x0003,0x0002,0x0003,0x0000,0x0000,0x0000,0x0000,
	0x0002,0x0003,0x0002,0x0003,0x0002,0x0003,0x0002,0x0003,

	0x0004,0x0005,0x0004,0x0005,0x0004,0x0005,0x0004,0x0005,
	0x0004,0x0005,0x0004,0x0005,0x0004,0x0005,0x0004,0x0005,
	0x0004,0x0005,0x0004,0x0005,0x0000,0x0000,0x0000,0x0000,
	0x0004,0x0005,0x0004,0x0005,0x0004,0x0005,0x0004,0x0005,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0002,0x0003,0x0000,0x0000,0x0000,0x0000,
	0x0002,0x0003,0x0002,0x0003,0x0002,0x0003,0x0002,0x0003,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0004,0x0005,0x0000,0x0000,0x0000,0x0000,
	0x0004,0x0005,0x0004,0x0005,0x0004,0x0005,0x0004,0x0005,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0002,0x0003,0x0002,0x0003,0x0002,0x0003,0x0002,0x0003,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0004,0x0005,0x0004,0x0005,0x0004,0x0005,0x0004,0x0005,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0002,0x0003,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0002,0x0003,0x0002,0x0003,0x0002,0x0003,0x0002,0x0003,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0004,0x0005,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0004,0x0005,0x0004,0x0005,0x0004,0x0005,0x0004,0x0005,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0002,0x0003,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0002,0x0003,0x0002,0x0003,0x0002,0x0003,0x0002,0x0003,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0004,0x0005,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0004,0x0005,0x0004,0x0005,0x0004,0x0005,0x0004,0x0005,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0002,0x0003,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0002,0x0003,0x0002,0x0003,0x0002,0x0003,0x0002,0x0003,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0004,0x0005,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0004,0x0005,0x0004,0x0005,0x0004,0x0005,0x0004,0x0005,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0002,0x0003,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0002,0x0003,0x0002,0x0003,0x0002,0x0003,0x0002,0x0003,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0004,0x0005,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0004,0x0005,0x0004,0x0005,0x0004,0x0005,0x0004,0x0005,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0002,0x0003,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0002,0x0003,0x0002,0x0003,0x0002,0x0003,0x0002,0x0003,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0004,0x0005,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0004,0x0005,0x0004,0x0005,0x0004,0x0005,0x0004,0x0005,
	0x0000,0x0000,0x0002,0x0003,0x0002,0x0003,0x0002,0x0003,
	0x0002,0x0003,0x0002,0x0003,0x0002,0x0003,0x0002,0x0003,
	0x0002,0x0003,0x0002,0x0003,0x0002,0x0003,0x0002,0x0003,
	0x0002,0x0003,0x0002,0x0003,0x0002,0x0003,0x0002,0x0003,

	0x0000,0x0000,0x0004,0x0005,0x0004,0x0005,0x0004,0x0005,
	0x0004,0x0005,0x0004,0x0005,0x0004,0x0005,0x0004,0x0005,
	0x0004,0x0005,0x0004,0x0005,0x0004,0x0005,0x0004,0x0005,
	0x0004,0x0005,0x0004,0x0005,0x0004,0x0005,0x0004,0x0005,
	0x0000,0x0000,0x0002,0x0003,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0002,0x0003,0x0002,0x0003,

	0x0000,0x0000,0x0004,0x0005,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0004,0x0005,0x0004,0x0005,
	0x0000,0x0000,0x0002,0x0003,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0002,0x0003,0x0002,0x0003,

	0x0000,0x0000,0x0004,0x0005,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0004,0x0005,0x0004,0x0005,
	0x0000,0x0000,0x0002,0x0003,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0002,0x0003,0x0002,0x0003,

	0x0004,0x0005,0x0004,0x0005,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0002,0x0003,0x0002,0x0003,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0002,0x0003,0x0002,0x0003,0x0002,0x0003,0x0002,0x0003,
	0x0002,0x0003,0x0002,0x0003,0x0002,0x0003,0x0002,0x0003,

	0x0004,0x0005,0x0004,0x0005,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0004,0x0005,0x0004,0x0005,0x0004,0x0005,0x0004,0x0005,
	0x0004,0x0005,0x0004,0x0005,0x0004,0x0005,0x0004,0x0005,
	0x0002,0x0003,0x0002,0x0003,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0004,0x0005,0x0004,0x0005,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0002,0x0003,0x0002,0x0003,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0004,0x0005,0x0004,0x0005,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0002,0x0003,0x0002,0x0003,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0004,0x0005,0x0004,0x0005,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0002,0x0003,0x0002,0x0003,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0002,0x0003,0x0002,0x0003,0x0002,0x0003,
	0x0002,0x0003,0x0002,0x0003,0x0002,0x0003,0x0002,0x0003,
	0x0002,0x0003,0x0002,0x0003,0x0002,0x0003,0x0002,0x0003,

	0x0004,0x0005,0x0004,0x0005,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0004,0x0005,0x0004,0x0005,0x0004,0x0005,
	0x0004,0x0005,0x0004,0x0005,0x0004,0x0005,0x0004,0x0005,
	0x0004,0x0005,0x0004,0x0005,0x0004,0x0005,0x0004,0x0005,
	0x0002,0x0003,0x0002,0x0003,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0002,0x0003,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0002,0x0003,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0004,0x0005,0x0004,0x0005,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0004,0x0005,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0004,0x0005,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0002,0x0003,0x0002,0x0003,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0002,0x0003,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0002,0x0003,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0004,0x0005,0x0004,0x0005,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0004,0x0005,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0004,0x0005,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0002,0x0003,0x0002,0x0003,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0002,0x0003,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0002,0x0003,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0004,0x0005,0x0004,0x0005,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0004,0x0005,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0004,0x0005,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0002,0x0003,0x0002,0x0003,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0002,0x0003,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0002,0x0003,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0002,0x0003,

	0x0004,0x0005,0x0004,0x0005,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0004,0x0005,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0004,0x0005,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0004,0x0005,
	0x0002,0x0003,0x0002,0x0003,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0002,0x0003,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0002,0x0003,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0002,0x0003,

	0x0004,0x0005,0x0004,0x0005,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0004,0x0005,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0004,0x0005,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0004,0x0005,
	0x0002,0x0003,0x0002,0x0003,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0002,0x0003,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0002,0x0003,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0002,0x0003,

	0x0004,0x0005,0x0004,0x0005,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0004,0x0005,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0004,0x0005,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0004,0x0005,
	0x0002,0x0003,0x0002,0x0003,0x0000,0x0000,0x0000,0x0000,
	0x0002,0x0003,0x0002,0x0003,0x0002,0x0003,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0002,0x0003,0x0002,0x0003,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0002,0x0003,

	0x0004,0x0005,0x0004,0x0005,0x0000,0x0000,0x0000,0x0000,
	0x0004,0x0005,0x0004,0x0005,0x0004,0x0005,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0004,0x0005,0x0004,0x0005,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0004,0x0005,
	0x0002,0x0003,0x0002,0x0003,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0002,0x0003,

	0x0004,0x0005,0x0004,0x0005,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0004,0x0005,
	0x0002,0x0003,0x0002,0x0003,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0002,0x0003,

	0x0004,0x0005,0x0004,0x0005,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0004,0x0005,
	0x0002,0x0003,0x0002,0x0003,0x0002,0x0003,0x0002,0x0003,
	0x0002,0x0003,0x0002,0x0003,0x0002,0x0003,0x0002,0x0003,
	0x0002,0x0003,0x0002,0x0003,0x0002,0x0003,0x0002,0x0003,
	0x0002,0x0003,0x0002,0x0003,0x0002,0x0003,0x0002,0x0003,

	0x0004,0x0005,0x0004,0x0005,0x0004,0x0005,0x0004,0x0005,
	0x0004,0x0005,0x0004,0x0005,0x0004,0x0005,0x0004,0x0005,
	0x0004,0x0005,0x0004,0x0005,0x0004,0x0005,0x0004,0x0005,
	0x0004,0x0005,0x0004,0x0005,0x0004,0x0005,0x0004,0x0005,
	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,
	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,
	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,
	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,

	0x0000,0x0000,0x0004,0x0005,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0004,0x0005,0x0004,0x0005,
	0x0002,0x0003,0x0002,0x0003,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0002,0x0003,0x0002,0x0003,
	0x0002,0x0003,0x0002,0x0003,0x0002,0x0003,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0002,0x0003,0x0002,0x0003,

	0x0004,0x0005,0x0004,0x0005,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0004,0x0005,0x0004,0x0005,
	0x0004,0x0005,0x0004,0x0005,0x0004,0x0005,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0004,0x0005,0x0004,0x0005,
	0x0000,0x0000,0x0002,0x0003,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0002,0x0003,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0002,0x0003,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0002,0x0003,0x0002,0x0003,

	0x0000,0x0000,0x0004,0x0005,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0004,0x0005,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0004,0x0005,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0004,0x0005,0x0004,0x0005,
	0x0000,0x0000,0x0002,0x0003,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0002,0x0003,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0002,0x0003,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0002,0x0003,0x0002,0x0003,

	0x0000,0x0000,0x0004,0x0005,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0004,0x0005,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0004,0x0005,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0004,0x0005,0x0004,0x0005,
	0x0000,0x0000,0x0002,0x0003,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0002,0x0003,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0002,0x0003,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0002,0x0003,0x0002,0x0003,

	0x0000,0x0000,0x0004,0x0005,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0004,0x0005,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0004,0x0005,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0004,0x0005,0x0004,0x0005,
	0x0002,0x0003,0x0002,0x0003,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0002,0x0003,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0002,0x0003,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0002,0x0003,0x0002,0x0003,

	0x0004,0x0005,0x0004,0x0005,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0004,0x0005,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0004,0x0005,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0004,0x0005,0x0004,0x0005,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0002,0x0003,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0002,0x0003,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0002,0x0003,0x0002,0x0003,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0004,0x0005,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0004,0x0005,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0004,0x0005,0x0004,0x0005,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0002,0x0003,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0002,0x0003,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0002,0x0003,0x0002,0x0003,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0004,0x0005,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0004,0x0005,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0004,0x0005,0x0004,0x0005,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0002,0x0003,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0002,0x0003,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0002,0x0003,0x0002,0x0003,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0004,0x0005,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0004,0x0005,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0004,0x0005,0x0004,0x0005,
	0x0002,0x0003,0x0002,0x0003,0x0002,0x0003,0x0002,0x0003,
	0x0002,0x0003,0x0002,0x0003,0x0002,0x0003,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0002,0x0003,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0002,0x0003,0x0002,0x0003,

	0x0004,0x0005,0x0004,0x0005,0x0004,0x0005,0x0004,0x0005,
	0x0004,0x0005,0x0004,0x0005,0x0004,0x0005,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0004,0x0005,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0004,0x0005,0x0004,0x0005,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0002,0x0003,0x0002,0x0003,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0004,0x0005,0x0004,0x0005,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0002,0x0003,0x0002,0x0003,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0004,0x0005,0x0004,0x0005,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0002,0x0003,
	0x0002,0x0003,0x0002,0x0003,0x0002,0x0003,0x0002,0x0003,
	0x0002,0x0003,0x0002,0x0003,0x0002,0x0003,0x0002,0x0003,
	0x0002,0x0003,0x0002,0x0003,0x0002,0x0003,0x0002,0x0003,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0004,0x0005,
	0x0004,0x0005,0x0004,0x0005,0x0004,0x0005,0x0004,0x0005,
	0x0004,0x0005,0x0004,0x0005,0x0004,0x0005,0x0004,0x0005,
	0x0004,0x0005,0x0004,0x0005,0x0004,0x0005,0x0004,0x0005,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0002,0x0003,0x0002,0x0003,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0004,0x0005,0x0004,0x0005,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0002,0x0003,0x0002,0x0003,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0004,0x0005,0x0004,0x0005,
	0x0002,0x0003,0x0002,0x0003,0x0002,0x0003,0x0002,0x0003,
	0x0002,0x0003,0x0002,0x0003,0x0002,0x0003,0x0002,0x0003,
	0x0002,0x0003,0x0002,0x0003,0x0000,0x0000,0x0000,0x0000,
	0x0002,0x0003,0x0002,0x0003,0x0002,0x0003,0x0002,0x0003,

	0x0004,0x0005,0x0004,0x0005,0x0004,0x0005,0x0004,0x0005,
	0x0004,0x0005,0x0004,0x0005,0x0004,0x0005,0x0004,0x0005,
	0x0004,0x0005,0x0004,0x0005,0x0000,0x0000,0x0000,0x0000,
	0x0004,0x0005,0x0004,0x0005,0x0004,0x0005,0x0004,0x0005,
	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,
	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,
	0x0001,0x0001,0x0001,0x0001,0x0000,0x0000,0x0000,0x0000,
	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,
};

const unsigned short bg_wallsPal[256] __attribute__((aligned(4)))=
{
	0x7C1F,0x0000,0x7FFF,0x54E1,0x624A,0x66AC,0x6ACE,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x7FFF,0x5AAE,0x62F0,0x568E,0x5EAF,0x566D,0x5ECF,
	0x5AAF,0x5A8E,0x526D,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
};

//}}BLOCK(bg_walls)
