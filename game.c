#include <stdlib.h>
#include "myLib.h"
#include "game.h"
#include "sound.h"

// Collision Map
#include "bg01collision.h"

// Sound
#include "openDoor.h"
#include "succ.h"
#include "keyGrab.h"

// Variables
int frameCounter;
int claimedFrame;
int timeLeft; 

PLAYER player;
ITEM keys[KEYCOUNT];
ITEM coffees[COFFEECOUNT];
ITEM doors[DOORCOUNT];

int keysRemaining;
int coffeesRemaining;
int doorsRemaining;

int doorStop_1;
int doorStop_2;
int doorStop_3;

// Screen Offsets
int hOff;
int vOff;

// Shadow OAM
OBJ_ATTR shadowOAM[128];

// Player Animation States
enum {PLAYERFRONT, PLAYERBACK, PLAYERLEFT, PLAYERRIGHT, PLAYERIDLE};

// Initialize the game
void initGame() {
	initPlayer();
	initKeys();
	initCoffees();
	initDoors();

	// Initialize the amount of keys remaining
	keysRemaining = 3;

	// Initialize the amount of coffees remaining
	coffeesRemaining = 3;

	// Initialize the amount of doors remaining
	doorsRemaining = 3;

	// Initialize amount of time left
	timeLeft = 120;
}

// Updates the game each frame
void updateGame() {
	// Update the player
	updatePlayer();

	// Update the items
	for (int i = 0; i < KEYCOUNT; i++) {
		updateKey(&keys[i]);
	}

	// Update the coffees
	for (int i = 0; i < COFFEECOUNT; i++) {
		updateCoffee(&coffees[i]);
	}

	// Update the doors
	for (int i = 0; i < DOORCOUNT; i++) {
		updateDoor(&doors[i]);
	}

	// Update time left
	timeLeft = 120 - (frameCounter / 120);
}

void drawGame() {
	// Draw the player
	drawPlayer();

	// Draw the keys
	for(int i = 0; i < KEYCOUNT; i++) {
		drawKey(&keys[i]);
	}

	// Draw the coffees
	for(int i = 0; i < COFFEECOUNT; i++) {
		drawCoffee(&coffees[i]);
	}

	// Draw the doors
	for(int i = 0; i < DOORCOUNT; i++) {
		drawDoor(&doors[i]);
	}

	// Draw the countdown
	drawCountdown();
}

// Initialize the player
void initPlayer() {
	player.worldRow = 40;
	player.worldCol = 56;
	player.rdel = 1;
	player.cdel = 1;
	player.width = 16;
	player.height = 19;

	// Player Sprite Animation Properties
	player.aniCounter = 0;
	player.aniState = PLAYERFRONT;
	player.prevAniState = 0;
	player.curFrame = 0;
	player.numFrames = 3;
}

// Handle every-frame actions of the player
void updatePlayer() {
	// Move the player in all four directions
	if (BUTTON_HELD(BUTTON_LEFT)) {
		if ((player.worldCol >= 0)
			&& bg01collisionBitmap[OFFSET(player.worldRow, player.worldCol - player.cdel, MAPWIDTH)] 
            && bg01collisionBitmap[OFFSET(player.worldRow + player.height - player.cdel, player.worldCol - player.cdel, MAPWIDTH)]
			) {
			player.worldCol -= player.cdel;

    		if (hOff > 0 && (player.screenCol < SCREENWIDTH/2)) {
    			hOff -= player.cdel;
    		}
		}
	} else if (BUTTON_HELD(BUTTON_RIGHT)) {
		if ((player.worldCol) < (MAPWIDTH - player.width)
			&& bg01collisionBitmap[OFFSET(player.worldRow, player.worldCol, MAPWIDTH)] 
            && bg01collisionBitmap[OFFSET(player.worldRow + player.height - player.cdel, player.worldCol + player.width, MAPWIDTH)]
			) {
			player.worldCol += player.cdel;

			if ((hOff < MAPWIDTH - SCREENWIDTH) && (player.screenCol > SCREENWIDTH/2)) {
				hOff += player.cdel;
			}
		}
	} else if (BUTTON_HELD(BUTTON_UP)) {
		if  ((player.worldRow) >= 24 + player.rdel
            && bg01collisionBitmap[OFFSET(player.worldRow - player.rdel, player.worldCol, MAPHEIGHT)] 
            && bg01collisionBitmap[OFFSET(player.worldRow - player.rdel, player.worldCol + player.width - player.rdel, MAPHEIGHT)]
        	) {
            player.worldRow -= player.rdel;

            if (vOff > 0 && (player.screenRow < SCREENHEIGHT/2)) {
                vOff -= player.rdel;
            }
        }
	} else if (BUTTON_HELD(BUTTON_DOWN)) {
		/*
		This code is super convoluted, so I will explain below:

		The collision map I am using utilizes three colors (black, red, green, and blue). It could ideally utilize only two colors, but I used four for flexibility.

		If the player is not colliding with a black part of the map, then it moves to another conditional.

		If the the player is not colliding with a red, green, or blue part of the map, the player can move normally.

		Else, there is a new set of conditionals.

		If the player is colliding with the correct door, and has the key to that door, and has opened that door, then the player can move normally.

		This applies to all of the doors.

		This is done to ensure that the player cannot move past a door without the correct key.

		This also ensures that the player cannot move past a future door after obtaining the correct conditions.
		*/
		if ((player.worldRow) < (MAPHEIGHT - player.width) 
            && bg01collisionBitmap[OFFSET(player.worldRow, player.worldCol, MAPHEIGHT)] 
            && bg01collisionBitmap[OFFSET(player.worldRow + player.height, player.worldCol + player.width - player.rdel, MAPHEIGHT)]
        	) {
			if (!(bg01collisionBitmap[OFFSET(player.worldRow, player.worldCol, MAPHEIGHT)] == 0x001F)
            	&& !(bg01collisionBitmap[OFFSET(player.worldRow + player.height, player.worldCol + player.width - player.rdel, MAPHEIGHT)] == 0x001F)
            	&& !(bg01collisionBitmap[OFFSET(player.worldRow, player.worldCol, MAPHEIGHT)] == 0x03E0)
            	&& !(bg01collisionBitmap[OFFSET(player.worldRow + player.height, player.worldCol + player.width - player.rdel, MAPHEIGHT)] == 0x03E0)
            	&& !(bg01collisionBitmap[OFFSET(player.worldRow, player.worldCol, MAPHEIGHT)] == 0x7C00)
            	&& !(bg01collisionBitmap[OFFSET(player.worldRow + player.height, player.worldCol + player.width - player.rdel, MAPHEIGHT)] == 0x7C00)
            	) {
				player.worldRow += player.rdel;
			} else {
				if (collision(player.worldRow - player.rdel, player.worldCol - player.cdel, player.height, player.width,
					doors[0].worldRow, doors[0].worldCol, doors[0].height, doors[0].width)
					&& doors[0].claimed && keys[0].claimed) {
					player.worldRow += player.rdel;
				} else if (collision(player.worldRow - player.rdel, player.worldCol - player.cdel, player.height, player.width,
					doors[1].worldRow, doors[1].worldCol, doors[1].height, doors[1].width)
					&& doors[1].claimed && keys[1].claimed) {
					player.worldRow += player.rdel;
				} else if (collision(player.worldRow - player.rdel, player.worldCol - player.cdel, player.height, player.width,
					doors[2].worldRow, doors[2].worldCol, doors[2].height, doors[2].width)
					&& doors[2].claimed && keys[2].claimed) {
					player.worldRow += player.rdel;
				}
			}

            if ((vOff < MAPHEIGHT - SCREENHEIGHT) && (player.screenRow > SCREENHEIGHT/2)) {
                vOff += player.rdel;
            }
        }
	}

	// Reduce the player's speed 5 seconds after claiming a coffee
	if ((frameCounter - 300) == claimedFrame) {
		if (coffees[0].claimed || coffees[1].claimed || coffees[2].claimed) {
			// Half the player's speed for each coffee they have claimed
			player.cdel /= 2;
			player.rdel /= 2;
		}
	}

	// Update player's screenRow and screenCol with vOff and hOff
	player.screenRow = player.worldRow - vOff;
	player.screenCol = player.worldCol - hOff;

	animatePlayer();
}

// Animate the player
void animatePlayer() {
	// Sets player's previous state to current state if not idle, resets state to idle
	if (player.aniState != PLAYERIDLE) {
		player.prevAniState = player.aniState;
		player.aniState = PLAYERIDLE;
	}

	// Cycle through player animations
	if (player.aniCounter % 20 == 0) {
		player.curFrame = (player.curFrame + 1) % player.numFrames;
	}

	// Change player animation state based on movement
	if (BUTTON_HELD(BUTTON_LEFT)) {
		player.aniState = PLAYERLEFT;
	} else if (BUTTON_HELD(BUTTON_RIGHT)) {
		player.aniState = PLAYERRIGHT;
	} else if (BUTTON_HELD(BUTTON_UP)) {
		player.aniState = PLAYERBACK;
	} else if (BUTTON_HELD(BUTTON_DOWN)) {
		player.aniState = PLAYERFRONT;
	}

	// If player is idle, do not cycle through player animations
	if (player.aniState == PLAYERIDLE) {
		player.curFrame = 0;
		player.aniCounter = 0;
		player.aniState = player.prevAniState;
	} else {
		player.aniCounter++;
	}
}

// Draw the player
void drawPlayer() {
	shadowOAM[0].attr0 = (ROWMASK & player.screenRow) | ATTR0_TALL;
	shadowOAM[0].attr1 = (COLMASK & player.screenCol) | ATTR1_MEDIUM;
	shadowOAM[0].attr2 = ATTR2_TILEID((player.curFrame) * 4, (player.aniState) * 2);
}

// Initialize the pool of keys
void initKeys() {
	keys[0].worldRow = 48;
	keys[0].worldCol = 140;

	keys[1].worldRow = 296;
	keys[1].worldCol = 240;

	keys[2].worldRow = 360;
	keys[2].worldCol = 112;

	for (int i = 0; i < KEYCOUNT; i++) {
		keys[i].width = 16;
		keys[i].height = 16;

		keys[i].aniCounter = 0;
		keys[i].aniState = 14;
		keys[i].curFrame = 0;
		keys[i].numFrames = 0;

		keys[i].index = i + 4;
		keys[i].active = 1;
		keys[i].claimed = 0;
	}
}

// Handle every frame actions of a key
void updateKey(ITEM *k) {
	if ((-k->height < k->screenRow) && (k->screenRow < SCREENHEIGHT)
		&& (-k->width < k->screenCol) && (k->screenCol < SCREENWIDTH)
		&& !(k->claimed)) {
		k->active = 1;
		k->hide = 0;
	} else {
		k->hide = 1;
	}

	if (k->active) {
		// If the player passes a key, make the key inactive and claimed
		if (collision(player.worldRow, player.worldCol, player.height, player.width,
			k->worldRow, k->worldCol, k->height, k->width)) {
			k->active = 0;
			k->claimed = 1;

			// Play picking up sound effect
			playSoundB(keyGrab, KEYGRABLEN, KEYGRABFREQ, 0);
			
			keysRemaining--;
		}

		k->screenRow = k->worldRow - vOff;
		k->screenCol = k->worldCol - hOff;
	} 
}

// Draw a key
void drawKey(ITEM *k) {
	if (k->active && !k->hide) {
		// Update key sprite positions on screen
		shadowOAM[k->index].attr0 = (ROWMASK & k->screenRow);
		shadowOAM[k->index].attr1 = (COLMASK & k->screenCol) | ATTR1_SMALL;
		shadowOAM[k->index].attr2 = ATTR2_TILEID((k->curFrame), (k->aniState));
	} else {
		// Hide the key if inactive
		shadowOAM[k->index].attr0 = ATTR0_HIDE;
	}
}

// Initialize the pool of coffees
void initCoffees() {
	coffees[0].worldRow = 168;
	coffees[0].worldCol = 200;

	coffees[1].worldRow = 168;
	coffees[1].worldCol = 352;

	coffees[2].worldRow = 296;
	coffees[2].worldCol = 384;

	for (int i = 0; i < COFFEECOUNT; i++) {
		coffees[i].width = 16;
		coffees[i].height = 16;

		coffees[i].aniCounter = 0;
		coffees[i].aniState = 12;
		coffees[i].curFrame = 0;
		coffees[i].numFrames = 0;

		coffees[i].index = i + 7;
		coffees[i].active = 1;
		coffees[i].claimed = 0;
	}
}

// Handle every-frame actions of a coffee
void updateCoffee(ITEM *c) {
	if ((-c->height < c->screenRow) && (c->screenRow < SCREENHEIGHT)
		&& (-c->width < c->screenCol) && (c->screenCol < SCREENWIDTH)
		&& !(c->claimed)) {
		c->active = 1;
		c->hide = 0;
	} else {
		c->hide = 1;
	}

	if (c->active) {
		// If the player passes a coffee, make the coffee inactive and claimed and speed up the player
		if (collision(player.worldRow, player.worldCol, player.height, player.width,
			c->worldRow, c->worldCol, c->height, c->width)) {
			c->active = 0;
			c->claimed = 1;

			// Play drinking sound effect
			playSoundB(succ, SUCCLEN, SUCCFREQ, 0);

			coffeesRemaining--;

			// Remember the frame at which the coffee was claimed
			claimedFrame = frameCounter;

			// Double the player's cdel and rdel
			player.cdel *= 2;
			player.rdel *= 2;
		}

		c->screenRow = c->worldRow - vOff;
		c->screenCol = c->worldCol - hOff;
	} 
}

// Draw a coffee
void drawCoffee(ITEM *c) {
	if (c->active && !c->hide) {
		// Update coffee sprite positions on screen
		shadowOAM[c->index].attr0 = (ROWMASK & c->screenRow);
		shadowOAM[c->index].attr1 = (COLMASK & c->screenCol) | ATTR1_SMALL;
		shadowOAM[c->index].attr2 = ATTR2_TILEID((c->curFrame), (c->aniState));
	} else {
		// Hide the coffee if inactive
		shadowOAM[c->index].attr0 = ATTR0_HIDE;
	}
}

void initDoors() {
	doors[0].worldRow = 72;
	doors[0].worldCol = 416;

	doors[1].worldRow = 440;
	doors[1].worldCol = 32;

	doors[2].worldRow = 488;
	doors[2].worldCol = 416;

	for(int i = 0; i < DOORCOUNT; i++) {
		doors[i].width = 16;
		doors[i].height = 16;

		doors[i].index = i + 13;
		doors[i].active = 1;
		doors[i].claimed = 0;
	}
}

// Handle every-frame actions of the player
void updateDoor(ITEM *d) {
	if ((-d->height < d->screenRow) && (d->screenRow < SCREENHEIGHT)
		&& (-d->width < d->screenCol) && (d->screenCol < SCREENWIDTH)
		&& !d->claimed) {
		d->active = 1;
		d->hide = 0;
	} else {
		d->hide = 1;
	}

	// Checks that player has the right key to open the door
	if (collision(player.worldRow, player.worldCol, player.height, player.width,
		doors[0].worldRow, doors[0].worldCol, doors[0].height, doors[0].width)
		&& doors[0].active) {
		if (keys[0].claimed) {
			doors[0].active = 0;
			doors[0].claimed = 1;

			// Play door opening sound effect
			playSoundB(openDoor, OPENDOORLEN, OPENDOORFREQ, 0);

			doorsRemaining = 2;
		}
	}
	if (collision(player.worldRow, player.worldCol, player.height, player.width,
		doors[1].worldRow, doors[1].worldCol, doors[1].height, doors[1].width)
		&& doors[1].active) {
		if (keys[1].claimed) {
			doors[1].active = 0;
			doors[1].claimed = 1;

			// Play door opening sound effect
			playSoundB(openDoor, OPENDOORLEN, OPENDOORFREQ, 0);

			doorsRemaining = 1;
		}
	}
	if (collision(player.worldRow, player.worldCol, player.height, player.width,
		doors[2].worldRow, doors[2].worldCol, doors[2].height, doors[2].width)
		&& doors[2].active) {
		if (keys[2].claimed) {
			doors[2].active = 0;
			doors[2].claimed = 1;

			// Play door opening sound effect
			playSoundB(openDoor, OPENDOORLEN, OPENDOORFREQ, 0);

			doorsRemaining = 0;
		}
	}

	if (d->active) {
		d->screenRow = d->worldRow - vOff;
		d->screenCol = d->worldCol - hOff;
	} 
}

// Draw a door
void drawDoor(ITEM *d) {
	if (d->active && !d->hide) {
		shadowOAM[d->index].attr0 = (ROWMASK & d->screenRow) | ATTR0_WIDE;
		shadowOAM[d->index].attr1 = (COLMASK & d->screenCol) | ATTR1_MEDIUM;
		shadowOAM[d->index].attr2 = ATTR2_TILEID((0), (8));
	} else {
		// Hide the door if inactive
		shadowOAM[d->index].attr0 = ATTR0_HIDE;
	}
}

// Draws the countdown at the top of the screen
void drawCountdown() {
	if (!cheatEnabled) {
		// 1s place
		shadowOAM[1].attr0 = (ROWMASK & 8);
		shadowOAM[1].attr1 = (COLMASK & 128) | ATTR1_SMALL;
		shadowOAM[1].attr2 = ATTR2_TILEID((12), 2 * ((timeLeft % 10)));

		// 10s place
		shadowOAM[2].attr0 = (ROWMASK & 8);
		shadowOAM[2].attr1 = (COLMASK & 112) | ATTR1_SMALL;
		shadowOAM[2].attr2 = ATTR2_TILEID((12), 2 * (((timeLeft / 10) % 10)));

		// 100s place
		shadowOAM[3].attr0 = (ROWMASK & 8);
		shadowOAM[3].attr1 = (COLMASK & 96) | ATTR1_SMALL;
		shadowOAM[3].attr2 = ATTR2_TILEID((12), 2 * (((timeLeft / 100) % 10)));
	}
	
	// For displaying numbers:
	// mod aniState by 10
	// divide then mod aniState by 10
	// divide by 100 mod aniState by 10
}