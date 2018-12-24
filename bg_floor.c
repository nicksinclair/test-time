
//{{BLOCK(bg_floor)

//======================================================================
//
//	bg_floor, 512x512@4, 
//	+ palette 256 entries, not compressed
//	+ 8 tiles (t|f|p reduced) not compressed
//	+ regular map (in SBBs), not compressed, 64x64 
//	Total size: 512 + 256 + 8192 = 8960
//
//	Time-stamp: 2018-11-29, 17:13:30
//	Exported by Cearn's GBA Image Transmogrifier, v0.8.3
//	( http://www.coranac.com/projects/#grit )
//
//======================================================================

const unsigned short bg_floorTiles[128] __attribute__((aligned(4)))=
{
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x799A,0x5555,0x288A,0x4444,0x288A,0x4444,0x488A,0xAAAA,
	0x488A,0x6AAA,0x288A,0x4666,0x288A,0x4666,0x388A,0x3333,
	0x7777,0x5777,0x4773,0x7444,0x4773,0x7444,0xA883,0x7AAA,
	0xA883,0x7AAA,0x6553,0x7666,0x6553,0x7666,0x3333,0x3333,
	0x788A,0x8222,0x488A,0xAAAA,0x488A,0xAAAA,0x488A,0x6AAA,
	0x488A,0x6AAA,0x722A,0x7777,0x722A,0x7777,0x9444,0x9999,

	0x2773,0x7222,0xA883,0x7AAA,0xA883,0x7AAA,0xA883,0x7AAA,
	0xA883,0x7AAA,0x7773,0x7777,0x7773,0x7777,0x9999,0x9999,
	0x1111,0x1111,0x1111,0x1111,0x1111,0x1111,0x1111,0x1111,
	0x1111,0x1111,0x1111,0x1111,0x1111,0x1111,0x1111,0x1111,
	0x222A,0x2222,0x988A,0x6666,0x488A,0x6AAA,0x788A,0x5888,
	0x288A,0x4444,0x488A,0xAAAA,0x222A,0x2444,0x8226,0x2222,
	0x2777,0x7222,0x6553,0x7666,0xA883,0x7AAA,0x8773,0x7888,
	0x4773,0x7444,0xA883,0x7AAA,0x4773,0x7444,0x2887,0x8222,
};

const unsigned short bg_floorMap[4096] __attribute__((aligned(4)))=
{
	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,

	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,

	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,

	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,

	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,

	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,

	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,

	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,

	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,

	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,

	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,

	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,

	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,

	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,

	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,

	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,

	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,

	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,

	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,

	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,

	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,

	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,

	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,

	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,

	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,

	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,

	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,

	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,

	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,

	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,

	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,

	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,

	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,

	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,

	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,

	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,

	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,

	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,

	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,

	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,

	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,

	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,

	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,

	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,

	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,

	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,

	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,

	0x1005,0x1005,0x1005,0x1005,0x1005,0x1005,0x1005,0x1005,
	0x1005,0x1005,0x1005,0x1005,0x1005,0x1005,0x1005,0x1005,
	0x1005,0x1005,0x1005,0x1005,0x1005,0x1005,0x1005,0x1005,
	0x1005,0x1005,0x1005,0x1005,0x1005,0x1005,0x1005,0x1005,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,

	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,

	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,

	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,

	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,

	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,

	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,

	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,

	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,

	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,

	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,

	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,

	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,

	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,

	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,0x1001,0x1002,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,
	0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,0x1003,0x1004,

	0x1005,0x1005,0x1005,0x1005,0x1005,0x1005,0x1005,0x1005,
	0x1005,0x1005,0x1005,0x1005,0x1005,0x1005,0x1005,0x1005,
	0x1005,0x1005,0x1005,0x1005,0x1006,0x1007,0x1006,0x1007,
	0x1006,0x1007,0x1005,0x1005,0x1005,0x1005,0x1005,0x1005,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
};

const unsigned short bg_floorPal[256] __attribute__((aligned(4)))=
{
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
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

//}}BLOCK(bg_floor)