
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

#ifndef GRIT_BG_FLOOR_H
#define GRIT_BG_FLOOR_H

#define bg_floorTilesLen 256
extern const unsigned short bg_floorTiles[128];

#define bg_floorMapLen 8192
extern const unsigned short bg_floorMap[4096];

#define bg_floorPalLen 512
extern const unsigned short bg_floorPal[256];

#endif // GRIT_BG_FLOOR_H

//}}BLOCK(bg_floor)
