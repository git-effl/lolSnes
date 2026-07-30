
//{{BLOCK(lolsnes_screen)

//======================================================================
//
//	lolsnes_screen, 256x192@8, 
//	+ palette 256 entries, not compressed
//	+ 1 tiles (t|f|p reduced) not compressed
//	+ regular map (flat), not compressed, 32x24 
//	Total size: 512 + 64 + 1536 = 2112
//
//	Time-stamp: 2026-07-30, 22:57:28
//	Exported by Cearn's GBA Image Transmogrifier, v0.8.6
//	( http://www.coranac.com/projects/#grit )
//
//======================================================================

#ifndef GRIT_LOLSNES_SCREEN_H
#define GRIT_LOLSNES_SCREEN_H

#define lolsnes_screenTilesLen 64
extern const unsigned short lolsnes_screenTiles[32];

#define lolsnes_screenMapLen 1536
extern const unsigned short lolsnes_screenMap[768];

#define lolsnes_screenPalLen 512
extern const unsigned short lolsnes_screenPal[256];

#endif // GRIT_LOLSNES_SCREEN_H

//}}BLOCK(lolsnes_screen)
