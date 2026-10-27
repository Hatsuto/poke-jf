VisitorCenter_MapScripts::
# 93 "data/maps/VisitorCenter/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, VisCen_OnLoad
	.byte 0


VisCen_OnLoad::
# 99 "data/maps/VisitorCenter/scripts.pory"
	compare VAR_VISCEN_STATE, 3
	goto_if_eq VisCen_OnLoad_2
# 105 "data/maps/VisitorCenter/scripts.pory"
	compare VAR_VISCEN_STATE, 0xA0
	goto_if_lt VisCen_OnLoad_3
VisCen_OnLoad_1:
	end

VisCen_OnLoad_2:
# 101 "data/maps/VisitorCenter/scripts.pory"
	setobjectxyperm 7, 6, 10
# 102 "data/maps/VisitorCenter/scripts.pory"
	setobjectmovementtype 7, MOVEMENT_TYPE_FACE_UP
# 103 "data/maps/VisitorCenter/scripts.pory"
	setvar VAR_TEMP_F, 1
	goto VisCen_OnLoad_1

VisCen_OnLoad_3:
# 107 "data/maps/VisitorCenter/scripts.pory"
	setobjectxyperm 7, 7, 14
# 108 "data/maps/VisitorCenter/scripts.pory"
	setobjectmovementtype 7, MOVEMENT_TYPE_WANDER_AROUND
# 109 "data/maps/VisitorCenter/scripts.pory"
	setvar VAR_TEMP_F, 1
	goto VisCen_OnLoad_1


VisCen_ExitBlock::
# 121 "data/maps/VisitorCenter/scripts.pory"
	lock
# 122 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_ExitBlock_Text_0, MSGBOX_AUTOCLOSE
# 124 "data/maps/VisitorCenter/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
# 125 "data/maps/VisitorCenter/scripts.pory"
	waitmovement 0
# 126 "data/maps/VisitorCenter/scripts.pory"
	release
	end


VisCen_RaffleStart::
# 133 "data/maps/VisitorCenter/scripts.pory"
	lockall
# 134 "data/maps/VisitorCenter/scripts.pory"
	goto_if_unset FLAG_TEMP_1, VisCen_RaffleStart_2
# 170 "data/maps/VisitorCenter/scripts.pory"
	call Prof_Hop
# 172 "data/maps/VisitorCenter/scripts.pory"
	goto_if_unset FLAG_TEMP_5, VisCen_RaffleStart_9
# 203 "data/maps/VisitorCenter/scripts.pory"
	goto CrowdBlock_RivalEvent
VisCen_RaffleStart_1:
# 208 "data/maps/VisitorCenter/scripts.pory"
	goto CrowdBlock_StepIn
	return

VisCen_RaffleStart_2:
# 137 "data/maps/VisitorCenter/scripts.pory"
	call HeadsUp
# 138 "data/maps/VisitorCenter/scripts.pory"
	fadeoutbgm 1
# 140 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_RaffleStart_Text_0
# 143 "data/maps/VisitorCenter/scripts.pory"
	applymovement 1, Common_Movement_WalkRight
# 144 "data/maps/VisitorCenter/scripts.pory"
	waitmovement 0
# 145 "data/maps/VisitorCenter/scripts.pory"
	playse SE_LEDGE
# 146 "data/maps/VisitorCenter/scripts.pory"
	applymovement 1, Prof_WalkBehindBushes_1
# 147 "data/maps/VisitorCenter/scripts.pory"
	waitmovement 0
# 149 "data/maps/VisitorCenter/scripts.pory"
	playbgm MUS_GAME_CORNER, 1
# 150 "data/maps/VisitorCenter/scripts.pory"
	checkplayergender
# 151 "data/maps/VisitorCenter/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq VisCen_RaffleStart_6
# 160 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_RaffleStart_Text_2
VisCen_RaffleStart_5:
# 165 "data/maps/VisitorCenter/scripts.pory"
	applymovement 1, Prof_WalkBehindBushes_2
# 166 "data/maps/VisitorCenter/scripts.pory"
	setflag FLAG_TEMP_1
	goto VisCen_RaffleStart_1

VisCen_RaffleStart_6:
# 153 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_RaffleStart_Text_1
	goto VisCen_RaffleStart_5

VisCen_RaffleStart_9:
# 174 "data/maps/VisitorCenter/scripts.pory"
	switch VAR_TEMP_3
# 176 "data/maps/VisitorCenter/scripts.pory"
	case 0, VisCen_RaffleStart_13
# 180 "data/maps/VisitorCenter/scripts.pory"
	case 1, VisCen_RaffleStart_14
# 185 "data/maps/VisitorCenter/scripts.pory"
	case 2, VisCen_RaffleStart_15
# 190 "data/maps/VisitorCenter/scripts.pory"
	case 3, VisCen_RaffleStart_16
# 196 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_RaffleStart_Text_7, MSGBOX_AUTOCLOSE
	goto VisCen_RaffleStart_1

VisCen_RaffleStart_13:
# 177 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_RaffleStart_Text_3, MSGBOX_AUTOCLOSE
# 179 "data/maps/VisitorCenter/scripts.pory"
	setvar VAR_TEMP_3, 1
	goto VisCen_RaffleStart_1

VisCen_RaffleStart_14:
# 181 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_RaffleStart_Text_4, MSGBOX_AUTOCLOSE
# 184 "data/maps/VisitorCenter/scripts.pory"
	setvar VAR_TEMP_3, 2
	goto VisCen_RaffleStart_1

VisCen_RaffleStart_15:
# 186 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_RaffleStart_Text_5, MSGBOX_AUTOCLOSE
# 189 "data/maps/VisitorCenter/scripts.pory"
	setvar VAR_TEMP_3, 3
	goto VisCen_RaffleStart_1

VisCen_RaffleStart_16:
# 191 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_RaffleStart_Text_6, MSGBOX_AUTOCLOSE
# 194 "data/maps/VisitorCenter/scripts.pory"
	setvar VAR_TEMP_3, 4
	goto VisCen_RaffleStart_1


HeadsUp:
# 213 "data/maps/VisitorCenter/scripts.pory"
	applymovement 6, Common_Movement_FaceRight
# 214 "data/maps/VisitorCenter/scripts.pory"
	applymovement 5, Common_Movement_FaceRight
# 215 "data/maps/VisitorCenter/scripts.pory"
	setvar VAR_TEMP_2, 7
HeadsUp_3:
# 220 "data/maps/VisitorCenter/scripts.pory"
	applymovement VAR_TEMP_2, Common_Movement_FaceUp
# 221 "data/maps/VisitorCenter/scripts.pory"
	addvar VAR_TEMP_2, 1
# 222 "data/maps/VisitorCenter/scripts.pory"
	compare VAR_TEMP_2, 10
	goto_if_le HeadsUp_3
# 224 "data/maps/VisitorCenter/scripts.pory"
	applymovement 11, Common_Movement_FaceLeft
# 225 "data/maps/VisitorCenter/scripts.pory"
	applymovement 12, Common_Movement_FaceLeft
# 226 "data/maps/VisitorCenter/scripts.pory"
	waitmovement 0
	return


CrowdBlock_RivalEvent:
# 232 "data/maps/VisitorCenter/scripts.pory"
	msgbox CrowdBlock_RivalEvent_Text_0, MSGBOX_AUTOCLOSE
# 234 "data/maps/VisitorCenter/scripts.pory"
	goto CrowdBlock_StepIn
	return


CrowdBlock_StepIn:
# 239 "data/maps/VisitorCenter/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 240 "data/maps/VisitorCenter/scripts.pory"
	waitmovement 0
# 241 "data/maps/VisitorCenter/scripts.pory"
	releaseall
	end


VisCen_CrowdBlock::
# 246 "data/maps/VisitorCenter/scripts.pory"
	lockall
# 247 "data/maps/VisitorCenter/scripts.pory"
	call Prof_Hop
# 248 "data/maps/VisitorCenter/scripts.pory"
	call CrowdBlock_RivalEvent
	return


VisCen_BallPick::
# 258 "data/maps/VisitorCenter/scripts.pory"
	lockall
# 259 "data/maps/VisitorCenter/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
# 260 "data/maps/VisitorCenter/scripts.pory"
	waitmovement 0
# 261 "data/maps/VisitorCenter/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 264 "data/maps/VisitorCenter/scripts.pory"
	switch VAR_TEMP_0
# 266 "data/maps/VisitorCenter/scripts.pory"
	case 8 - 1, VisCen_BallPick_3
# 267 "data/maps/VisitorCenter/scripts.pory"
	case 8, VisCen_BallPick_3
# 286 "data/maps/VisitorCenter/scripts.pory"
	case 8 + 1, VisCen_BallPick_4
# 304 "data/maps/VisitorCenter/scripts.pory"
	case 8 + 1 + 1 + 1, VisCen_BallPick_5
# 305 "data/maps/VisitorCenter/scripts.pory"
	case 8 + 1 + 1, VisCen_BallPick_5
VisCen_BallPick_1:
# 324 "data/maps/VisitorCenter/scripts.pory"
	hidemonpic
# 325 "data/maps/VisitorCenter/scripts.pory"
	closemessage
# 333 "data/maps/VisitorCenter/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq VisCen_BallPick_7
VisCen_BallPick_6:
# 557 "data/maps/VisitorCenter/scripts.pory"
	releaseall
	end

VisCen_BallPick_3:
# 268 "data/maps/VisitorCenter/scripts.pory"
	setvar VAR_TEMP_4, SPECIES_STARTER_GRS
# 269 "data/maps/VisitorCenter/scripts.pory"
	setvar VAR_STARTER_MON, 0
# 270 "data/maps/VisitorCenter/scripts.pory"
	setvar VAR_TEMP_5, SPECIES_STARTER_FIR
# 271 "data/maps/VisitorCenter/scripts.pory"
	setvar VAR_TEMP_6, SPECIES_STARTER_WTR
# 273 "data/maps/VisitorCenter/scripts.pory"
	setvar VAR_TEMP_0, 8
# 274 "data/maps/VisitorCenter/scripts.pory"
	setvar VAR_TEMP_7, 13
# 276 "data/maps/VisitorCenter/scripts.pory"
	showmonpic VAR_TEMP_4, 10, 3
# 277 "data/maps/VisitorCenter/scripts.pory"
	playmoncry VAR_TEMP_4, 0
# 278 "data/maps/VisitorCenter/scripts.pory"
	waitmoncry
# 280 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_BallPick_Text_0, MSGBOX_YESNO
	goto VisCen_BallPick_1

VisCen_BallPick_4:
# 287 "data/maps/VisitorCenter/scripts.pory"
	setvar VAR_TEMP_4, SPECIES_STARTER_FIR
# 288 "data/maps/VisitorCenter/scripts.pory"
	setvar VAR_STARTER_MON, 1
# 289 "data/maps/VisitorCenter/scripts.pory"
	setvar VAR_TEMP_5, SPECIES_STARTER_WTR
# 290 "data/maps/VisitorCenter/scripts.pory"
	setvar VAR_TEMP_6, SPECIES_STARTER_GRS
# 292 "data/maps/VisitorCenter/scripts.pory"
	setvar VAR_TEMP_7, 14
# 294 "data/maps/VisitorCenter/scripts.pory"
	showmonpic VAR_TEMP_4, 10, 3
# 295 "data/maps/VisitorCenter/scripts.pory"
	playmoncry VAR_TEMP_4, 0
# 296 "data/maps/VisitorCenter/scripts.pory"
	waitmoncry
# 298 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_BallPick_Text_1, MSGBOX_YESNO
	goto VisCen_BallPick_1

VisCen_BallPick_5:
# 306 "data/maps/VisitorCenter/scripts.pory"
	setvar VAR_TEMP_4, SPECIES_STARTER_WTR
# 307 "data/maps/VisitorCenter/scripts.pory"
	setvar VAR_STARTER_MON, 2
# 308 "data/maps/VisitorCenter/scripts.pory"
	setvar VAR_TEMP_5, SPECIES_STARTER_GRS
# 309 "data/maps/VisitorCenter/scripts.pory"
	setvar VAR_TEMP_6, SPECIES_STARTER_FIR
# 311 "data/maps/VisitorCenter/scripts.pory"
	setvar VAR_TEMP_7, 15
# 312 "data/maps/VisitorCenter/scripts.pory"
	setvar VAR_TEMP_0, 8 + 1 + 1
# 314 "data/maps/VisitorCenter/scripts.pory"
	showmonpic VAR_TEMP_4, 10, 3
# 315 "data/maps/VisitorCenter/scripts.pory"
	playmoncry VAR_TEMP_4, 0
# 316 "data/maps/VisitorCenter/scripts.pory"
	waitmoncry
# 318 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_BallPick_Text_2, MSGBOX_YESNO
	goto VisCen_BallPick_1

VisCen_BallPick_7:
# 335 "data/maps/VisitorCenter/scripts.pory"
	bufferspeciesname 0, VAR_TEMP_4
# 338 "data/maps/VisitorCenter/scripts.pory"
	switch VAR_TEMP_1
# 340 "data/maps/VisitorCenter/scripts.pory"
	case 7 - 1, VisCen_BallPick_11
# 351 "data/maps/VisitorCenter/scripts.pory"
	case 7, VisCen_BallPick_12
VisCen_BallPick_9:
# 364 "data/maps/VisitorCenter/scripts.pory"
	removeobject VAR_TEMP_7
# 365 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_BallPick_Text_3
# 366 "data/maps/VisitorCenter/scripts.pory"
	lockall
# 368 "data/maps/VisitorCenter/scripts.pory"
	givemon VAR_TEMP_4, 5, ITEM_NONE
# 369 "data/maps/VisitorCenter/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 370 "data/maps/VisitorCenter/scripts.pory"
	playfanfare MUS_EVOLVED
# 371 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_BallPick_Text_4
# 372 "data/maps/VisitorCenter/scripts.pory"
	waitfanfare
# 373 "data/maps/VisitorCenter/scripts.pory"
	closemessage
# 375 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_BallPick_Text_5, MSGBOX_YESNO
# 377 "data/maps/VisitorCenter/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq VisCen_BallPick_14
VisCen_BallPick_13:
# 382 "data/maps/VisitorCenter/scripts.pory"
	delay 32
# 384 "data/maps/VisitorCenter/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceDown
# 385 "data/maps/VisitorCenter/scripts.pory"
	waitmovement 0
# 386 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_BallPick_Text_6
# 388 "data/maps/VisitorCenter/scripts.pory"
	closemessage
# 391 "data/maps/VisitorCenter/scripts.pory"
	switch VAR_STARTER_MON
# 393 "data/maps/VisitorCenter/scripts.pory"
	case 0, VisCen_BallPick_26
# 396 "data/maps/VisitorCenter/scripts.pory"
	case 1, VisCen_BallPick_27
# 399 "data/maps/VisitorCenter/scripts.pory"
	case 2, VisCen_BallPick_28
VisCen_BallPick_24:
# 404 "data/maps/VisitorCenter/scripts.pory"
	bufferspeciesname 1, VAR_TEMP_5
# 405 "data/maps/VisitorCenter/scripts.pory"
	waitmovement 0
# 406 "data/maps/VisitorCenter/scripts.pory"
	removeobject VAR_TEMP_7
# 407 "data/maps/VisitorCenter/scripts.pory"
	msgbox Liam_Pick_Txt
# 408 "data/maps/VisitorCenter/scripts.pory"
	playfanfare MUS_RG_OBTAIN_KEY_ITEM
# 409 "data/maps/VisitorCenter/scripts.pory"
	msgbox Liam_Receive_Txt
# 410 "data/maps/VisitorCenter/scripts.pory"
	waitfanfare
# 411 "data/maps/VisitorCenter/scripts.pory"
	closemessage
# 414 "data/maps/VisitorCenter/scripts.pory"
	switch VAR_STARTER_MON
# 416 "data/maps/VisitorCenter/scripts.pory"
	case 0, VisCen_BallPick_31
# 419 "data/maps/VisitorCenter/scripts.pory"
	case 1, VisCen_BallPick_32
# 422 "data/maps/VisitorCenter/scripts.pory"
	case 2, VisCen_BallPick_33
VisCen_BallPick_29:
# 427 "data/maps/VisitorCenter/scripts.pory"
	bufferspeciesname 2, VAR_TEMP_6
# 428 "data/maps/VisitorCenter/scripts.pory"
	waitmovement 0
# 429 "data/maps/VisitorCenter/scripts.pory"
	removeobject VAR_TEMP_7
# 430 "data/maps/VisitorCenter/scripts.pory"
	msgbox Olive_Pick_Txt
# 431 "data/maps/VisitorCenter/scripts.pory"
	playfanfare MUS_RG_OBTAIN_KEY_ITEM
# 432 "data/maps/VisitorCenter/scripts.pory"
	msgbox Olive_Receive_Txt
# 433 "data/maps/VisitorCenter/scripts.pory"
	waitfanfare
# 434 "data/maps/VisitorCenter/scripts.pory"
	closemessage
# 436 "data/maps/VisitorCenter/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceDown
# 437 "data/maps/VisitorCenter/scripts.pory"
	waitmovement 0
# 438 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_BallPick_Text_7
# 440 "data/maps/VisitorCenter/scripts.pory"
	closemessage
# 442 "data/maps/VisitorCenter/scripts.pory"
	applymovement 3, Common_Movement_WalkInPlaceDown
# 443 "data/maps/VisitorCenter/scripts.pory"
	waitmovement 0
# 444 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_BallPick_Text_8
# 445 "data/maps/VisitorCenter/scripts.pory"
	closemessage
# 447 "data/maps/VisitorCenter/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceDown
# 448 "data/maps/VisitorCenter/scripts.pory"
	waitmovement 0
# 449 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_BallPick_Text_9
# 451 "data/maps/VisitorCenter/scripts.pory"
	closemessage
# 453 "data/maps/VisitorCenter/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceDown
# 454 "data/maps/VisitorCenter/scripts.pory"
	waitmovement 0
# 455 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_BallPick_Text_10
# 456 "data/maps/VisitorCenter/scripts.pory"
	closemessage
# 458 "data/maps/VisitorCenter/scripts.pory"
	playse SE_LEDGE
# 459 "data/maps/VisitorCenter/scripts.pory"
	applymovement 1, Common_Movement_HopDown
# 460 "data/maps/VisitorCenter/scripts.pory"
	waitmovement 0
# 461 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_BallPick_Text_11, MSGBOX_YESNO
# 465 "data/maps/VisitorCenter/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq VisCen_BallPick_34
# 478 "data/maps/VisitorCenter/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 479 "data/maps/VisitorCenter/scripts.pory"
	waitmovement 0
# 480 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_BallPick_Text_13
# 483 "data/maps/VisitorCenter/scripts.pory"
	random 2
# 485 "data/maps/VisitorCenter/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq VisCen_BallPick_38
# 518 "data/maps/VisitorCenter/scripts.pory"
	switch VAR_STARTER_MON
# 520 "data/maps/VisitorCenter/scripts.pory"
	case 0, VisCen_BallPick_47
# 526 "data/maps/VisitorCenter/scripts.pory"
	case 1, VisCen_BallPick_48
# 531 "data/maps/VisitorCenter/scripts.pory"
	case 2, VisCen_BallPick_49
VisCen_BallPick_45:
# 540 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_BallPick_Text_16
# 542 "data/maps/VisitorCenter/scripts.pory"
	closemessage
# 543 "data/maps/VisitorCenter/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceDown
# 544 "data/maps/VisitorCenter/scripts.pory"
	waitmovement 0
# 545 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_BallPick_Text_17
# 548 "data/maps/VisitorCenter/scripts.pory"
	setvar VAR_VISCEN_STATE, 0x20
# 549 "data/maps/VisitorCenter/scripts.pory"
	setvar VAR_TEMP_8, 4
# 550 "data/maps/VisitorCenter/scripts.pory"
	setvar VAR_MUGSHOT_ID, MUGSHOT_OLIVE
VisCen_BallPick_37:
# 553 "data/maps/VisitorCenter/scripts.pory"
	goto Battle_Transition
	goto VisCen_BallPick_6

VisCen_BallPick_11:
# 341 "data/maps/VisitorCenter/scripts.pory"
	compare VAR_TEMP_0, 8
	goto_if_eq VisCen_BallPick_16
# 346 "data/maps/VisitorCenter/scripts.pory"
	compare VAR_TEMP_0, 8 + 1 + 1
	goto_if_eq VisCen_BallPick_17
	goto VisCen_BallPick_9

VisCen_BallPick_12:
# 352 "data/maps/VisitorCenter/scripts.pory"
	compare VAR_TEMP_0, 8
	goto_if_eq VisCen_BallPick_20
# 357 "data/maps/VisitorCenter/scripts.pory"
	compare VAR_TEMP_0, 8 + 1 + 1
	goto_if_eq VisCen_BallPick_21
	goto VisCen_BallPick_9

VisCen_BallPick_14:
# 379 "data/maps/VisitorCenter/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto VisCen_BallPick_13

VisCen_BallPick_16:
# 343 "data/maps/VisitorCenter/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Player_Ball_TopLeft
# 344 "data/maps/VisitorCenter/scripts.pory"
	waitmovement 0
	goto VisCen_BallPick_9

VisCen_BallPick_17:
# 348 "data/maps/VisitorCenter/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Player_Ball_TopRight
# 349 "data/maps/VisitorCenter/scripts.pory"
	waitmovement 0
	goto VisCen_BallPick_9

VisCen_BallPick_20:
# 354 "data/maps/VisitorCenter/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Player_Ball_Left
# 355 "data/maps/VisitorCenter/scripts.pory"
	waitmovement 0
	goto VisCen_BallPick_9

VisCen_BallPick_21:
# 359 "data/maps/VisitorCenter/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Player_Ball_Right
# 360 "data/maps/VisitorCenter/scripts.pory"
	waitmovement 0
	goto VisCen_BallPick_9

VisCen_BallPick_26:
# 394 "data/maps/VisitorCenter/scripts.pory"
	applymovement 3, Liam_Ball_M
# 395 "data/maps/VisitorCenter/scripts.pory"
	setvar VAR_TEMP_7, 14
	goto VisCen_BallPick_24

VisCen_BallPick_27:
# 397 "data/maps/VisitorCenter/scripts.pory"
	applymovement 3, Liam_Ball_R
# 398 "data/maps/VisitorCenter/scripts.pory"
	setvar VAR_TEMP_7, 15
	goto VisCen_BallPick_24

VisCen_BallPick_28:
# 400 "data/maps/VisitorCenter/scripts.pory"
	applymovement 3, Liam_Ball_L
# 401 "data/maps/VisitorCenter/scripts.pory"
	setvar VAR_TEMP_7, 13
	goto VisCen_BallPick_24

VisCen_BallPick_31:
# 417 "data/maps/VisitorCenter/scripts.pory"
	applymovement 4, Olive_Ball_R
# 418 "data/maps/VisitorCenter/scripts.pory"
	setvar VAR_TEMP_7, 15
	goto VisCen_BallPick_29

VisCen_BallPick_32:
# 420 "data/maps/VisitorCenter/scripts.pory"
	applymovement 4, Olive_Ball_L
# 421 "data/maps/VisitorCenter/scripts.pory"
	setvar VAR_TEMP_7, 13
	goto VisCen_BallPick_29

VisCen_BallPick_33:
# 423 "data/maps/VisitorCenter/scripts.pory"
	applymovement 4, Olive_Ball_M
# 424 "data/maps/VisitorCenter/scripts.pory"
	setvar VAR_TEMP_7, 14
	goto VisCen_BallPick_29

VisCen_BallPick_34:
# 467 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_BallPick_Text_12
# 474 "data/maps/VisitorCenter/scripts.pory"
	setflag FLAG_TEMP_5
	goto VisCen_BallPick_6

VisCen_BallPick_38:
# 487 "data/maps/VisitorCenter/scripts.pory"
	switch VAR_STARTER_MON
# 489 "data/maps/VisitorCenter/scripts.pory"
	case 0, VisCen_BallPick_43
# 490 "data/maps/VisitorCenter/scripts.pory"
	case 1, VisCen_BallPick_43
# 495 "data/maps/VisitorCenter/scripts.pory"
	case 2, VisCen_BallPick_44
VisCen_BallPick_41:
# 504 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_BallPick_Text_14
# 506 "data/maps/VisitorCenter/scripts.pory"
	closemessage
# 507 "data/maps/VisitorCenter/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceDown
# 508 "data/maps/VisitorCenter/scripts.pory"
	waitmovement 0
# 509 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_BallPick_Text_15
# 512 "data/maps/VisitorCenter/scripts.pory"
	setvar VAR_VISCEN_STATE, 0x10
# 513 "data/maps/VisitorCenter/scripts.pory"
	setvar VAR_TEMP_8, 3
# 514 "data/maps/VisitorCenter/scripts.pory"
	setvar VAR_MUGSHOT_ID, MUGSHOT_LIAM
	goto VisCen_BallPick_37

VisCen_BallPick_43:
# 491 "data/maps/VisitorCenter/scripts.pory"
	applymovement 3, Common_Movement_WalkInPlaceLeft
# 492 "data/maps/VisitorCenter/scripts.pory"
	waitmovement 3
# 493 "data/maps/VisitorCenter/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
	goto VisCen_BallPick_41

VisCen_BallPick_44:
# 496 "data/maps/VisitorCenter/scripts.pory"
	applymovement 4, Olive_ChoiceA_P3
# 497 "data/maps/VisitorCenter/scripts.pory"
	applymovement 3, Liam_ChoiceA_P3
# 498 "data/maps/VisitorCenter/scripts.pory"
	waitmovement 3
# 499 "data/maps/VisitorCenter/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
	goto VisCen_BallPick_41

VisCen_BallPick_47:
# 521 "data/maps/VisitorCenter/scripts.pory"
	applymovement 3, Liam_ChoiceB_P1
# 522 "data/maps/VisitorCenter/scripts.pory"
	applymovement 4, Olive_ChoiceB_P1
# 523 "data/maps/VisitorCenter/scripts.pory"
	waitmovement 4
# 524 "data/maps/VisitorCenter/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
	goto VisCen_BallPick_45

VisCen_BallPick_48:
# 527 "data/maps/VisitorCenter/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceRight
# 528 "data/maps/VisitorCenter/scripts.pory"
	waitmovement 4
# 529 "data/maps/VisitorCenter/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
	goto VisCen_BallPick_45

VisCen_BallPick_49:
# 532 "data/maps/VisitorCenter/scripts.pory"
	applymovement 3, Liam_ChoiceB_P3
# 533 "data/maps/VisitorCenter/scripts.pory"
	applymovement 4, Olive_ChoiceB_P3
# 534 "data/maps/VisitorCenter/scripts.pory"
	waitmovement 4
# 535 "data/maps/VisitorCenter/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
	goto VisCen_BallPick_45


Battle_Transition:
# 565 "data/maps/VisitorCenter/scripts.pory"
	fadescreen FADE_TO_BLACK
# 569 "data/maps/VisitorCenter/scripts.pory"
	lockall
# 572 "data/maps/VisitorCenter/scripts.pory"
	setobjectxy 5, 5, 7
# 573 "data/maps/VisitorCenter/scripts.pory"
	setobjectxy 6, 5, 8
# 574 "data/maps/VisitorCenter/scripts.pory"
	setobjectxy 8, 6, 10
# 575 "data/maps/VisitorCenter/scripts.pory"
	setobjectxy 9, 7, 11
# 576 "data/maps/VisitorCenter/scripts.pory"
	setobjectxy 10, 11, 11
# 577 "data/maps/VisitorCenter/scripts.pory"
	setobjectxy 11, 12, 10
# 578 "data/maps/VisitorCenter/scripts.pory"
	setobjectxy 12, 13, 9
# 579 "data/maps/VisitorCenter/scripts.pory"
	applymovement 12, Common_Movement_FaceRight
# 580 "data/maps/VisitorCenter/scripts.pory"
	applymovement 11, Common_Movement_FaceLeft
# 583 "data/maps/VisitorCenter/scripts.pory"
	setobjectxy 3, 8, 6
# 584 "data/maps/VisitorCenter/scripts.pory"
	setobjectxy 4, 8 + 1 + 1, 6
# 585 "data/maps/VisitorCenter/scripts.pory"
	setobjectxy 1, 8 + 1, 6
# 589 "data/maps/VisitorCenter/scripts.pory"
	call VisCen_Player_Realign
# 590 "data/maps/VisitorCenter/scripts.pory"
	setobjectxy VAR_TEMP_8, 10, 9
# 593 "data/maps/VisitorCenter/scripts.pory"
	applymovement 3, Common_Movement_FaceDown
# 594 "data/maps/VisitorCenter/scripts.pory"
	applymovement 4, Common_Movement_FaceDown
# 595 "data/maps/VisitorCenter/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
# 596 "data/maps/VisitorCenter/scripts.pory"
	call HeadsUp
# 598 "data/maps/VisitorCenter/scripts.pory"
	applymovement VAR_TEMP_8, Common_Movement_FaceLeft
# 599 "data/maps/VisitorCenter/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 600 "data/maps/VisitorCenter/scripts.pory"
	waitmovement 0
# 603 "data/maps/VisitorCenter/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 606 "data/maps/VisitorCenter/scripts.pory"
	switch VAR_TEMP_8
# 608 "data/maps/VisitorCenter/scripts.pory"
	case 3, Battle_Transition_2
# 621 "data/maps/VisitorCenter/scripts.pory"
	case 4, Battle_Transition_3
# 635 "data/maps/VisitorCenter/scripts.pory"
	setflag FLAG_SYS_SET_BATTLE_BGM
# 636 "data/maps/VisitorCenter/scripts.pory"
	setvar VAR_BATTLE_BGM, MUS_RG_VS_TRAINER
# 637 "data/maps/VisitorCenter/scripts.pory"
	trainerbattle_no_whiteout TRAINER_SEQUOIA, Battle_Transition_Text_0, Battle_Transition_Text_1, VisCen_Prof_PostBattle
# 642 "data/maps/VisitorCenter/scripts.pory"
	clearflag FLAG_SYS_SET_BATTLE_BGM
	return

Battle_Transition_2:
# 609 "data/maps/VisitorCenter/scripts.pory"
	switch VAR_STARTER_MON
# 611 "data/maps/VisitorCenter/scripts.pory"
	case 0, Battle_Transition_6
# 614 "data/maps/VisitorCenter/scripts.pory"
	case 1, Battle_Transition_7
# 617 "data/maps/VisitorCenter/scripts.pory"
	case 2, Battle_Transition_8
	return

Battle_Transition_3:
# 622 "data/maps/VisitorCenter/scripts.pory"
	switch VAR_STARTER_MON
# 624 "data/maps/VisitorCenter/scripts.pory"
	case 0, Battle_Transition_10
# 627 "data/maps/VisitorCenter/scripts.pory"
	case 1, Battle_Transition_11
# 630 "data/maps/VisitorCenter/scripts.pory"
	case 2, Battle_Transition_12
	return

Battle_Transition_6:
# 612 "data/maps/VisitorCenter/scripts.pory"
	trainerbattle_no_whiteout TRAINER_ALPHA_VISCEN_FIR, VisCen_Liam_Intro, VisCen_Liam_Loss, VisCen_Liam_PostBattle
	return

Battle_Transition_7:
# 615 "data/maps/VisitorCenter/scripts.pory"
	trainerbattle_no_whiteout TRAINER_ALPHA_VISCEN_WTR, VisCen_Liam_Intro, VisCen_Liam_Loss, VisCen_Liam_PostBattle
	return

Battle_Transition_8:
# 618 "data/maps/VisitorCenter/scripts.pory"
	trainerbattle_no_whiteout TRAINER_ALPHA_VISCEN_GRS, VisCen_Liam_Intro, VisCen_Liam_Loss, VisCen_Liam_PostBattle
	return

Battle_Transition_10:
# 625 "data/maps/VisitorCenter/scripts.pory"
	trainerbattle_no_whiteout TRAINER_BETA_VISCEN_WTR, VisCen_Olive_Intro, VisCen_Olive_Loss, VisCen_Olive_PostBattle
	return

Battle_Transition_11:
# 628 "data/maps/VisitorCenter/scripts.pory"
	trainerbattle_no_whiteout TRAINER_BETA_VISCEN_GRS, VisCen_Olive_Intro, VisCen_Olive_Loss, VisCen_Olive_PostBattle
	return

Battle_Transition_12:
# 631 "data/maps/VisitorCenter/scripts.pory"
	trainerbattle_no_whiteout TRAINER_BETA_VISCEN_FIR, VisCen_Olive_Intro, VisCen_Olive_Loss, VisCen_Olive_PostBattle
	return


VisCen_Player_Realign:
# 666 "data/maps/VisitorCenter/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 667 "data/maps/VisitorCenter/scripts.pory"
	compare VAR_TEMP_0, 8
	goto_if_lt VisCen_Player_Realign_2
VisCen_Player_Realign_8:
# 677 "data/maps/VisitorCenter/scripts.pory"
	compare VAR_TEMP_0, 8
	goto_if_gt VisCen_Player_Realign_9
VisCen_Player_Realign_1:
# 685 "data/maps/VisitorCenter/scripts.pory"
	compare VAR_TEMP_1, 9
	goto_if_gt VisCen_Player_Realign_5
VisCen_Player_Realign_11:
# 695 "data/maps/VisitorCenter/scripts.pory"
	compare VAR_TEMP_1, 9
	goto_if_lt VisCen_Player_Realign_12
	return

VisCen_Player_Realign_2:
# 671 "data/maps/VisitorCenter/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkFasterRight
# 672 "data/maps/VisitorCenter/scripts.pory"
	waitmovement 0
	goto VisCen_Player_Realign_1

VisCen_Player_Realign_5:
# 689 "data/maps/VisitorCenter/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkFasterUp
# 690 "data/maps/VisitorCenter/scripts.pory"
	waitmovement 0
	return

VisCen_Player_Realign_9:
# 679 "data/maps/VisitorCenter/scripts.pory"
	subvar VAR_TEMP_0, 1
# 680 "data/maps/VisitorCenter/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkFasterLeft
# 681 "data/maps/VisitorCenter/scripts.pory"
	waitmovement 0
	goto VisCen_Player_Realign_8

VisCen_Player_Realign_12:
# 697 "data/maps/VisitorCenter/scripts.pory"
	addvar VAR_TEMP_1, 1
# 698 "data/maps/VisitorCenter/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkFasterDown
# 699 "data/maps/VisitorCenter/scripts.pory"
	waitmovement 0
	goto VisCen_Player_Realign_11


VisCen_Liam_PostBattle:
# 706 "data/maps/VisitorCenter/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 707 "data/maps/VisitorCenter/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq VisCen_Liam_PostBattle_2
# 715 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_Liam_PostBattle_Text_1
VisCen_Liam_PostBattle_1:
# 717 "data/maps/VisitorCenter/scripts.pory"
	goto VisCen_Rivals_PostBattle
	return

VisCen_Liam_PostBattle_2:
# 709 "data/maps/VisitorCenter/scripts.pory"
	addvar VAR_VISCEN_STATE, 1
# 710 "data/maps/VisitorCenter/scripts.pory"
	call RivalLink_Add_Liam
# 711 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_Liam_PostBattle_Text_0
	goto VisCen_Liam_PostBattle_1


VisCen_Olive_PostBattle:
# 721 "data/maps/VisitorCenter/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 722 "data/maps/VisitorCenter/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq VisCen_Olive_PostBattle_2
VisCen_Olive_PostBattle_1:
# 726 "data/maps/VisitorCenter/scripts.pory"
	call RivalLink_Add_Olive
# 727 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_Olive_PostBattle_Text_0
# 728 "data/maps/VisitorCenter/scripts.pory"
	goto VisCen_Rivals_PostBattle
	return

VisCen_Olive_PostBattle_2:
# 724 "data/maps/VisitorCenter/scripts.pory"
	addvar VAR_VISCEN_STATE, 1
	goto VisCen_Olive_PostBattle_1


VisCen_Rivals_PostBattle:
# 732 "data/maps/VisitorCenter/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceDown
# 733 "data/maps/VisitorCenter/scripts.pory"
	waitmovement 0
# 734 "data/maps/VisitorCenter/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 735 "data/maps/VisitorCenter/scripts.pory"
	applymovement VAR_TEMP_8, Common_Movement_FaceUp
# 736 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_Rivals_PostBattle_Text_0
# 739 "data/maps/VisitorCenter/scripts.pory"
	closemessage
# 740 "data/maps/VisitorCenter/scripts.pory"
	compare VAR_TEMP_8, 4
	goto_if_eq VisCen_Rivals_PostBattle_2
# 748 "data/maps/VisitorCenter/scripts.pory"
	applymovement 1, Prof_Walk_1_2
VisCen_Rivals_PostBattle_1:
# 750 "data/maps/VisitorCenter/scripts.pory"
	waitmovement 1
# 751 "data/maps/VisitorCenter/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 754 "data/maps/VisitorCenter/scripts.pory"
	applymovement 1, Prof_Walk_2
# 755 "data/maps/VisitorCenter/scripts.pory"
	waitmovement 1
# 756 "data/maps/VisitorCenter/scripts.pory"
	applymovement VAR_TEMP_8, Common_Movement_WalkInPlaceUp
# 759 "data/maps/VisitorCenter/scripts.pory"
	applymovement 1, Prof_Walk_3
# 760 "data/maps/VisitorCenter/scripts.pory"
	waitmovement 1
# 761 "data/maps/VisitorCenter/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 762 "data/maps/VisitorCenter/scripts.pory"
	waitmovement 0
# 763 "data/maps/VisitorCenter/scripts.pory"
	delay 16
# 765 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_Rivals_PostBattle_Text_1
# 766 "data/maps/VisitorCenter/scripts.pory"
	goto VisCen_Closing_Event
	return

VisCen_Rivals_PostBattle_2:
# 743 "data/maps/VisitorCenter/scripts.pory"
	applymovement 1, Prof_Walk_1_1
	goto VisCen_Rivals_PostBattle_1


VisCen_Prof_PostBattle:
# 770 "data/maps/VisitorCenter/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 771 "data/maps/VisitorCenter/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq VisCen_Prof_PostBattle_2
# 779 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_Prof_PostBattle_Text_1
VisCen_Prof_PostBattle_1:
# 783 "data/maps/VisitorCenter/scripts.pory"
	clearflag FLAG_SYS_SET_BATTLE_BGM
# 784 "data/maps/VisitorCenter/scripts.pory"
	closemessage
# 785 "data/maps/VisitorCenter/scripts.pory"
	applymovement 1, Common_Movement_WalkLeft
# 786 "data/maps/VisitorCenter/scripts.pory"
	waitmovement 0
# 787 "data/maps/VisitorCenter/scripts.pory"
	delay 16
# 789 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_Prof_PostBattle_Text_2
# 791 "data/maps/VisitorCenter/scripts.pory"
	goto VisCen_Closing_Event
	return

VisCen_Prof_PostBattle_2:
# 773 "data/maps/VisitorCenter/scripts.pory"
	addvar VAR_VISCEN_STATE, 1
# 774 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_Prof_PostBattle_Text_0
	goto VisCen_Prof_PostBattle_1


VisCen_Closing_Event:
# 796 "data/maps/VisitorCenter/scripts.pory"
	special HealPlayerParty
# 798 "data/maps/VisitorCenter/scripts.pory"
	playfanfare MUS_OBTAIN_TMHM
# 799 "data/maps/VisitorCenter/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 800 "data/maps/VisitorCenter/scripts.pory"
	msgbox Prof_DexText
# 801 "data/maps/VisitorCenter/scripts.pory"
	waitfanfare
# 804 "data/maps/VisitorCenter/scripts.pory"
	compare VAR_TEMP_8, 1
	goto_if_ne VisCen_Closing_Event_2
# 810 "data/maps/VisitorCenter/scripts.pory"
	applymovement 1, Prof_Center_2
VisCen_Closing_Event_1:
# 812 "data/maps/VisitorCenter/scripts.pory"
	waitmovement 0
# 813 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_Closing_Event_Text_0
# 814 "data/maps/VisitorCenter/scripts.pory"
	closemessage
# 815 "data/maps/VisitorCenter/scripts.pory"
	applymovement 1, Common_Movement_WalkDown
# 816 "data/maps/VisitorCenter/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 817 "data/maps/VisitorCenter/scripts.pory"
	waitmovement 0
# 818 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_Closing_Event_Text_1
# 822 "data/maps/VisitorCenter/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceUp
# 823 "data/maps/VisitorCenter/scripts.pory"
	waitmovement 0
# 824 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_Closing_Event_Text_2
# 826 "data/maps/VisitorCenter/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceLeft
# 827 "data/maps/VisitorCenter/scripts.pory"
	waitmovement 0
# 828 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_Closing_Event_Text_3
# 829 "data/maps/VisitorCenter/scripts.pory"
	closemessage
# 832 "data/maps/VisitorCenter/scripts.pory"
	playse SE_DING_DONG
# 833 "data/maps/VisitorCenter/scripts.pory"
	waitse
# 834 "data/maps/VisitorCenter/scripts.pory"
	delay 32
# 836 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_Closing_Event_Text_4
# 838 "data/maps/VisitorCenter/scripts.pory"
	closemessage
# 840 "data/maps/VisitorCenter/scripts.pory"
	call Prof_Hop
# 842 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_Closing_Event_Text_5
# 847 "data/maps/VisitorCenter/scripts.pory"
	warp MAP_VISITOR_CENTER, 0xFF, 8, 8
# 849 "data/maps/VisitorCenter/scripts.pory"
	releaseall
	end

VisCen_Closing_Event_2:
# 806 "data/maps/VisitorCenter/scripts.pory"
	applymovement 1, Prof_Center_1
	goto VisCen_Closing_Event_1


VisCen_AreaSign::
# 862 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_AreaSign_Text_0, MSGBOX_SIGN
	end


VisCen_ExitSign::
# 869 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_ExitSign_Text_0, MSGBOX_SIGN
	end


VisCen_FenceSign::
# 876 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_FenceSign_Text_0, MSGBOX_SIGN
	end


VisCen_MisplacedBush::
# 882 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_MisplacedBush_Text_0, MSGBOX_NPC
	end


VisCen_Professor::
# 892 "data/maps/VisitorCenter/scripts.pory"
	goto_if_unset FLAG_TEMP_5, VisCen_Professor_2
# 900 "data/maps/VisitorCenter/scripts.pory"
	lock
# 901 "data/maps/VisitorCenter/scripts.pory"
	faceplayer
# 902 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_Professor_Text_1, MSGBOX_YESNO
# 905 "data/maps/VisitorCenter/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq VisCen_Professor_5
# 944 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_Professor_Text_6, MSGBOX_AUTOCLOSE
VisCen_Professor_1:
	end

VisCen_Professor_2:
# 894 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_Professor_Text_0, MSGBOX_NPC
	goto VisCen_Professor_1

VisCen_Professor_5:
# 907 "data/maps/VisitorCenter/scripts.pory"
	goto_if_set FLAG_TEMP_2, VisCen_Professor_12
VisCen_Professor_11:
# 926 "data/maps/VisitorCenter/scripts.pory"
	goto_if_unset FLAG_TEMP_4, VisCen_Professor_9
# 937 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_Professor_Text_5, MSGBOX_AUTOCLOSE
	goto VisCen_Professor_1

VisCen_Professor_8:
# 909 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_Professor_Text_2
# 912 "data/maps/VisitorCenter/scripts.pory"
	closemessage
# 913 "data/maps/VisitorCenter/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceDown
# 914 "data/maps/VisitorCenter/scripts.pory"
	waitmovement 0
# 915 "data/maps/VisitorCenter/scripts.pory"
	applymovement 3, Common_Movement_FaceUp
# 916 "data/maps/VisitorCenter/scripts.pory"
	applymovement 4, Common_Movement_FaceUp
# 917 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_Professor_Text_3, MSGBOX_AUTOCLOSE
# 921 "data/maps/VisitorCenter/scripts.pory"
	setvar VAR_TEMP_8, 1
# 922 "data/maps/VisitorCenter/scripts.pory"
	setvar VAR_VISCEN_STATE, 0x30
# 924 "data/maps/VisitorCenter/scripts.pory"
	goto Battle_Transition
	goto VisCen_Professor_1

VisCen_Professor_9:
# 928 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_Professor_Text_4, MSGBOX_AUTOCLOSE
# 933 "data/maps/VisitorCenter/scripts.pory"
	setflag FLAG_TEMP_4
	goto VisCen_Professor_1

VisCen_Professor_12:
# 907 "data/maps/VisitorCenter/scripts.pory"
	goto_if_set FLAG_TEMP_3, VisCen_Professor_8
	goto VisCen_Professor_11


Prof_Hop:
# 953 "data/maps/VisitorCenter/scripts.pory"
	playse SE_LEDGE
# 954 "data/maps/VisitorCenter/scripts.pory"
	applymovement 1, Common_Movement_HopDown
# 955 "data/maps/VisitorCenter/scripts.pory"
	waitmovement 1
	return


VisCen_Liam::
# 961 "data/maps/VisitorCenter/scripts.pory"
	goto_if_unset FLAG_TEMP_1, VisCen_Liam_2
# 969 "data/maps/VisitorCenter/scripts.pory"
	goto_if_unset FLAG_TEMP_5, VisCen_Liam_3
# 977 "data/maps/VisitorCenter/scripts.pory"
	lock
# 978 "data/maps/VisitorCenter/scripts.pory"
	faceplayer
# 979 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_Liam_Text_2, MSGBOX_YESNO
# 982 "data/maps/VisitorCenter/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq VisCen_Liam_8
# 994 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_Liam_Text_3
# 995 "data/maps/VisitorCenter/scripts.pory"
	setflag FLAG_TEMP_2
VisCen_Liam_7:
# 997 "data/maps/VisitorCenter/scripts.pory"
	release
VisCen_Liam_1:
	end

VisCen_Liam_2:
# 963 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_Liam_Text_0, MSGBOX_NPC
# 966 "data/maps/VisitorCenter/scripts.pory"
	applymovement 3, Common_Movement_FaceUp
# 967 "data/maps/VisitorCenter/scripts.pory"
	waitmovement 0
	goto VisCen_Liam_1

VisCen_Liam_3:
# 971 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_Liam_Text_1, MSGBOX_NPC
	goto VisCen_Liam_1

VisCen_Liam_8:
# 985 "data/maps/VisitorCenter/scripts.pory"
	setvar VAR_VISCEN_STATE, 0x10
# 986 "data/maps/VisitorCenter/scripts.pory"
	setvar VAR_TEMP_8, 3
# 987 "data/maps/VisitorCenter/scripts.pory"
	setvar VAR_MUGSHOT_ID, MUGSHOT_LIAM
# 988 "data/maps/VisitorCenter/scripts.pory"
	call RivalLink_Add_Liam
# 990 "data/maps/VisitorCenter/scripts.pory"
	goto Battle_Transition
	goto VisCen_Liam_7


VisCen_Olive::
# 1005 "data/maps/VisitorCenter/scripts.pory"
	goto_if_unset FLAG_TEMP_1, VisCen_Olive_2
# 1013 "data/maps/VisitorCenter/scripts.pory"
	goto_if_unset FLAG_TEMP_5, VisCen_Olive_3
# 1021 "data/maps/VisitorCenter/scripts.pory"
	lock
# 1022 "data/maps/VisitorCenter/scripts.pory"
	faceplayer
# 1023 "data/maps/VisitorCenter/scripts.pory"
	bufferspeciesname 2, VAR_TEMP_6
# 1024 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_Olive_Text_2, MSGBOX_YESNO
# 1027 "data/maps/VisitorCenter/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq VisCen_Olive_8
# 1039 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_Olive_Text_3
# 1040 "data/maps/VisitorCenter/scripts.pory"
	setflag FLAG_TEMP_3
VisCen_Olive_7:
# 1042 "data/maps/VisitorCenter/scripts.pory"
	release
VisCen_Olive_1:
	end

VisCen_Olive_2:
# 1007 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_Olive_Text_0, MSGBOX_NPC
# 1010 "data/maps/VisitorCenter/scripts.pory"
	applymovement 4, Common_Movement_FaceUp
# 1011 "data/maps/VisitorCenter/scripts.pory"
	waitmovement 0
	goto VisCen_Olive_1

VisCen_Olive_3:
# 1015 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_Olive_Text_1, MSGBOX_NPC
	goto VisCen_Olive_1

VisCen_Olive_8:
# 1030 "data/maps/VisitorCenter/scripts.pory"
	setvar VAR_VISCEN_STATE, 0x20
# 1031 "data/maps/VisitorCenter/scripts.pory"
	setvar VAR_TEMP_8, 4
# 1032 "data/maps/VisitorCenter/scripts.pory"
	setvar VAR_MUGSHOT_ID, MUGSHOT_OLIVE
# 1033 "data/maps/VisitorCenter/scripts.pory"
	call RivalLink_Add_Olive
# 1035 "data/maps/VisitorCenter/scripts.pory"
	goto Battle_Transition
	goto VisCen_Olive_7


VisCen_Oyako::
# 1050 "data/maps/VisitorCenter/scripts.pory"
	lockall
# 1053 "data/maps/VisitorCenter/scripts.pory"
	applymovement 6, Common_Movement_FaceUp
# 1054 "data/maps/VisitorCenter/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceDown
# 1055 "data/maps/VisitorCenter/scripts.pory"
	waitmovement 0
# 1056 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_Oyako_Text_0
# 1057 "data/maps/VisitorCenter/scripts.pory"
	applymovement 6, Common_Movement_WalkInPlaceUp
# 1058 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_Oyako_Text_1
# 1060 "data/maps/VisitorCenter/scripts.pory"
	releaseall
	end


VisCen_Employee::
# 1065 "data/maps/VisitorCenter/scripts.pory"
	goto_if_unset FLAG_SYS_POKEDEX_GET, VisCen_Employee_2
# 1072 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_Employee_Text_1, MSGBOX_NPC
VisCen_Employee_1:
	end

VisCen_Employee_2:
# 1067 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_Employee_Text_0, MSGBOX_NPC
	goto VisCen_Employee_1


VisCen_Riajuu::
# 1080 "data/maps/VisitorCenter/scripts.pory"
	lockall
# 1081 "data/maps/VisitorCenter/scripts.pory"
	applymovement 9, Common_Movement_FaceLeft
# 1082 "data/maps/VisitorCenter/scripts.pory"
	applymovement 8, Common_Movement_WalkInPlaceRight
# 1083 "data/maps/VisitorCenter/scripts.pory"
	waitmovement 0
# 1084 "data/maps/VisitorCenter/scripts.pory"
	goto_if_unset FLAG_TEMP_1, VisCen_Riajuu_2
# 1092 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_Riajuu_Text_2
# 1094 "data/maps/VisitorCenter/scripts.pory"
	applymovement 9, Common_Movement_WalkInPlaceLeft
# 1095 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_Riajuu_Text_3
VisCen_Riajuu_1:
# 1097 "data/maps/VisitorCenter/scripts.pory"
	releaseall
	end

VisCen_Riajuu_2:
# 1086 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_Riajuu_Text_0
# 1087 "data/maps/VisitorCenter/scripts.pory"
	applymovement 9, Common_Movement_WalkInPlaceLeft
# 1088 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_Riajuu_Text_1
	goto VisCen_Riajuu_1


VisCen_Beauty::
# 1103 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_Beauty_Text_0, MSGBOX_NPC
	end


VisCen_LassGramps::
# 1110 "data/maps/VisitorCenter/scripts.pory"
	lockall
# 1111 "data/maps/VisitorCenter/scripts.pory"
	applymovement 11, Common_Movement_FaceUp
# 1112 "data/maps/VisitorCenter/scripts.pory"
	applymovement 12, Common_Movement_WalkInPlaceDown
# 1113 "data/maps/VisitorCenter/scripts.pory"
	waitmovement 0
# 1114 "data/maps/VisitorCenter/scripts.pory"
	goto_if_unset FLAG_TEMP_1, VisCen_LassGramps_2
# 1127 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_LassGramps_Text_4
# 1128 "data/maps/VisitorCenter/scripts.pory"
	applymovement 11, Common_Movement_WalkInPlaceUp
# 1129 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_LassGramps_Text_5
# 1131 "data/maps/VisitorCenter/scripts.pory"
	applymovement 12, Common_Movement_WalkInPlaceDown
# 1132 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_LassGramps_Text_6
VisCen_LassGramps_1:
# 1134 "data/maps/VisitorCenter/scripts.pory"
	releaseall
	end

VisCen_LassGramps_2:
# 1116 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_LassGramps_Text_0
# 1117 "data/maps/VisitorCenter/scripts.pory"
	applymovement 11, Common_Movement_WalkInPlaceUp
# 1118 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_LassGramps_Text_1
# 1119 "data/maps/VisitorCenter/scripts.pory"
	applymovement 12, Common_Movement_WalkInPlaceDown
# 1120 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_LassGramps_Text_2
# 1122 "data/maps/VisitorCenter/scripts.pory"
	applymovement 11, Common_Movement_WalkInPlaceUp
# 1123 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_LassGramps_Text_3
	goto VisCen_LassGramps_1


VisCen_TechnologyMan::
# 1139 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_TechnologyMan_Text_0, MSGBOX_NPC
	end


# 1166 "data/maps/VisitorCenter/scripts.pory"
Prof_WalkBehindBushes_1:
# 1168 "data/maps/VisitorCenter/scripts.pory"
	jump_in_place_down
# 1169 "data/maps/VisitorCenter/scripts.pory"
	delay_8
	step_end

# 1171 "data/maps/VisitorCenter/scripts.pory"
Prof_WalkBehindBushes_2:
# 1173 "data/maps/VisitorCenter/scripts.pory"
	walk_fast_left
# 1174 "data/maps/VisitorCenter/scripts.pory"
	walk_in_place_faster_down
	step_end

# 1177 "data/maps/VisitorCenter/scripts.pory"
Player_Ball_TopLeft:
# 1179 "data/maps/VisitorCenter/scripts.pory"
	walk_left
# 1180 "data/maps/VisitorCenter/scripts.pory"
	walk_down
# 1180 "data/maps/VisitorCenter/scripts.pory"
	walk_down
# 1181 "data/maps/VisitorCenter/scripts.pory"
	walk_right
# 1182 "data/maps/VisitorCenter/scripts.pory"
	face_up
	step_end

# 1184 "data/maps/VisitorCenter/scripts.pory"
Player_Ball_Left:
# 1186 "data/maps/VisitorCenter/scripts.pory"
	walk_down
# 1187 "data/maps/VisitorCenter/scripts.pory"
	walk_right
# 1188 "data/maps/VisitorCenter/scripts.pory"
	face_up
	step_end

# 1190 "data/maps/VisitorCenter/scripts.pory"
Player_Ball_TopRight:
# 1192 "data/maps/VisitorCenter/scripts.pory"
	walk_right
# 1193 "data/maps/VisitorCenter/scripts.pory"
	walk_down
# 1193 "data/maps/VisitorCenter/scripts.pory"
	walk_down
# 1194 "data/maps/VisitorCenter/scripts.pory"
	walk_left
# 1195 "data/maps/VisitorCenter/scripts.pory"
	face_up
	step_end

# 1197 "data/maps/VisitorCenter/scripts.pory"
Player_Ball_Right:
# 1199 "data/maps/VisitorCenter/scripts.pory"
	walk_down
# 1200 "data/maps/VisitorCenter/scripts.pory"
	walk_left
# 1201 "data/maps/VisitorCenter/scripts.pory"
	face_up
	step_end

# 1205 "data/maps/VisitorCenter/scripts.pory"
Liam_Ball_L:
# 1207 "data/maps/VisitorCenter/scripts.pory"
	walk_fast_up
# 1207 "data/maps/VisitorCenter/scripts.pory"
	walk_fast_up
# 1208 "data/maps/VisitorCenter/scripts.pory"
	walk_fast_right
# 1209 "data/maps/VisitorCenter/scripts.pory"
	walk_in_place_faster_up
	step_end

# 1211 "data/maps/VisitorCenter/scripts.pory"
Liam_Ball_M:
# 1213 "data/maps/VisitorCenter/scripts.pory"
	walk_fast_up
# 1214 "data/maps/VisitorCenter/scripts.pory"
	walk_fast_right
# 1214 "data/maps/VisitorCenter/scripts.pory"
	walk_fast_right
# 1215 "data/maps/VisitorCenter/scripts.pory"
	walk_fast_up
	step_end

# 1217 "data/maps/VisitorCenter/scripts.pory"
Liam_Ball_R:
# 1219 "data/maps/VisitorCenter/scripts.pory"
	walk_fast_up
# 1220 "data/maps/VisitorCenter/scripts.pory"
	walk_fast_right
# 1220 "data/maps/VisitorCenter/scripts.pory"
	walk_fast_right
# 1220 "data/maps/VisitorCenter/scripts.pory"
	walk_fast_right
# 1221 "data/maps/VisitorCenter/scripts.pory"
	walk_fast_up
	step_end

# 1224 "data/maps/VisitorCenter/scripts.pory"
Olive_Ball_L:
# 1226 "data/maps/VisitorCenter/scripts.pory"
	walk_up
# 1227 "data/maps/VisitorCenter/scripts.pory"
	walk_in_place_left
# 1228 "data/maps/VisitorCenter/scripts.pory"
	walk_left
# 1228 "data/maps/VisitorCenter/scripts.pory"
	walk_left
# 1228 "data/maps/VisitorCenter/scripts.pory"
	walk_left
# 1229 "data/maps/VisitorCenter/scripts.pory"
	walk_up
	step_end

# 1231 "data/maps/VisitorCenter/scripts.pory"
Olive_Ball_M:
# 1233 "data/maps/VisitorCenter/scripts.pory"
	walk_up
# 1234 "data/maps/VisitorCenter/scripts.pory"
	walk_in_place_left
# 1235 "data/maps/VisitorCenter/scripts.pory"
	walk_left
# 1235 "data/maps/VisitorCenter/scripts.pory"
	walk_left
# 1236 "data/maps/VisitorCenter/scripts.pory"
	walk_up
	step_end

# 1238 "data/maps/VisitorCenter/scripts.pory"
Olive_Ball_R:
# 1240 "data/maps/VisitorCenter/scripts.pory"
	walk_up
# 1240 "data/maps/VisitorCenter/scripts.pory"
	walk_up
# 1241 "data/maps/VisitorCenter/scripts.pory"
	walk_in_place_left
# 1242 "data/maps/VisitorCenter/scripts.pory"
	walk_left
# 1243 "data/maps/VisitorCenter/scripts.pory"
	walk_in_place_faster_up
	step_end

# 1267 "data/maps/VisitorCenter/scripts.pory"
Liam_ChoiceA_P3:
# 1269 "data/maps/VisitorCenter/scripts.pory"
	walk_in_place_right
# 1270 "data/maps/VisitorCenter/scripts.pory"
	delay_8
# 1270 "data/maps/VisitorCenter/scripts.pory"
	delay_8
# 1270 "data/maps/VisitorCenter/scripts.pory"
	delay_8
# 1270 "data/maps/VisitorCenter/scripts.pory"
	delay_8
# 1270 "data/maps/VisitorCenter/scripts.pory"
	delay_8
# 1270 "data/maps/VisitorCenter/scripts.pory"
	delay_8
# 1270 "data/maps/VisitorCenter/scripts.pory"
	delay_8
# 1270 "data/maps/VisitorCenter/scripts.pory"
	delay_8
# 1271 "data/maps/VisitorCenter/scripts.pory"
	walk_right
# 1272 "data/maps/VisitorCenter/scripts.pory"
	delay_8
	step_end

# 1274 "data/maps/VisitorCenter/scripts.pory"
Olive_ChoiceA_P3:
# 1276 "data/maps/VisitorCenter/scripts.pory"
	delay_8
# 1276 "data/maps/VisitorCenter/scripts.pory"
	delay_8
# 1277 "data/maps/VisitorCenter/scripts.pory"
	face_left
# 1278 "data/maps/VisitorCenter/scripts.pory"
	delay_8
# 1278 "data/maps/VisitorCenter/scripts.pory"
	delay_8
# 1278 "data/maps/VisitorCenter/scripts.pory"
	delay_8
# 1278 "data/maps/VisitorCenter/scripts.pory"
	delay_8
# 1279 "data/maps/VisitorCenter/scripts.pory"
	walk_down
# 1280 "data/maps/VisitorCenter/scripts.pory"
	face_up
	step_end

# 1287 "data/maps/VisitorCenter/scripts.pory"
Liam_ChoiceB_P1:
# 1289 "data/maps/VisitorCenter/scripts.pory"
	delay_8
# 1289 "data/maps/VisitorCenter/scripts.pory"
	delay_8
# 1290 "data/maps/VisitorCenter/scripts.pory"
	walk_down
# 1291 "data/maps/VisitorCenter/scripts.pory"
	walk_left
# 1291 "data/maps/VisitorCenter/scripts.pory"
	walk_left
	step_end

# 1293 "data/maps/VisitorCenter/scripts.pory"
Olive_ChoiceB_P1:
# 1295 "data/maps/VisitorCenter/scripts.pory"
	face_left
# 1296 "data/maps/VisitorCenter/scripts.pory"
	delay_8
# 1296 "data/maps/VisitorCenter/scripts.pory"
	delay_8
# 1296 "data/maps/VisitorCenter/scripts.pory"
	delay_8
# 1296 "data/maps/VisitorCenter/scripts.pory"
	delay_8
# 1297 "data/maps/VisitorCenter/scripts.pory"
	face_down
# 1298 "data/maps/VisitorCenter/scripts.pory"
	delay_8
# 1298 "data/maps/VisitorCenter/scripts.pory"
	delay_8
# 1298 "data/maps/VisitorCenter/scripts.pory"
	delay_8
# 1298 "data/maps/VisitorCenter/scripts.pory"
	delay_8
# 1298 "data/maps/VisitorCenter/scripts.pory"
	delay_8
# 1298 "data/maps/VisitorCenter/scripts.pory"
	delay_8
# 1299 "data/maps/VisitorCenter/scripts.pory"
	walk_left
# 1300 "data/maps/VisitorCenter/scripts.pory"
	delay_8
	step_end

# 1306 "data/maps/VisitorCenter/scripts.pory"
Liam_ChoiceB_P3:
# 1308 "data/maps/VisitorCenter/scripts.pory"
	delay_8
# 1308 "data/maps/VisitorCenter/scripts.pory"
	delay_8
# 1309 "data/maps/VisitorCenter/scripts.pory"
	face_left
	step_end

# 1311 "data/maps/VisitorCenter/scripts.pory"
Olive_ChoiceB_P3:
# 1313 "data/maps/VisitorCenter/scripts.pory"
	face_left
# 1314 "data/maps/VisitorCenter/scripts.pory"
	delay_8
# 1314 "data/maps/VisitorCenter/scripts.pory"
	delay_8
# 1314 "data/maps/VisitorCenter/scripts.pory"
	delay_8
# 1314 "data/maps/VisitorCenter/scripts.pory"
	delay_8
# 1314 "data/maps/VisitorCenter/scripts.pory"
	delay_8
# 1314 "data/maps/VisitorCenter/scripts.pory"
	delay_8
# 1315 "data/maps/VisitorCenter/scripts.pory"
	walk_in_place_right
# 1316 "data/maps/VisitorCenter/scripts.pory"
	delay_8
	step_end

# 1320 "data/maps/VisitorCenter/scripts.pory"
Prof_Walk_1_1:
# 1322 "data/maps/VisitorCenter/scripts.pory"
	walk_right
# 1322 "data/maps/VisitorCenter/scripts.pory"
	walk_right
# 1323 "data/maps/VisitorCenter/scripts.pory"
	walk_down
	step_end

# 1325 "data/maps/VisitorCenter/scripts.pory"
Prof_Walk_1_2:
# 1327 "data/maps/VisitorCenter/scripts.pory"
	walk_up
# 1328 "data/maps/VisitorCenter/scripts.pory"
	walk_right
# 1328 "data/maps/VisitorCenter/scripts.pory"
	walk_right
# 1329 "data/maps/VisitorCenter/scripts.pory"
	walk_down
# 1329 "data/maps/VisitorCenter/scripts.pory"
	walk_down
	step_end

# 1331 "data/maps/VisitorCenter/scripts.pory"
Prof_Walk_2:
# 1333 "data/maps/VisitorCenter/scripts.pory"
	walk_down
# 1334 "data/maps/VisitorCenter/scripts.pory"
	walk_left
# 1335 "data/maps/VisitorCenter/scripts.pory"
	walk_in_place_down
	step_end

# 1337 "data/maps/VisitorCenter/scripts.pory"
Prof_Walk_3:
# 1339 "data/maps/VisitorCenter/scripts.pory"
	delay_8
# 1339 "data/maps/VisitorCenter/scripts.pory"
	delay_8
# 1339 "data/maps/VisitorCenter/scripts.pory"
	delay_8
# 1339 "data/maps/VisitorCenter/scripts.pory"
	delay_8
# 1340 "data/maps/VisitorCenter/scripts.pory"
	walk_left
# 1340 "data/maps/VisitorCenter/scripts.pory"
	walk_left
# 1341 "data/maps/VisitorCenter/scripts.pory"
	walk_in_place_down
	step_end

# 1343 "data/maps/VisitorCenter/scripts.pory"
Prof_Center_1:
# 1345 "data/maps/VisitorCenter/scripts.pory"
	walk_fast_right
# 1346 "data/maps/VisitorCenter/scripts.pory"
	delay_8
# 1347 "data/maps/VisitorCenter/scripts.pory"
	walk_in_place_down
	step_end

# 1349 "data/maps/VisitorCenter/scripts.pory"
Prof_Center_2:
# 1351 "data/maps/VisitorCenter/scripts.pory"
	walk_in_place_faster_up
# 1352 "data/maps/VisitorCenter/scripts.pory"
	delay_8
# 1353 "data/maps/VisitorCenter/scripts.pory"
	walk_in_place_down
	step_end

VisCen_ExitBlock_Text_0:
# 122 "data/maps/VisitorCenter/scripts.pory"
	.string "{COLOR LIGHT_GRAY}{SHADOW WHITE}Can't leave Mom behind…$"

VisCen_RaffleStart_Text_0:
# 140 "data/maps/VisitorCenter/scripts.pory"
	.string "???: …And the 1st place winner, with the\n"
	.string "first pick of the three, is…$"

VisCen_RaffleStart_Text_1:
# 153 "data/maps/VisitorCenter/scripts.pory"
	.string "…This gal!!\n"
	.string "{FONT_SMALL}What was your name, kid…?\p"
	.string "{FONT_NORMAL}…{PLAYER}!\n"
	.string "Please, step up and claim your prize!$"

VisCen_RaffleStart_Text_2:
# 160 "data/maps/VisitorCenter/scripts.pory"
	.string "…This guy!!\n"
	.string "{FONT_SMALL}What was your name, kid…?\p"
	.string "{FONT_NORMAL}…{PLAYER}!\n"
	.string "Please, step up and claim your prize!$"

VisCen_RaffleStart_Text_3:
# 177 "data/maps/VisitorCenter/scripts.pory"
	.string "???: W-wait a moment! This is a once in a\n"
	.string "lifetime chance!$"

VisCen_RaffleStart_Text_4:
# 181 "data/maps/VisitorCenter/scripts.pory"
	.string "???: It's a free Pokémon!!\n"
	.string "For free, kid!$"

VisCen_RaffleStart_Text_5:
# 186 "data/maps/VisitorCenter/scripts.pory"
	.string "???: You're old enough to start your\n"
	.string "own Pokémon Journey!\p"
	.string "Doesn't that sound exciting to you…?$"

VisCen_RaffleStart_Text_6:
# 191 "data/maps/VisitorCenter/scripts.pory"
	.string "???: N-Need to check with your mother\n"
	.string "first, maybe?\p"
	.string "Don't worry, I'm sure she would be\n"
	.string "thrilled!$"

VisCen_RaffleStart_Text_7:
# 196 "data/maps/VisitorCenter/scripts.pory"
	.string "???:{FONT_SMALL}Kid, please, no one else in this\n"
	.string "crowd will cut it!\p"
	.string "Even if it's just for show, I'm beggin'\n"
	.string "ya!$"

CrowdBlock_RivalEvent_Text_0:
# 232 "data/maps/VisitorCenter/scripts.pory"
	.string "Hold on, kid! There's two willing\n"
	.string "opponents right here!!$"

VisCen_BallPick_Text_0:
# 280 "data/maps/VisitorCenter/scripts.pory"
	.string "Pretty cool, right?\p"
	.string "So what do you think? {COLOR GREEN}Grass type{COLOR DARK_GRAY}\n"
	.string "Pokémon suit you?$"

VisCen_BallPick_Text_1:
# 298 "data/maps/VisitorCenter/scripts.pory"
	.string "Feisty little one, huh?\p"
	.string "I get ya, so you've got your eye on {COLOR RED}Fire\n"
	.string "type{COLOR DARK_GRAY} Pokémon, that it?$"

VisCen_BallPick_Text_2:
# 318 "data/maps/VisitorCenter/scripts.pory"
	.string "A cute kid, that one!\p"
	.string "What do you say? Wanna give that {COLOR BLUE}Water\n"
	.string "type{COLOR DARK_GRAY} Pokémon a good home?$"

VisCen_BallPick_Text_3:
# 365 "data/maps/VisitorCenter/scripts.pory"
	.string "???: Treat 'em well, alright?$"

VisCen_BallPick_Text_4:
# 371 "data/maps/VisitorCenter/scripts.pory"
	.string "{PLAYER} received the {STR_VAR_1}\n"
	.string "from the Professor!$"

VisCen_BallPick_Text_5:
# 375 "data/maps/VisitorCenter/scripts.pory"
	.string "Do you want to give a nickname to this\n"
	.string "{STR_VAR_1}?$"

VisCen_BallPick_Text_6:
# 386 "data/maps/VisitorCenter/scripts.pory"
	.string "???: Excellent choice by our big winner!\p"
	.string "Now, will winners Number 2 and 3 step up\n"
	.string "as well?$"

VisCen_BallPick_Text_7:
# 438 "data/maps/VisitorCenter/scripts.pory"
	.string "???: So, what do you think of your new\n"
	.string "partners?\p"
	.string "Some rare choices, right? Wasn't easy\n"
	.string "to get a hold of 'em…$"

VisCen_BallPick_Text_8:
# 444 "data/maps/VisitorCenter/scripts.pory"
	.string "BOY: Partners, huh…? These Pokémon?$"

VisCen_BallPick_Text_9:
# 449 "data/maps/VisitorCenter/scripts.pory"
	.string "???: That's right, your first Pokémon\n"
	.string "for a new journey!\p"
	.string "Much more exciting than some boring\n"
	.string "sightseeing, yeah?$"

VisCen_BallPick_Text_10:
# 455 "data/maps/VisitorCenter/scripts.pory"
	.string "GIRL: I was rather looking forward to\n"
	.string "the sightseeing, actually…$"

VisCen_BallPick_Text_11:
# 461 "data/maps/VisitorCenter/scripts.pory"
	.string "???: …But I can already see the\n"
	.string "excitement in your child eyes!\p"
	.string "You're itchin' to battle already, aren't\n"
	.string "ya {PLAYER}?$"

VisCen_BallPick_Text_12:
# 467 "data/maps/VisitorCenter/scripts.pory"
	.string "???: Of course you are!\n"
	.string "{FONT_SMALL}Thanks for the out.{FONT_NORMAL}\p"
	.string "What's an adventure without hardship?\n"
	.string "Without Rivals??\p"
	.string "Take hold of your destiny or whatever,\n"
	.string "kid! Who's your mark?$"

VisCen_BallPick_Text_13:
# 480 "data/maps/VisitorCenter/scripts.pory"
	.string "???: Hey, hey… just work with me a\n"
	.string "little, huh?\l"
	.string "{FONT_SMALL}You just got a gift.$"

VisCen_BallPick_Text_14:
# 504 "data/maps/VisitorCenter/scripts.pory"
	.string "BOY: Getting cold feet?\p"
	.string "If you don't want your Pokémon, I can\n"
	.string "take care of it!$"

VisCen_BallPick_Text_15:
# 509 "data/maps/VisitorCenter/scripts.pory"
	.string "???: Ooh, those are fighting words!\n"
	.string "You're not just gonna take that, right?$"

VisCen_BallPick_Text_16:
# 540 "data/maps/VisitorCenter/scripts.pory"
	.string "GIRL: Well, it would be rude not to get\n"
	.string "to know each other, right?\p"
	.string "I think {STR_VAR_3} wants to play…$"

VisCen_BallPick_Text_17:
# 545 "data/maps/VisitorCenter/scripts.pory"
	.string "???: That's right, you three are in it\n"
	.string "for the long haul now!\p"
	.string "Why don't you two come on over?$"

Battle_Transition_Text_0:
# 638 "data/maps/VisitorCenter/scripts.pory"
	.string "???: Alright, everyone watching? You're\n"
	.string "lookin' at the new Champ in the making!\p"
	.string "{FONT_SMALL}Just put on a good show, kid.$"

Battle_Transition_Text_1:
# 640 "data/maps/VisitorCenter/scripts.pory"
	.string "Great, great. Good work.$"

VisCen_Liam_PostBattle_Text_0:
# 711 "data/maps/VisitorCenter/scripts.pory"
	.string "LIAM: So you've got a head start, but\n"
	.string "we'll catch up!$"

VisCen_Liam_PostBattle_Text_1:
# 715 "data/maps/VisitorCenter/scripts.pory"
	.string "LIAM: How was that? I'm pretty good at\n"
	.string "this, don't you think?$"

VisCen_Olive_PostBattle_Text_0:
# 727 "data/maps/VisitorCenter/scripts.pory"
	.string "OLIVE: Thank you for the battle. I can\n"
	.string "tell our Pokémon had fun!$"

VisCen_Rivals_PostBattle_Text_0:
# 736 "data/maps/VisitorCenter/scripts.pory"
	.string "???: You kids done?\p"
	.string "Su{PAUSE 8}per{PAUSE 8} fun,{PAUSE 8} right?\n"
	.string "Anyway, already told your other friend,\l"
	.string "but take these.$"

VisCen_Rivals_PostBattle_Text_1:
# 765 "data/maps/VisitorCenter/scripts.pory"
	.string "Don't lose it, alright?$"

VisCen_Prof_PostBattle_Text_0:
# 774 "data/maps/VisitorCenter/scripts.pory"
	.string "???: Alright, alright. Got that out of\n"
	.string "your system?\p"
	.string "Wasn't really in the script, but\n"
	.string "whatever gets you motivated.$"

VisCen_Prof_PostBattle_Text_1:
# 779 "data/maps/VisitorCenter/scripts.pory"
	.string "???: …Er. You alright, kid?\p"
	.string "You gotta watch it, or your little guy's\n"
	.string "gonna hurt…\l"
	.string "{FONT_SMALL}You only get one, alright?$"

VisCen_Prof_PostBattle_Text_2:
# 789 "data/maps/VisitorCenter/scripts.pory"
	.string "Here, go ahead and take this. Don't lose\n"
	.string "it, understand?$"

VisCen_Closing_Event_Text_0:
# 813 "data/maps/VisitorCenter/scripts.pory"
	.string "???: It's a device that automatically\n"
	.string "stores data about Pokémon!$"

VisCen_Closing_Event_Text_1:
# 818 "data/maps/VisitorCenter/scripts.pory"
	.string "That's right, it's the latest and\n"
	.string "greatest in Pokémon Trainer\l"
	.string "Technology!\p"
	.string "Well yeah, okay, maybe you've seen it\n"
	.string "before. Everyone's got one these days.\p"
	.string "But I won't be hearing anything about\n"
	.string "those Pokétch apps or whatever!\l"
	.string "This is complex technology, you know?$"

VisCen_Closing_Event_Text_2:
# 824 "data/maps/VisitorCenter/scripts.pory"
	.string "Now, just seeing Pokémon is fine, but\n"
	.string "you'll learn more by catching 'em.\p"
	.string "The tour guides here probably have\n"
	.string "Pokéballs for you…$"

VisCen_Closing_Event_Text_3:
# 828 "data/maps/VisitorCenter/scripts.pory"
	.string "Hm? Why can't I give you some?\l"
	.string "You're wringin' me dry here…$"

VisCen_Closing_Event_Text_4:
# 836 "data/maps/VisitorCenter/scripts.pory"
	.string "{COLOR GREEN}The tour will begin shortly.\p"
	.string "Please meet with your designated tour\n"
	.string "guide outside the center.$"

VisCen_Closing_Event_Text_5:
# 842 "data/maps/VisitorCenter/scripts.pory"
	.string "???: Whoops, that's my cue.\p"
	.string "Remember you three, if anyone asks\n"
	.string "where you got these?\p"
	.string "Let them know {COLOR BLUE}Professor Sequoia{COLOR DARK_GRAY}\n"
	.string "hooked you up, alright?\l"
	.string "I'll be seeing you around!$"

VisCen_AreaSign_Text_0:
# 862 "data/maps/VisitorCenter/scripts.pory"
	.string "SEKIEN VISITOR CENTER\n"
	.string "Welcome to our wonderful region!$"

VisCen_ExitSign_Text_0:
# 869 "data/maps/VisitorCenter/scripts.pory"
	.string "ROUTE 1\n"
	.string "Nature Trail ahead$"

VisCen_FenceSign_Text_0:
# 876 "data/maps/VisitorCenter/scripts.pory"
	.string "Please do not touch the plants.$"

VisCen_MisplacedBush_Text_0:
# 882 "data/maps/VisitorCenter/scripts.pory"
	.string "It looks like it was recently uprooted.$"

VisCen_Professor_Text_0:
# 894 "data/maps/VisitorCenter/scripts.pory"
	.string "???: What's the matter, big winner?\n"
	.string "Tough decision?\p"
	.string "…There's no strings attached, I\n"
	.string "promise!$"

VisCen_Professor_Text_1:
# 902 "data/maps/VisitorCenter/scripts.pory"
	.string "???: Hmm? What, you want to battle me\n"
	.string "or something?$"

VisCen_Professor_Text_2:
# 909 "data/maps/VisitorCenter/scripts.pory"
	.string "Did neither of them want to? Really…?\n"
	.string "{FONT_SMALL}Ugh…{FONT_NORMAL}\p"
	.string "Fine, fine. If I've gotta break the ice\n"
	.string "for you, it's better than nothing.$"

VisCen_Professor_Text_3:
# 917 "data/maps/VisitorCenter/scripts.pory"
	.string "Hey, you two come here for a sec.$"

VisCen_Professor_Text_4:
# 928 "data/maps/VisitorCenter/scripts.pory"
	.string "Come on… did you even try talking to\n"
	.string "the other two yet?\p"
	.string "Competing with others your age is much\n"
	.string "more mentally stimulating.\p"
	.string "Besides, I'm not really supposed to be\n"
	.string "involved in the{COLOR BLUE} stud-{COLOR DARK_GRAY}\l"
	.string "in your Pokémon Journey.$"

VisCen_Professor_Text_5:
# 937 "data/maps/VisitorCenter/scripts.pory"
	.string "I said no already, kid. Why don't you{COLOR RED} ask\n"
	.string "one of those two{COLOR DARK_GRAY} instead?$"

VisCen_Professor_Text_6:
# 944 "data/maps/VisitorCenter/scripts.pory"
	.string "Of course, don't be silly…\p"
	.string "You've got two eager {COLOR RED}rivals{COLOR DARK_GRAY} right there.\n"
	.string "Just ask them!$"

VisCen_Liam_Text_0:
# 963 "data/maps/VisitorCenter/scripts.pory"
	.string "BOY: He said I'm a winner, but it doesn't\n"
	.string "change my goals!\p"
	.string "I'll catch the strongest Pokémon out\n"
	.string "there!$"

VisCen_Liam_Text_1:
# 971 "data/maps/VisitorCenter/scripts.pory"
	.string "BOY: So, you're the one who won first\n"
	.string "place.\p"
	.string "Just don't take the good one!$"

VisCen_Liam_Text_2:
# 979 "data/maps/VisitorCenter/scripts.pory"
	.string "BOY: Picking me, huh? Well, I'm not about\n"
	.string "to miss my first shot!$"

VisCen_Liam_Text_3:
# 994 "data/maps/VisitorCenter/scripts.pory"
	.string "What, don't get scared! I'll go easy on\n"
	.string "you!$"

VisCen_Olive_Text_0:
# 1007 "data/maps/VisitorCenter/scripts.pory"
	.string "GIRL: Hmm… a free Pokémon, huh-?\l"
	.string "That's a lot of responsibility…$"

VisCen_Olive_Text_1:
# 1015 "data/maps/VisitorCenter/scripts.pory"
	.string "GIRL: Lucky you-!\p"
	.string "Did you hear? I get to have the last\n"
	.string "Pokémon!$"

VisCen_Olive_Text_2:
# 1024 "data/maps/VisitorCenter/scripts.pory"
	.string "GIRL: {STR_VAR_3} and I…? Well, why\n"
	.string "not!$"

VisCen_Olive_Text_3:
# 1039 "data/maps/VisitorCenter/scripts.pory"
	.string "GIRL: Oh…? Well, why not?$"

VisCen_Oyako_Text_0:
# 1056 "data/maps/VisitorCenter/scripts.pory"
	.string "GIRL: Mom, mom! I want a Pokémon too!$"

VisCen_Oyako_Text_1:
# 1058 "data/maps/VisitorCenter/scripts.pory"
	.string "MOTHER: Don't listen to the strange\n"
	.string "man, dear.$"

VisCen_Employee_Text_0:
# 1067 "data/maps/VisitorCenter/scripts.pory"
	.string "Hey, what's going on? Does this guy\n"
	.string "even work here?$"

VisCen_Employee_Text_1:
# 1072 "data/maps/VisitorCenter/scripts.pory"
	.string "Working here at the Visitor Center\n"
	.string "makes me want to take a trip, too.\p"
	.string "Maybe I'll go visit Hoenn?$"

VisCen_Riajuu_Text_0:
# 1086 "data/maps/VisitorCenter/scripts.pory"
	.string "GIRL: If he chooses you, honey, can I\n"
	.string "have your Pokémon instead…?$"

VisCen_Riajuu_Text_1:
# 1088 "data/maps/VisitorCenter/scripts.pory"
	.string "BOY: Huh?? I mean, o-of course you can,\n"
	.string "haha…$"

VisCen_Riajuu_Text_2:
# 1092 "data/maps/VisitorCenter/scripts.pory"
	.string "GIRL: Aww, neither of our tickets won…\p"
	.string "but you'll catch me a cute Pokémon\n"
	.string "anyway, right?$"

VisCen_Riajuu_Text_3:
# 1095 "data/maps/VisitorCenter/scripts.pory"
	.string "BOY: Of course, of course! {FONT_SMALL}Whew…$"

VisCen_Beauty_Text_0:
# 1103 "data/maps/VisitorCenter/scripts.pory"
	.string "LADY: This free Pokémon stuff sounds\n"
	.string "fishy if you ask me…\p"
	.string "Is he even a real Professor?$"

VisCen_LassGramps_Text_0:
# 1116 "data/maps/VisitorCenter/scripts.pory"
	.string "GIRL: Grandpa, did you hold onto your\n"
	.string "ticket?$"

VisCen_LassGramps_Text_1:
# 1118 "data/maps/VisitorCenter/scripts.pory"
	.string "GRAMPS: Hm?{PAUSE 16} What's that??{PAUSE 16}\n"
	.string "Speak up, kiddo!$"

VisCen_LassGramps_Text_2:
# 1120 "data/maps/VisitorCenter/scripts.pory"
	.string "GIRL: THE TICKET, GRANDPA.\n"
	.string "THE {COLOR BLUE}RAFFLE TICKET{COLOR DARK_GRAY} FOR A FREE POKéMON?$"

VisCen_LassGramps_Text_3:
# 1123 "data/maps/VisitorCenter/scripts.pory"
	.string "GRAMPS: Hah???$"

VisCen_LassGramps_Text_4:
# 1127 "data/maps/VisitorCenter/scripts.pory"
	.string "GIRL: Looks like we didn't win, huh\n"
	.string "gramps?$"

VisCen_LassGramps_Text_5:
# 1129 "data/maps/VisitorCenter/scripts.pory"
	.string "GRAMPS: Givin' away Pokémon for free…\n"
	.string "hah! In my day, you had to wrangle your\l"
	.string "Pokémon with your own two hands!!$"

VisCen_LassGramps_Text_6:
# 1132 "data/maps/VisitorCenter/scripts.pory"
	.string "GIRL: Is… that even remotely true?$"

VisCen_TechnologyMan_Text_0:
# 1139 "data/maps/VisitorCenter/scripts.pory"
	.string "Technology is incredible!\p"
	.string "You can even create your own world if\n"
	.string "you put your mind to it!$"

VisCen_Liam_Intro:
# 645 "data/maps/VisitorCenter/scripts.pory"
	.string "BOY: The name's {COLOR BLUE}Liam{COLOR DARK_GRAY}!\p"
	.string "Sorry, but you're gonna be our first\n"
	.string "step on the way to the top!$"

VisCen_Olive_Intro:
# 650 "data/maps/VisitorCenter/scripts.pory"
	.string "GIRL: By the way, I'm {COLOR BLUE}Olive{COLOR DARK_GRAY}!\p"
	.string "We'll be seeing each other a lot, so let's\n"
	.string "get along, alright?$"

VisCen_Liam_Loss:
# 656 "data/maps/VisitorCenter/scripts.pory"
	.string "Man… and I was sure this was the one…$"

VisCen_Olive_Loss:
# 660 "data/maps/VisitorCenter/scripts.pory"
	.string "Oh… tired already?$"

Prof_DexText::
# 853 "data/maps/VisitorCenter/scripts.pory"
	.string "{PLAYER} received the Pokédex from the\n"
	.string "Professor.$"

Liam_Pick_Txt::
# 1146 "data/maps/VisitorCenter/scripts.pory"
	.string "BOY: Then I'll take this one!$"

Liam_Receive_Txt::
# 1150 "data/maps/VisitorCenter/scripts.pory"
	.string "The Boy received {STR_VAR_2}\n"
	.string "from the Professor!$"

Olive_Pick_Txt::
# 1155 "data/maps/VisitorCenter/scripts.pory"
	.string "GIRL: So, this one is mine?$"

Olive_Receive_Txt::
# 1159 "data/maps/VisitorCenter/scripts.pory"
	.string "The Girl received {STR_VAR_3}\n"
	.string "from the Professor!$"
