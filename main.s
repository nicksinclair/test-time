	.cpu arm7tdmi
	.eabi_attribute 20, 1
	.eabi_attribute 21, 1
	.eabi_attribute 23, 3
	.eabi_attribute 24, 1
	.eabi_attribute 25, 1
	.eabi_attribute 26, 1
	.eabi_attribute 30, 2
	.eabi_attribute 34, 0
	.eabi_attribute 18, 4
	.file	"main.c"
	.text
	.align	2
	.global	goToStart
	.syntax unified
	.arm
	.fpu softvfp
	.type	goToStart, %function
goToStart:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{r4, lr}
	mov	r3, #256
	ldr	r4, .L4
	mov	r2, #83886080
	ldr	r1, .L4+4
	mov	r0, #3
	mov	lr, pc
	bx	r4
	ldr	r3, .L4+8
	mov	r2, #100663296
	ldr	r1, .L4+12
	mov	r0, #3
	mov	lr, pc
	bx	r4
	ldr	r2, .L4+16
	ldr	r1, .L4+20
	mov	r0, #3
	mov	r3, #1024
	mov	lr, pc
	bx	r4
	ldr	r3, .L4+24
	mov	lr, pc
	bx	r3
	mov	r3, #0
	mov	r2, #67108864
	ldr	r0, .L4+28
	ldr	r1, .L4+32
	str	r3, [r0]
	ldr	lr, .L4+36
	ldr	ip, .L4+40
	ldr	r0, .L4+44
	str	r3, [r1]
	str	r3, [r1, #4]
	strh	r3, [r2, #16]	@ movhi
	strh	r3, [r2, #18]	@ movhi
	str	r3, [lr]
	str	r3, [ip]
	str	r3, [r0]
	pop	{r4, lr}
	bx	lr
.L5:
	.align	2
.L4:
	.word	DMANow
	.word	startBGPal
	.word	9104
	.word	startBGTiles
	.word	100720640
	.word	startBGMap
	.word	waitForVBlank
	.word	state
	.word	.LANCHOR0
	.word	frameCounter
	.word	cheatEnabled
	.word	seed
	.size	goToStart, .-goToStart
	.align	2
	.global	initialize
	.syntax unified
	.arm
	.fpu softvfp
	.type	initialize, %function
initialize:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	str	lr, [sp, #-4]!
	mov	r3, #67108864
	mov	lr, #56320
	mov	ip, #4864
	mov	r1, #0
	ldr	r0, .L8
	ldr	r2, .L8+4
	strh	lr, [r3, #8]	@ movhi
	strh	ip, [r3]	@ movhi
	strh	r0, [r3, #10]	@ movhi
	ldr	lr, [sp], #4
	str	r1, [r2, #4]
	str	r1, [r2]
	b	goToStart
.L9:
	.align	2
.L8:
	.word	-10236
	.word	.LANCHOR0
	.size	initialize, .-initialize
	.align	2
	.syntax unified
	.arm
	.fpu softvfp
	.type	pause.part.1, %function
pause.part.1:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{r4, lr}
	ldr	r3, .L12
	mov	lr, pc
	bx	r3
	ldr	r4, .L12+4
	mov	r3, #1
	ldr	r2, .L12+8
	ldr	r1, .L12+12
	ldr	r0, .L12+16
	mov	lr, pc
	bx	r4
	pop	{r4, lr}
	b	goToStart
.L13:
	.align	2
.L12:
	.word	stopSound
	.word	playSoundA
	.word	11025
	.word	717120
	.word	aNewWorld
	.size	pause.part.1, .-pause.part.1
	.set	win.part.2,pause.part.1
	.align	2
	.global	goToInstructions
	.syntax unified
	.arm
	.fpu softvfp
	.type	goToInstructions, %function
goToInstructions:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{r4, lr}
	mov	r3, #256
	ldr	r4, .L16
	mov	r2, #83886080
	ldr	r1, .L16+4
	mov	r0, #3
	mov	lr, pc
	bx	r4
	mov	r3, #3856
	mov	r2, #100663296
	ldr	r1, .L16+8
	mov	r0, #3
	mov	lr, pc
	bx	r4
	ldr	r2, .L16+12
	mov	r3, #1024
	ldr	r1, .L16+16
	mov	r0, #3
	mov	lr, pc
	bx	r4
	ldr	r3, .L16+20
	mov	lr, pc
	bx	r3
	mov	r2, #1
	ldr	r3, .L16+24
	pop	{r4, lr}
	str	r2, [r3]
	bx	lr
.L17:
	.align	2
.L16:
	.word	DMANow
	.word	instructionsBGPal
	.word	instructionsBGTiles
	.word	100720640
	.word	instructionsBGMap
	.word	waitForVBlank
	.word	state
	.size	goToInstructions, .-goToInstructions
	.align	2
	.global	goToGame
	.syntax unified
	.arm
	.fpu softvfp
	.type	goToGame, %function
goToGame:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{r4, lr}
	mov	r3, #128
	ldr	r4, .L20
	ldr	r2, .L20+4
	ldr	r1, .L20+8
	mov	r0, #3
	mov	lr, pc
	bx	r4
	mov	r3, #4096
	ldr	r2, .L20+12
	ldr	r1, .L20+16
	mov	r0, #3
	mov	lr, pc
	bx	r4
	mov	r3, #256
	mov	r2, #83886080
	ldr	r1, .L20+20
	mov	r0, #3
	mov	lr, pc
	bx	r4
	mov	r3, #96
	mov	r2, #100663296
	ldr	r1, .L20+24
	mov	r0, #3
	mov	lr, pc
	bx	r4
	mov	r3, #4096
	ldr	r2, .L20+28
	ldr	r1, .L20+32
	mov	r0, #3
	mov	lr, pc
	bx	r4
	mov	r3, #256
	ldr	r2, .L20+36
	ldr	r1, .L20+40
	mov	r0, #3
	mov	lr, pc
	bx	r4
	ldr	r2, .L20+44
	ldr	r1, .L20+48
	mov	r0, #3
	mov	r3, #16384
	mov	lr, pc
	bx	r4
	ldr	r3, .L20+52
	mov	lr, pc
	bx	r3
	ldr	r3, .L20+56
	mov	lr, pc
	bx	r3
	mov	r3, #512
	mov	r2, #117440512
	ldr	r1, .L20+60
	mov	r0, #3
	mov	lr, pc
	bx	r4
	mov	r2, #2
	ldr	r3, .L20+64
	pop	{r4, lr}
	str	r2, [r3]
	bx	lr
.L21:
	.align	2
.L20:
	.word	DMANow
	.word	100679680
	.word	bg_floorTiles
	.word	100712448
	.word	bg_floorMap
	.word	bg_wallsPal
	.word	bg_wallsTiles
	.word	100720640
	.word	bg_wallsMap
	.word	83886592
	.word	spritesheetPal
	.word	100728832
	.word	spritesheetTiles
	.word	waitForVBlank
	.word	hideSprites
	.word	shadowOAM
	.word	state
	.size	goToGame, .-goToGame
	.align	2
	.global	start
	.syntax unified
	.arm
	.fpu softvfp
	.type	start, %function
start:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{r4, r5, r6, lr}
	ldr	r4, .L38
	ldr	r3, [r4]
	ldr	r2, .L38+4
	add	r3, r3, #1
	str	r3, [r4]
	mov	lr, pc
	bx	r2
	ldr	r3, .L38+8
	ldrh	r3, [r3]
	tst	r3, #8
	beq	.L23
	ldr	r2, .L38+12
	ldrh	r2, [r2]
	tst	r2, #8
	beq	.L36
.L23:
	tst	r3, #4
	beq	.L25
	ldr	r2, .L38+12
	ldrh	r2, [r2]
	tst	r2, #4
	beq	.L37
.L25:
	tst	r3, #128
	beq	.L22
	ldr	r3, .L38+12
	ldrh	r3, [r3]
	tst	r3, #128
	moveq	r2, #1
	ldreq	r3, .L38+16
	streq	r2, [r3]
.L22:
	pop	{r4, r5, r6, lr}
	bx	lr
.L36:
	bl	goToGame
	ldr	r3, .L38+20
	mov	lr, pc
	bx	r3
	ldr	r3, .L38+24
	mov	lr, pc
	bx	r3
	ldr	r5, .L38+28
	mov	r3, #1
	ldr	r2, .L38+32
	ldr	r1, .L38+36
	ldr	r0, .L38+40
	mov	lr, pc
	bx	r5
	ldr	r0, [r4]
	ldr	r3, .L38+44
	mov	lr, pc
	bx	r3
	pop	{r4, r5, r6, lr}
	bx	lr
.L37:
	pop	{r4, r5, r6, lr}
	b	goToInstructions
.L39:
	.align	2
.L38:
	.word	seed
	.word	waitForVBlank
	.word	oldButtons
	.word	buttons
	.word	cheatEnabled
	.word	initGame
	.word	stopSound
	.word	playSoundA
	.word	11025
	.word	785376
	.word	corridor
	.word	srand
	.size	start, .-start
	.align	2
	.global	instructions
	.syntax unified
	.arm
	.fpu softvfp
	.type	instructions, %function
instructions:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{r4, r5, r6, lr}
	ldr	r4, .L68
	ldr	r3, [r4]
	ldr	r2, .L68+4
	add	r3, r3, #1
	str	r3, [r4]
	mov	lr, pc
	bx	r2
	ldr	r3, .L68+8
	mov	lr, pc
	bx	r3
	ldr	r5, .L68+12
	mov	r3, #512
	mov	r2, #117440512
	ldr	r1, .L68+16
	mov	r0, #3
	mov	lr, pc
	bx	r5
	mov	r3, #67108864
	ldr	r2, .L68+20
	ldrh	r0, [r2]
	ldrh	r1, [r2, #4]
	strh	r0, [r3, #16]	@ movhi
	ldr	r2, .L68+24
	strh	r1, [r3, #18]	@ movhi
	ldrh	r3, [r2]
	tst	r3, #8
	beq	.L41
	ldr	r2, .L68+28
	ldrh	r2, [r2]
	tst	r2, #8
	beq	.L42
.L41:
	tst	r3, #1
	beq	.L43
	ldr	r2, .L68+28
	ldrh	r2, [r2]
	tst	r2, #1
	beq	.L42
.L43:
	tst	r3, #4
	bne	.L67
.L45:
	tst	r3, #2
	beq	.L40
	ldr	r3, .L68+28
	ldrh	r3, [r3]
	tst	r3, #2
	bne	.L40
	pop	{r4, r5, r6, lr}
	b	goToStart
.L67:
	ldr	r2, .L68+28
	ldrh	r2, [r2]
	tst	r2, #4
	bne	.L45
	pop	{r4, r5, r6, lr}
	b	goToStart
.L42:
	ldr	r0, [r4]
	ldr	r3, .L68+32
	mov	lr, pc
	bx	r3
	bl	goToGame
	ldr	r3, .L68+36
	mov	lr, pc
	bx	r3
	ldr	r3, .L68+40
	mov	lr, pc
	bx	r3
	ldr	r4, .L68+44
	mov	r3, #1
	ldr	r2, .L68+48
	ldr	r1, .L68+52
	ldr	r0, .L68+56
	mov	lr, pc
	bx	r4
.L40:
	pop	{r4, r5, r6, lr}
	bx	lr
.L69:
	.align	2
.L68:
	.word	seed
	.word	waitForVBlank
	.word	hideSprites
	.word	DMANow
	.word	shadowOAM
	.word	.LANCHOR0
	.word	oldButtons
	.word	buttons
	.word	srand
	.word	initGame
	.word	stopSound
	.word	playSoundA
	.word	11025
	.word	785376
	.word	corridor
	.size	instructions, .-instructions
	.align	2
	.global	goToPause
	.syntax unified
	.arm
	.fpu softvfp
	.type	goToPause, %function
goToPause:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{r4, lr}
	mov	r3, #256
	ldr	r4, .L72
	mov	r2, #83886080
	ldr	r1, .L72+4
	mov	r0, #3
	mov	lr, pc
	bx	r4
	ldr	r3, .L72+8
	mov	r2, #100663296
	ldr	r1, .L72+12
	mov	r0, #3
	mov	lr, pc
	bx	r4
	ldr	r2, .L72+16
	ldr	r1, .L72+20
	mov	r0, #3
	mov	r3, #1024
	mov	lr, pc
	bx	r4
	ldr	r3, .L72+24
	mov	lr, pc
	bx	r3
	ldr	r3, .L72+28
	mov	lr, pc
	bx	r3
	mov	r3, #512
	mov	r2, #117440512
	ldr	r1, .L72+32
	mov	r0, #3
	mov	lr, pc
	bx	r4
	mov	r2, #3
	ldr	r3, .L72+36
	pop	{r4, lr}
	str	r2, [r3]
	bx	lr
.L73:
	.align	2
.L72:
	.word	DMANow
	.word	pauseBGPal
	.word	9312
	.word	pauseBGTiles
	.word	100720640
	.word	pauseBGMap
	.word	waitForVBlank
	.word	hideSprites
	.word	shadowOAM
	.word	state
	.size	goToPause, .-goToPause
	.align	2
	.global	pause
	.syntax unified
	.arm
	.fpu softvfp
	.type	pause, %function
pause:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	ldr	r3, .L86
	push	{r4, lr}
	mov	lr, pc
	bx	r3
	mov	r3, #67108864
	mov	r2, #0
	ldr	r1, .L86+4
	strh	r2, [r3, #16]	@ movhi
	strh	r2, [r3, #18]	@ movhi
	ldrh	r3, [r1]
	tst	r3, #8
	beq	.L75
	ldr	r2, .L86+8
	ldrh	r2, [r2]
	tst	r2, #8
	beq	.L84
.L75:
	tst	r3, #4
	beq	.L74
	ldr	r3, .L86+8
	ldrh	r3, [r3]
	tst	r3, #4
	beq	.L85
.L74:
	pop	{r4, lr}
	bx	lr
.L85:
	pop	{r4, lr}
	b	pause.part.1
.L84:
	ldr	r3, .L86+12
	mov	lr, pc
	bx	r3
	pop	{r4, lr}
	b	goToGame
.L87:
	.align	2
.L86:
	.word	waitForVBlank
	.word	oldButtons
	.word	buttons
	.word	unpauseSound
	.size	pause, .-pause
	.align	2
	.global	goToWin
	.syntax unified
	.arm
	.fpu softvfp
	.type	goToWin, %function
goToWin:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{r4, lr}
	mov	r3, #256
	ldr	r4, .L90
	mov	r2, #83886080
	ldr	r1, .L90+4
	mov	r0, #3
	mov	lr, pc
	bx	r4
	ldr	r3, .L90+8
	mov	r2, #100663296
	ldr	r1, .L90+12
	mov	r0, #3
	mov	lr, pc
	bx	r4
	ldr	r2, .L90+16
	ldr	r1, .L90+20
	mov	r0, #3
	mov	r3, #1024
	mov	lr, pc
	bx	r4
	ldr	r3, .L90+24
	mov	lr, pc
	bx	r3
	ldr	r3, .L90+28
	mov	lr, pc
	bx	r3
	mov	r3, #512
	mov	r2, #117440512
	ldr	r1, .L90+32
	mov	r0, #3
	mov	lr, pc
	bx	r4
	mov	r2, #4
	ldr	r3, .L90+36
	pop	{r4, lr}
	str	r2, [r3]
	bx	lr
.L91:
	.align	2
.L90:
	.word	DMANow
	.word	winBGPal
	.word	8624
	.word	winBGTiles
	.word	100720640
	.word	winBGMap
	.word	waitForVBlank
	.word	hideSprites
	.word	shadowOAM
	.word	state
	.size	goToWin, .-goToWin
	.align	2
	.global	win
	.syntax unified
	.arm
	.fpu softvfp
	.type	win, %function
win:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	ldr	r3, .L99
	push	{r4, lr}
	mov	lr, pc
	bx	r3
	mov	r3, #67108864
	mov	r2, #0
	ldr	r1, .L99+4
	strh	r2, [r3, #16]	@ movhi
	strh	r2, [r3, #18]	@ movhi
	ldrh	r3, [r1]
	tst	r3, #8
	beq	.L92
	ldr	r3, .L99+8
	ldrh	r3, [r3]
	tst	r3, #8
	beq	.L98
.L92:
	pop	{r4, lr}
	bx	lr
.L98:
	pop	{r4, lr}
	b	win.part.2
.L100:
	.align	2
.L99:
	.word	waitForVBlank
	.word	oldButtons
	.word	buttons
	.size	win, .-win
	.align	2
	.global	goToLose
	.syntax unified
	.arm
	.fpu softvfp
	.type	goToLose, %function
goToLose:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{r4, lr}
	mov	r3, #256
	ldr	r4, .L103
	mov	r2, #83886080
	ldr	r1, .L103+4
	mov	r0, #3
	mov	lr, pc
	bx	r4
	ldr	r3, .L103+8
	mov	r2, #100663296
	ldr	r1, .L103+12
	mov	r0, #3
	mov	lr, pc
	bx	r4
	ldr	r2, .L103+16
	ldr	r1, .L103+20
	mov	r0, #3
	mov	r3, #1024
	mov	lr, pc
	bx	r4
	ldr	r3, .L103+24
	mov	lr, pc
	bx	r3
	ldr	r3, .L103+28
	mov	lr, pc
	bx	r3
	mov	r3, #512
	mov	r2, #117440512
	ldr	r1, .L103+32
	mov	r0, #3
	mov	lr, pc
	bx	r4
	mov	r2, #5
	ldr	r3, .L103+36
	pop	{r4, lr}
	str	r2, [r3]
	bx	lr
.L104:
	.align	2
.L103:
	.word	DMANow
	.word	loseBGPal
	.word	7664
	.word	loseBGTiles
	.word	100720640
	.word	loseBGMap
	.word	waitForVBlank
	.word	hideSprites
	.word	shadowOAM
	.word	state
	.size	goToLose, .-goToLose
	.align	2
	.global	game
	.syntax unified
	.arm
	.fpu softvfp
	.type	game, %function
game:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{r4, r5, r6, lr}
	ldr	r3, .L118
	mov	lr, pc
	bx	r3
	ldr	r3, .L118+4
	mov	lr, pc
	bx	r3
	ldr	r3, .L118+8
	mov	lr, pc
	bx	r3
	mov	r1, #67108864
	ldr	ip, .L118+12
	ldr	r0, .L118+16
	ldr	r3, [ip]
	ldrh	r2, [r0, #4]
	ldrh	r0, [r0]
	add	r3, r3, #1
	ldr	r4, .L118+20
	str	r3, [ip]
	ldr	r5, .L118+24
	strh	r2, [r1, #18]	@ movhi
	mov	r3, #512
	strh	r0, [r1, #16]	@ movhi
	strh	r2, [r1, #22]	@ movhi
	strh	r0, [r1, #20]	@ movhi
	mov	r2, #117440512
	ldr	r1, .L118+28
	mov	r0, #3
	mov	lr, pc
	bx	r5
	ldr	r3, [r4]
	cmp	r3, #60
	beq	.L114
.L106:
	ldr	r3, .L118+32
	ldrh	r3, [r3]
	tst	r3, #8
	beq	.L107
	ldr	r3, .L118+36
	ldrh	r3, [r3]
	tst	r3, #8
	beq	.L115
.L107:
	ldr	r3, .L118+40
	ldr	r3, [r3]
	cmp	r3, #0
	beq	.L116
	ldr	r3, [r4]
	cmp	r3, #0
	bne	.L105
	ldr	r3, .L118+44
	ldr	r3, [r3]
	cmp	r3, #0
	beq	.L117
.L105:
	pop	{r4, r5, r6, lr}
	bx	lr
.L114:
	ldr	r3, .L118+44
	ldr	r3, [r3]
	cmp	r3, #0
	bne	.L106
	ldr	r3, .L118+48
	mov	lr, pc
	bx	r3
	ldr	r5, .L118+52
	mov	r3, #1
	ldr	r2, .L118+56
	ldr	r1, .L118+60
	ldr	r0, .L118+64
	mov	lr, pc
	bx	r5
	b	.L106
.L116:
	ldr	r3, .L118+48
	mov	lr, pc
	bx	r3
	pop	{r4, r5, r6, lr}
	b	goToWin
.L115:
	ldr	r3, .L118+68
	mov	lr, pc
	bx	r3
	pop	{r4, r5, r6, lr}
	b	goToPause
.L117:
	pop	{r4, r5, r6, lr}
	b	goToLose
.L119:
	.align	2
.L118:
	.word	updateGame
	.word	drawGame
	.word	waitForVBlank
	.word	frameCounter
	.word	.LANCHOR0
	.word	timeLeft
	.word	DMANow
	.word	shadowOAM
	.word	oldButtons
	.word	buttons
	.word	doorsRemaining
	.word	cheatEnabled
	.word	stopSound
	.word	playSoundA
	.word	11025
	.word	2469888
	.word	turningTheScrew
	.word	pauseSound
	.size	game, .-game
	.section	.text.startup,"ax",%progbits
	.align	2
	.global	main
	.syntax unified
	.arm
	.fpu softvfp
	.type	main, %function
main:
	@ Function supports interworking.
	@ Volatile: function does not return.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{r4, r7, fp, lr}
	mov	ip, #4864
	mov	lr, #56320
	mov	r3, #67108864
	mov	r1, #0
	ldr	r0, .L132
	ldr	r2, .L132+4
	strh	lr, [r3, #8]	@ movhi
	strh	ip, [r3]	@ movhi
	strh	r0, [r3, #10]	@ movhi
	ldr	r3, .L132+8
	str	r1, [r2]
	str	r1, [r2, #4]
	mov	lr, pc
	bx	r3
	ldr	r3, .L132+12
	mov	lr, pc
	bx	r3
	ldr	r3, .L132+16
	mov	lr, pc
	bx	r3
	ldr	r4, .L132+20
	mov	r3, #1
	ldr	r2, .L132+24
	ldr	r1, .L132+28
	ldr	r0, .L132+32
	mov	lr, pc
	bx	r4
	ldr	r6, .L132+36
	ldr	r8, .L132+40
	ldr	r5, .L132+44
	ldr	fp, .L132+48
	ldr	r10, .L132+52
	ldr	r9, .L132+56
	ldr	r7, .L132+60
	ldr	r4, .L132+64
.L121:
	ldr	r2, [r6]
	ldrh	r3, [r8]
.L122:
	strh	r3, [r5]	@ movhi
	ldrh	r3, [r4, #48]
	strh	r3, [r8]	@ movhi
	cmp	r2, #5
	ldrls	pc, [pc, r2, asl #2]
	b	.L122
.L124:
	.word	.L123
	.word	.L125
	.word	.L126
	.word	.L127
	.word	.L128
	.word	.L128
.L128:
	mov	lr, pc
	bx	r7
	b	.L121
.L127:
	ldr	r3, .L132+68
	mov	lr, pc
	bx	r3
	b	.L121
.L126:
	mov	lr, pc
	bx	r9
	b	.L121
.L125:
	mov	lr, pc
	bx	r10
	b	.L121
.L123:
	mov	lr, pc
	bx	fp
	b	.L121
.L133:
	.align	2
.L132:
	.word	-10236
	.word	.LANCHOR0
	.word	goToStart
	.word	setupSounds
	.word	setupInterrupts
	.word	playSoundA
	.word	11025
	.word	717120
	.word	aNewWorld
	.word	state
	.word	buttons
	.word	oldButtons
	.word	start
	.word	instructions
	.word	game
	.word	win
	.word	67109120
	.word	pause
	.size	main, .-main
	.text
	.align	2
	.global	lose
	.syntax unified
	.arm
	.fpu softvfp
	.type	lose, %function
lose:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	@ link register save eliminated.
	b	win
	.size	lose, .-lose
	.comm	cheatEnabled,4,4
	.comm	seed,4,4
	.global	vOff
	.global	hOff
	.comm	oldButtons,2,2
	.comm	buttons,2,2
	.comm	state,4,4
	.comm	soundB,32,4
	.comm	soundA,32,4
	.bss
	.align	2
	.set	.LANCHOR0,. + 0
	.type	hOff, %object
	.size	hOff, 4
hOff:
	.space	4
	.type	vOff, %object
	.size	vOff, 4
vOff:
	.space	4
	.ident	"GCC: (devkitARM release 47) 7.1.0"
