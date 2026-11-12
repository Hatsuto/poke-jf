VisitorCenter_MapScripts::
# 81 "data/maps/VisitorCenter/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, VisCen_OnLoad
	.byte 0


VisCen_OnLoad::
# 87 "data/maps/VisitorCenter/scripts.pory"
	compare VAR_VISCEN_STATE, 3
	goto_if_eq VisCen_OnLoad_2
# 93 "data/maps/VisitorCenter/scripts.pory"
	compare VAR_VISCEN_STATE, 0xA0
	goto_if_lt VisCen_OnLoad_3
VisCen_OnLoad_1:
	end

VisCen_OnLoad_2:
# 89 "data/maps/VisitorCenter/scripts.pory"
	setobjectxyperm LOCALID_EMPLOYEE, 6, 10
# 90 "data/maps/VisitorCenter/scripts.pory"
	setobjectmovementtype LOCALID_EMPLOYEE, MOVEMENT_TYPE_FACE_UP
# 91 "data/maps/VisitorCenter/scripts.pory"
	setvar VAR_TEMP_F, 1
	goto VisCen_OnLoad_1

VisCen_OnLoad_3:
# 95 "data/maps/VisitorCenter/scripts.pory"
	setobjectxyperm LOCALID_EMPLOYEE, 7, 14
# 96 "data/maps/VisitorCenter/scripts.pory"
	setobjectmovementtype LOCALID_EMPLOYEE, MOVEMENT_TYPE_WANDER_AROUND
# 97 "data/maps/VisitorCenter/scripts.pory"
	setvar VAR_TEMP_F, 1
	goto VisCen_OnLoad_1


VisCen_ExitBlock::
# 109 "data/maps/VisitorCenter/scripts.pory"
	lock
# 110 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_ExitBlock_Text_0, MSGBOX_AUTOCLOSE
# 112 "data/maps/VisitorCenter/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
# 113 "data/maps/VisitorCenter/scripts.pory"
	waitmovement 0
# 114 "data/maps/VisitorCenter/scripts.pory"
	release
	end


VisCen_RaffleStart::
# 121 "data/maps/VisitorCenter/scripts.pory"
	lockall
# 122 "data/maps/VisitorCenter/scripts.pory"
	goto_if_unset FLAG_TEMP_1, VisCen_RaffleStart_2
# 158 "data/maps/VisitorCenter/scripts.pory"
	call Prof_Hop
# 160 "data/maps/VisitorCenter/scripts.pory"
	goto_if_unset FLAG_TEMP_5, VisCen_RaffleStart_9
# 191 "data/maps/VisitorCenter/scripts.pory"
	goto CrowdBlock_RivalEvent
VisCen_RaffleStart_1:
# 196 "data/maps/VisitorCenter/scripts.pory"
	goto CrowdBlock_StepIn
	return

VisCen_RaffleStart_2:
# 125 "data/maps/VisitorCenter/scripts.pory"
	call HeadsUp
# 126 "data/maps/VisitorCenter/scripts.pory"
	fadeoutbgm 1
# 128 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_RaffleStart_Text_0
# 131 "data/maps/VisitorCenter/scripts.pory"
	applymovement LOCALID_PROF, Common_Movement_WalkRight
# 132 "data/maps/VisitorCenter/scripts.pory"
	waitmovement 0
# 133 "data/maps/VisitorCenter/scripts.pory"
	playse SE_LEDGE
# 134 "data/maps/VisitorCenter/scripts.pory"
	applymovement LOCALID_PROF, Prof_WalkBehindBushes_1
# 135 "data/maps/VisitorCenter/scripts.pory"
	waitmovement 0
# 137 "data/maps/VisitorCenter/scripts.pory"
	playbgm MUS_GAME_CORNER, 1
# 138 "data/maps/VisitorCenter/scripts.pory"
	checkplayergender
# 139 "data/maps/VisitorCenter/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq VisCen_RaffleStart_6
# 148 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_RaffleStart_Text_2
VisCen_RaffleStart_5:
# 153 "data/maps/VisitorCenter/scripts.pory"
	applymovement LOCALID_PROF, Prof_WalkBehindBushes_2
# 154 "data/maps/VisitorCenter/scripts.pory"
	setflag FLAG_TEMP_1
	goto VisCen_RaffleStart_1

VisCen_RaffleStart_6:
# 141 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_RaffleStart_Text_1
	goto VisCen_RaffleStart_5

VisCen_RaffleStart_9:
# 162 "data/maps/VisitorCenter/scripts.pory"
	switch VAR_TEMP_3
# 164 "data/maps/VisitorCenter/scripts.pory"
	case 0, VisCen_RaffleStart_13
# 168 "data/maps/VisitorCenter/scripts.pory"
	case 1, VisCen_RaffleStart_14
# 173 "data/maps/VisitorCenter/scripts.pory"
	case 2, VisCen_RaffleStart_15
# 178 "data/maps/VisitorCenter/scripts.pory"
	case 3, VisCen_RaffleStart_16
# 184 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_RaffleStart_Text_7, MSGBOX_AUTOCLOSE
	goto VisCen_RaffleStart_1

VisCen_RaffleStart_13:
# 165 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_RaffleStart_Text_3, MSGBOX_AUTOCLOSE
# 167 "data/maps/VisitorCenter/scripts.pory"
	setvar VAR_TEMP_3, 1
	goto VisCen_RaffleStart_1

VisCen_RaffleStart_14:
# 169 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_RaffleStart_Text_4, MSGBOX_AUTOCLOSE
# 172 "data/maps/VisitorCenter/scripts.pory"
	setvar VAR_TEMP_3, 2
	goto VisCen_RaffleStart_1

VisCen_RaffleStart_15:
# 174 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_RaffleStart_Text_5, MSGBOX_AUTOCLOSE
# 177 "data/maps/VisitorCenter/scripts.pory"
	setvar VAR_TEMP_3, 3
	goto VisCen_RaffleStart_1

VisCen_RaffleStart_16:
# 179 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_RaffleStart_Text_6, MSGBOX_AUTOCLOSE
# 182 "data/maps/VisitorCenter/scripts.pory"
	setvar VAR_TEMP_3, 4
	goto VisCen_RaffleStart_1


HeadsUp:
# 201 "data/maps/VisitorCenter/scripts.pory"
	applymovement LOCALID_OYA, Common_Movement_FaceRight
# 202 "data/maps/VisitorCenter/scripts.pory"
	applymovement LOCALID_KO, Common_Movement_FaceRight
# 203 "data/maps/VisitorCenter/scripts.pory"
	setvar VAR_TEMP_2, 7
HeadsUp_3:
# 208 "data/maps/VisitorCenter/scripts.pory"
	applymovement VAR_TEMP_2, Common_Movement_FaceUp
# 209 "data/maps/VisitorCenter/scripts.pory"
	addvar VAR_TEMP_2, 1
# 210 "data/maps/VisitorCenter/scripts.pory"
	compare VAR_TEMP_2, 10
	goto_if_le HeadsUp_3
# 212 "data/maps/VisitorCenter/scripts.pory"
	applymovement LOCALID_GRAMPS, Common_Movement_FaceLeft
# 213 "data/maps/VisitorCenter/scripts.pory"
	applymovement LOCALID_LASS, Common_Movement_FaceLeft
# 214 "data/maps/VisitorCenter/scripts.pory"
	waitmovement 0
	return


CrowdBlock_RivalEvent:
# 220 "data/maps/VisitorCenter/scripts.pory"
	msgbox CrowdBlock_RivalEvent_Text_0, MSGBOX_AUTOCLOSE
# 222 "data/maps/VisitorCenter/scripts.pory"
	goto CrowdBlock_StepIn
	return


CrowdBlock_StepIn:
# 227 "data/maps/VisitorCenter/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 228 "data/maps/VisitorCenter/scripts.pory"
	waitmovement 0
# 229 "data/maps/VisitorCenter/scripts.pory"
	releaseall
	end


VisCen_CrowdBlock::
# 234 "data/maps/VisitorCenter/scripts.pory"
	lockall
# 235 "data/maps/VisitorCenter/scripts.pory"
	call Prof_Hop
# 236 "data/maps/VisitorCenter/scripts.pory"
	call CrowdBlock_RivalEvent
	return


VisCen_BallPick::
# 246 "data/maps/VisitorCenter/scripts.pory"
	lockall
# 247 "data/maps/VisitorCenter/scripts.pory"
	applymovement LOCALID_PROF, Common_Movement_FaceDown
# 248 "data/maps/VisitorCenter/scripts.pory"
	waitmovement 0
# 249 "data/maps/VisitorCenter/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 252 "data/maps/VisitorCenter/scripts.pory"
	switch VAR_TEMP_0
# 254 "data/maps/VisitorCenter/scripts.pory"
	case 8 - 1, VisCen_BallPick_3
# 255 "data/maps/VisitorCenter/scripts.pory"
	case 8, VisCen_BallPick_3
# 274 "data/maps/VisitorCenter/scripts.pory"
	case 8 + 1, VisCen_BallPick_4
# 292 "data/maps/VisitorCenter/scripts.pory"
	case 8 + 1 + 1 + 1, VisCen_BallPick_5
# 293 "data/maps/VisitorCenter/scripts.pory"
	case 8 + 1 + 1, VisCen_BallPick_5
VisCen_BallPick_1:
# 312 "data/maps/VisitorCenter/scripts.pory"
	hidemonpic
# 313 "data/maps/VisitorCenter/scripts.pory"
	closemessage
# 321 "data/maps/VisitorCenter/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq VisCen_BallPick_7
VisCen_BallPick_6:
# 543 "data/maps/VisitorCenter/scripts.pory"
	releaseall
	end

VisCen_BallPick_3:
# 256 "data/maps/VisitorCenter/scripts.pory"
	setvar VAR_TEMP_4, SPECIES_STARTER_GRS
# 257 "data/maps/VisitorCenter/scripts.pory"
	setvar VAR_STARTER_MON, 0
# 258 "data/maps/VisitorCenter/scripts.pory"
	setvar VAR_TEMP_5, SPECIES_STARTER_FIR
# 259 "data/maps/VisitorCenter/scripts.pory"
	setvar VAR_TEMP_6, SPECIES_STARTER_WTR
# 261 "data/maps/VisitorCenter/scripts.pory"
	setvar VAR_TEMP_0, 8
# 262 "data/maps/VisitorCenter/scripts.pory"
	setvar VAR_TEMP_7, 13
# 264 "data/maps/VisitorCenter/scripts.pory"
	showmonpic VAR_TEMP_4, 10, 3
# 265 "data/maps/VisitorCenter/scripts.pory"
	playmoncry VAR_TEMP_4, 0
# 266 "data/maps/VisitorCenter/scripts.pory"
	waitmoncry
# 268 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_BallPick_Text_0, MSGBOX_YESNO
	goto VisCen_BallPick_1

VisCen_BallPick_4:
# 275 "data/maps/VisitorCenter/scripts.pory"
	setvar VAR_TEMP_4, SPECIES_STARTER_FIR
# 276 "data/maps/VisitorCenter/scripts.pory"
	setvar VAR_STARTER_MON, 1
# 277 "data/maps/VisitorCenter/scripts.pory"
	setvar VAR_TEMP_5, SPECIES_STARTER_WTR
# 278 "data/maps/VisitorCenter/scripts.pory"
	setvar VAR_TEMP_6, SPECIES_STARTER_GRS
# 280 "data/maps/VisitorCenter/scripts.pory"
	setvar VAR_TEMP_7, 14
# 282 "data/maps/VisitorCenter/scripts.pory"
	showmonpic VAR_TEMP_4, 10, 3
# 283 "data/maps/VisitorCenter/scripts.pory"
	playmoncry VAR_TEMP_4, 0
# 284 "data/maps/VisitorCenter/scripts.pory"
	waitmoncry
# 286 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_BallPick_Text_1, MSGBOX_YESNO
	goto VisCen_BallPick_1

VisCen_BallPick_5:
# 294 "data/maps/VisitorCenter/scripts.pory"
	setvar VAR_TEMP_4, SPECIES_STARTER_WTR
# 295 "data/maps/VisitorCenter/scripts.pory"
	setvar VAR_STARTER_MON, 2
# 296 "data/maps/VisitorCenter/scripts.pory"
	setvar VAR_TEMP_5, SPECIES_STARTER_GRS
# 297 "data/maps/VisitorCenter/scripts.pory"
	setvar VAR_TEMP_6, SPECIES_STARTER_FIR
# 299 "data/maps/VisitorCenter/scripts.pory"
	setvar VAR_TEMP_7, 15
# 300 "data/maps/VisitorCenter/scripts.pory"
	setvar VAR_TEMP_0, 8 + 1 + 1
# 302 "data/maps/VisitorCenter/scripts.pory"
	showmonpic VAR_TEMP_4, 10, 3
# 303 "data/maps/VisitorCenter/scripts.pory"
	playmoncry VAR_TEMP_4, 0
# 304 "data/maps/VisitorCenter/scripts.pory"
	waitmoncry
# 306 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_BallPick_Text_2, MSGBOX_YESNO
	goto VisCen_BallPick_1

VisCen_BallPick_7:
# 323 "data/maps/VisitorCenter/scripts.pory"
	bufferspeciesname 0, VAR_TEMP_4
# 326 "data/maps/VisitorCenter/scripts.pory"
	switch VAR_TEMP_1
# 328 "data/maps/VisitorCenter/scripts.pory"
	case 7 - 1, VisCen_BallPick_11
# 339 "data/maps/VisitorCenter/scripts.pory"
	case 7, VisCen_BallPick_12
VisCen_BallPick_9:
# 352 "data/maps/VisitorCenter/scripts.pory"
	removeobject VAR_TEMP_7
# 353 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_BallPick_Text_3
# 354 "data/maps/VisitorCenter/scripts.pory"
	lockall
# 356 "data/maps/VisitorCenter/scripts.pory"
	givemon VAR_TEMP_4, 5, ITEM_NONE
# 357 "data/maps/VisitorCenter/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 358 "data/maps/VisitorCenter/scripts.pory"
	playfanfare MUS_EVOLVED
# 359 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_BallPick_Text_4
# 360 "data/maps/VisitorCenter/scripts.pory"
	waitfanfare
# 361 "data/maps/VisitorCenter/scripts.pory"
	closemessage
# 363 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_BallPick_Text_5, MSGBOX_YESNO
# 365 "data/maps/VisitorCenter/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq VisCen_BallPick_14
VisCen_BallPick_13:
# 370 "data/maps/VisitorCenter/scripts.pory"
	delay 32
# 372 "data/maps/VisitorCenter/scripts.pory"
	applymovement LOCALID_PROF, Common_Movement_WalkInPlaceDown
# 373 "data/maps/VisitorCenter/scripts.pory"
	waitmovement 0
# 374 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_BallPick_Text_6
# 376 "data/maps/VisitorCenter/scripts.pory"
	closemessage
# 379 "data/maps/VisitorCenter/scripts.pory"
	switch VAR_STARTER_MON
# 381 "data/maps/VisitorCenter/scripts.pory"
	case 0, VisCen_BallPick_26
# 384 "data/maps/VisitorCenter/scripts.pory"
	case 1, VisCen_BallPick_27
# 387 "data/maps/VisitorCenter/scripts.pory"
	case 2, VisCen_BallPick_28
VisCen_BallPick_24:
# 392 "data/maps/VisitorCenter/scripts.pory"
	bufferspeciesname 1, VAR_TEMP_5
# 393 "data/maps/VisitorCenter/scripts.pory"
	waitmovement 0
# 394 "data/maps/VisitorCenter/scripts.pory"
	removeobject VAR_TEMP_7
# 395 "data/maps/VisitorCenter/scripts.pory"
	msgbox Liam_Pick_Txt
# 396 "data/maps/VisitorCenter/scripts.pory"
	playfanfare MUS_RG_OBTAIN_KEY_ITEM
# 397 "data/maps/VisitorCenter/scripts.pory"
	msgbox Liam_Receive_Txt
# 398 "data/maps/VisitorCenter/scripts.pory"
	waitfanfare
# 399 "data/maps/VisitorCenter/scripts.pory"
	closemessage
# 402 "data/maps/VisitorCenter/scripts.pory"
	switch VAR_STARTER_MON
# 404 "data/maps/VisitorCenter/scripts.pory"
	case 0, VisCen_BallPick_31
# 407 "data/maps/VisitorCenter/scripts.pory"
	case 1, VisCen_BallPick_32
# 410 "data/maps/VisitorCenter/scripts.pory"
	case 2, VisCen_BallPick_33
VisCen_BallPick_29:
# 415 "data/maps/VisitorCenter/scripts.pory"
	bufferspeciesname 2, VAR_TEMP_6
# 416 "data/maps/VisitorCenter/scripts.pory"
	waitmovement 0
# 417 "data/maps/VisitorCenter/scripts.pory"
	removeobject VAR_TEMP_7
# 418 "data/maps/VisitorCenter/scripts.pory"
	msgbox Olive_Pick_Txt
# 419 "data/maps/VisitorCenter/scripts.pory"
	playfanfare MUS_RG_OBTAIN_KEY_ITEM
# 420 "data/maps/VisitorCenter/scripts.pory"
	msgbox Olive_Receive_Txt
# 421 "data/maps/VisitorCenter/scripts.pory"
	waitfanfare
# 422 "data/maps/VisitorCenter/scripts.pory"
	closemessage
# 424 "data/maps/VisitorCenter/scripts.pory"
	applymovement LOCALID_PROF, Common_Movement_WalkInPlaceDown
# 425 "data/maps/VisitorCenter/scripts.pory"
	waitmovement 0
# 426 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_BallPick_Text_7
# 428 "data/maps/VisitorCenter/scripts.pory"
	closemessage
# 430 "data/maps/VisitorCenter/scripts.pory"
	applymovement LOCALID_ALPHA, Common_Movement_WalkInPlaceDown
# 431 "data/maps/VisitorCenter/scripts.pory"
	waitmovement 0
# 432 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_BallPick_Text_8
# 433 "data/maps/VisitorCenter/scripts.pory"
	closemessage
# 435 "data/maps/VisitorCenter/scripts.pory"
	applymovement LOCALID_PROF, Common_Movement_WalkInPlaceDown
# 436 "data/maps/VisitorCenter/scripts.pory"
	waitmovement 0
# 437 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_BallPick_Text_9
# 439 "data/maps/VisitorCenter/scripts.pory"
	closemessage
# 441 "data/maps/VisitorCenter/scripts.pory"
	applymovement LOCALID_BETA, Common_Movement_WalkInPlaceDown
# 442 "data/maps/VisitorCenter/scripts.pory"
	waitmovement 0
# 443 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_BallPick_Text_10
# 444 "data/maps/VisitorCenter/scripts.pory"
	closemessage
# 446 "data/maps/VisitorCenter/scripts.pory"
	playse SE_LEDGE
# 447 "data/maps/VisitorCenter/scripts.pory"
	applymovement LOCALID_PROF, Common_Movement_HopDown
# 448 "data/maps/VisitorCenter/scripts.pory"
	waitmovement 0
# 449 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_BallPick_Text_11, MSGBOX_YESNO
# 453 "data/maps/VisitorCenter/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq VisCen_BallPick_34
# 466 "data/maps/VisitorCenter/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 467 "data/maps/VisitorCenter/scripts.pory"
	waitmovement 0
# 468 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_BallPick_Text_13
# 471 "data/maps/VisitorCenter/scripts.pory"
	random 2
# 473 "data/maps/VisitorCenter/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq VisCen_BallPick_38
# 505 "data/maps/VisitorCenter/scripts.pory"
	switch VAR_STARTER_MON
# 507 "data/maps/VisitorCenter/scripts.pory"
	case 0, VisCen_BallPick_47
# 513 "data/maps/VisitorCenter/scripts.pory"
	case 1, VisCen_BallPick_48
# 518 "data/maps/VisitorCenter/scripts.pory"
	case 2, VisCen_BallPick_49
VisCen_BallPick_45:
# 527 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_BallPick_Text_16
# 529 "data/maps/VisitorCenter/scripts.pory"
	closemessage
# 530 "data/maps/VisitorCenter/scripts.pory"
	applymovement LOCALID_PROF, Common_Movement_WalkInPlaceDown
# 531 "data/maps/VisitorCenter/scripts.pory"
	waitmovement 0
# 532 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_BallPick_Text_17
# 535 "data/maps/VisitorCenter/scripts.pory"
	setvar VAR_VISCEN_STATE, 0x20
# 536 "data/maps/VisitorCenter/scripts.pory"
	setvar VAR_TEMP_8, LOCALID_BETA
VisCen_BallPick_37:
# 539 "data/maps/VisitorCenter/scripts.pory"
	goto Battle_Transition
	goto VisCen_BallPick_6

VisCen_BallPick_11:
# 329 "data/maps/VisitorCenter/scripts.pory"
	compare VAR_TEMP_0, 8
	goto_if_eq VisCen_BallPick_16
# 334 "data/maps/VisitorCenter/scripts.pory"
	compare VAR_TEMP_0, 8 + 1 + 1
	goto_if_eq VisCen_BallPick_17
	goto VisCen_BallPick_9

VisCen_BallPick_12:
# 340 "data/maps/VisitorCenter/scripts.pory"
	compare VAR_TEMP_0, 8
	goto_if_eq VisCen_BallPick_20
# 345 "data/maps/VisitorCenter/scripts.pory"
	compare VAR_TEMP_0, 8 + 1 + 1
	goto_if_eq VisCen_BallPick_21
	goto VisCen_BallPick_9

VisCen_BallPick_14:
# 367 "data/maps/VisitorCenter/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto VisCen_BallPick_13

VisCen_BallPick_16:
# 331 "data/maps/VisitorCenter/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Player_Ball_TopLeft
# 332 "data/maps/VisitorCenter/scripts.pory"
	waitmovement 0
	goto VisCen_BallPick_9

VisCen_BallPick_17:
# 336 "data/maps/VisitorCenter/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Player_Ball_TopRight
# 337 "data/maps/VisitorCenter/scripts.pory"
	waitmovement 0
	goto VisCen_BallPick_9

VisCen_BallPick_20:
# 342 "data/maps/VisitorCenter/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Player_Ball_Left
# 343 "data/maps/VisitorCenter/scripts.pory"
	waitmovement 0
	goto VisCen_BallPick_9

VisCen_BallPick_21:
# 347 "data/maps/VisitorCenter/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Player_Ball_Right
# 348 "data/maps/VisitorCenter/scripts.pory"
	waitmovement 0
	goto VisCen_BallPick_9

VisCen_BallPick_26:
# 382 "data/maps/VisitorCenter/scripts.pory"
	applymovement LOCALID_ALPHA, Liam_Ball_M
# 383 "data/maps/VisitorCenter/scripts.pory"
	setvar VAR_TEMP_7, 14
	goto VisCen_BallPick_24

VisCen_BallPick_27:
# 385 "data/maps/VisitorCenter/scripts.pory"
	applymovement LOCALID_ALPHA, Liam_Ball_R
# 386 "data/maps/VisitorCenter/scripts.pory"
	setvar VAR_TEMP_7, 15
	goto VisCen_BallPick_24

VisCen_BallPick_28:
# 388 "data/maps/VisitorCenter/scripts.pory"
	applymovement LOCALID_ALPHA, Liam_Ball_L
# 389 "data/maps/VisitorCenter/scripts.pory"
	setvar VAR_TEMP_7, 13
	goto VisCen_BallPick_24

VisCen_BallPick_31:
# 405 "data/maps/VisitorCenter/scripts.pory"
	applymovement LOCALID_BETA, Olive_Ball_R
# 406 "data/maps/VisitorCenter/scripts.pory"
	setvar VAR_TEMP_7, 15
	goto VisCen_BallPick_29

VisCen_BallPick_32:
# 408 "data/maps/VisitorCenter/scripts.pory"
	applymovement LOCALID_BETA, Olive_Ball_L
# 409 "data/maps/VisitorCenter/scripts.pory"
	setvar VAR_TEMP_7, 13
	goto VisCen_BallPick_29

VisCen_BallPick_33:
# 411 "data/maps/VisitorCenter/scripts.pory"
	applymovement LOCALID_BETA, Olive_Ball_M
# 412 "data/maps/VisitorCenter/scripts.pory"
	setvar VAR_TEMP_7, 14
	goto VisCen_BallPick_29

VisCen_BallPick_34:
# 455 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_BallPick_Text_12
# 462 "data/maps/VisitorCenter/scripts.pory"
	setflag FLAG_TEMP_5
	goto VisCen_BallPick_6

VisCen_BallPick_38:
# 475 "data/maps/VisitorCenter/scripts.pory"
	switch VAR_STARTER_MON
# 477 "data/maps/VisitorCenter/scripts.pory"
	case 0, VisCen_BallPick_43
# 478 "data/maps/VisitorCenter/scripts.pory"
	case 1, VisCen_BallPick_43
# 483 "data/maps/VisitorCenter/scripts.pory"
	case 2, VisCen_BallPick_44
VisCen_BallPick_41:
# 492 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_BallPick_Text_14
# 494 "data/maps/VisitorCenter/scripts.pory"
	closemessage
# 495 "data/maps/VisitorCenter/scripts.pory"
	applymovement LOCALID_PROF, Common_Movement_WalkInPlaceDown
# 496 "data/maps/VisitorCenter/scripts.pory"
	waitmovement 0
# 497 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_BallPick_Text_15
# 500 "data/maps/VisitorCenter/scripts.pory"
	setvar VAR_VISCEN_STATE, 0x10
# 501 "data/maps/VisitorCenter/scripts.pory"
	setvar VAR_TEMP_8, LOCALID_ALPHA
	goto VisCen_BallPick_37

VisCen_BallPick_43:
# 479 "data/maps/VisitorCenter/scripts.pory"
	applymovement LOCALID_ALPHA, Common_Movement_WalkInPlaceLeft
# 480 "data/maps/VisitorCenter/scripts.pory"
	waitmovement LOCALID_ALPHA
# 481 "data/maps/VisitorCenter/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
	goto VisCen_BallPick_41

VisCen_BallPick_44:
# 484 "data/maps/VisitorCenter/scripts.pory"
	applymovement LOCALID_BETA, Olive_ChoiceA_P3
# 485 "data/maps/VisitorCenter/scripts.pory"
	applymovement LOCALID_ALPHA, Liam_ChoiceA_P3
# 486 "data/maps/VisitorCenter/scripts.pory"
	waitmovement LOCALID_ALPHA
# 487 "data/maps/VisitorCenter/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
	goto VisCen_BallPick_41

VisCen_BallPick_47:
# 508 "data/maps/VisitorCenter/scripts.pory"
	applymovement LOCALID_ALPHA, Liam_ChoiceB_P1
# 509 "data/maps/VisitorCenter/scripts.pory"
	applymovement LOCALID_BETA, Olive_ChoiceB_P1
# 510 "data/maps/VisitorCenter/scripts.pory"
	waitmovement LOCALID_BETA
# 511 "data/maps/VisitorCenter/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
	goto VisCen_BallPick_45

VisCen_BallPick_48:
# 514 "data/maps/VisitorCenter/scripts.pory"
	applymovement LOCALID_BETA, Common_Movement_WalkInPlaceRight
# 515 "data/maps/VisitorCenter/scripts.pory"
	waitmovement LOCALID_BETA
# 516 "data/maps/VisitorCenter/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
	goto VisCen_BallPick_45

VisCen_BallPick_49:
# 519 "data/maps/VisitorCenter/scripts.pory"
	applymovement LOCALID_ALPHA, Liam_ChoiceB_P3
# 520 "data/maps/VisitorCenter/scripts.pory"
	applymovement LOCALID_BETA, Olive_ChoiceB_P3
# 521 "data/maps/VisitorCenter/scripts.pory"
	waitmovement LOCALID_BETA
# 522 "data/maps/VisitorCenter/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
	goto VisCen_BallPick_45


Battle_Transition:
# 551 "data/maps/VisitorCenter/scripts.pory"
	fadescreen FADE_TO_BLACK
# 555 "data/maps/VisitorCenter/scripts.pory"
	lockall
# 558 "data/maps/VisitorCenter/scripts.pory"
	setobjectxy LOCALID_KO, 5, 7
# 559 "data/maps/VisitorCenter/scripts.pory"
	setobjectxy LOCALID_OYA, 5, 8
# 560 "data/maps/VisitorCenter/scripts.pory"
	setobjectxy LOCALID_KANOJO, 6, 10
# 561 "data/maps/VisitorCenter/scripts.pory"
	setobjectxy LOCALID_KARESHI, 7, 11
# 562 "data/maps/VisitorCenter/scripts.pory"
	setobjectxy LOCALID_LADY, 11, 11
# 563 "data/maps/VisitorCenter/scripts.pory"
	setobjectxy LOCALID_GRAMPS, 12, 10
# 564 "data/maps/VisitorCenter/scripts.pory"
	setobjectxy LOCALID_LASS, 13, 9
# 565 "data/maps/VisitorCenter/scripts.pory"
	applymovement LOCALID_LASS, Common_Movement_FaceRight
# 566 "data/maps/VisitorCenter/scripts.pory"
	applymovement LOCALID_GRAMPS, Common_Movement_FaceLeft
# 569 "data/maps/VisitorCenter/scripts.pory"
	setobjectxy LOCALID_ALPHA, 8, 6
# 570 "data/maps/VisitorCenter/scripts.pory"
	setobjectxy LOCALID_BETA, 8 + 1 + 1, 6
# 571 "data/maps/VisitorCenter/scripts.pory"
	setobjectxy LOCALID_PROF, 8 + 1, 6
# 575 "data/maps/VisitorCenter/scripts.pory"
	call VisCen_Player_Realign
# 576 "data/maps/VisitorCenter/scripts.pory"
	setobjectxy VAR_TEMP_8, 10, 9
# 579 "data/maps/VisitorCenter/scripts.pory"
	applymovement LOCALID_ALPHA, Common_Movement_FaceDown
# 580 "data/maps/VisitorCenter/scripts.pory"
	applymovement LOCALID_BETA, Common_Movement_FaceDown
# 581 "data/maps/VisitorCenter/scripts.pory"
	applymovement LOCALID_PROF, Common_Movement_FaceDown
# 582 "data/maps/VisitorCenter/scripts.pory"
	call HeadsUp
# 584 "data/maps/VisitorCenter/scripts.pory"
	applymovement VAR_TEMP_8, Common_Movement_FaceLeft
# 585 "data/maps/VisitorCenter/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 586 "data/maps/VisitorCenter/scripts.pory"
	waitmovement 0
# 589 "data/maps/VisitorCenter/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 592 "data/maps/VisitorCenter/scripts.pory"
	switch VAR_TEMP_8
# 594 "data/maps/VisitorCenter/scripts.pory"
	case LOCALID_ALPHA, Battle_Transition_2
# 607 "data/maps/VisitorCenter/scripts.pory"
	case LOCALID_BETA, Battle_Transition_3
# 621 "data/maps/VisitorCenter/scripts.pory"
	trainerbattle_no_whiteout TRAINER_SEQUOIA, Battle_Transition_Text_0, Battle_Transition_Text_1, Battle_Transition_Text_1, VisCen_Prof_PostBattle
	return

Battle_Transition_2:
# 595 "data/maps/VisitorCenter/scripts.pory"
	switch VAR_STARTER_MON
# 597 "data/maps/VisitorCenter/scripts.pory"
	case 0, Battle_Transition_6
# 600 "data/maps/VisitorCenter/scripts.pory"
	case 1, Battle_Transition_7
# 603 "data/maps/VisitorCenter/scripts.pory"
	case 2, Battle_Transition_8
	return

Battle_Transition_3:
# 608 "data/maps/VisitorCenter/scripts.pory"
	switch VAR_STARTER_MON
# 610 "data/maps/VisitorCenter/scripts.pory"
	case 0, Battle_Transition_10
# 613 "data/maps/VisitorCenter/scripts.pory"
	case 1, Battle_Transition_11
# 616 "data/maps/VisitorCenter/scripts.pory"
	case 2, Battle_Transition_12
	return

Battle_Transition_6:
# 598 "data/maps/VisitorCenter/scripts.pory"
	trainerbattle_no_whiteout TRAINER_ALPHA_VISCEN_FIR, VisCen_Liam_Intro, VisCen_Liam_Loss, VisCen_Liam_Loss, VisCen_Liam_PostBattle
	return

Battle_Transition_7:
# 601 "data/maps/VisitorCenter/scripts.pory"
	trainerbattle_no_whiteout TRAINER_ALPHA_VISCEN_WTR, VisCen_Liam_Intro, VisCen_Liam_Loss, VisCen_Liam_Loss, VisCen_Liam_PostBattle
	return

Battle_Transition_8:
# 604 "data/maps/VisitorCenter/scripts.pory"
	trainerbattle_no_whiteout TRAINER_ALPHA_VISCEN_GRS, VisCen_Liam_Intro, VisCen_Liam_Loss, VisCen_Liam_Loss, VisCen_Liam_PostBattle
	return

Battle_Transition_10:
# 611 "data/maps/VisitorCenter/scripts.pory"
	trainerbattle_no_whiteout TRAINER_BETA_VISCEN_WTR, VisCen_Olive_Intro, VisCen_Olive_Loss, VisCen_Olive_Loss, VisCen_Olive_PostBattle
	return

Battle_Transition_11:
# 614 "data/maps/VisitorCenter/scripts.pory"
	trainerbattle_no_whiteout TRAINER_BETA_VISCEN_GRS, VisCen_Olive_Intro, VisCen_Olive_Loss, VisCen_Olive_Loss, VisCen_Olive_PostBattle
	return

Battle_Transition_12:
# 617 "data/maps/VisitorCenter/scripts.pory"
	trainerbattle_no_whiteout TRAINER_BETA_VISCEN_FIR, VisCen_Olive_Intro, VisCen_Olive_Loss, VisCen_Olive_Loss, VisCen_Olive_PostBattle
	return


VisCen_Player_Realign:
# 650 "data/maps/VisitorCenter/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 651 "data/maps/VisitorCenter/scripts.pory"
	compare VAR_TEMP_0, 8
	goto_if_lt VisCen_Player_Realign_2
VisCen_Player_Realign_8:
# 661 "data/maps/VisitorCenter/scripts.pory"
	compare VAR_TEMP_0, 8
	goto_if_gt VisCen_Player_Realign_9
VisCen_Player_Realign_1:
# 669 "data/maps/VisitorCenter/scripts.pory"
	compare VAR_TEMP_1, 9
	goto_if_gt VisCen_Player_Realign_5
VisCen_Player_Realign_11:
# 679 "data/maps/VisitorCenter/scripts.pory"
	compare VAR_TEMP_1, 9
	goto_if_lt VisCen_Player_Realign_12
	return

VisCen_Player_Realign_2:
# 655 "data/maps/VisitorCenter/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRightFaster
# 656 "data/maps/VisitorCenter/scripts.pory"
	waitmovement 0
	goto VisCen_Player_Realign_1

VisCen_Player_Realign_5:
# 673 "data/maps/VisitorCenter/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUpFaster
# 674 "data/maps/VisitorCenter/scripts.pory"
	waitmovement 0
	return

VisCen_Player_Realign_9:
# 663 "data/maps/VisitorCenter/scripts.pory"
	subvar VAR_TEMP_0, 1
# 664 "data/maps/VisitorCenter/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeftFaster
# 665 "data/maps/VisitorCenter/scripts.pory"
	waitmovement 0
	goto VisCen_Player_Realign_8

VisCen_Player_Realign_12:
# 681 "data/maps/VisitorCenter/scripts.pory"
	addvar VAR_TEMP_1, 1
# 682 "data/maps/VisitorCenter/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDownFaster
# 683 "data/maps/VisitorCenter/scripts.pory"
	waitmovement 0
	goto VisCen_Player_Realign_11


VisCen_Liam_PostBattle:
# 690 "data/maps/VisitorCenter/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 691 "data/maps/VisitorCenter/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq VisCen_Liam_PostBattle_2
# 699 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_Liam_PostBattle_Text_1
VisCen_Liam_PostBattle_1:
# 701 "data/maps/VisitorCenter/scripts.pory"
	goto VisCen_Rivals_PostBattle
	return

VisCen_Liam_PostBattle_2:
# 693 "data/maps/VisitorCenter/scripts.pory"
	addvar VAR_VISCEN_STATE, 1
# 694 "data/maps/VisitorCenter/scripts.pory"
	call RivalLink_Add_Liam
# 695 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_Liam_PostBattle_Text_0
	goto VisCen_Liam_PostBattle_1


VisCen_Olive_PostBattle:
# 705 "data/maps/VisitorCenter/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 706 "data/maps/VisitorCenter/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq VisCen_Olive_PostBattle_2
VisCen_Olive_PostBattle_1:
# 710 "data/maps/VisitorCenter/scripts.pory"
	call RivalLink_Add_Olive
# 711 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_Olive_PostBattle_Text_0
# 712 "data/maps/VisitorCenter/scripts.pory"
	goto VisCen_Rivals_PostBattle
	return

VisCen_Olive_PostBattle_2:
# 708 "data/maps/VisitorCenter/scripts.pory"
	addvar VAR_VISCEN_STATE, 1
	goto VisCen_Olive_PostBattle_1


VisCen_Rivals_PostBattle:
# 716 "data/maps/VisitorCenter/scripts.pory"
	applymovement LOCALID_PROF, Common_Movement_WalkInPlaceDown
# 717 "data/maps/VisitorCenter/scripts.pory"
	waitmovement 0
# 718 "data/maps/VisitorCenter/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 719 "data/maps/VisitorCenter/scripts.pory"
	applymovement VAR_TEMP_8, Common_Movement_FaceUp
# 720 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_Rivals_PostBattle_Text_0
# 723 "data/maps/VisitorCenter/scripts.pory"
	closemessage
# 724 "data/maps/VisitorCenter/scripts.pory"
	compare VAR_TEMP_8, LOCALID_BETA
	goto_if_eq VisCen_Rivals_PostBattle_2
# 732 "data/maps/VisitorCenter/scripts.pory"
	applymovement LOCALID_PROF, Prof_Walk_1_2
VisCen_Rivals_PostBattle_1:
# 734 "data/maps/VisitorCenter/scripts.pory"
	waitmovement LOCALID_PROF
# 735 "data/maps/VisitorCenter/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 738 "data/maps/VisitorCenter/scripts.pory"
	applymovement LOCALID_PROF, Prof_Walk_2
# 739 "data/maps/VisitorCenter/scripts.pory"
	waitmovement LOCALID_PROF
# 740 "data/maps/VisitorCenter/scripts.pory"
	applymovement VAR_TEMP_8, Common_Movement_WalkInPlaceUp
# 743 "data/maps/VisitorCenter/scripts.pory"
	applymovement LOCALID_PROF, Prof_Walk_3
# 744 "data/maps/VisitorCenter/scripts.pory"
	waitmovement LOCALID_PROF
# 745 "data/maps/VisitorCenter/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 746 "data/maps/VisitorCenter/scripts.pory"
	waitmovement 0
# 747 "data/maps/VisitorCenter/scripts.pory"
	delay 16
# 749 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_Rivals_PostBattle_Text_1
# 750 "data/maps/VisitorCenter/scripts.pory"
	goto VisCen_Closing_Event
	return

VisCen_Rivals_PostBattle_2:
# 727 "data/maps/VisitorCenter/scripts.pory"
	applymovement LOCALID_PROF, Prof_Walk_1_1
	goto VisCen_Rivals_PostBattle_1


VisCen_Prof_PostBattle:
# 754 "data/maps/VisitorCenter/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 755 "data/maps/VisitorCenter/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq VisCen_Prof_PostBattle_2
# 763 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_Prof_PostBattle_Text_1
VisCen_Prof_PostBattle_1:
# 767 "data/maps/VisitorCenter/scripts.pory"
	closemessage
# 768 "data/maps/VisitorCenter/scripts.pory"
	applymovement LOCALID_PROF, Common_Movement_WalkLeft
# 769 "data/maps/VisitorCenter/scripts.pory"
	waitmovement 0
# 770 "data/maps/VisitorCenter/scripts.pory"
	delay 16
# 772 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_Prof_PostBattle_Text_2
# 774 "data/maps/VisitorCenter/scripts.pory"
	goto VisCen_Closing_Event
	return

VisCen_Prof_PostBattle_2:
# 757 "data/maps/VisitorCenter/scripts.pory"
	addvar VAR_VISCEN_STATE, 1
# 758 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_Prof_PostBattle_Text_0
	goto VisCen_Prof_PostBattle_1


VisCen_Closing_Event:
# 779 "data/maps/VisitorCenter/scripts.pory"
	special HealPlayerParty
# 781 "data/maps/VisitorCenter/scripts.pory"
	playfanfare MUS_OBTAIN_TMHM
# 782 "data/maps/VisitorCenter/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 783 "data/maps/VisitorCenter/scripts.pory"
	msgbox Prof_DexText
# 784 "data/maps/VisitorCenter/scripts.pory"
	waitfanfare
# 787 "data/maps/VisitorCenter/scripts.pory"
	compare VAR_TEMP_8, LOCALID_PROF
	goto_if_ne VisCen_Closing_Event_2
# 793 "data/maps/VisitorCenter/scripts.pory"
	applymovement LOCALID_PROF, Prof_Center_2
VisCen_Closing_Event_1:
# 795 "data/maps/VisitorCenter/scripts.pory"
	waitmovement 0
# 796 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_Closing_Event_Text_0
# 797 "data/maps/VisitorCenter/scripts.pory"
	closemessage
# 798 "data/maps/VisitorCenter/scripts.pory"
	applymovement LOCALID_PROF, Common_Movement_WalkDown
# 799 "data/maps/VisitorCenter/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 800 "data/maps/VisitorCenter/scripts.pory"
	waitmovement 0
# 801 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_Closing_Event_Text_1
# 805 "data/maps/VisitorCenter/scripts.pory"
	applymovement LOCALID_PROF, Common_Movement_WalkInPlaceUp
# 806 "data/maps/VisitorCenter/scripts.pory"
	waitmovement 0
# 807 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_Closing_Event_Text_2
# 809 "data/maps/VisitorCenter/scripts.pory"
	applymovement LOCALID_PROF, Common_Movement_WalkInPlaceLeft
# 810 "data/maps/VisitorCenter/scripts.pory"
	waitmovement 0
# 811 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_Closing_Event_Text_3
# 812 "data/maps/VisitorCenter/scripts.pory"
	closemessage
# 815 "data/maps/VisitorCenter/scripts.pory"
	playse SE_DING_DONG
# 816 "data/maps/VisitorCenter/scripts.pory"
	waitse
# 817 "data/maps/VisitorCenter/scripts.pory"
	delay 32
# 819 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_Closing_Event_Text_4
# 821 "data/maps/VisitorCenter/scripts.pory"
	closemessage
# 823 "data/maps/VisitorCenter/scripts.pory"
	call Prof_Hop
# 825 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_Closing_Event_Text_5
# 830 "data/maps/VisitorCenter/scripts.pory"
	warp MAP_VISITOR_CENTER, 0xFF, 8, 8
# 832 "data/maps/VisitorCenter/scripts.pory"
	releaseall
	end

VisCen_Closing_Event_2:
# 789 "data/maps/VisitorCenter/scripts.pory"
	applymovement LOCALID_PROF, Prof_Center_1
	goto VisCen_Closing_Event_1


VisCen_AreaSign::
# 845 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_AreaSign_Text_0, MSGBOX_SIGN
	end


VisCen_ExitSign::
# 852 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_ExitSign_Text_0, MSGBOX_SIGN
	end


VisCen_FenceSign::
# 859 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_FenceSign_Text_0, MSGBOX_SIGN
	end


VisCen_MisplacedBush::
# 865 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_MisplacedBush_Text_0, MSGBOX_NPC
	end


VisCen_Professor::
# 875 "data/maps/VisitorCenter/scripts.pory"
	goto_if_unset FLAG_TEMP_5, VisCen_Professor_2
# 883 "data/maps/VisitorCenter/scripts.pory"
	lock
# 884 "data/maps/VisitorCenter/scripts.pory"
	faceplayer
# 885 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_Professor_Text_1, MSGBOX_YESNO
# 888 "data/maps/VisitorCenter/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq VisCen_Professor_5
# 927 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_Professor_Text_6, MSGBOX_AUTOCLOSE
VisCen_Professor_1:
	end

VisCen_Professor_2:
# 877 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_Professor_Text_0, MSGBOX_NPC
	goto VisCen_Professor_1

VisCen_Professor_5:
# 890 "data/maps/VisitorCenter/scripts.pory"
	goto_if_set FLAG_TEMP_2, VisCen_Professor_12
VisCen_Professor_11:
# 909 "data/maps/VisitorCenter/scripts.pory"
	goto_if_unset FLAG_TEMP_4, VisCen_Professor_9
# 920 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_Professor_Text_5, MSGBOX_AUTOCLOSE
	goto VisCen_Professor_1

VisCen_Professor_8:
# 892 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_Professor_Text_2
# 895 "data/maps/VisitorCenter/scripts.pory"
	closemessage
# 896 "data/maps/VisitorCenter/scripts.pory"
	applymovement LOCALID_PROF, Common_Movement_WalkInPlaceDown
# 897 "data/maps/VisitorCenter/scripts.pory"
	waitmovement 0
# 898 "data/maps/VisitorCenter/scripts.pory"
	applymovement LOCALID_ALPHA, Common_Movement_FaceUp
# 899 "data/maps/VisitorCenter/scripts.pory"
	applymovement LOCALID_BETA, Common_Movement_FaceUp
# 900 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_Professor_Text_3, MSGBOX_AUTOCLOSE
# 904 "data/maps/VisitorCenter/scripts.pory"
	setvar VAR_TEMP_8, LOCALID_PROF
# 905 "data/maps/VisitorCenter/scripts.pory"
	setvar VAR_VISCEN_STATE, 0x30
# 907 "data/maps/VisitorCenter/scripts.pory"
	goto Battle_Transition
	goto VisCen_Professor_1

VisCen_Professor_9:
# 911 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_Professor_Text_4, MSGBOX_AUTOCLOSE
# 916 "data/maps/VisitorCenter/scripts.pory"
	setflag FLAG_TEMP_4
	goto VisCen_Professor_1

VisCen_Professor_12:
# 890 "data/maps/VisitorCenter/scripts.pory"
	goto_if_set FLAG_TEMP_3, VisCen_Professor_8
	goto VisCen_Professor_11


Prof_Hop:
# 936 "data/maps/VisitorCenter/scripts.pory"
	playse SE_LEDGE
# 937 "data/maps/VisitorCenter/scripts.pory"
	applymovement LOCALID_PROF, Common_Movement_HopDown
# 938 "data/maps/VisitorCenter/scripts.pory"
	waitmovement LOCALID_PROF
	return


VisCen_Liam::
# 944 "data/maps/VisitorCenter/scripts.pory"
	goto_if_unset FLAG_TEMP_1, VisCen_Liam_2
# 952 "data/maps/VisitorCenter/scripts.pory"
	goto_if_unset FLAG_TEMP_5, VisCen_Liam_3
# 960 "data/maps/VisitorCenter/scripts.pory"
	lock
# 961 "data/maps/VisitorCenter/scripts.pory"
	faceplayer
# 962 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_Liam_Text_2, MSGBOX_YESNO
# 965 "data/maps/VisitorCenter/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq VisCen_Liam_8
# 976 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_Liam_Text_3
# 977 "data/maps/VisitorCenter/scripts.pory"
	setflag FLAG_TEMP_2
VisCen_Liam_7:
# 979 "data/maps/VisitorCenter/scripts.pory"
	release
VisCen_Liam_1:
	end

VisCen_Liam_2:
# 946 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_Liam_Text_0, MSGBOX_NPC
# 949 "data/maps/VisitorCenter/scripts.pory"
	applymovement LOCALID_ALPHA, Common_Movement_FaceUp
# 950 "data/maps/VisitorCenter/scripts.pory"
	waitmovement 0
	goto VisCen_Liam_1

VisCen_Liam_3:
# 954 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_Liam_Text_1, MSGBOX_NPC
	goto VisCen_Liam_1

VisCen_Liam_8:
# 968 "data/maps/VisitorCenter/scripts.pory"
	setvar VAR_VISCEN_STATE, 0x10
# 969 "data/maps/VisitorCenter/scripts.pory"
	setvar VAR_TEMP_8, LOCALID_ALPHA
# 970 "data/maps/VisitorCenter/scripts.pory"
	call RivalLink_Add_Liam
# 972 "data/maps/VisitorCenter/scripts.pory"
	goto Battle_Transition
	goto VisCen_Liam_7


VisCen_Olive::
# 987 "data/maps/VisitorCenter/scripts.pory"
	goto_if_unset FLAG_TEMP_1, VisCen_Olive_2
# 995 "data/maps/VisitorCenter/scripts.pory"
	goto_if_unset FLAG_TEMP_5, VisCen_Olive_3
# 1003 "data/maps/VisitorCenter/scripts.pory"
	lock
# 1004 "data/maps/VisitorCenter/scripts.pory"
	faceplayer
# 1005 "data/maps/VisitorCenter/scripts.pory"
	bufferspeciesname 2, VAR_TEMP_6
# 1006 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_Olive_Text_2, MSGBOX_YESNO
# 1009 "data/maps/VisitorCenter/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq VisCen_Olive_8
# 1020 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_Olive_Text_3
# 1021 "data/maps/VisitorCenter/scripts.pory"
	setflag FLAG_TEMP_3
VisCen_Olive_7:
# 1023 "data/maps/VisitorCenter/scripts.pory"
	release
VisCen_Olive_1:
	end

VisCen_Olive_2:
# 989 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_Olive_Text_0, MSGBOX_NPC
# 992 "data/maps/VisitorCenter/scripts.pory"
	applymovement LOCALID_BETA, Common_Movement_FaceUp
# 993 "data/maps/VisitorCenter/scripts.pory"
	waitmovement 0
	goto VisCen_Olive_1

VisCen_Olive_3:
# 997 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_Olive_Text_1, MSGBOX_NPC
	goto VisCen_Olive_1

VisCen_Olive_8:
# 1012 "data/maps/VisitorCenter/scripts.pory"
	setvar VAR_VISCEN_STATE, 0x20
# 1013 "data/maps/VisitorCenter/scripts.pory"
	setvar VAR_TEMP_8, LOCALID_BETA
# 1014 "data/maps/VisitorCenter/scripts.pory"
	call RivalLink_Add_Olive
# 1016 "data/maps/VisitorCenter/scripts.pory"
	goto Battle_Transition
	goto VisCen_Olive_7


VisCen_Oyako::
# 1031 "data/maps/VisitorCenter/scripts.pory"
	lockall
# 1034 "data/maps/VisitorCenter/scripts.pory"
	applymovement LOCALID_OYA, Common_Movement_FaceUp
# 1035 "data/maps/VisitorCenter/scripts.pory"
	applymovement LOCALID_KO, Common_Movement_WalkInPlaceDown
# 1036 "data/maps/VisitorCenter/scripts.pory"
	waitmovement 0
# 1037 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_Oyako_Text_0
# 1038 "data/maps/VisitorCenter/scripts.pory"
	applymovement LOCALID_OYA, Common_Movement_WalkInPlaceUp
# 1039 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_Oyako_Text_1
# 1041 "data/maps/VisitorCenter/scripts.pory"
	releaseall
	end


VisCen_Employee::
# 1046 "data/maps/VisitorCenter/scripts.pory"
	goto_if_unset FLAG_SYS_POKEDEX_GET, VisCen_Employee_2
# 1053 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_Employee_Text_1, MSGBOX_NPC
VisCen_Employee_1:
	end

VisCen_Employee_2:
# 1048 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_Employee_Text_0, MSGBOX_NPC
	goto VisCen_Employee_1


VisCen_Riajuu::
# 1061 "data/maps/VisitorCenter/scripts.pory"
	lockall
# 1062 "data/maps/VisitorCenter/scripts.pory"
	applymovement LOCALID_KARESHI, Common_Movement_FaceLeft
# 1063 "data/maps/VisitorCenter/scripts.pory"
	applymovement LOCALID_KANOJO, Common_Movement_WalkInPlaceRight
# 1064 "data/maps/VisitorCenter/scripts.pory"
	waitmovement 0
# 1065 "data/maps/VisitorCenter/scripts.pory"
	goto_if_unset FLAG_TEMP_1, VisCen_Riajuu_2
# 1073 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_Riajuu_Text_2
# 1075 "data/maps/VisitorCenter/scripts.pory"
	applymovement LOCALID_KARESHI, Common_Movement_WalkInPlaceLeft
# 1076 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_Riajuu_Text_3
VisCen_Riajuu_1:
# 1078 "data/maps/VisitorCenter/scripts.pory"
	releaseall
	end

VisCen_Riajuu_2:
# 1067 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_Riajuu_Text_0
# 1068 "data/maps/VisitorCenter/scripts.pory"
	applymovement LOCALID_KARESHI, Common_Movement_WalkInPlaceLeft
# 1069 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_Riajuu_Text_1
	goto VisCen_Riajuu_1


VisCen_Beauty::
# 1084 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_Beauty_Text_0, MSGBOX_NPC
	end


VisCen_LassGramps::
# 1091 "data/maps/VisitorCenter/scripts.pory"
	lockall
# 1092 "data/maps/VisitorCenter/scripts.pory"
	applymovement LOCALID_GRAMPS, Common_Movement_FaceUp
# 1093 "data/maps/VisitorCenter/scripts.pory"
	applymovement LOCALID_LASS, Common_Movement_WalkInPlaceDown
# 1094 "data/maps/VisitorCenter/scripts.pory"
	waitmovement 0
# 1095 "data/maps/VisitorCenter/scripts.pory"
	goto_if_unset FLAG_TEMP_1, VisCen_LassGramps_2
# 1108 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_LassGramps_Text_4
# 1109 "data/maps/VisitorCenter/scripts.pory"
	applymovement LOCALID_GRAMPS, Common_Movement_WalkInPlaceUp
# 1110 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_LassGramps_Text_5
# 1112 "data/maps/VisitorCenter/scripts.pory"
	applymovement LOCALID_LASS, Common_Movement_WalkInPlaceDown
# 1113 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_LassGramps_Text_6
VisCen_LassGramps_1:
# 1115 "data/maps/VisitorCenter/scripts.pory"
	releaseall
	end

VisCen_LassGramps_2:
# 1097 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_LassGramps_Text_0
# 1098 "data/maps/VisitorCenter/scripts.pory"
	applymovement LOCALID_GRAMPS, Common_Movement_WalkInPlaceUp
# 1099 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_LassGramps_Text_1
# 1100 "data/maps/VisitorCenter/scripts.pory"
	applymovement LOCALID_LASS, Common_Movement_WalkInPlaceDown
# 1101 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_LassGramps_Text_2
# 1103 "data/maps/VisitorCenter/scripts.pory"
	applymovement LOCALID_GRAMPS, Common_Movement_WalkInPlaceUp
# 1104 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_LassGramps_Text_3
	goto VisCen_LassGramps_1


VisCen_TechnologyMan::
# 1120 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_TechnologyMan_Text_0, MSGBOX_NPC
	end


# 1147 "data/maps/VisitorCenter/scripts.pory"
Prof_WalkBehindBushes_1:
# 1149 "data/maps/VisitorCenter/scripts.pory"
	jump_in_place_down
# 1150 "data/maps/VisitorCenter/scripts.pory"
	delay_8
	step_end

# 1152 "data/maps/VisitorCenter/scripts.pory"
Prof_WalkBehindBushes_2:
# 1154 "data/maps/VisitorCenter/scripts.pory"
	walk_fast_left
# 1155 "data/maps/VisitorCenter/scripts.pory"
	walk_in_place_faster_down
	step_end

# 1158 "data/maps/VisitorCenter/scripts.pory"
Player_Ball_TopLeft:
# 1160 "data/maps/VisitorCenter/scripts.pory"
	walk_left
# 1161 "data/maps/VisitorCenter/scripts.pory"
	walk_down
# 1161 "data/maps/VisitorCenter/scripts.pory"
	walk_down
# 1162 "data/maps/VisitorCenter/scripts.pory"
	walk_right
# 1163 "data/maps/VisitorCenter/scripts.pory"
	face_up
	step_end

# 1165 "data/maps/VisitorCenter/scripts.pory"
Player_Ball_Left:
# 1167 "data/maps/VisitorCenter/scripts.pory"
	walk_down
# 1168 "data/maps/VisitorCenter/scripts.pory"
	walk_right
# 1169 "data/maps/VisitorCenter/scripts.pory"
	face_up
	step_end

# 1171 "data/maps/VisitorCenter/scripts.pory"
Player_Ball_TopRight:
# 1173 "data/maps/VisitorCenter/scripts.pory"
	walk_right
# 1174 "data/maps/VisitorCenter/scripts.pory"
	walk_down
# 1174 "data/maps/VisitorCenter/scripts.pory"
	walk_down
# 1175 "data/maps/VisitorCenter/scripts.pory"
	walk_left
# 1176 "data/maps/VisitorCenter/scripts.pory"
	face_up
	step_end

# 1178 "data/maps/VisitorCenter/scripts.pory"
Player_Ball_Right:
# 1180 "data/maps/VisitorCenter/scripts.pory"
	walk_down
# 1181 "data/maps/VisitorCenter/scripts.pory"
	walk_left
# 1182 "data/maps/VisitorCenter/scripts.pory"
	face_up
	step_end

# 1186 "data/maps/VisitorCenter/scripts.pory"
Liam_Ball_L:
# 1188 "data/maps/VisitorCenter/scripts.pory"
	walk_fast_up
# 1188 "data/maps/VisitorCenter/scripts.pory"
	walk_fast_up
# 1189 "data/maps/VisitorCenter/scripts.pory"
	walk_fast_right
# 1190 "data/maps/VisitorCenter/scripts.pory"
	walk_in_place_faster_up
	step_end

# 1192 "data/maps/VisitorCenter/scripts.pory"
Liam_Ball_M:
# 1194 "data/maps/VisitorCenter/scripts.pory"
	walk_fast_up
# 1195 "data/maps/VisitorCenter/scripts.pory"
	walk_fast_right
# 1195 "data/maps/VisitorCenter/scripts.pory"
	walk_fast_right
# 1196 "data/maps/VisitorCenter/scripts.pory"
	walk_fast_up
	step_end

# 1198 "data/maps/VisitorCenter/scripts.pory"
Liam_Ball_R:
# 1200 "data/maps/VisitorCenter/scripts.pory"
	walk_fast_up
# 1201 "data/maps/VisitorCenter/scripts.pory"
	walk_fast_right
# 1201 "data/maps/VisitorCenter/scripts.pory"
	walk_fast_right
# 1201 "data/maps/VisitorCenter/scripts.pory"
	walk_fast_right
# 1202 "data/maps/VisitorCenter/scripts.pory"
	walk_fast_up
	step_end

# 1205 "data/maps/VisitorCenter/scripts.pory"
Olive_Ball_L:
# 1207 "data/maps/VisitorCenter/scripts.pory"
	walk_up
# 1208 "data/maps/VisitorCenter/scripts.pory"
	walk_in_place_left
# 1209 "data/maps/VisitorCenter/scripts.pory"
	walk_left
# 1209 "data/maps/VisitorCenter/scripts.pory"
	walk_left
# 1209 "data/maps/VisitorCenter/scripts.pory"
	walk_left
# 1210 "data/maps/VisitorCenter/scripts.pory"
	walk_up
	step_end

# 1212 "data/maps/VisitorCenter/scripts.pory"
Olive_Ball_M:
# 1214 "data/maps/VisitorCenter/scripts.pory"
	walk_up
# 1215 "data/maps/VisitorCenter/scripts.pory"
	walk_in_place_left
# 1216 "data/maps/VisitorCenter/scripts.pory"
	walk_left
# 1216 "data/maps/VisitorCenter/scripts.pory"
	walk_left
# 1217 "data/maps/VisitorCenter/scripts.pory"
	walk_up
	step_end

# 1219 "data/maps/VisitorCenter/scripts.pory"
Olive_Ball_R:
# 1221 "data/maps/VisitorCenter/scripts.pory"
	walk_up
# 1221 "data/maps/VisitorCenter/scripts.pory"
	walk_up
# 1222 "data/maps/VisitorCenter/scripts.pory"
	walk_in_place_left
# 1223 "data/maps/VisitorCenter/scripts.pory"
	walk_left
# 1224 "data/maps/VisitorCenter/scripts.pory"
	walk_in_place_faster_up
	step_end

# 1248 "data/maps/VisitorCenter/scripts.pory"
Liam_ChoiceA_P3:
# 1250 "data/maps/VisitorCenter/scripts.pory"
	walk_in_place_right
# 1251 "data/maps/VisitorCenter/scripts.pory"
	delay_8
# 1251 "data/maps/VisitorCenter/scripts.pory"
	delay_8
# 1251 "data/maps/VisitorCenter/scripts.pory"
	delay_8
# 1251 "data/maps/VisitorCenter/scripts.pory"
	delay_8
# 1251 "data/maps/VisitorCenter/scripts.pory"
	delay_8
# 1251 "data/maps/VisitorCenter/scripts.pory"
	delay_8
# 1251 "data/maps/VisitorCenter/scripts.pory"
	delay_8
# 1251 "data/maps/VisitorCenter/scripts.pory"
	delay_8
# 1252 "data/maps/VisitorCenter/scripts.pory"
	walk_right
# 1253 "data/maps/VisitorCenter/scripts.pory"
	delay_8
	step_end

# 1255 "data/maps/VisitorCenter/scripts.pory"
Olive_ChoiceA_P3:
# 1257 "data/maps/VisitorCenter/scripts.pory"
	delay_8
# 1257 "data/maps/VisitorCenter/scripts.pory"
	delay_8
# 1258 "data/maps/VisitorCenter/scripts.pory"
	face_left
# 1259 "data/maps/VisitorCenter/scripts.pory"
	delay_8
# 1259 "data/maps/VisitorCenter/scripts.pory"
	delay_8
# 1259 "data/maps/VisitorCenter/scripts.pory"
	delay_8
# 1259 "data/maps/VisitorCenter/scripts.pory"
	delay_8
# 1260 "data/maps/VisitorCenter/scripts.pory"
	walk_down
# 1261 "data/maps/VisitorCenter/scripts.pory"
	face_up
	step_end

# 1268 "data/maps/VisitorCenter/scripts.pory"
Liam_ChoiceB_P1:
# 1270 "data/maps/VisitorCenter/scripts.pory"
	delay_8
# 1270 "data/maps/VisitorCenter/scripts.pory"
	delay_8
# 1271 "data/maps/VisitorCenter/scripts.pory"
	walk_down
# 1272 "data/maps/VisitorCenter/scripts.pory"
	walk_left
# 1272 "data/maps/VisitorCenter/scripts.pory"
	walk_left
	step_end

# 1274 "data/maps/VisitorCenter/scripts.pory"
Olive_ChoiceB_P1:
# 1276 "data/maps/VisitorCenter/scripts.pory"
	face_left
# 1277 "data/maps/VisitorCenter/scripts.pory"
	delay_8
# 1277 "data/maps/VisitorCenter/scripts.pory"
	delay_8
# 1277 "data/maps/VisitorCenter/scripts.pory"
	delay_8
# 1277 "data/maps/VisitorCenter/scripts.pory"
	delay_8
# 1278 "data/maps/VisitorCenter/scripts.pory"
	face_down
# 1279 "data/maps/VisitorCenter/scripts.pory"
	delay_8
# 1279 "data/maps/VisitorCenter/scripts.pory"
	delay_8
# 1279 "data/maps/VisitorCenter/scripts.pory"
	delay_8
# 1279 "data/maps/VisitorCenter/scripts.pory"
	delay_8
# 1279 "data/maps/VisitorCenter/scripts.pory"
	delay_8
# 1279 "data/maps/VisitorCenter/scripts.pory"
	delay_8
# 1280 "data/maps/VisitorCenter/scripts.pory"
	walk_left
# 1281 "data/maps/VisitorCenter/scripts.pory"
	delay_8
	step_end

# 1287 "data/maps/VisitorCenter/scripts.pory"
Liam_ChoiceB_P3:
# 1289 "data/maps/VisitorCenter/scripts.pory"
	delay_8
# 1289 "data/maps/VisitorCenter/scripts.pory"
	delay_8
# 1290 "data/maps/VisitorCenter/scripts.pory"
	face_left
	step_end

# 1292 "data/maps/VisitorCenter/scripts.pory"
Olive_ChoiceB_P3:
# 1294 "data/maps/VisitorCenter/scripts.pory"
	face_left
# 1295 "data/maps/VisitorCenter/scripts.pory"
	delay_8
# 1295 "data/maps/VisitorCenter/scripts.pory"
	delay_8
# 1295 "data/maps/VisitorCenter/scripts.pory"
	delay_8
# 1295 "data/maps/VisitorCenter/scripts.pory"
	delay_8
# 1295 "data/maps/VisitorCenter/scripts.pory"
	delay_8
# 1295 "data/maps/VisitorCenter/scripts.pory"
	delay_8
# 1296 "data/maps/VisitorCenter/scripts.pory"
	walk_in_place_right
# 1297 "data/maps/VisitorCenter/scripts.pory"
	delay_8
	step_end

# 1301 "data/maps/VisitorCenter/scripts.pory"
Prof_Walk_1_1:
# 1303 "data/maps/VisitorCenter/scripts.pory"
	walk_right
# 1303 "data/maps/VisitorCenter/scripts.pory"
	walk_right
# 1304 "data/maps/VisitorCenter/scripts.pory"
	walk_down
	step_end

# 1306 "data/maps/VisitorCenter/scripts.pory"
Prof_Walk_1_2:
# 1308 "data/maps/VisitorCenter/scripts.pory"
	walk_up
# 1309 "data/maps/VisitorCenter/scripts.pory"
	walk_right
# 1309 "data/maps/VisitorCenter/scripts.pory"
	walk_right
# 1310 "data/maps/VisitorCenter/scripts.pory"
	walk_down
# 1310 "data/maps/VisitorCenter/scripts.pory"
	walk_down
	step_end

# 1312 "data/maps/VisitorCenter/scripts.pory"
Prof_Walk_2:
# 1314 "data/maps/VisitorCenter/scripts.pory"
	walk_down
# 1315 "data/maps/VisitorCenter/scripts.pory"
	walk_left
# 1316 "data/maps/VisitorCenter/scripts.pory"
	walk_in_place_down
	step_end

# 1318 "data/maps/VisitorCenter/scripts.pory"
Prof_Walk_3:
# 1320 "data/maps/VisitorCenter/scripts.pory"
	delay_8
# 1320 "data/maps/VisitorCenter/scripts.pory"
	delay_8
# 1320 "data/maps/VisitorCenter/scripts.pory"
	delay_8
# 1320 "data/maps/VisitorCenter/scripts.pory"
	delay_8
# 1321 "data/maps/VisitorCenter/scripts.pory"
	walk_left
# 1321 "data/maps/VisitorCenter/scripts.pory"
	walk_left
# 1322 "data/maps/VisitorCenter/scripts.pory"
	walk_in_place_down
	step_end

# 1324 "data/maps/VisitorCenter/scripts.pory"
Prof_Center_1:
# 1326 "data/maps/VisitorCenter/scripts.pory"
	walk_fast_right
# 1327 "data/maps/VisitorCenter/scripts.pory"
	delay_8
# 1328 "data/maps/VisitorCenter/scripts.pory"
	walk_in_place_down
	step_end

# 1330 "data/maps/VisitorCenter/scripts.pory"
Prof_Center_2:
# 1332 "data/maps/VisitorCenter/scripts.pory"
	walk_in_place_faster_up
# 1333 "data/maps/VisitorCenter/scripts.pory"
	delay_8
# 1334 "data/maps/VisitorCenter/scripts.pory"
	walk_in_place_down
	step_end

VisCen_ExitBlock_Text_0:
# 110 "data/maps/VisitorCenter/scripts.pory"
	.string "{COLOR LIGHT_GRAY}{SHADOW WHITE}Can't leave Mom behind…$"

VisCen_RaffleStart_Text_0:
# 128 "data/maps/VisitorCenter/scripts.pory"
	.string "???: …And the 1st place winner, with the\n"
	.string "first pick of the three, is…$"

VisCen_RaffleStart_Text_1:
# 141 "data/maps/VisitorCenter/scripts.pory"
	.string "…This gal!!\n"
	.string "{FONT_SMALL}What was your name, kid…?\p"
	.string "{FONT_NORMAL}…{PLAYER}!\n"
	.string "Please, step up and claim your prize!$"

VisCen_RaffleStart_Text_2:
# 148 "data/maps/VisitorCenter/scripts.pory"
	.string "…This guy!!\n"
	.string "{FONT_SMALL}What was your name, kid…?\p"
	.string "{FONT_NORMAL}…{PLAYER}!\n"
	.string "Please, step up and claim your prize!$"

VisCen_RaffleStart_Text_3:
# 165 "data/maps/VisitorCenter/scripts.pory"
	.string "???: W-wait a moment! This is a once in a\n"
	.string "lifetime chance!$"

VisCen_RaffleStart_Text_4:
# 169 "data/maps/VisitorCenter/scripts.pory"
	.string "???: It's a free Pokémon!!\n"
	.string "For free, kid!$"

VisCen_RaffleStart_Text_5:
# 174 "data/maps/VisitorCenter/scripts.pory"
	.string "???: You're old enough to start your\n"
	.string "own Pokémon Journey!\p"
	.string "Doesn't that sound exciting to you…?$"

VisCen_RaffleStart_Text_6:
# 179 "data/maps/VisitorCenter/scripts.pory"
	.string "???: N-Need to check with your mother\n"
	.string "first, maybe?\p"
	.string "Don't worry, I'm sure she would be\n"
	.string "thrilled!$"

VisCen_RaffleStart_Text_7:
# 184 "data/maps/VisitorCenter/scripts.pory"
	.string "???:{FONT_SMALL}Kid, please, no one else in this\n"
	.string "crowd will cut it!\p"
	.string "Even if it's just for show, I'm beggin'\n"
	.string "ya!$"

CrowdBlock_RivalEvent_Text_0:
# 220 "data/maps/VisitorCenter/scripts.pory"
	.string "Hold on, kid! There's two willing\n"
	.string "opponents right here!!$"

VisCen_BallPick_Text_0:
# 268 "data/maps/VisitorCenter/scripts.pory"
	.string "Pretty cool, right?\p"
	.string "So what do you think? {COLOR GREEN}Grass type{COLOR DARK_GRAY}\n"
	.string "Pokémon suit you?$"

VisCen_BallPick_Text_1:
# 286 "data/maps/VisitorCenter/scripts.pory"
	.string "Feisty little one, huh?\p"
	.string "I get ya, so you've got your eye on {COLOR RED}Fire\n"
	.string "type{COLOR DARK_GRAY} Pokémon, that it?$"

VisCen_BallPick_Text_2:
# 306 "data/maps/VisitorCenter/scripts.pory"
	.string "A cute kid, that one!\p"
	.string "What do you say? Wanna give that {COLOR BLUE}Water\n"
	.string "type{COLOR DARK_GRAY} Pokémon a good home?$"

VisCen_BallPick_Text_3:
# 353 "data/maps/VisitorCenter/scripts.pory"
	.string "???: Treat 'em well, alright?$"

VisCen_BallPick_Text_4:
# 359 "data/maps/VisitorCenter/scripts.pory"
	.string "{PLAYER} received the {STR_VAR_1}\n"
	.string "from the Professor!$"

VisCen_BallPick_Text_5:
# 363 "data/maps/VisitorCenter/scripts.pory"
	.string "Do you want to give a nickname to this\n"
	.string "{STR_VAR_1}?$"

VisCen_BallPick_Text_6:
# 374 "data/maps/VisitorCenter/scripts.pory"
	.string "???: Excellent choice by our big winner!\p"
	.string "Now, will winners Number 2 and 3 step up\n"
	.string "as well?$"

VisCen_BallPick_Text_7:
# 426 "data/maps/VisitorCenter/scripts.pory"
	.string "???: So, what do you think of your new\n"
	.string "partners?\p"
	.string "Some rare choices, right? Wasn't easy\n"
	.string "to get a hold of 'em…$"

VisCen_BallPick_Text_8:
# 432 "data/maps/VisitorCenter/scripts.pory"
	.string "BOY: Partners, huh…? These Pokémon?$"

VisCen_BallPick_Text_9:
# 437 "data/maps/VisitorCenter/scripts.pory"
	.string "???: That's right, your first Pokémon\n"
	.string "for a new journey!\p"
	.string "Much more exciting than some boring\n"
	.string "sightseeing, yeah?$"

VisCen_BallPick_Text_10:
# 443 "data/maps/VisitorCenter/scripts.pory"
	.string "GIRL: I was rather looking forward to\n"
	.string "the sightseeing, actually…$"

VisCen_BallPick_Text_11:
# 449 "data/maps/VisitorCenter/scripts.pory"
	.string "???: …But I can already see the\n"
	.string "excitement in your child eyes!\p"
	.string "You're itchin' to battle already, aren't\n"
	.string "ya {PLAYER}?$"

VisCen_BallPick_Text_12:
# 455 "data/maps/VisitorCenter/scripts.pory"
	.string "???: Of course you are!\n"
	.string "{FONT_SMALL}Thanks for the out.{FONT_NORMAL}\p"
	.string "What's an adventure without hardship?\n"
	.string "Without Rivals??\p"
	.string "Take hold of your destiny or whatever,\n"
	.string "kid! Who's your mark?$"

VisCen_BallPick_Text_13:
# 468 "data/maps/VisitorCenter/scripts.pory"
	.string "???: Hey, hey… just work with me a\n"
	.string "little, huh?\l"
	.string "{FONT_SMALL}You just got a gift.$"

VisCen_BallPick_Text_14:
# 492 "data/maps/VisitorCenter/scripts.pory"
	.string "BOY: Getting cold feet?\p"
	.string "If you don't want your Pokémon, I can\n"
	.string "take care of it!$"

VisCen_BallPick_Text_15:
# 497 "data/maps/VisitorCenter/scripts.pory"
	.string "???: Ooh, those are fighting words!\n"
	.string "You're not just gonna take that, right?$"

VisCen_BallPick_Text_16:
# 527 "data/maps/VisitorCenter/scripts.pory"
	.string "GIRL: Well, it would be rude not to get\n"
	.string "to know each other, right?\p"
	.string "I think {STR_VAR_3} wants to play…$"

VisCen_BallPick_Text_17:
# 532 "data/maps/VisitorCenter/scripts.pory"
	.string "???: That's right, you three are in it\n"
	.string "for the long haul now!\p"
	.string "Why don't you two come on over?$"

Battle_Transition_Text_0:
# 622 "data/maps/VisitorCenter/scripts.pory"
	.string "???: Alright, everyone watching? You're\n"
	.string "lookin' at the new Champ in the making!\p"
	.string "{FONT_SMALL}Just put on a good show, kid.$"

Battle_Transition_Text_1:
# 624 "data/maps/VisitorCenter/scripts.pory"
	.string "Great, great. Good work.$"

VisCen_Liam_PostBattle_Text_0:
# 695 "data/maps/VisitorCenter/scripts.pory"
	.string "LIAM: So you've got a head start, but\n"
	.string "we'll catch up!$"

VisCen_Liam_PostBattle_Text_1:
# 699 "data/maps/VisitorCenter/scripts.pory"
	.string "LIAM: How was that? I'm pretty good at\n"
	.string "this, don't you think?$"

VisCen_Olive_PostBattle_Text_0:
# 711 "data/maps/VisitorCenter/scripts.pory"
	.string "OLIVE: Thank you for the battle. I can\n"
	.string "tell our Pokémon had fun!$"

VisCen_Rivals_PostBattle_Text_0:
# 720 "data/maps/VisitorCenter/scripts.pory"
	.string "???: You kids done?\p"
	.string "Su{PAUSE 8}per{PAUSE 8} fun,{PAUSE 8} right?\n"
	.string "Anyway, already told your other friend,\l"
	.string "but take these.$"

VisCen_Rivals_PostBattle_Text_1:
# 749 "data/maps/VisitorCenter/scripts.pory"
	.string "Don't lose it, alright?$"

VisCen_Prof_PostBattle_Text_0:
# 758 "data/maps/VisitorCenter/scripts.pory"
	.string "???: Alright, alright. Got that out of\n"
	.string "your system?\p"
	.string "Wasn't really in the script, but\n"
	.string "whatever gets you motivated.$"

VisCen_Prof_PostBattle_Text_1:
# 763 "data/maps/VisitorCenter/scripts.pory"
	.string "???: …Er. You alright, kid?\p"
	.string "You gotta watch it, or your little guy's\n"
	.string "gonna hurt…\l"
	.string "{FONT_SMALL}You only get one, alright?$"

VisCen_Prof_PostBattle_Text_2:
# 772 "data/maps/VisitorCenter/scripts.pory"
	.string "Here, go ahead and take this. Don't lose\n"
	.string "it, understand?$"

VisCen_Closing_Event_Text_0:
# 796 "data/maps/VisitorCenter/scripts.pory"
	.string "???: It's a device that automatically\n"
	.string "stores data about Pokémon!$"

VisCen_Closing_Event_Text_1:
# 801 "data/maps/VisitorCenter/scripts.pory"
	.string "That's right, it's the latest and\n"
	.string "greatest in Pokémon Trainer\l"
	.string "Technology!\p"
	.string "Well yeah, okay, maybe you've seen it\n"
	.string "before. Everyone's got one these days.\p"
	.string "But I won't be hearing anything about\n"
	.string "those Pokétch apps or whatever!\l"
	.string "This is complex technology, you know?$"

VisCen_Closing_Event_Text_2:
# 807 "data/maps/VisitorCenter/scripts.pory"
	.string "Now, just seeing Pokémon is fine, but\n"
	.string "you'll learn more by catching 'em.\p"
	.string "The tour guides here probably have\n"
	.string "Pokéballs for you…$"

VisCen_Closing_Event_Text_3:
# 811 "data/maps/VisitorCenter/scripts.pory"
	.string "Hm? Why can't I give you some?\l"
	.string "You're wringin' me dry here…$"

VisCen_Closing_Event_Text_4:
# 819 "data/maps/VisitorCenter/scripts.pory"
	.string "{COLOR GREEN}The tour will begin shortly.\p"
	.string "Please meet with your designated tour\n"
	.string "guide outside the center.$"

VisCen_Closing_Event_Text_5:
# 825 "data/maps/VisitorCenter/scripts.pory"
	.string "???: Whoops, that's my cue.\p"
	.string "Remember you three, if anyone asks\n"
	.string "where you got these?\p"
	.string "Let them know {COLOR BLUE}Professor Sequoia{COLOR DARK_GRAY}\n"
	.string "hooked you up, alright?\l"
	.string "I'll be seeing you around!$"

VisCen_AreaSign_Text_0:
# 845 "data/maps/VisitorCenter/scripts.pory"
	.string "SEKIEN VISITOR CENTER\n"
	.string "Welcome to our wonderful region!$"

VisCen_ExitSign_Text_0:
# 852 "data/maps/VisitorCenter/scripts.pory"
	.string "ROUTE 1\n"
	.string "Nature Trail ahead$"

VisCen_FenceSign_Text_0:
# 859 "data/maps/VisitorCenter/scripts.pory"
	.string "Please do not touch the plants.$"

VisCen_MisplacedBush_Text_0:
# 865 "data/maps/VisitorCenter/scripts.pory"
	.string "It looks like it was recently uprooted.$"

VisCen_Professor_Text_0:
# 877 "data/maps/VisitorCenter/scripts.pory"
	.string "???: What's the matter, big winner?\n"
	.string "Tough decision?\p"
	.string "…There's no strings attached, I\n"
	.string "promise!$"

VisCen_Professor_Text_1:
# 885 "data/maps/VisitorCenter/scripts.pory"
	.string "???: Hmm? What, you want to battle me\n"
	.string "or something?$"

VisCen_Professor_Text_2:
# 892 "data/maps/VisitorCenter/scripts.pory"
	.string "Did neither of them want to? Really…?\n"
	.string "{FONT_SMALL}Ugh…{FONT_NORMAL}\p"
	.string "Fine, fine. If I've gotta break the ice\n"
	.string "for you, it's better than nothing.$"

VisCen_Professor_Text_3:
# 900 "data/maps/VisitorCenter/scripts.pory"
	.string "Hey, you two come here for a sec.$"

VisCen_Professor_Text_4:
# 911 "data/maps/VisitorCenter/scripts.pory"
	.string "Come on… did you even try talking to\n"
	.string "the other two yet?\p"
	.string "Competing with others your age is much\n"
	.string "more mentally stimulating.\p"
	.string "Besides, I'm not really supposed to be\n"
	.string "involved in the{COLOR BLUE} stud-{COLOR DARK_GRAY}\l"
	.string "in your Pokémon Journey.$"

VisCen_Professor_Text_5:
# 920 "data/maps/VisitorCenter/scripts.pory"
	.string "I said no already, kid. Why don't you{COLOR RED} ask\n"
	.string "one of those two{COLOR DARK_GRAY} instead?$"

VisCen_Professor_Text_6:
# 927 "data/maps/VisitorCenter/scripts.pory"
	.string "Of course, don't be silly…\p"
	.string "You've got two eager {COLOR RED}rivals{COLOR DARK_GRAY} right there.\n"
	.string "Just ask them!$"

VisCen_Liam_Text_0:
# 946 "data/maps/VisitorCenter/scripts.pory"
	.string "BOY: He said I'm a winner, but it doesn't\n"
	.string "change my goals!\p"
	.string "I'll catch the strongest Pokémon out\n"
	.string "there!$"

VisCen_Liam_Text_1:
# 954 "data/maps/VisitorCenter/scripts.pory"
	.string "BOY: So, you're the one who won first\n"
	.string "place.\p"
	.string "Just don't take the good one!$"

VisCen_Liam_Text_2:
# 962 "data/maps/VisitorCenter/scripts.pory"
	.string "BOY: Picking me, huh? Well, I'm not about\n"
	.string "to miss my first shot!$"

VisCen_Liam_Text_3:
# 976 "data/maps/VisitorCenter/scripts.pory"
	.string "What, don't get scared! I'll go easy on\n"
	.string "you!$"

VisCen_Olive_Text_0:
# 989 "data/maps/VisitorCenter/scripts.pory"
	.string "GIRL: Hmm… a free Pokémon, huh-?\l"
	.string "That's a lot of responsibility…$"

VisCen_Olive_Text_1:
# 997 "data/maps/VisitorCenter/scripts.pory"
	.string "GIRL: Lucky you-!\p"
	.string "Did you hear? I get to have the last\n"
	.string "Pokémon!$"

VisCen_Olive_Text_2:
# 1006 "data/maps/VisitorCenter/scripts.pory"
	.string "GIRL: {STR_VAR_3} and I…? Well, why\n"
	.string "not!$"

VisCen_Olive_Text_3:
# 1020 "data/maps/VisitorCenter/scripts.pory"
	.string "GIRL: Oh…? Well, why not?$"

VisCen_Oyako_Text_0:
# 1037 "data/maps/VisitorCenter/scripts.pory"
	.string "GIRL: Mom, mom! I want a Pokémon too!$"

VisCen_Oyako_Text_1:
# 1039 "data/maps/VisitorCenter/scripts.pory"
	.string "MOTHER: Don't listen to the strange\n"
	.string "man, dear.$"

VisCen_Employee_Text_0:
# 1048 "data/maps/VisitorCenter/scripts.pory"
	.string "Hey, what's going on? Does this guy\n"
	.string "even work here?$"

VisCen_Employee_Text_1:
# 1053 "data/maps/VisitorCenter/scripts.pory"
	.string "Working here at the Visitor Center\n"
	.string "makes me want to take a trip, too.\p"
	.string "Maybe I'll go visit Hoenn?$"

VisCen_Riajuu_Text_0:
# 1067 "data/maps/VisitorCenter/scripts.pory"
	.string "GIRL: If he chooses you, honey, can I\n"
	.string "have your Pokémon instead…?$"

VisCen_Riajuu_Text_1:
# 1069 "data/maps/VisitorCenter/scripts.pory"
	.string "BOY: Huh?? I mean, o-of course you can,\n"
	.string "haha…$"

VisCen_Riajuu_Text_2:
# 1073 "data/maps/VisitorCenter/scripts.pory"
	.string "GIRL: Aww, neither of our tickets won…\p"
	.string "but you'll catch me a cute Pokémon\n"
	.string "anyway, right?$"

VisCen_Riajuu_Text_3:
# 1076 "data/maps/VisitorCenter/scripts.pory"
	.string "BOY: Of course, of course! {FONT_SMALL}Whew…$"

VisCen_Beauty_Text_0:
# 1084 "data/maps/VisitorCenter/scripts.pory"
	.string "LADY: This free Pokémon stuff sounds\n"
	.string "fishy if you ask me…\p"
	.string "Is he even a real Professor?$"

VisCen_LassGramps_Text_0:
# 1097 "data/maps/VisitorCenter/scripts.pory"
	.string "GIRL: Grandpa, did you hold onto your\n"
	.string "ticket?$"

VisCen_LassGramps_Text_1:
# 1099 "data/maps/VisitorCenter/scripts.pory"
	.string "GRAMPS: Hm?{PAUSE 16} What's that??{PAUSE 16}\n"
	.string "Speak up, kiddo!$"

VisCen_LassGramps_Text_2:
# 1101 "data/maps/VisitorCenter/scripts.pory"
	.string "GIRL: THE TICKET, GRANDPA.\n"
	.string "THE {COLOR BLUE}RAFFLE TICKET{COLOR DARK_GRAY} FOR A FREE POKéMON?$"

VisCen_LassGramps_Text_3:
# 1104 "data/maps/VisitorCenter/scripts.pory"
	.string "GRAMPS: Hah???$"

VisCen_LassGramps_Text_4:
# 1108 "data/maps/VisitorCenter/scripts.pory"
	.string "GIRL: Looks like we didn't win, huh\n"
	.string "gramps?$"

VisCen_LassGramps_Text_5:
# 1110 "data/maps/VisitorCenter/scripts.pory"
	.string "GRAMPS: Givin' away Pokémon for free…\n"
	.string "hah! In my day, you had to wrangle your\l"
	.string "Pokémon with your own two hands!!$"

VisCen_LassGramps_Text_6:
# 1113 "data/maps/VisitorCenter/scripts.pory"
	.string "GIRL: Is… that even remotely true?$"

VisCen_TechnologyMan_Text_0:
# 1120 "data/maps/VisitorCenter/scripts.pory"
	.string "Technology is incredible!\p"
	.string "You can even create your own world if\n"
	.string "you put your mind to it!$"

VisCen_Liam_Intro:
# 629 "data/maps/VisitorCenter/scripts.pory"
	.string "BOY: The name's {COLOR BLUE}Liam{COLOR DARK_GRAY}!\p"
	.string "Sorry, but you're gonna be our first\n"
	.string "step on the way to the top!$"

VisCen_Olive_Intro:
# 634 "data/maps/VisitorCenter/scripts.pory"
	.string "GIRL: By the way, I'm {COLOR BLUE}Olive{COLOR DARK_GRAY}!\p"
	.string "We'll be seeing each other a lot, so let's\n"
	.string "get along, alright?$"

VisCen_Liam_Loss:
# 640 "data/maps/VisitorCenter/scripts.pory"
	.string "Man… and I was sure this was the one…$"

VisCen_Olive_Loss:
# 644 "data/maps/VisitorCenter/scripts.pory"
	.string "Oh… tired already?$"

Prof_DexText::
# 836 "data/maps/VisitorCenter/scripts.pory"
	.string "{PLAYER} received the Pokédex from the\n"
	.string "Professor.$"

Liam_Pick_Txt::
# 1127 "data/maps/VisitorCenter/scripts.pory"
	.string "BOY: Then I'll take this one!$"

Liam_Receive_Txt::
# 1131 "data/maps/VisitorCenter/scripts.pory"
	.string "The Boy received {STR_VAR_2}\n"
	.string "from the Professor!$"

Olive_Pick_Txt::
# 1136 "data/maps/VisitorCenter/scripts.pory"
	.string "GIRL: So, this one is mine?$"

Olive_Receive_Txt::
# 1140 "data/maps/VisitorCenter/scripts.pory"
	.string "The Girl received {STR_VAR_3}\n"
	.string "from the Professor!$"
