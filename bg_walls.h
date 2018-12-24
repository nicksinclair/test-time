
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

#ifndef GRIT_BG_WALLS_H
#define GRIT_BG_WALLS_H

#define bg_wallsTilesLen 192
extern const unsigned short bg_wallsTiles[96];

#define bg_wallsMapLen 8192
extern const unsigned short bg_wallsMap[4096];

#define bg_wallsPalLen 512
extern const unsigned short bg_wallsPal[256];

#endif // GRIT_BG_WALLS_H

//}}BLOCK(bg_walls)
