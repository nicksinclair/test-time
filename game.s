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
	.file	"game.c"
	.text
	.align	2
	.syntax unified
	.arm
	.fpu softvfp
	.type	drawKey.part.1, %function
drawKey.part.1:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{r4, lr}
	ldr	r3, [r0, #12]
	ldr	r2, [r0, #40]
	ldr	r4, [r0, #32]
	ldr	r1, [r0, #28]
	ldr	ip, .L4
	lsl	r3, r3, #23
	ldrb	lr, [r0, #8]	@ zero_extendqisi2
	lsl	r2, r2, #3
	lsr	r3, r3, #23
	add	r0, ip, r2
	add	r1, r1, r4, lsl #5
	orr	r3, r3, #16384
	strh	lr, [ip, r2]	@ movhi
	strh	r3, [r0, #2]	@ movhi
	strh	r1, [r0, #4]	@ movhi
	pop	{r4, lr}
	bx	lr
.L5:
	.align	2
.L4:
	.word	shadowOAM
	.size	drawKey.part.1, .-drawKey.part.1
	.set	drawCoffee.part.3,drawKey.part.1
	.align	2
	.syntax unified
	.arm
	.fpu softvfp
	.type	drawDoor.part.4, %function
drawDoor.part.4:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	ldr	r3, [r0, #12]
	lsl	r3, r3, #23
	lsr	r3, r3, #23
	mvn	r3, r3, lsl #17
	str	lr, [sp, #-4]!
	mvn	r3, r3, lsr #17
	mov	lr, #8
	ldr	r2, [r0, #40]
	ldrb	r1, [r0, #8]	@ zero_extendqisi2
	ldr	ip, .L8
	lsl	r2, r2, #3
	add	r0, ip, r2
	orr	r1, r1, #16384
	strh	lr, [r0, #4]	@ movhi
	strh	r1, [ip, r2]	@ movhi
	strh	r3, [r0, #2]	@ movhi
	ldr	lr, [sp], #4
	bx	lr
.L9:
	.align	2
.L8:
	.word	shadowOAM
	.size	drawDoor.part.4, .-drawDoor.part.4
	.align	2
	.syntax unified
	.arm
	.fpu softvfp
	.type	drawCountdown.part.5, %function
drawCountdown.part.5:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	ldr	r3, .L12
	ldr	r0, .L12+4
	ldr	r1, [r3]
	ldr	r3, .L12+8
	push	{r4, r5, r6, r7, lr}
	smull	r6, r7, r1, r0
	smull	r4, r5, r1, r3
	mov	ip, #8
	asr	r3, r1, #31
	rsb	r2, r3, r7, asr #2
	rsb	r3, r3, r5, asr #5
	smull	r4, r5, r3, r0
	smull	r6, r7, r2, r0
	add	r0, r2, r2, lsl #2
	sub	r1, r1, r0, lsl #1
	asr	lr, r2, #31
	asr	r0, r3, #31
	rsb	lr, lr, r7, asr #2
	rsb	r0, r0, r5, asr #2
	add	lr, lr, lr, lsl #2
	add	r0, r0, r0, lsl #2
	sub	r2, r2, lr, lsl #1
	sub	r3, r3, r0, lsl #1
	ldr	r5, .L12+12
	ldr	r0, .L12+16
	ldr	r4, .L12+20
	ldr	lr, .L12+24
	add	r1, r1, #192
	add	r2, r2, #192
	add	r3, r3, #192
	lsl	r1, r1, #1
	lsl	r2, r2, #1
	lsl	r3, r3, #1
	strh	r5, [r0, #10]	@ movhi
	strh	r4, [r0, #18]	@ movhi
	strh	lr, [r0, #26]	@ movhi
	strh	r1, [r0, #12]	@ movhi
	strh	r2, [r0, #20]	@ movhi
	strh	r3, [r0, #28]	@ movhi
	strh	ip, [r0, #8]	@ movhi
	strh	ip, [r0, #16]	@ movhi
	strh	ip, [r0, #24]	@ movhi
	pop	{r4, r5, r6, r7, lr}
	bx	lr
.L13:
	.align	2
.L12:
	.word	timeLeft
	.word	1717986919
	.word	1374389535
	.word	16512
	.word	shadowOAM
	.word	16496
	.word	16480
	.size	drawCountdown.part.5, .-drawCountdown.part.5
	.align	2
	.global	drawGame
	.syntax unified
	.arm
	.fpu softvfp
	.type	drawGame, %function
drawGame:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{r4, r5, r6, r7, r8, lr}
	mov	r6, #512
	ldr	r1, .L42
	ldr	r3, [r1, #4]
	ldr	ip, [r1, #44]
	ldr	r2, [r1, #36]
	ldr	r0, .L42+4
	lsl	r3, r3, #23
	ldrb	r1, [r1]	@ zero_extendqisi2
	ldr	r5, .L42+8
	lsr	r3, r3, #23
	add	r2, r2, ip, lsl #6
	orr	r3, r3, r0
	orr	r1, r1, r0
	lsl	r2, r2, #1
	ldr	r4, .L42+12
	strh	r3, [r5, #2]	@ movhi
	strh	r1, [r5]	@ movhi
	strh	r2, [r5, #4]	@ movhi
	add	r7, r4, #168
.L17:
	ldr	r3, [r4, #44]
	cmp	r3, #0
	beq	.L15
	ldr	r3, [r4, #52]
	cmp	r3, #0
	beq	.L38
.L15:
	ldr	r3, [r4, #40]
	lsl	r3, r3, #3
	strh	r6, [r5, r3]	@ movhi
.L16:
	add	r4, r4, #56
	cmp	r4, r7
	bne	.L17
	mov	r7, #512
	ldr	r4, .L42+16
	add	r6, r4, #168
.L20:
	ldr	r3, [r4, #44]
	cmp	r3, #0
	beq	.L18
	ldr	r3, [r4, #52]
	cmp	r3, #0
	beq	.L39
.L18:
	ldr	r3, [r4, #40]
	lsl	r3, r3, #3
	strh	r7, [r5, r3]	@ movhi
.L19:
	add	r4, r4, #56
	cmp	r4, r6
	bne	.L20
	mov	r7, #512
	ldr	r4, .L42+20
	add	r6, r4, #168
.L23:
	ldr	r3, [r4, #44]
	cmp	r3, #0
	beq	.L21
	ldr	r3, [r4, #52]
	cmp	r3, #0
	beq	.L40
.L21:
	ldr	r3, [r4, #40]
	lsl	r3, r3, #3
	strh	r7, [r5, r3]	@ movhi
.L22:
	add	r4, r4, #56
	cmp	r6, r4
	bne	.L23
	ldr	r3, .L42+24
	ldr	r3, [r3]
	cmp	r3, #0
	beq	.L41
	pop	{r4, r5, r6, r7, r8, lr}
	bx	lr
.L38:
	mov	r0, r4
	bl	drawKey.part.1
	b	.L16
.L40:
	mov	r0, r4
	bl	drawDoor.part.4
	b	.L22
.L39:
	mov	r0, r4
	bl	drawCoffee.part.3
	b	.L19
.L41:
	pop	{r4, r5, r6, r7, r8, lr}
	b	drawCountdown.part.5
.L43:
	.align	2
.L42:
	.word	player
	.word	-32768
	.word	shadowOAM
	.word	keys
	.word	coffees
	.word	doors
	.word	cheatEnabled
	.size	drawGame, .-drawGame
	.align	2
	.global	initPlayer
	.syntax unified
	.arm
	.fpu softvfp
	.type	initPlayer, %function
initPlayer:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{r4, r5, lr}
	mov	r2, #0
	mov	r5, #40
	mov	r4, #56
	mov	lr, #16
	mov	r1, #1
	mov	ip, #19
	mov	r0, #3
	ldr	r3, .L46
	str	r5, [r3, #8]
	str	r4, [r3, #12]
	str	lr, [r3, #24]
	str	ip, [r3, #28]
	str	r0, [r3, #48]
	str	r1, [r3, #16]
	str	r1, [r3, #20]
	str	r2, [r3, #32]
	str	r2, [r3, #36]
	str	r2, [r3, #40]
	str	r2, [r3, #44]
	pop	{r4, r5, lr}
	bx	lr
.L47:
	.align	2
.L46:
	.word	player
	.size	initPlayer, .-initPlayer
	.global	__aeabi_idivmod
	.align	2
	.global	animatePlayer
	.syntax unified
	.arm
	.fpu softvfp
	.type	animatePlayer, %function
animatePlayer:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{r4, r5, r6, lr}
	ldr	r4, .L62
	ldr	r3, [r4, #36]
	cmp	r3, #4
	movne	r2, #4
	ldr	r5, [r4, #32]
	strne	r3, [r4, #40]
	ldr	r3, .L62+4
	smull	r0, r1, r5, r3
	asr	r3, r5, #31
	rsb	r3, r3, r1, asr #3
	add	r3, r3, r3, lsl #2
	strne	r2, [r4, #36]
	cmp	r5, r3, lsl #2
	bne	.L50
	ldr	r0, [r4, #44]
	ldr	r3, .L62+8
	add	r0, r0, #1
	ldr	r1, [r4, #48]
	mov	lr, pc
	bx	r3
	str	r1, [r4, #44]
.L50:
	ldr	r3, .L62+12
	ldrh	r2, [r3, #48]
	tst	r2, #32
	moveq	r3, #2
	streq	r3, [r4, #36]
	beq	.L52
	ldrh	r2, [r3, #48]
	tst	r2, #16
	moveq	r3, #3
	streq	r3, [r4, #36]
	bne	.L61
.L52:
	add	r5, r5, #1
	str	r5, [r4, #32]
	pop	{r4, r5, r6, lr}
	bx	lr
.L61:
	ldrh	r2, [r3, #48]
	tst	r2, #64
	moveq	r3, #1
	streq	r3, [r4, #36]
	beq	.L52
	ldrh	r3, [r3, #48]
	ands	r3, r3, #128
	streq	r3, [r4, #36]
	beq	.L52
	ldr	r3, [r4, #36]
	cmp	r3, #4
	bne	.L52
	mov	r3, #0
	ldr	r2, [r4, #40]
	str	r3, [r4, #44]
	str	r3, [r4, #32]
	str	r2, [r4, #36]
	pop	{r4, r5, r6, lr}
	bx	lr
.L63:
	.align	2
.L62:
	.word	player
	.word	1717986919
	.word	__aeabi_idivmod
	.word	67109120
	.size	animatePlayer, .-animatePlayer
	.align	2
	.global	updatePlayer
	.syntax unified
	.arm
	.fpu softvfp
	.type	updatePlayer, %function
updatePlayer:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{r4, r5, r6, r7, r8, r9, lr}
	ldr	r3, .L136
	ldrh	r2, [r3, #48]
	ldr	r4, .L136+4
	tst	r2, #32
	sub	sp, sp, #20
	ldr	ip, [r4, #12]
	ldr	lr, [r4, #8]
	bne	.L65
	ldr	r2, .L136+8
	ldr	r3, .L136+12
	cmp	ip, #0
	ldr	r1, [r2]
	ldr	r0, [r3]
	blt	.L66
	ldr	r6, [r4, #20]
	sub	r5, ip, r6
	add	r3, r5, lr, lsl #9
	ldr	r7, .L136+16
	lsl	r3, r3, #1
	ldrh	r3, [r7, r3]
	cmp	r3, #0
	beq	.L66
	ldr	r3, [r4, #28]
	add	r3, lr, r3
	sub	r3, r3, r6
	add	r3, r5, r3, lsl #9
	lsl	r3, r3, #1
	ldrh	r3, [r7, r3]
	cmp	r3, #0
	beq	.L66
	cmp	r1, #0
	str	r5, [r4, #12]
	ble	.L84
	ldr	r3, [r4, #4]
	cmp	r3, #119
	bgt	.L84
	mov	ip, r5
	sub	r1, r1, r6
	str	r1, [r2]
.L66:
	ldr	r3, .L136+20
	ldr	r2, .L136+24
	ldr	r3, [r3]
	ldr	r2, [r2]
	sub	r3, r3, #300
	cmp	r3, r2
	beq	.L135
.L81:
	sub	lr, lr, r0
	sub	ip, ip, r1
	str	lr, [r4]
	str	ip, [r4, #4]
	add	sp, sp, #20
	@ sp needed
	pop	{r4, r5, r6, r7, r8, r9, lr}
	b	animatePlayer
.L65:
	ldrh	r2, [r3, #48]
	tst	r2, #16
	bne	.L67
	ldr	r3, [r4, #24]
	ldr	r5, .L136+8
	rsb	r1, r3, #512
	ldr	r2, .L136+12
	cmp	r1, ip
	ldr	r0, [r2]
	ldr	r1, [r5]
	ble	.L66
	add	r2, ip, lr, lsl #9
	ldr	r6, .L136+16
	lsl	r2, r2, #1
	ldrh	r2, [r6, r2]
	cmp	r2, #0
	beq	.L66
	ldr	r2, [r4, #28]
	ldr	r7, [r4, #20]
	add	r2, lr, r2
	add	r3, r3, ip
	sub	r2, r2, r7
	add	r3, r3, r2, lsl #9
	lsl	r3, r3, #1
	ldrh	r3, [r6, r3]
	cmp	r3, #0
	beq	.L66
	add	ip, ip, r7
	cmp	r1, #272
	str	ip, [r4, #12]
	bge	.L66
	ldr	r3, [r4, #4]
	cmp	r3, #120
	addgt	r1, r1, r7
	strgt	r1, [r5]
	b	.L66
.L67:
	ldrh	r2, [r3, #48]
	tst	r2, #64
	bne	.L68
	ldr	r3, [r4, #16]
	ldr	r2, .L136+8
	add	r1, r3, #23
	ldr	r5, .L136+12
	cmp	r1, lr
	ldr	r0, [r5]
	ldr	r1, [r2]
	bge	.L66
	sub	r7, lr, r3
	lsl	r9, r7, #9
	add	r8, r9, ip
	ldr	r6, .L136+16
	lsl	r8, r8, #1
	ldrh	r2, [r6, r8]
	cmp	r2, #0
	beq	.L66
	ldr	r2, [r4, #24]
	add	r2, ip, r2
	sub	r2, r2, r3
	add	r2, r2, r9
	lsl	r2, r2, #1
	ldrh	r2, [r6, r2]
	cmp	r2, #0
	beq	.L66
	cmp	r0, #0
	str	r7, [r4, #8]
	ble	.L86
	ldr	r2, [r4]
	cmp	r2, #79
	bgt	.L86
	sub	r0, r0, r3
	str	r0, [r5]
	mov	lr, r7
	b	.L66
.L135:
	ldr	r3, .L136+28
	ldr	r2, [r3, #48]
	cmp	r2, #0
	bne	.L82
	ldr	r2, [r3, #104]
	cmp	r2, #0
	bne	.L82
	ldr	r3, [r3, #160]
	cmp	r3, #0
	beq	.L81
.L82:
	ldr	r2, [r4, #20]
	ldr	r3, [r4, #16]
	add	r2, r2, r2, lsr #31
	add	r3, r3, r3, lsr #31
	asr	r2, r2, #1
	asr	r3, r3, #1
	str	r2, [r4, #20]
	str	r3, [r4, #16]
	b	.L81
.L68:
	ldrh	r3, [r3, #48]
	tst	r3, #128
	bne	.L133
	ldr	r3, [r4, #24]
	rsb	r2, r3, #512
	cmp	r2, lr
	ble	.L133
	add	r2, ip, lr, lsl #9
	ldr	r6, .L136+16
	lsl	r2, r2, #1
	ldrh	r5, [r6, r2]
	cmp	r5, #0
	beq	.L133
	ldr	r2, [r4, #28]
	ldr	r0, [r4, #16]
	add	r1, r3, ip
	add	r7, r2, lr
	sub	r1, r1, r0
	add	r1, r1, r7, lsl #9
	lsl	r1, r1, #1
	ldrh	r6, [r6, r1]
	cmp	r6, #0
	beq	.L133
	cmp	r5, #992
	cmpne	r5, #31
	movne	r1, #1
	moveq	r1, #0
	cmp	r5, #31744
	moveq	r1, #0
	andne	r1, r1, #1
	cmp	r6, #31
	moveq	r1, #0
	andne	r1, r1, #1
	cmp	r6, #992
	moveq	r1, #0
	andne	r1, r1, #1
	cmp	r6, #31744
	moveq	r1, #0
	andne	r1, r1, #1
	cmp	r1, #0
	addne	r0, r0, lr
	strne	r0, [r4, #8]
	bne	.L74
	ldr	r5, .L136+32
	ldr	r1, [r4, #20]
	sub	r0, lr, r0
	ldr	lr, [r5, #16]
	sub	r1, ip, r1
	ldr	ip, [r5, #20]
	str	lr, [sp, #12]
	ldr	lr, [r5, #4]
	str	ip, [sp, #8]
	ldr	ip, [r5]
	ldr	r6, .L136+36
	stm	sp, {ip, lr}
	mov	lr, pc
	bx	r6
	cmp	r0, #0
	beq	.L75
	ldr	r3, [r5, #48]
	cmp	r3, #0
	ldr	r0, [r4, #8]
	ldr	ip, [r4, #16]
	beq	.L76
	ldr	r3, .L136+40
	ldr	r3, [r3, #48]
	cmp	r3, #0
	beq	.L76
.L130:
	add	r0, r0, ip
	str	r0, [r4, #8]
.L74:
	ldr	r3, .L136+12
	ldr	r0, [r3]
	cmp	r0, #352
	bge	.L134
	ldr	r2, [r4]
	cmp	r2, #80
	ble	.L134
	ldr	r1, [r4, #16]
	ldr	r2, .L136+8
	add	r0, r0, r1
	str	r0, [r3]
	ldr	r1, [r2]
	ldr	lr, [r4, #8]
	ldr	ip, [r4, #12]
	b	.L66
.L133:
	ldr	r2, .L136+12
	ldr	r3, .L136+8
	ldr	r0, [r2]
	ldr	r1, [r3]
	b	.L66
.L84:
	mov	ip, r5
	b	.L66
.L86:
	mov	lr, r7
	b	.L66
.L134:
	ldr	r3, .L136+8
	ldr	lr, [r4, #8]
	ldr	r1, [r3]
	ldr	ip, [r4, #12]
	b	.L66
.L75:
	ldr	r0, [r4, #8]
	ldr	ip, [r4, #16]
.L76:
	ldr	lr, [r5, #72]
	sub	r0, r0, ip
	ldr	ip, [r5, #76]
	str	lr, [sp, #12]
	ldr	lr, [r5, #60]
	str	ip, [sp, #8]
	ldr	r7, [r4, #12]
	ldr	r1, [r4, #20]
	ldr	ip, [r5, #56]
	ldr	r3, [r4, #24]
	ldr	r2, [r4, #28]
	sub	r1, r7, r1
	stm	sp, {ip, lr}
	mov	lr, pc
	bx	r6
	cmp	r0, #0
	beq	.L77
	ldr	r3, [r5, #104]
	cmp	r3, #0
	ldr	r0, [r4, #8]
	ldr	ip, [r4, #16]
	beq	.L78
	ldr	r3, .L136+40
	ldr	r3, [r3, #104]
	cmp	r3, #0
	bne	.L130
.L78:
	ldr	lr, [r5, #128]
	sub	r0, r0, ip
	ldr	ip, [r5, #132]
	str	lr, [sp, #12]
	ldr	lr, [r5, #116]
	str	ip, [sp, #8]
	ldr	r7, [r4, #12]
	ldr	r1, [r4, #20]
	ldr	ip, [r5, #112]
	ldr	r3, [r4, #24]
	ldr	r2, [r4, #28]
	sub	r1, r7, r1
	stm	sp, {ip, lr}
	mov	lr, pc
	bx	r6
	cmp	r0, #0
	beq	.L74
	ldr	r3, [r5, #160]
	cmp	r3, #0
	beq	.L74
	ldr	r3, .L136+40
	ldr	r3, [r3, #160]
	cmp	r3, #0
	ldrne	r3, [r4, #8]
	ldrne	r2, [r4, #16]
	addne	r3, r3, r2
	strne	r3, [r4, #8]
	b	.L74
.L77:
	ldr	r0, [r4, #8]
	ldr	ip, [r4, #16]
	b	.L78
.L137:
	.align	2
.L136:
	.word	67109120
	.word	player
	.word	hOff
	.word	vOff
	.word	bg01collisionBitmap
	.word	frameCounter
	.word	claimedFrame
	.word	coffees
	.word	doors
	.word	collision
	.word	keys
	.size	updatePlayer, .-updatePlayer
	.align	2
	.global	drawPlayer
	.syntax unified
	.arm
	.fpu softvfp
	.type	drawPlayer, %function
drawPlayer:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	ldr	r1, .L140
	ldr	r3, [r1, #4]
	str	lr, [sp, #-4]!
	ldr	r2, [r1, #36]
	ldr	lr, [r1, #44]
	ldrb	r0, [r1]	@ zero_extendqisi2
	ldr	ip, .L140+4
	lsl	r3, r3, #23
	ldr	r1, .L140+8
	add	r2, r2, lr, lsl #6
	lsr	r3, r3, #23
	orr	r3, r3, ip
	orr	r0, r0, ip
	lsl	r2, r2, #1
	strh	r3, [r1, #2]	@ movhi
	strh	r0, [r1]	@ movhi
	strh	r2, [r1, #4]	@ movhi
	ldr	lr, [sp], #4
	bx	lr
.L141:
	.align	2
.L140:
	.word	player
	.word	-32768
	.word	shadowOAM
	.size	drawPlayer, .-drawPlayer
	.align	2
	.global	initKeys
	.syntax unified
	.arm
	.fpu softvfp
	.type	initKeys, %function
initKeys:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{r4, r5, r6, r7, r8, r9, r10, lr}
	ldr	r0, .L146
	mov	r10, #48
	mov	r9, #140
	mov	r8, #296
	mov	r7, #240
	mov	r6, #360
	mov	r5, #112
	mov	r3, r0
	mov	r1, #4
	mov	ip, #16
	mov	r2, #0
	mov	r4, #14
	mov	lr, #1
	str	r10, [r0]
	str	r9, [r0, #4]
	str	r8, [r0, #56]
	str	r7, [r0, #60]
	str	r6, [r0, #112]
	str	r5, [r0, #116]
.L143:
	str	r1, [r3, #40]
	add	r1, r1, #1
	cmp	r1, #7
	str	ip, [r3, #16]
	str	ip, [r3, #20]
	str	r2, [r3, #24]
	str	r4, [r3, #28]
	str	r2, [r3, #32]
	str	r2, [r3, #36]
	str	lr, [r3, #44]
	str	r2, [r3, #48]
	add	r3, r3, #56
	bne	.L143
	pop	{r4, r5, r6, r7, r8, r9, r10, lr}
	bx	lr
.L147:
	.align	2
.L146:
	.word	keys
	.size	initKeys, .-initKeys
	.align	2
	.global	updateKey
	.syntax unified
	.arm
	.fpu softvfp
	.type	updateKey, %function
updateKey:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	ldr	ip, [r0, #20]
	ldr	r3, [r0, #8]
	rsb	r2, ip, #0
	cmp	r3, #159
	cmple	r2, r3
	blt	.L168
.L149:
	mov	r3, #1
	ldr	r2, [r0, #44]
	cmp	r2, #0
	str	r3, [r0, #52]
	bxeq	lr
	ldr	r1, [r0, #16]
.L150:
	push	{r4, r5, lr}
	mov	r4, r0
	ldr	r0, .L170
	sub	sp, sp, #20
	ldr	r3, [r0, #24]
	ldr	r2, [r0, #28]
	ldr	lr, [r4, #4]
	str	r1, [sp, #12]
	add	r0, r0, #8
	ldm	r0, {r0, r1}
	str	ip, [sp, #8]
	ldr	ip, [r4]
	ldr	r5, .L170+4
	stm	sp, {ip, lr}
	mov	lr, pc
	bx	r5
	cmp	r0, #0
	bne	.L169
.L152:
	ldr	r2, .L170+8
	ldr	r3, .L170+12
	ldr	r0, [r2]
	ldr	r1, [r3]
	ldr	r2, [r4]
	ldr	r3, [r4, #4]
	sub	r2, r2, r0
	sub	r3, r3, r1
	str	r2, [r4, #8]
	str	r3, [r4, #12]
	add	sp, sp, #20
	@ sp needed
	pop	{r4, r5, lr}
	bx	lr
.L168:
	ldr	r1, [r0, #16]
	ldr	r3, [r0, #12]
	rsb	r2, r1, #0
	cmp	r3, #239
	cmple	r2, r3
	bge	.L149
	ldr	r3, [r0, #48]
	cmp	r3, #0
	bne	.L149
	mov	r2, #1
	str	r3, [r0, #52]
	str	r2, [r0, #44]
	b	.L150
.L169:
	mov	r3, #0
	mov	r2, #1
	str	r3, [r4, #44]
	str	r2, [r4, #48]
	ldr	r1, .L170+16
	ldr	r2, .L170+20
	ldr	r0, .L170+24
	ldr	r5, .L170+28
	mov	lr, pc
	bx	r5
	ldr	r2, .L170+32
	ldr	r3, [r2]
	sub	r3, r3, #1
	str	r3, [r2]
	b	.L152
.L171:
	.align	2
.L170:
	.word	player
	.word	collision
	.word	vOff
	.word	hOff
	.word	19840
	.word	11025
	.word	keyGrab
	.word	playSoundB
	.word	keysRemaining
	.size	updateKey, .-updateKey
	.align	2
	.global	drawKey
	.syntax unified
	.arm
	.fpu softvfp
	.type	drawKey, %function
drawKey:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	@ link register save eliminated.
	ldr	r2, [r0, #44]
	cmp	r2, #0
	mov	r3, r0
	beq	.L173
	ldr	r2, [r0, #52]
	cmp	r2, #0
	beq	.L177
.L173:
	mov	r1, #512
	ldr	r3, [r3, #40]
	ldr	r2, .L178
	lsl	r3, r3, #3
	strh	r1, [r2, r3]	@ movhi
	bx	lr
.L177:
	b	drawKey.part.1
.L179:
	.align	2
.L178:
	.word	shadowOAM
	.size	drawKey, .-drawKey
	.align	2
	.global	initCoffees
	.syntax unified
	.arm
	.fpu softvfp
	.type	initCoffees, %function
initCoffees:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{r4, r5, r6, r7, r8, r9, lr}
	ldr	r0, .L184
	mov	r5, #168
	mov	r9, #200
	mov	r8, #352
	mov	r7, #296
	mov	r6, #384
	mov	r3, r0
	mov	r1, #7
	mov	ip, #16
	mov	r2, #0
	mov	r4, #12
	mov	lr, #1
	str	r9, [r0, #4]
	str	r8, [r0, #60]
	str	r7, [r0, #112]
	str	r6, [r0, #116]
	str	r5, [r0]
	str	r5, [r0, #56]
.L181:
	str	r1, [r3, #40]
	add	r1, r1, #1
	cmp	r1, #10
	str	ip, [r3, #16]
	str	ip, [r3, #20]
	str	r2, [r3, #24]
	str	r4, [r3, #28]
	str	r2, [r3, #32]
	str	r2, [r3, #36]
	str	lr, [r3, #44]
	str	r2, [r3, #48]
	add	r3, r3, #56
	bne	.L181
	pop	{r4, r5, r6, r7, r8, r9, lr}
	bx	lr
.L185:
	.align	2
.L184:
	.word	coffees
	.size	initCoffees, .-initCoffees
	.align	2
	.global	initGame
	.syntax unified
	.arm
	.fpu softvfp
	.type	initGame, %function
initGame:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{r3, r4, r5, r6, r7, r8, r9, r10, fp, lr}
	mov	r0, #40
	mov	r5, #16
	mov	r4, #0
	mov	r6, #1
	mov	r7, #3
	mov	r1, #56
	mov	r2, #19
	ldr	r3, .L188
	str	r0, [r3, #8]
	str	r1, [r3, #12]
	str	r2, [r3, #28]
	str	r6, [r3, #16]
	str	r6, [r3, #20]
	str	r5, [r3, #24]
	str	r4, [r3, #32]
	str	r4, [r3, #36]
	str	r4, [r3, #40]
	str	r4, [r3, #44]
	str	r7, [r3, #48]
	bl	initKeys
	bl	initCoffees
	mov	r1, #13
	mov	fp, #72
	mov	r10, #440
	mov	r9, #32
	mov	r8, #488
	mov	lr, #14
	mov	r2, #416
	mov	ip, #15
	mov	r0, #120
	ldr	r3, .L188+4
	str	r7, [r3]
	ldr	r3, .L188+8
	str	r7, [r3]
	ldr	r3, .L188+12
	str	r7, [r3]
	ldr	r3, .L188+16
	str	r1, [r3, #40]
	ldr	r1, .L188+20
	str	r5, [r3, #16]
	str	r5, [r3, #20]
	str	r6, [r3, #44]
	str	r4, [r3, #48]
	str	r5, [r3, #72]
	str	r5, [r3, #76]
	str	r6, [r3, #100]
	str	r4, [r3, #104]
	str	r5, [r3, #128]
	str	r5, [r3, #132]
	str	r6, [r3, #156]
	str	r4, [r3, #160]
	str	fp, [r3]
	str	r10, [r3, #56]
	str	r9, [r3, #60]
	str	r8, [r3, #112]
	str	lr, [r3, #96]
	str	ip, [r3, #152]
	str	r2, [r3, #4]
	str	r2, [r3, #116]
	str	r0, [r1]
	pop	{r3, r4, r5, r6, r7, r8, r9, r10, fp, lr}
	bx	lr
.L189:
	.align	2
.L188:
	.word	player
	.word	keysRemaining
	.word	coffeesRemaining
	.word	doorsRemaining
	.word	doors
	.word	timeLeft
	.size	initGame, .-initGame
	.align	2
	.global	updateCoffee
	.syntax unified
	.arm
	.fpu softvfp
	.type	updateCoffee, %function
updateCoffee:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	ldr	ip, [r0, #20]
	ldr	r3, [r0, #8]
	rsb	r2, ip, #0
	cmp	r3, #159
	cmple	r2, r3
	push	{r4, r5, r6, lr}
	sub	sp, sp, #16
	blt	.L208
.L191:
	mov	r3, #1
	ldr	r2, [r0, #44]
	cmp	r2, #0
	str	r3, [r0, #52]
	bne	.L209
	add	sp, sp, #16
	@ sp needed
	pop	{r4, r5, r6, lr}
	bx	lr
.L209:
	ldr	lr, [r0, #16]
.L192:
	mov	r4, r0
	ldr	r6, [r0, #4]
	str	lr, [sp, #12]
	str	ip, [sp, #8]
	ldr	r5, .L211
	ldr	ip, [r4]
	ldr	r3, [r5, #24]
	str	r6, [sp, #4]
	ldr	r2, [r5, #28]
	ldr	r1, [r5, #12]
	ldr	r0, [r5, #8]
	str	ip, [sp]
	ldr	r6, .L211+4
	mov	lr, pc
	bx	r6
	cmp	r0, #0
	bne	.L210
.L194:
	ldr	r2, .L211+8
	ldr	r3, .L211+12
	ldr	r0, [r2]
	ldr	r1, [r3]
	ldr	r2, [r4]
	ldr	r3, [r4, #4]
	sub	r2, r2, r0
	sub	r3, r3, r1
	str	r2, [r4, #8]
	str	r3, [r4, #12]
	add	sp, sp, #16
	@ sp needed
	pop	{r4, r5, r6, lr}
	bx	lr
.L208:
	add	r3, r0, #12
	ldm	r3, {r3, lr}
	rsb	r2, lr, #0
	cmp	r3, #239
	cmple	r2, r3
	bge	.L191
	ldr	r3, [r0, #48]
	cmp	r3, #0
	bne	.L191
	mov	r2, #1
	str	r3, [r0, #52]
	str	r2, [r0, #44]
	b	.L192
.L210:
	mov	r3, #0
	mov	r2, #1
	str	r3, [r4, #44]
	str	r2, [r4, #48]
	ldr	r1, .L211+16
	ldr	r2, .L211+20
	ldr	r0, .L211+24
	ldr	r6, .L211+28
	mov	lr, pc
	bx	r6
	ldr	r0, .L211+32
	ldr	ip, .L211+36
	ldr	r1, [r0]
	ldr	r2, [r5, #20]
	ldr	r3, [r5, #16]
	ldr	lr, [ip]
	ldr	ip, .L211+40
	sub	r1, r1, #1
	lsl	r2, r2, #1
	lsl	r3, r3, #1
	str	r1, [r0]
	str	lr, [ip]
	str	r2, [r5, #20]
	str	r3, [r5, #16]
	b	.L194
.L212:
	.align	2
.L211:
	.word	player
	.word	collision
	.word	vOff
	.word	hOff
	.word	12803
	.word	11025
	.word	succ
	.word	playSoundB
	.word	coffeesRemaining
	.word	frameCounter
	.word	claimedFrame
	.size	updateCoffee, .-updateCoffee
	.align	2
	.global	drawCoffee
	.syntax unified
	.arm
	.fpu softvfp
	.type	drawCoffee, %function
drawCoffee:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	@ link register save eliminated.
	ldr	r2, [r0, #44]
	cmp	r2, #0
	mov	r3, r0
	beq	.L214
	ldr	r2, [r0, #52]
	cmp	r2, #0
	beq	.L218
.L214:
	mov	r1, #512
	ldr	r3, [r3, #40]
	ldr	r2, .L219
	lsl	r3, r3, #3
	strh	r1, [r2, r3]	@ movhi
	bx	lr
.L218:
	b	drawCoffee.part.3
.L220:
	.align	2
.L219:
	.word	shadowOAM
	.size	drawCoffee, .-drawCoffee
	.align	2
	.global	initDoors
	.syntax unified
	.arm
	.fpu softvfp
	.type	initDoors, %function
initDoors:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{r4, r5, r6, r7, r8, r9, lr}
	mov	r2, #16
	mov	r0, #1
	mov	r1, #0
	mov	r9, #72
	mov	r8, #440
	mov	r7, #32
	mov	r6, #488
	mov	r5, #13
	mov	r4, #14
	mov	lr, #15
	mov	ip, #416
	ldr	r3, .L223
	str	r9, [r3]
	str	r8, [r3, #56]
	str	r7, [r3, #60]
	str	r6, [r3, #112]
	str	r5, [r3, #40]
	str	r4, [r3, #96]
	str	lr, [r3, #152]
	str	ip, [r3, #4]
	str	ip, [r3, #116]
	str	r2, [r3, #16]
	str	r2, [r3, #20]
	str	r2, [r3, #72]
	str	r2, [r3, #76]
	str	r2, [r3, #128]
	str	r2, [r3, #132]
	str	r0, [r3, #44]
	str	r0, [r3, #100]
	str	r0, [r3, #156]
	str	r1, [r3, #48]
	str	r1, [r3, #104]
	str	r1, [r3, #160]
	pop	{r4, r5, r6, r7, r8, r9, lr}
	bx	lr
.L224:
	.align	2
.L223:
	.word	doors
	.size	initDoors, .-initDoors
	.align	2
	.global	updateDoor
	.syntax unified
	.arm
	.fpu softvfp
	.type	updateDoor, %function
updateDoor:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	ldr	r3, [r0, #20]
	ldr	r2, [r0, #8]
	rsb	r3, r3, #0
	cmp	r2, #159
	cmple	r3, r2
	push	{r4, r5, r6, r7, r8, r9, lr}
	mov	r6, r0
	sub	sp, sp, #20
	blt	.L269
.L226:
	mov	r3, #1
	str	r3, [r6, #52]
.L227:
	ldr	r4, .L273
	ldr	r5, .L273+4
	ldr	lr, [r4, #16]
	add	r0, r5, #8
	ldr	ip, [r4, #20]
	ldr	r3, [r5, #24]
	ldr	r2, [r5, #28]
	ldm	r0, {r0, r1}
	str	lr, [sp, #12]
	ldr	lr, [r4, #4]
	str	ip, [sp, #8]
	ldr	ip, [r4]
	ldr	r7, .L273+8
	stm	sp, {ip, lr}
	mov	lr, pc
	bx	r7
	cmp	r0, #0
	beq	.L228
	ldr	r3, [r4, #44]
	cmp	r3, #0
	bne	.L270
.L228:
	ldr	lr, [r4, #72]
	add	r0, r5, #8
	ldr	ip, [r4, #76]
	ldr	r3, [r5, #24]
	ldr	r2, [r5, #28]
	ldm	r0, {r0, r1}
	str	lr, [sp, #12]
	ldr	lr, [r4, #60]
	str	ip, [sp, #8]
	ldr	ip, [r4, #56]
	stm	sp, {ip, lr}
	mov	lr, pc
	bx	r7
	cmp	r0, #0
	beq	.L229
	ldr	r3, [r4, #100]
	cmp	r3, #0
	bne	.L271
.L229:
	ldr	lr, [r4, #128]
	add	r0, r5, #8
	ldr	ip, [r4, #132]
	ldr	r3, [r5, #24]
	ldr	r2, [r5, #28]
	ldm	r0, {r0, r1}
	str	lr, [sp, #12]
	ldr	lr, [r4, #116]
	str	ip, [sp, #8]
	ldr	ip, [r4, #112]
	stm	sp, {ip, lr}
	mov	lr, pc
	bx	r7
	cmp	r0, #0
	beq	.L230
	ldr	r3, [r4, #156]
	cmp	r3, #0
	bne	.L272
.L230:
	ldr	r3, [r6, #44]
	cmp	r3, #0
	beq	.L225
	ldr	r2, .L273+12
	ldr	r3, .L273+16
	ldr	r0, [r2]
	ldr	r1, [r3]
	ldr	r2, [r6]
	ldr	r3, [r6, #4]
	sub	r2, r2, r0
	sub	r3, r3, r1
	str	r2, [r6, #8]
	str	r3, [r6, #12]
.L225:
	add	sp, sp, #20
	@ sp needed
	pop	{r4, r5, r6, r7, r8, r9, lr}
	bx	lr
.L272:
	ldr	r3, .L273+20
	ldr	r3, [r3, #160]
	cmp	r3, #0
	beq	.L230
	mov	r5, #0
	mov	ip, #1
	mov	r3, r5
	str	r5, [r4, #156]
	str	ip, [r4, #160]
	ldr	r2, .L273+24
	ldr	r1, .L273+28
	ldr	r0, .L273+32
	ldr	r4, .L273+36
	mov	lr, pc
	bx	r4
	ldr	r3, .L273+40
	str	r5, [r3]
	b	.L230
.L271:
	ldr	r3, .L273+20
	ldr	r3, [r3, #104]
	cmp	r3, #0
	beq	.L229
	mov	ip, #0
	mov	r8, #1
	mov	r3, ip
	ldr	r2, .L273+24
	ldr	r1, .L273+28
	ldr	r0, .L273+32
	ldr	r9, .L273+36
	str	ip, [r4, #100]
	str	r8, [r4, #104]
	mov	lr, pc
	bx	r9
	ldr	r3, .L273+40
	str	r8, [r3]
	b	.L229
.L270:
	ldr	r3, .L273+20
	ldr	r3, [r3, #48]
	cmp	r3, #0
	beq	.L228
	mov	ip, #0
	mov	lr, #1
	mov	r3, ip
	ldr	r2, .L273+24
	ldr	r1, .L273+28
	ldr	r0, .L273+32
	str	ip, [r4, #44]
	ldr	r8, .L273+36
	str	lr, [r4, #48]
	mov	lr, pc
	bx	r8
	mov	r2, #2
	ldr	r3, .L273+40
	str	r2, [r3]
	b	.L228
.L269:
	add	r2, r0, #12
	ldm	r2, {r2, r3}
	rsb	r3, r3, #0
	cmp	r2, #239
	cmple	r3, r2
	bge	.L226
	ldr	r3, [r0, #48]
	cmp	r3, #0
	bne	.L226
	mov	r2, #1
	str	r3, [r0, #52]
	str	r2, [r0, #44]
	b	.L227
.L274:
	.align	2
.L273:
	.word	doors
	.word	player
	.word	collision
	.word	vOff
	.word	hOff
	.word	keys
	.word	11025
	.word	13465
	.word	openDoor
	.word	playSoundB
	.word	doorsRemaining
	.size	updateDoor, .-updateDoor
	.align	2
	.global	updateGame
	.syntax unified
	.arm
	.fpu softvfp
	.type	updateGame, %function
updateGame:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{r4, r5, r6, lr}
	ldr	r4, .L277
	bl	updatePlayer
	mov	r0, r4
	bl	updateKey
	ldr	r5, .L277+4
	add	r0, r4, #56
	bl	updateKey
	add	r0, r4, #112
	bl	updateKey
	mov	r0, r5
	bl	updateCoffee
	ldr	r4, .L277+8
	add	r0, r5, #56
	bl	updateCoffee
	add	r0, r5, #112
	bl	updateCoffee
	mov	r0, r4
	bl	updateDoor
	add	r0, r4, #56
	bl	updateDoor
	add	r0, r4, #112
	bl	updateDoor
	ldr	r2, .L277+12
	ldr	r3, .L277+16
	ldr	r2, [r2]
	smull	r0, r1, r2, r3
	asr	r3, r2, #31
	add	r2, r2, r1
	sub	r3, r3, r2, asr #6
	ldr	r2, .L277+20
	add	r3, r3, #120
	str	r3, [r2]
	pop	{r4, r5, r6, lr}
	bx	lr
.L278:
	.align	2
.L277:
	.word	keys
	.word	coffees
	.word	doors
	.word	frameCounter
	.word	-2004318071
	.word	timeLeft
	.size	updateGame, .-updateGame
	.align	2
	.global	drawDoor
	.syntax unified
	.arm
	.fpu softvfp
	.type	drawDoor, %function
drawDoor:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	@ link register save eliminated.
	ldr	r2, [r0, #44]
	cmp	r2, #0
	mov	r3, r0
	beq	.L280
	ldr	r2, [r0, #52]
	cmp	r2, #0
	beq	.L284
.L280:
	mov	r1, #512
	ldr	r3, [r3, #40]
	ldr	r2, .L285
	lsl	r3, r3, #3
	strh	r1, [r2, r3]	@ movhi
	bx	lr
.L284:
	b	drawDoor.part.4
.L286:
	.align	2
.L285:
	.word	shadowOAM
	.size	drawDoor, .-drawDoor
	.align	2
	.global	drawCountdown
	.syntax unified
	.arm
	.fpu softvfp
	.type	drawCountdown, %function
drawCountdown:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	@ link register save eliminated.
	ldr	r3, .L289
	ldr	r3, [r3]
	cmp	r3, #0
	bxne	lr
	b	drawCountdown.part.5
.L290:
	.align	2
.L289:
	.word	cheatEnabled
	.size	drawCountdown, .-drawCountdown
	.comm	shadowOAM,1024,4
	.comm	vOff,4,4
	.comm	hOff,4,4
	.comm	doorStop_3,4,4
	.comm	doorStop_2,4,4
	.comm	doorStop_1,4,4
	.comm	doorsRemaining,4,4
	.comm	coffeesRemaining,4,4
	.comm	keysRemaining,4,4
	.comm	doors,168,4
	.comm	coffees,168,4
	.comm	keys,168,4
	.comm	player,52,4
	.comm	timeLeft,4,4
	.comm	claimedFrame,4,4
	.comm	frameCounter,4,4
	.comm	soundB,32,4
	.comm	soundA,32,4
	.ident	"GCC: (devkitARM release 47) 7.1.0"
