
//{{BLOCK(bg01)

//======================================================================
//
//	bg01, 512x512@4, 
//	+ palette 256 entries, not compressed
//	+ 11 tiles (t|f|p reduced) not compressed
//	+ regular map (in SBBs), not compressed, 64x64 
//	Total size: 512 + 352 + 8192 = 9056
//
//	Time-stamp: 2018-11-28, 20:36:28
//	Exported by Cearn's GBA Image Transmogrifier, v0.8.3
//	( http://www.coranac.com/projects/#grit )
//
//======================================================================

#ifndef GRIT_BG01_H
#define GRIT_BG01_H

#define bg01TilesLen 352
extern const unsigned short bg01Tiles[176];

#define bg01MapLen 8192
extern const unsigned short bg01Map[4096];

#define bg01PalLen 512
extern const unsigned short bg01Pal[256];

#endif // GRIT_BG01_H

//}}BLOCK(bg01)
