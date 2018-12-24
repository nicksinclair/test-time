// Player Struct
typedef struct {
    int screenRow;
    int screenCol;
    int worldRow;
    int worldCol;
    int rdel;
    int cdel;
    int width;
    int height;
    int aniCounter;
    int aniState;
    int prevAniState;
    int curFrame;
    int numFrames;
} PLAYER;

// Item Struct
typedef struct {
    int worldRow;
    int worldCol;
    int screenRow;
    int screenCol;
    int width;
    int height;
    int aniCounter;
    int aniState;
    int curFrame;
    int numFrames;
    int index;
    int active;
    int claimed;
    int hide;
} ITEM;

// Constants
#define MAPHEIGHT 512
#define MAPWIDTH 512

#define KEYCOUNT 3
#define COFFEECOUNT 3
#define DOORCOUNT 3
#define ITEMCOUNT KEYCOUNT + COFFEECOUNT

// Variables
extern int hOff;
extern int vOff;

extern int frameCounter;
extern int timeLeft;

extern int doorOpened_1;
extern int doorOpened_2;
extern int doorOpened_3;

extern int cheatEnabled;

extern PLAYER player;
extern ITEM keys[KEYCOUNT];
extern ITEM coffees[COFFEECOUNT];
extern ITEM doors[DOORCOUNT];

extern int keysRemaining;
extern int coffeesRemaining;
extern int doorsRemaining;

// Shadow OAM
extern OBJ_ATTR shadowOAM[128];

// Game Prototypes
void initGame();
void updateGame();
void drawGame();

// Player Prototypes
void initPlayer();
void updatePlayer();
void animatePlayer();
void drawPlayer();

// Key Prototypes
void initKeys();
void updateKey(ITEM *);
void drawKey(ITEM *);

// Coffee Prototypes
void initCoffees();
void updateCoffee(ITEM *);
void drawCoffee(ITEM *);

// Door Prototypes
void initDoors();
void updateDoor(ITEM *);
void drawDoor(ITEM *);

// Countdown Prototypes
void drawCountdown();