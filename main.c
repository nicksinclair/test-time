/**
Escape the CULC: The Game So Far...

Currently, the player can walk left, right, up, and down, across the map and collect objects (keys and coffees).

After 120 seconds (2 minutes), the game should move to the lose state. 

There is a background that is organized into a maze.
The maze is broken up into three areas with doors guarding each of them.
The player cannot move forward unless they find the key for the door.

Every time the key in the area of the maze is found, then the door is approached, the player will move onto the next level.
If the key has not been found, the player will not be able to move on.

After completing the third area, you win.

If the player picks up a coffee, they will be able to move faster for about 5 seconds.

The game uses two simultaneous backgrounds, the floor (bg_floor) and the walls (bg_walls).

There is a sound that plays over the background music for each object when it is interacted with.

The background music changes when there is 1 minute left on the countdown.

There is a different background song for the start screen.

Press the down button on the start screen to enable the cheat.

The cheat prevents the player from losing due to taking too much time.

Things that need to be included/fixed:
-Make player interact with doors ** (still need to block, but will go away with key)
-Two simultaneous backgrounds (palette swap/alpha issue)
-Fix walking animation (not as urgent)
**/

#include <stdlib.h>
#include <stdio.h>
#include "myLib.h"
#include "game.h"
#include "sound.h"

// Spritesheet
#include "spritesheet.h"

// Backgrounds
#include "bg01.h"
#include "bg_floor.h"
#include "bg_walls.h"
#include "startBG.h"
#include "instructionsBG.h"
#include "pauseBG.h"
#include "winBG.h"
#include "loseBG.h"

// Music and Sounds
#include "turningTheScrew.h"
#include "corridor.h"
#include "aNewWorld.h"

// Prototpyes
void initialize();

// State Prototypes
void goToStart();
void start();
void goToInstructions();
void instructions();
void goToGame();
void game();
void goToPause();
void pause();
void goToWin();
void win();
void goToLose();
void lose();

// States
enum {START, INSTRUCTIONS, GAME, PAUSE, WIN, LOSE};
int state;

// Button Variables
unsigned short buttons;
unsigned short oldButtons;

// Background Offsets
int hOff = 0;
int vOff = 0;

// Random Seed
int seed;

// Cheat Enabled
int cheatEnabled;

int main() {
	initialize();

    // Set up sounds and interrupts
    setupSounds();
    setupInterrupts();

    playSoundA(aNewWorld, ANEWWORLDLEN, ANEWWORLDFREQ, 1);

	while(1) {
		// Update button variables
		oldButtons = buttons;
		buttons = BUTTONS;

		// State Machine
        switch(state) {
            case START:
                start();
                break;
            case INSTRUCTIONS:
                instructions();
                break;
            case GAME:
                game();
                break;
            case PAUSE:
                pause();
                break;
            case WIN:
                win();
                break;
            case LOSE:
                lose();
                break;
        }       
	}
}

// Initializes the game on launch
void initialize() {
	// Sets up control display register
	REG_DISPCTL = MODE0 | BG0_ENABLE | BG1_ENABLE | SPRITE_ENABLE;

	// Sets up background 0 control register
	REG_BG0CNT = BG_4BPP | BG_CHARBLOCK(0) | BG_SCREENBLOCK(28) | BG_SIZE_LARGE;

    // Sets up background 1 control register
    REG_BG1CNT = BG_4BPP | BG_CHARBLOCK(1) | BG_SCREENBLOCK(24) | BG_SIZE_LARGE;

	// Set offsets
	hOff = 0;
	vOff = 0;

	// Set up the first state
	goToStart();
}

// Sets up the start state
void goToStart() {
	// Load gameBG palette, map, and tiles
	DMANow(3, startBGPal, PALETTE, startBGPalLen/2);
	DMANow(3, startBGTiles, &CHARBLOCK[0], startBGTilesLen/2);
    DMANow(3, startBGMap, &SCREENBLOCK[28], startBGMapLen/2);
   
    waitForVBlank();

    state = START;

    // Reset offsets
    hOff = 0;
    vOff = 0;

    REG_BG0HOFF = 0;
    REG_BG0VOFF = 0;

    // Reset frameCounter
    frameCounter = 0;

    // Reset Cheat
    cheatEnabled = 0;

    // Begin the seed randomization
    seed = 0;
}

// Runs every frame of the start state
void start() {
    seed++;

    // Keep framerate at 60 fps
    waitForVBlank();

    // State transitions
    if (BUTTON_PRESSED(BUTTON_START)) {
        goToGame();
        initGame();

        // Stop sounds currently playing
        stopSound();

        // Play game song
        playSoundA(corridor, CORRIDORLEN, CORRIDORFREQ, 1);

        // Seed the random generator
        srand(seed);
    } else if (BUTTON_PRESSED(BUTTON_SELECT)) {
        goToInstructions();
    } else if (BUTTON_PRESSED(BUTTON_DOWN)) {
        cheatEnabled = 1;
    }
}

void goToInstructions() {
    // Load instructionsBG palette, map, and tiles
    DMANow(3, instructionsBGPal, PALETTE, instructionsBGPalLen/2);
    DMANow(3, instructionsBGTiles, &CHARBLOCK[0], instructionsBGTilesLen/2);
    DMANow(3, instructionsBGMap, &SCREENBLOCK[28], instructionsBGMapLen/2);
   
    waitForVBlank();

    state = INSTRUCTIONS;
}

// Runs every frame of the start state
void instructions() {
    seed++;

    // Keep framerate at 60 fps
    waitForVBlank();

    hideSprites();

    DMANow(3, shadowOAM, OAM, 128 * 4);

    REG_BG0HOFF = hOff;
    REG_BG0VOFF = vOff;

    // State transitions
    if (BUTTON_PRESSED(BUTTON_START) || BUTTON_PRESSED(BUTTON_A)) {
        // Seed the random generator
        srand(seed);

        goToGame();
        initGame();

        // Stop sounds currently playing
        stopSound();

        // Play game song
        playSoundA(corridor, CORRIDORLEN, CORRIDORFREQ, 1);
    } else if (BUTTON_PRESSED(BUTTON_SELECT) || BUTTON_PRESSED(BUTTON_B)) {
        goToStart();
    }
}

// Sets up the game state
void goToGame() {
    // Load bg01 palette, map, and tiles (BG0)
    // DMANow(3, bg01Pal, PALETTE, bg01PalLen/2);
    // DMANow(3, bg01Tiles, &CHARBLOCK[0], bg01TilesLen/2);
    // DMANow(3, bg01Map, &SCREENBLOCK[28], bg01MapLen/2);

	// Load bg_floor palette, map, and tiles (BG1)
	//DMANow(3, bg_floorPal, PALETTE, bg_floorPalLen/2);
	DMANow(3, bg_floorTiles, &CHARBLOCK[1], bg_floorTilesLen/2);
    DMANow(3, bg_floorMap, &SCREENBLOCK[24], bg_floorMapLen/2);

    // Load bg_walls palette, map, and tiles (BG0)
    DMANow(3, bg_wallsPal, PALETTE, bg_wallsPalLen/2);
    DMANow(3, bg_wallsTiles, &CHARBLOCK[0], bg_wallsTilesLen/2);
    DMANow(3, bg_wallsMap, &SCREENBLOCK[28], bg_wallsMapLen/2);

    // Loads spritesheet's palette and tiles into respective PALETTE and CHARBLOCK
    DMANow(3, spritesheetPal, SPRITEPALETTE, spritesheetPalLen/2);
    DMANow(3, spritesheetTiles, &CHARBLOCK[4], spritesheetTilesLen/2);

    waitForVBlank();

	hideSprites();

    DMANow(3, shadowOAM, OAM, 128 * 4);

    state = GAME;
}

void game() {
	updateGame();
	drawGame();

	waitForVBlank();
    
    frameCounter++;
    
    REG_BG0VOFF = vOff;
	REG_BG0HOFF = hOff;

    REG_BG1VOFF = vOff;
    REG_BG1HOFF = hOff;

	DMANow(3, shadowOAM, OAM, 128 * 4);

    // If the timer hits the 1 minite mark, play a different song
    if (timeLeft == 60 && !cheatEnabled) {
        stopSound();

        playSoundA(turningTheScrew, TURNINGTHESCREWLEN, TURNINGTHESCREWFREQ, 1);
    }

	// State transitions
    if (BUTTON_PRESSED(BUTTON_START)) {
        pauseSound();

        goToPause();
    } else if (doorsRemaining == 0) {
        stopSound();

        goToWin();
    } else if (timeLeft == 0 && !cheatEnabled) {
        goToLose();
    }  
}

// Sets up the pause state
void goToPause() {
	// Load gameBG palette, map, and tiles
	DMANow(3, pauseBGPal, PALETTE, pauseBGPalLen/2);
	DMANow(3, pauseBGTiles, &CHARBLOCK[0], pauseBGTilesLen/2);
    DMANow(3, pauseBGMap, &SCREENBLOCK[28], pauseBGMapLen/2);

    waitForVBlank();

    hideSprites();

    DMANow(3, shadowOAM, OAM, 128 * 4);

    state = PAUSE;
}

// Runs every frame of the pause state
void pause() {
    // Keep framerate at 60 fps
    waitForVBlank();

    REG_BG0HOFF = 0;
    REG_BG0VOFF = 0;

    // State transitions
    if (BUTTON_PRESSED(BUTTON_START)) {
        unpauseSound();

        goToGame();
    } else if (BUTTON_PRESSED(BUTTON_SELECT)) {
        stopSound();

        playSoundA(aNewWorld, ANEWWORLDLEN, ANEWWORLDFREQ, 1);

        goToStart();
    }
}

// Sets up the win state
void goToWin() {
	// Load gameBG palette, map, and tiles
	DMANow(3, winBGPal, PALETTE, winBGPalLen/2);
	DMANow(3, winBGTiles, &CHARBLOCK[0], winBGTilesLen/2);
    DMANow(3, winBGMap, &SCREENBLOCK[28], winBGMapLen/2);

    waitForVBlank();

    hideSprites();

    DMANow(3, shadowOAM, OAM, 128 * 4);

    state = WIN;
}

// Runs every frame of the win state
void win() {
    // Keep framerate at 60 fps
    waitForVBlank();

    REG_BG0HOFF = 0;
    REG_BG0VOFF = 0;

    // State transitions
    if (BUTTON_PRESSED(BUTTON_START)) {
        stopSound();

        playSoundA(aNewWorld, ANEWWORLDLEN, ANEWWORLDFREQ, 1);

        goToStart();
    }
}

// Sets up the lose state
void goToLose() {
	// Load gameBG palette, map, and tiles
	DMANow(3, loseBGPal, PALETTE, loseBGPalLen/2);
	DMANow(3, loseBGTiles, &CHARBLOCK[0], loseBGTilesLen/2);
    DMANow(3, loseBGMap, &SCREENBLOCK[28], loseBGMapLen/2);

    waitForVBlank();

    hideSprites();

    DMANow(3, shadowOAM, OAM, 128 * 4);

    state = LOSE;
}

// Runs every frame of the lose state
void lose() {
    // Keep framerate at 60 fps
    waitForVBlank();

    REG_BG0HOFF = 0;
    REG_BG0VOFF = 0;

    // State transitions
    if (BUTTON_PRESSED(BUTTON_START)) {
        stopSound();

        playSoundA(aNewWorld, ANEWWORLDLEN, ANEWWORLDFREQ, 1);

        goToStart();
    }
}
