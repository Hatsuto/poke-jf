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
# 160 "data/maps/VisitorCenter/scripts.pory"
	call Prof_Hop
# 162 "data/maps/VisitorCenter/scripts.pory"
	goto_if_unset FLAG_TEMP_5, VisCen_RaffleStart_9
# 193 "data/maps/VisitorCenter/scripts.pory"
	goto CrowdBlock_RivalEvent
VisCen_RaffleStart_1:
# 198 "data/maps/VisitorCenter/scripts.pory"
	goto CrowdBlock_StepIn
	return

VisCen_RaffleStart_2:
# 125 "data/maps/VisitorCenter/scripts.pory"
	call HeadsUp
# 126 "data/maps/VisitorCenter/scripts.pory"
	fadeoutbgm 1
# 128 "data/maps/VisitorCenter/scripts.pory"
	setspeaker SP_NAME_UNKNOWN
# 129 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_RaffleStart_Text_0
# 132 "data/maps/VisitorCenter/scripts.pory"
	applymovement LOCALID_PROF, Common_Movement_WalkRight
# 133 "data/maps/VisitorCenter/scripts.pory"
	waitmovement 0
# 134 "data/maps/VisitorCenter/scripts.pory"
	playse SE_LEDGE
# 135 "data/maps/VisitorCenter/scripts.pory"
	applymovement LOCALID_PROF, Prof_WalkBehindBushes_1
# 136 "data/maps/VisitorCenter/scripts.pory"
	waitmovement 0
# 138 "data/maps/VisitorCenter/scripts.pory"
	playbgm MUS_GAME_CORNER, 1
# 139 "data/maps/VisitorCenter/scripts.pory"
	checkplayergender
# 140 "data/maps/VisitorCenter/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq VisCen_RaffleStart_6
# 149 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_RaffleStart_Text_2
VisCen_RaffleStart_5:
# 154 "data/maps/VisitorCenter/scripts.pory"
	setspeaker SP_NAME_NONE
# 155 "data/maps/VisitorCenter/scripts.pory"
	applymovement LOCALID_PROF, Prof_WalkBehindBushes_2
# 156 "data/maps/VisitorCenter/scripts.pory"
	setflag FLAG_TEMP_1
	goto VisCen_RaffleStart_1

VisCen_RaffleStart_6:
# 142 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_RaffleStart_Text_1
	goto VisCen_RaffleStart_5

VisCen_RaffleStart_9:
# 164 "data/maps/VisitorCenter/scripts.pory"
	switch VAR_TEMP_3
# 166 "data/maps/VisitorCenter/scripts.pory"
	case 0, VisCen_RaffleStart_13
# 170 "data/maps/VisitorCenter/scripts.pory"
	case 1, VisCen_RaffleStart_14
# 175 "data/maps/VisitorCenter/scripts.pory"
	case 2, VisCen_RaffleStart_15
# 180 "data/maps/VisitorCenter/scripts.pory"
	case 3, VisCen_RaffleStart_16
# 186 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_RaffleStart_Text_7, MSGBOX_AUTOCLOSE
	goto VisCen_RaffleStart_1

VisCen_RaffleStart_13:
# 167 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_RaffleStart_Text_3, MSGBOX_AUTOCLOSE
# 169 "data/maps/VisitorCenter/scripts.pory"
	setvar VAR_TEMP_3, 1
	goto VisCen_RaffleStart_1

VisCen_RaffleStart_14:
# 171 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_RaffleStart_Text_4, MSGBOX_AUTOCLOSE
# 174 "data/maps/VisitorCenter/scripts.pory"
	setvar VAR_TEMP_3, 2
	goto VisCen_RaffleStart_1

VisCen_RaffleStart_15:
# 176 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_RaffleStart_Text_5, MSGBOX_AUTOCLOSE
# 179 "data/maps/VisitorCenter/scripts.pory"
	setvar VAR_TEMP_3, 3
	goto VisCen_RaffleStart_1

VisCen_RaffleStart_16:
# 181 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_RaffleStart_Text_6, MSGBOX_AUTOCLOSE
# 184 "data/maps/VisitorCenter/scripts.pory"
	setvar VAR_TEMP_3, 4
	goto VisCen_RaffleStart_1


HeadsUp:
# 203 "data/maps/VisitorCenter/scripts.pory"
	applymovement LOCALID_OYA, Common_Movement_FaceRight
# 204 "data/maps/VisitorCenter/scripts.pory"
	applymovement LOCALID_KO, Common_Movement_FaceRight
# 205 "data/maps/VisitorCenter/scripts.pory"
	setvar VAR_TEMP_2, 7
HeadsUp_3:
# 210 "data/maps/VisitorCenter/scripts.pory"
	applymovement VAR_TEMP_2, Common_Movement_FaceUp
# 211 "data/maps/VisitorCenter/scripts.pory"
	addvar VAR_TEMP_2, 1
# 212 "data/maps/VisitorCenter/scripts.pory"
	compare VAR_TEMP_2, 10
	goto_if_le HeadsUp_3
# 214 "data/maps/VisitorCenter/scripts.pory"
	applymovement LOCALID_GRAMPS, Common_Movement_FaceLeft
# 215 "data/maps/VisitorCenter/scripts.pory"
	applymovement LOCALID_LASS, Common_Movement_FaceLeft
# 216 "data/maps/VisitorCenter/scripts.pory"
	waitmovement 0
	return


CrowdBlock_RivalEvent:
# 222 "data/maps/VisitorCenter/scripts.pory"
	msgbox CrowdBlock_RivalEvent_Text_0, MSGBOX_AUTOCLOSE
# 224 "data/maps/VisitorCenter/scripts.pory"
	goto CrowdBlock_StepIn
	return


CrowdBlock_StepIn:
# 229 "data/maps/VisitorCenter/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 230 "data/maps/VisitorCenter/scripts.pory"
	waitmovement 0
# 231 "data/maps/VisitorCenter/scripts.pory"
	releaseall
	end


VisCen_CrowdBlock::
# 236 "data/maps/VisitorCenter/scripts.pory"
	lockall
# 237 "data/maps/VisitorCenter/scripts.pory"
	call Prof_Hop
# 238 "data/maps/VisitorCenter/scripts.pory"
	call CrowdBlock_RivalEvent
	return


VisCen_BallPick::
# 248 "data/maps/VisitorCenter/scripts.pory"
	lockall
# 249 "data/maps/VisitorCenter/scripts.pory"
	applymovement LOCALID_PROF, Common_Movement_FaceDown
# 250 "data/maps/VisitorCenter/scripts.pory"
	waitmovement 0
# 251 "data/maps/VisitorCenter/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 252 "data/maps/VisitorCenter/scripts.pory"
	setspeaker SP_NAME_UNKNOWN
# 255 "data/maps/VisitorCenter/scripts.pory"
	switch VAR_TEMP_0
# 257 "data/maps/VisitorCenter/scripts.pory"
	case 8 - 1, VisCen_BallPick_3
# 258 "data/maps/VisitorCenter/scripts.pory"
	case 8, VisCen_BallPick_3
# 277 "data/maps/VisitorCenter/scripts.pory"
	case 8 + 1, VisCen_BallPick_4
# 295 "data/maps/VisitorCenter/scripts.pory"
	case 8 + 1 + 1 + 1, VisCen_BallPick_5
# 296 "data/maps/VisitorCenter/scripts.pory"
	case 8 + 1 + 1, VisCen_BallPick_5
VisCen_BallPick_1:
# 315 "data/maps/VisitorCenter/scripts.pory"
	hidemonpic
# 316 "data/maps/VisitorCenter/scripts.pory"
	closemessage
# 324 "data/maps/VisitorCenter/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq VisCen_BallPick_7
VisCen_BallPick_6:
# 552 "data/maps/VisitorCenter/scripts.pory"
	releaseall
	end

VisCen_BallPick_3:
# 259 "data/maps/VisitorCenter/scripts.pory"
	setvar VAR_TEMP_4, SPECIES_GRASS_STARTER_1
# 260 "data/maps/VisitorCenter/scripts.pory"
	setvar VAR_STARTER_MON, 0
# 261 "data/maps/VisitorCenter/scripts.pory"
	setvar VAR_TEMP_5, SPECIES_FIRE_STARTER_1
# 262 "data/maps/VisitorCenter/scripts.pory"
	setvar VAR_TEMP_6, SPECIES_WATER_STARTER_1
# 264 "data/maps/VisitorCenter/scripts.pory"
	setvar VAR_TEMP_0, 8
# 265 "data/maps/VisitorCenter/scripts.pory"
	setvar VAR_TEMP_7, 13
# 267 "data/maps/VisitorCenter/scripts.pory"
	showmonpic VAR_TEMP_4, 10, 3
# 268 "data/maps/VisitorCenter/scripts.pory"
	playmoncry VAR_TEMP_4, 0
# 269 "data/maps/VisitorCenter/scripts.pory"
	waitmoncry
# 271 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_BallPick_Text_0, MSGBOX_YESNO
	goto VisCen_BallPick_1

VisCen_BallPick_4:
# 278 "data/maps/VisitorCenter/scripts.pory"
	setvar VAR_TEMP_4, SPECIES_FIRE_STARTER_1
# 279 "data/maps/VisitorCenter/scripts.pory"
	setvar VAR_STARTER_MON, 1
# 280 "data/maps/VisitorCenter/scripts.pory"
	setvar VAR_TEMP_5, SPECIES_WATER_STARTER_1
# 281 "data/maps/VisitorCenter/scripts.pory"
	setvar VAR_TEMP_6, SPECIES_GRASS_STARTER_1
# 283 "data/maps/VisitorCenter/scripts.pory"
	setvar VAR_TEMP_7, 14
# 285 "data/maps/VisitorCenter/scripts.pory"
	showmonpic VAR_TEMP_4, 10, 3
# 286 "data/maps/VisitorCenter/scripts.pory"
	playmoncry VAR_TEMP_4, 0
# 287 "data/maps/VisitorCenter/scripts.pory"
	waitmoncry
# 289 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_BallPick_Text_1, MSGBOX_YESNO
	goto VisCen_BallPick_1

VisCen_BallPick_5:
# 297 "data/maps/VisitorCenter/scripts.pory"
	setvar VAR_TEMP_4, SPECIES_WATER_STARTER_1
# 298 "data/maps/VisitorCenter/scripts.pory"
	setvar VAR_STARTER_MON, 2
# 299 "data/maps/VisitorCenter/scripts.pory"
	setvar VAR_TEMP_5, SPECIES_GRASS_STARTER_1
# 300 "data/maps/VisitorCenter/scripts.pory"
	setvar VAR_TEMP_6, SPECIES_FIRE_STARTER_1
# 302 "data/maps/VisitorCenter/scripts.pory"
	setvar VAR_TEMP_7, 15
# 303 "data/maps/VisitorCenter/scripts.pory"
	setvar VAR_TEMP_0, 8 + 1 + 1
# 305 "data/maps/VisitorCenter/scripts.pory"
	showmonpic VAR_TEMP_4, 10, 3
# 306 "data/maps/VisitorCenter/scripts.pory"
	playmoncry VAR_TEMP_4, 0
# 307 "data/maps/VisitorCenter/scripts.pory"
	waitmoncry
# 309 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_BallPick_Text_2, MSGBOX_YESNO
	goto VisCen_BallPick_1

VisCen_BallPick_7:
# 326 "data/maps/VisitorCenter/scripts.pory"
	bufferspeciesname 0, VAR_TEMP_4
# 329 "data/maps/VisitorCenter/scripts.pory"
	switch VAR_TEMP_1
# 331 "data/maps/VisitorCenter/scripts.pory"
	case 7 - 1, VisCen_BallPick_11
# 342 "data/maps/VisitorCenter/scripts.pory"
	case 7, VisCen_BallPick_12
VisCen_BallPick_9:
# 355 "data/maps/VisitorCenter/scripts.pory"
	removeobject VAR_TEMP_7
# 356 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_BallPick_Text_3
# 357 "data/maps/VisitorCenter/scripts.pory"
	lockall
# 359 "data/maps/VisitorCenter/scripts.pory"
	givemon VAR_TEMP_4, 5, ITEM_NONE
# 360 "data/maps/VisitorCenter/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 361 "data/maps/VisitorCenter/scripts.pory"
	playfanfare MUS_EVOLVED
# 362 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_BallPick_Text_4
# 363 "data/maps/VisitorCenter/scripts.pory"
	waitfanfare
# 364 "data/maps/VisitorCenter/scripts.pory"
	closemessage
# 366 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_BallPick_Text_5, MSGBOX_YESNO
# 368 "data/maps/VisitorCenter/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq VisCen_BallPick_14
VisCen_BallPick_13:
# 373 "data/maps/VisitorCenter/scripts.pory"
	delay 32
# 375 "data/maps/VisitorCenter/scripts.pory"
	applymovement LOCALID_PROF, Common_Movement_WalkInPlaceDown
# 376 "data/maps/VisitorCenter/scripts.pory"
	waitmovement 0
# 377 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_BallPick_Text_6
# 379 "data/maps/VisitorCenter/scripts.pory"
	closemessage
# 382 "data/maps/VisitorCenter/scripts.pory"
	switch VAR_STARTER_MON
# 384 "data/maps/VisitorCenter/scripts.pory"
	case 0, VisCen_BallPick_26
# 387 "data/maps/VisitorCenter/scripts.pory"
	case 1, VisCen_BallPick_27
# 390 "data/maps/VisitorCenter/scripts.pory"
	case 2, VisCen_BallPick_28
VisCen_BallPick_24:
# 395 "data/maps/VisitorCenter/scripts.pory"
	bufferspeciesname 1, VAR_TEMP_5
# 396 "data/maps/VisitorCenter/scripts.pory"
	waitmovement 0
# 397 "data/maps/VisitorCenter/scripts.pory"
	removeobject VAR_TEMP_7
# 398 "data/maps/VisitorCenter/scripts.pory"
	setspeaker SP_NAME_BOY
# 399 "data/maps/VisitorCenter/scripts.pory"
	msgbox Liam_Pick_Txt
# 400 "data/maps/VisitorCenter/scripts.pory"
	setspeaker SP_NAME_NONE
# 401 "data/maps/VisitorCenter/scripts.pory"
	playfanfare MUS_RG_OBTAIN_KEY_ITEM
# 402 "data/maps/VisitorCenter/scripts.pory"
	msgbox Liam_Receive_Txt
# 403 "data/maps/VisitorCenter/scripts.pory"
	waitfanfare
# 404 "data/maps/VisitorCenter/scripts.pory"
	closemessage
# 407 "data/maps/VisitorCenter/scripts.pory"
	switch VAR_STARTER_MON
# 409 "data/maps/VisitorCenter/scripts.pory"
	case 0, VisCen_BallPick_31
# 412 "data/maps/VisitorCenter/scripts.pory"
	case 1, VisCen_BallPick_32
# 415 "data/maps/VisitorCenter/scripts.pory"
	case 2, VisCen_BallPick_33
VisCen_BallPick_29:
# 420 "data/maps/VisitorCenter/scripts.pory"
	bufferspeciesname 2, VAR_TEMP_6
# 421 "data/maps/VisitorCenter/scripts.pory"
	waitmovement 0
# 422 "data/maps/VisitorCenter/scripts.pory"
	removeobject VAR_TEMP_7
# 423 "data/maps/VisitorCenter/scripts.pory"
	setspeaker SP_NAME_GIRL
# 424 "data/maps/VisitorCenter/scripts.pory"
	msgbox Olive_Pick_Txt
# 425 "data/maps/VisitorCenter/scripts.pory"
	setspeaker SP_NAME_NONE
# 426 "data/maps/VisitorCenter/scripts.pory"
	playfanfare MUS_RG_OBTAIN_KEY_ITEM
# 427 "data/maps/VisitorCenter/scripts.pory"
	msgbox Olive_Receive_Txt
# 428 "data/maps/VisitorCenter/scripts.pory"
	waitfanfare
# 429 "data/maps/VisitorCenter/scripts.pory"
	closemessage
# 431 "data/maps/VisitorCenter/scripts.pory"
	applymovement LOCALID_PROF, Common_Movement_WalkInPlaceDown
# 432 "data/maps/VisitorCenter/scripts.pory"
	waitmovement 0
# 433 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_BallPick_Text_7
# 435 "data/maps/VisitorCenter/scripts.pory"
	closemessage
# 437 "data/maps/VisitorCenter/scripts.pory"
	applymovement LOCALID_LIAM, Common_Movement_WalkInPlaceDown
# 438 "data/maps/VisitorCenter/scripts.pory"
	waitmovement 0
# 439 "data/maps/VisitorCenter/scripts.pory"
	setspeaker SP_NAME_BOY
# 440 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_BallPick_Text_8
# 441 "data/maps/VisitorCenter/scripts.pory"
	closemessage
# 443 "data/maps/VisitorCenter/scripts.pory"
	applymovement LOCALID_PROF, Common_Movement_WalkInPlaceDown
# 444 "data/maps/VisitorCenter/scripts.pory"
	waitmovement 0
# 445 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_BallPick_Text_9
# 447 "data/maps/VisitorCenter/scripts.pory"
	closemessage
# 449 "data/maps/VisitorCenter/scripts.pory"
	applymovement LOCALID_OLIVE, Common_Movement_WalkInPlaceDown
# 450 "data/maps/VisitorCenter/scripts.pory"
	waitmovement 0
# 451 "data/maps/VisitorCenter/scripts.pory"
	setspeaker SP_NAME_GIRL
# 452 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_BallPick_Text_10
# 453 "data/maps/VisitorCenter/scripts.pory"
	closemessage
# 455 "data/maps/VisitorCenter/scripts.pory"
	playse SE_LEDGE
# 456 "data/maps/VisitorCenter/scripts.pory"
	applymovement LOCALID_PROF, Common_Movement_HopDown
# 457 "data/maps/VisitorCenter/scripts.pory"
	waitmovement 0
# 458 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_BallPick_Text_11, MSGBOX_YESNO
# 462 "data/maps/VisitorCenter/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq VisCen_BallPick_34
# 475 "data/maps/VisitorCenter/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 476 "data/maps/VisitorCenter/scripts.pory"
	waitmovement 0
# 477 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_BallPick_Text_13
# 480 "data/maps/VisitorCenter/scripts.pory"
	random 2
# 482 "data/maps/VisitorCenter/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq VisCen_BallPick_38
# 514 "data/maps/VisitorCenter/scripts.pory"
	switch VAR_STARTER_MON
# 516 "data/maps/VisitorCenter/scripts.pory"
	case 0, VisCen_BallPick_47
# 522 "data/maps/VisitorCenter/scripts.pory"
	case 1, VisCen_BallPick_48
# 527 "data/maps/VisitorCenter/scripts.pory"
	case 2, VisCen_BallPick_49
VisCen_BallPick_45:
# 536 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_BallPick_Text_16
# 538 "data/maps/VisitorCenter/scripts.pory"
	closemessage
# 539 "data/maps/VisitorCenter/scripts.pory"
	applymovement LOCALID_PROF, Common_Movement_WalkInPlaceDown
# 540 "data/maps/VisitorCenter/scripts.pory"
	waitmovement 0
# 541 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_BallPick_Text_17
# 544 "data/maps/VisitorCenter/scripts.pory"
	setvar VAR_VISCEN_STATE, 0x20
# 545 "data/maps/VisitorCenter/scripts.pory"
	setvar VAR_TEMP_8, LOCALID_OLIVE
VisCen_BallPick_37:
# 548 "data/maps/VisitorCenter/scripts.pory"
	goto Battle_Transition
	goto VisCen_BallPick_6

VisCen_BallPick_11:
# 332 "data/maps/VisitorCenter/scripts.pory"
	compare VAR_TEMP_0, 8
	goto_if_eq VisCen_BallPick_16
# 337 "data/maps/VisitorCenter/scripts.pory"
	compare VAR_TEMP_0, 8 + 1 + 1
	goto_if_eq VisCen_BallPick_17
	goto VisCen_BallPick_9

VisCen_BallPick_12:
# 343 "data/maps/VisitorCenter/scripts.pory"
	compare VAR_TEMP_0, 8
	goto_if_eq VisCen_BallPick_20
# 348 "data/maps/VisitorCenter/scripts.pory"
	compare VAR_TEMP_0, 8 + 1 + 1
	goto_if_eq VisCen_BallPick_21
	goto VisCen_BallPick_9

VisCen_BallPick_14:
# 370 "data/maps/VisitorCenter/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto VisCen_BallPick_13

VisCen_BallPick_16:
# 334 "data/maps/VisitorCenter/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Player_Ball_TopLeft
# 335 "data/maps/VisitorCenter/scripts.pory"
	waitmovement 0
	goto VisCen_BallPick_9

VisCen_BallPick_17:
# 339 "data/maps/VisitorCenter/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Player_Ball_TopRight
# 340 "data/maps/VisitorCenter/scripts.pory"
	waitmovement 0
	goto VisCen_BallPick_9

VisCen_BallPick_20:
# 345 "data/maps/VisitorCenter/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Player_Ball_Left
# 346 "data/maps/VisitorCenter/scripts.pory"
	waitmovement 0
	goto VisCen_BallPick_9

VisCen_BallPick_21:
# 350 "data/maps/VisitorCenter/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Player_Ball_Right
# 351 "data/maps/VisitorCenter/scripts.pory"
	waitmovement 0
	goto VisCen_BallPick_9

VisCen_BallPick_26:
# 385 "data/maps/VisitorCenter/scripts.pory"
	applymovement LOCALID_LIAM, Liam_Ball_M
# 386 "data/maps/VisitorCenter/scripts.pory"
	setvar VAR_TEMP_7, 14
	goto VisCen_BallPick_24

VisCen_BallPick_27:
# 388 "data/maps/VisitorCenter/scripts.pory"
	applymovement LOCALID_LIAM, Liam_Ball_R
# 389 "data/maps/VisitorCenter/scripts.pory"
	setvar VAR_TEMP_7, 15
	goto VisCen_BallPick_24

VisCen_BallPick_28:
# 391 "data/maps/VisitorCenter/scripts.pory"
	applymovement LOCALID_LIAM, Liam_Ball_L
# 392 "data/maps/VisitorCenter/scripts.pory"
	setvar VAR_TEMP_7, 13
	goto VisCen_BallPick_24

VisCen_BallPick_31:
# 410 "data/maps/VisitorCenter/scripts.pory"
	applymovement LOCALID_OLIVE, Olive_Ball_R
# 411 "data/maps/VisitorCenter/scripts.pory"
	setvar VAR_TEMP_7, 15
	goto VisCen_BallPick_29

VisCen_BallPick_32:
# 413 "data/maps/VisitorCenter/scripts.pory"
	applymovement LOCALID_OLIVE, Olive_Ball_L
# 414 "data/maps/VisitorCenter/scripts.pory"
	setvar VAR_TEMP_7, 13
	goto VisCen_BallPick_29

VisCen_BallPick_33:
# 416 "data/maps/VisitorCenter/scripts.pory"
	applymovement LOCALID_OLIVE, Olive_Ball_M
# 417 "data/maps/VisitorCenter/scripts.pory"
	setvar VAR_TEMP_7, 14
	goto VisCen_BallPick_29

VisCen_BallPick_34:
# 464 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_BallPick_Text_12
# 471 "data/maps/VisitorCenter/scripts.pory"
	setflag FLAG_TEMP_5
	goto VisCen_BallPick_6

VisCen_BallPick_38:
# 484 "data/maps/VisitorCenter/scripts.pory"
	switch VAR_STARTER_MON
# 486 "data/maps/VisitorCenter/scripts.pory"
	case 0, VisCen_BallPick_43
# 487 "data/maps/VisitorCenter/scripts.pory"
	case 1, VisCen_BallPick_43
# 492 "data/maps/VisitorCenter/scripts.pory"
	case 2, VisCen_BallPick_44
VisCen_BallPick_41:
# 501 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_BallPick_Text_14
# 503 "data/maps/VisitorCenter/scripts.pory"
	closemessage
# 504 "data/maps/VisitorCenter/scripts.pory"
	applymovement LOCALID_PROF, Common_Movement_WalkInPlaceDown
# 505 "data/maps/VisitorCenter/scripts.pory"
	waitmovement 0
# 506 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_BallPick_Text_15
# 509 "data/maps/VisitorCenter/scripts.pory"
	setvar VAR_VISCEN_STATE, 0x10
# 510 "data/maps/VisitorCenter/scripts.pory"
	setvar VAR_TEMP_8, LOCALID_LIAM
	goto VisCen_BallPick_37

VisCen_BallPick_43:
# 488 "data/maps/VisitorCenter/scripts.pory"
	applymovement LOCALID_LIAM, Common_Movement_WalkInPlaceLeft
# 489 "data/maps/VisitorCenter/scripts.pory"
	waitmovement LOCALID_LIAM
# 490 "data/maps/VisitorCenter/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
	goto VisCen_BallPick_41

VisCen_BallPick_44:
# 493 "data/maps/VisitorCenter/scripts.pory"
	applymovement LOCALID_OLIVE, Olive_ChoiceA_P3
# 494 "data/maps/VisitorCenter/scripts.pory"
	applymovement LOCALID_LIAM, Liam_ChoiceA_P3
# 495 "data/maps/VisitorCenter/scripts.pory"
	waitmovement LOCALID_LIAM
# 496 "data/maps/VisitorCenter/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
	goto VisCen_BallPick_41

VisCen_BallPick_47:
# 517 "data/maps/VisitorCenter/scripts.pory"
	applymovement LOCALID_LIAM, Liam_ChoiceB_P1
# 518 "data/maps/VisitorCenter/scripts.pory"
	applymovement LOCALID_OLIVE, Olive_ChoiceB_P1
# 519 "data/maps/VisitorCenter/scripts.pory"
	waitmovement LOCALID_OLIVE
# 520 "data/maps/VisitorCenter/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
	goto VisCen_BallPick_45

VisCen_BallPick_48:
# 523 "data/maps/VisitorCenter/scripts.pory"
	applymovement LOCALID_OLIVE, Common_Movement_WalkInPlaceRight
# 524 "data/maps/VisitorCenter/scripts.pory"
	waitmovement LOCALID_OLIVE
# 525 "data/maps/VisitorCenter/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
	goto VisCen_BallPick_45

VisCen_BallPick_49:
# 528 "data/maps/VisitorCenter/scripts.pory"
	applymovement LOCALID_LIAM, Liam_ChoiceB_P3
# 529 "data/maps/VisitorCenter/scripts.pory"
	applymovement LOCALID_OLIVE, Olive_ChoiceB_P3
# 530 "data/maps/VisitorCenter/scripts.pory"
	waitmovement LOCALID_OLIVE
# 531 "data/maps/VisitorCenter/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
	goto VisCen_BallPick_45


Battle_Transition:
# 560 "data/maps/VisitorCenter/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 564 "data/maps/VisitorCenter/scripts.pory"
	lockall
# 567 "data/maps/VisitorCenter/scripts.pory"
	setobjectxy LOCALID_KO, 5, 7
# 568 "data/maps/VisitorCenter/scripts.pory"
	setobjectxy LOCALID_OYA, 5, 8
# 569 "data/maps/VisitorCenter/scripts.pory"
	setobjectxy LOCALID_KANOJO, 6, 10
# 570 "data/maps/VisitorCenter/scripts.pory"
	setobjectxy LOCALID_KARESHI, 7, 11
# 571 "data/maps/VisitorCenter/scripts.pory"
	setobjectxy LOCALID_LADY, 11, 11
# 572 "data/maps/VisitorCenter/scripts.pory"
	setobjectxy LOCALID_GRAMPS, 12, 10
# 573 "data/maps/VisitorCenter/scripts.pory"
	setobjectxy LOCALID_LASS, 13, 9
# 574 "data/maps/VisitorCenter/scripts.pory"
	applymovement LOCALID_LASS, Common_Movement_FaceRight
# 575 "data/maps/VisitorCenter/scripts.pory"
	applymovement LOCALID_GRAMPS, Common_Movement_FaceLeft
# 578 "data/maps/VisitorCenter/scripts.pory"
	setobjectxy LOCALID_LIAM, 8, 6
# 579 "data/maps/VisitorCenter/scripts.pory"
	setobjectxy LOCALID_OLIVE, 8 + 1 + 1, 6
# 580 "data/maps/VisitorCenter/scripts.pory"
	setobjectxy LOCALID_PROF, 8 + 1, 6
# 584 "data/maps/VisitorCenter/scripts.pory"
	call VisCen_Player_Realign
# 585 "data/maps/VisitorCenter/scripts.pory"
	setobjectxy VAR_TEMP_8, 10, 9
# 588 "data/maps/VisitorCenter/scripts.pory"
	applymovement LOCALID_LIAM, Common_Movement_FaceDown
# 589 "data/maps/VisitorCenter/scripts.pory"
	applymovement LOCALID_OLIVE, Common_Movement_FaceDown
# 590 "data/maps/VisitorCenter/scripts.pory"
	applymovement LOCALID_PROF, Common_Movement_FaceDown
# 591 "data/maps/VisitorCenter/scripts.pory"
	call HeadsUp
# 593 "data/maps/VisitorCenter/scripts.pory"
	applymovement VAR_TEMP_8, Common_Movement_FaceLeft
# 594 "data/maps/VisitorCenter/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 595 "data/maps/VisitorCenter/scripts.pory"
	waitmovement 0
# 598 "data/maps/VisitorCenter/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 601 "data/maps/VisitorCenter/scripts.pory"
	switch VAR_TEMP_8
# 603 "data/maps/VisitorCenter/scripts.pory"
	case LOCALID_LIAM, Battle_Transition_2
# 616 "data/maps/VisitorCenter/scripts.pory"
	case LOCALID_OLIVE, Battle_Transition_3
# 630 "data/maps/VisitorCenter/scripts.pory"
	trainerbattle_no_whiteout TRAINER_VISCEN_SEQUOIA, Battle_Transition_Text_0, Battle_Transition_Text_1, Battle_Transition_Text_1, VisCen_Prof_PostBattle
	return

Battle_Transition_2:
# 604 "data/maps/VisitorCenter/scripts.pory"
	switch VAR_STARTER_MON
# 606 "data/maps/VisitorCenter/scripts.pory"
	case 0, Battle_Transition_6
# 609 "data/maps/VisitorCenter/scripts.pory"
	case 1, Battle_Transition_7
# 612 "data/maps/VisitorCenter/scripts.pory"
	case 2, Battle_Transition_8
	return

Battle_Transition_3:
# 617 "data/maps/VisitorCenter/scripts.pory"
	switch VAR_STARTER_MON
# 619 "data/maps/VisitorCenter/scripts.pory"
	case 0, Battle_Transition_10
# 622 "data/maps/VisitorCenter/scripts.pory"
	case 1, Battle_Transition_11
# 625 "data/maps/VisitorCenter/scripts.pory"
	case 2, Battle_Transition_12
	return

Battle_Transition_6:
# 607 "data/maps/VisitorCenter/scripts.pory"
	trainerbattle_no_whiteout TRAINER_VISCEN_LIAM_FIR, VisCen_Liam_Intro, VisCen_Liam_Loss, VisCen_Liam_Loss, VisCen_Liam_PostBattle
	return

Battle_Transition_7:
# 610 "data/maps/VisitorCenter/scripts.pory"
	trainerbattle_no_whiteout TRAINER_VISCEN_LIAM_WTR, VisCen_Liam_Intro, VisCen_Liam_Loss, VisCen_Liam_Loss, VisCen_Liam_PostBattle
	return

Battle_Transition_8:
# 613 "data/maps/VisitorCenter/scripts.pory"
	trainerbattle_no_whiteout TRAINER_VISCEN_LIAM_GRS, VisCen_Liam_Intro, VisCen_Liam_Loss, VisCen_Liam_Loss, VisCen_Liam_PostBattle
	return

Battle_Transition_10:
# 620 "data/maps/VisitorCenter/scripts.pory"
	trainerbattle_no_whiteout TRAINER_VISCEN_OLIVE_WTR, VisCen_Olive_Intro, VisCen_Olive_Loss, VisCen_Olive_Loss, VisCen_Olive_PostBattle
	return

Battle_Transition_11:
# 623 "data/maps/VisitorCenter/scripts.pory"
	trainerbattle_no_whiteout TRAINER_VISCEN_OLIVE_GRS, VisCen_Olive_Intro, VisCen_Olive_Loss, VisCen_Olive_Loss, VisCen_Olive_PostBattle
	return

Battle_Transition_12:
# 626 "data/maps/VisitorCenter/scripts.pory"
	trainerbattle_no_whiteout TRAINER_VISCEN_OLIVE_FIR, VisCen_Olive_Intro, VisCen_Olive_Loss, VisCen_Olive_Loss, VisCen_Olive_PostBattle
	return


VisCen_Player_Realign:
# 659 "data/maps/VisitorCenter/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 660 "data/maps/VisitorCenter/scripts.pory"
	compare VAR_TEMP_0, 8
	goto_if_lt VisCen_Player_Realign_2
VisCen_Player_Realign_8:
# 670 "data/maps/VisitorCenter/scripts.pory"
	compare VAR_TEMP_0, 8
	goto_if_gt VisCen_Player_Realign_9
VisCen_Player_Realign_1:
# 678 "data/maps/VisitorCenter/scripts.pory"
	compare VAR_TEMP_1, 9
	goto_if_gt VisCen_Player_Realign_5
VisCen_Player_Realign_11:
# 688 "data/maps/VisitorCenter/scripts.pory"
	compare VAR_TEMP_1, 9
	goto_if_lt VisCen_Player_Realign_12
	return

VisCen_Player_Realign_2:
# 664 "data/maps/VisitorCenter/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRightFaster
# 665 "data/maps/VisitorCenter/scripts.pory"
	waitmovement 0
	goto VisCen_Player_Realign_1

VisCen_Player_Realign_5:
# 682 "data/maps/VisitorCenter/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUpFaster
# 683 "data/maps/VisitorCenter/scripts.pory"
	waitmovement 0
	return

VisCen_Player_Realign_9:
# 672 "data/maps/VisitorCenter/scripts.pory"
	subvar VAR_TEMP_0, 1
# 673 "data/maps/VisitorCenter/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeftFaster
# 674 "data/maps/VisitorCenter/scripts.pory"
	waitmovement 0
	goto VisCen_Player_Realign_8

VisCen_Player_Realign_12:
# 690 "data/maps/VisitorCenter/scripts.pory"
	addvar VAR_TEMP_1, 1
# 691 "data/maps/VisitorCenter/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDownFaster
# 692 "data/maps/VisitorCenter/scripts.pory"
	waitmovement 0
	goto VisCen_Player_Realign_11


VisCen_Liam_PostBattle:
# 699 "data/maps/VisitorCenter/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 700 "data/maps/VisitorCenter/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq VisCen_Liam_PostBattle_2
# 708 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_Liam_PostBattle_Text_1
VisCen_Liam_PostBattle_1:
# 710 "data/maps/VisitorCenter/scripts.pory"
	goto VisCen_Rivals_PostBattle
	return

VisCen_Liam_PostBattle_2:
# 702 "data/maps/VisitorCenter/scripts.pory"
	addvar VAR_VISCEN_STATE, 1
# 703 "data/maps/VisitorCenter/scripts.pory"
	call RivalLink_Add_Liam
# 704 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_Liam_PostBattle_Text_0
	goto VisCen_Liam_PostBattle_1


VisCen_Olive_PostBattle:
# 714 "data/maps/VisitorCenter/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 715 "data/maps/VisitorCenter/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq VisCen_Olive_PostBattle_2
VisCen_Olive_PostBattle_1:
# 719 "data/maps/VisitorCenter/scripts.pory"
	call RivalLink_Add_Olive
# 720 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_Olive_PostBattle_Text_0
# 721 "data/maps/VisitorCenter/scripts.pory"
	goto VisCen_Rivals_PostBattle
	return

VisCen_Olive_PostBattle_2:
# 717 "data/maps/VisitorCenter/scripts.pory"
	addvar VAR_VISCEN_STATE, 1
	goto VisCen_Olive_PostBattle_1


VisCen_Rivals_PostBattle:
# 725 "data/maps/VisitorCenter/scripts.pory"
	applymovement LOCALID_PROF, Common_Movement_WalkInPlaceDown
# 726 "data/maps/VisitorCenter/scripts.pory"
	waitmovement 0
# 727 "data/maps/VisitorCenter/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 728 "data/maps/VisitorCenter/scripts.pory"
	applymovement VAR_TEMP_8, Common_Movement_FaceUp
# 729 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_Rivals_PostBattle_Text_0
# 732 "data/maps/VisitorCenter/scripts.pory"
	closemessage
# 733 "data/maps/VisitorCenter/scripts.pory"
	compare VAR_TEMP_8, LOCALID_OLIVE
	goto_if_eq VisCen_Rivals_PostBattle_2
# 741 "data/maps/VisitorCenter/scripts.pory"
	applymovement LOCALID_PROF, Prof_Walk_1_2
VisCen_Rivals_PostBattle_1:
# 743 "data/maps/VisitorCenter/scripts.pory"
	waitmovement LOCALID_PROF
# 744 "data/maps/VisitorCenter/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 747 "data/maps/VisitorCenter/scripts.pory"
	applymovement LOCALID_PROF, Prof_Walk_2
# 748 "data/maps/VisitorCenter/scripts.pory"
	waitmovement LOCALID_PROF
# 749 "data/maps/VisitorCenter/scripts.pory"
	applymovement VAR_TEMP_8, Common_Movement_WalkInPlaceUp
# 752 "data/maps/VisitorCenter/scripts.pory"
	applymovement LOCALID_PROF, Prof_Walk_3
# 753 "data/maps/VisitorCenter/scripts.pory"
	waitmovement LOCALID_PROF
# 754 "data/maps/VisitorCenter/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 755 "data/maps/VisitorCenter/scripts.pory"
	waitmovement 0
# 756 "data/maps/VisitorCenter/scripts.pory"
	delay 16
# 758 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_Rivals_PostBattle_Text_1
# 759 "data/maps/VisitorCenter/scripts.pory"
	goto VisCen_Closing_Event
	return

VisCen_Rivals_PostBattle_2:
# 736 "data/maps/VisitorCenter/scripts.pory"
	applymovement LOCALID_PROF, Prof_Walk_1_1
	goto VisCen_Rivals_PostBattle_1


VisCen_Prof_PostBattle:
# 763 "data/maps/VisitorCenter/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 764 "data/maps/VisitorCenter/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq VisCen_Prof_PostBattle_2
# 772 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_Prof_PostBattle_Text_1
VisCen_Prof_PostBattle_1:
# 776 "data/maps/VisitorCenter/scripts.pory"
	closemessage
# 777 "data/maps/VisitorCenter/scripts.pory"
	applymovement LOCALID_PROF, Common_Movement_WalkLeft
# 778 "data/maps/VisitorCenter/scripts.pory"
	waitmovement 0
# 779 "data/maps/VisitorCenter/scripts.pory"
	delay 16
# 781 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_Prof_PostBattle_Text_2
# 783 "data/maps/VisitorCenter/scripts.pory"
	goto VisCen_Closing_Event
	return

VisCen_Prof_PostBattle_2:
# 766 "data/maps/VisitorCenter/scripts.pory"
	addvar VAR_VISCEN_STATE, 1
# 767 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_Prof_PostBattle_Text_0
	goto VisCen_Prof_PostBattle_1


VisCen_Closing_Event:
# 788 "data/maps/VisitorCenter/scripts.pory"
	special HealPlayerParty
# 790 "data/maps/VisitorCenter/scripts.pory"
	playfanfare MUS_OBTAIN_TMHM
# 791 "data/maps/VisitorCenter/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 792 "data/maps/VisitorCenter/scripts.pory"
	msgbox Prof_DexText
# 793 "data/maps/VisitorCenter/scripts.pory"
	waitfanfare
# 796 "data/maps/VisitorCenter/scripts.pory"
	compare VAR_TEMP_8, LOCALID_PROF
	goto_if_ne VisCen_Closing_Event_2
# 802 "data/maps/VisitorCenter/scripts.pory"
	applymovement LOCALID_PROF, Prof_Center_2
VisCen_Closing_Event_1:
# 804 "data/maps/VisitorCenter/scripts.pory"
	waitmovement 0
# 805 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_Closing_Event_Text_0
# 806 "data/maps/VisitorCenter/scripts.pory"
	closemessage
# 807 "data/maps/VisitorCenter/scripts.pory"
	applymovement LOCALID_PROF, Common_Movement_WalkDown
# 808 "data/maps/VisitorCenter/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 809 "data/maps/VisitorCenter/scripts.pory"
	waitmovement 0
# 810 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_Closing_Event_Text_1
# 814 "data/maps/VisitorCenter/scripts.pory"
	applymovement LOCALID_PROF, Common_Movement_WalkInPlaceUp
# 815 "data/maps/VisitorCenter/scripts.pory"
	waitmovement 0
# 816 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_Closing_Event_Text_2
# 818 "data/maps/VisitorCenter/scripts.pory"
	applymovement LOCALID_PROF, Common_Movement_WalkInPlaceLeft
# 819 "data/maps/VisitorCenter/scripts.pory"
	waitmovement 0
# 820 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_Closing_Event_Text_3
# 821 "data/maps/VisitorCenter/scripts.pory"
	closemessage
# 824 "data/maps/VisitorCenter/scripts.pory"
	playse SE_DING_DONG
# 825 "data/maps/VisitorCenter/scripts.pory"
	waitse
# 826 "data/maps/VisitorCenter/scripts.pory"
	delay 32
# 828 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_Closing_Event_Text_4
# 830 "data/maps/VisitorCenter/scripts.pory"
	closemessage
# 832 "data/maps/VisitorCenter/scripts.pory"
	call Prof_Hop
# 834 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_Closing_Event_Text_5
# 839 "data/maps/VisitorCenter/scripts.pory"
	warp MAP_VISITOR_CENTER, 0xFF, 8, 8
# 840 "data/maps/VisitorCenter/scripts.pory"
	waitstate
# 841 "data/maps/VisitorCenter/scripts.pory"
	releaseall
	end

VisCen_Closing_Event_2:
# 798 "data/maps/VisitorCenter/scripts.pory"
	applymovement LOCALID_PROF, Prof_Center_1
	goto VisCen_Closing_Event_1


VisCen_AreaSign::
# 854 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_AreaSign_Text_0, MSGBOX_SIGN
	end


VisCen_ExitSign::
# 861 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_ExitSign_Text_0, MSGBOX_SIGN
	end


VisCen_FenceSign::
# 868 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_FenceSign_Text_0, MSGBOX_SIGN
	end


VisCen_MisplacedBush::
# 874 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_MisplacedBush_Text_0, MSGBOX_NPC
	end


VisCen_Professor::
# 884 "data/maps/VisitorCenter/scripts.pory"
	goto_if_unset FLAG_TEMP_5, VisCen_Professor_2
# 892 "data/maps/VisitorCenter/scripts.pory"
	lock
# 893 "data/maps/VisitorCenter/scripts.pory"
	faceplayer
# 894 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_Professor_Text_1, MSGBOX_YESNO
# 897 "data/maps/VisitorCenter/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq VisCen_Professor_5
# 936 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_Professor_Text_6, MSGBOX_AUTOCLOSE
VisCen_Professor_1:
	end

VisCen_Professor_2:
# 886 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_Professor_Text_0, MSGBOX_NPC
	goto VisCen_Professor_1

VisCen_Professor_5:
# 899 "data/maps/VisitorCenter/scripts.pory"
	goto_if_set FLAG_TEMP_2, VisCen_Professor_12
VisCen_Professor_11:
# 918 "data/maps/VisitorCenter/scripts.pory"
	goto_if_unset FLAG_TEMP_4, VisCen_Professor_9
# 929 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_Professor_Text_5, MSGBOX_AUTOCLOSE
	goto VisCen_Professor_1

VisCen_Professor_8:
# 901 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_Professor_Text_2
# 904 "data/maps/VisitorCenter/scripts.pory"
	closemessage
# 905 "data/maps/VisitorCenter/scripts.pory"
	applymovement LOCALID_PROF, Common_Movement_WalkInPlaceDown
# 906 "data/maps/VisitorCenter/scripts.pory"
	waitmovement 0
# 907 "data/maps/VisitorCenter/scripts.pory"
	applymovement LOCALID_LIAM, Common_Movement_FaceUp
# 908 "data/maps/VisitorCenter/scripts.pory"
	applymovement LOCALID_OLIVE, Common_Movement_FaceUp
# 909 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_Professor_Text_3, MSGBOX_AUTOCLOSE
# 913 "data/maps/VisitorCenter/scripts.pory"
	setvar VAR_TEMP_8, LOCALID_PROF
# 914 "data/maps/VisitorCenter/scripts.pory"
	setvar VAR_VISCEN_STATE, 0x30
# 916 "data/maps/VisitorCenter/scripts.pory"
	goto Battle_Transition
	goto VisCen_Professor_1

VisCen_Professor_9:
# 920 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_Professor_Text_4, MSGBOX_AUTOCLOSE
# 925 "data/maps/VisitorCenter/scripts.pory"
	setflag FLAG_TEMP_4
	goto VisCen_Professor_1

VisCen_Professor_12:
# 899 "data/maps/VisitorCenter/scripts.pory"
	goto_if_set FLAG_TEMP_3, VisCen_Professor_8
	goto VisCen_Professor_11


Prof_Hop:
# 945 "data/maps/VisitorCenter/scripts.pory"
	playse SE_LEDGE
# 946 "data/maps/VisitorCenter/scripts.pory"
	applymovement LOCALID_PROF, Common_Movement_HopDown
# 947 "data/maps/VisitorCenter/scripts.pory"
	waitmovement LOCALID_PROF
	return


VisCen_Liam::
# 952 "data/maps/VisitorCenter/scripts.pory"
	setspeaker SP_NAME_BOY
# 954 "data/maps/VisitorCenter/scripts.pory"
	goto_if_unset FLAG_TEMP_1, VisCen_Liam_2
# 962 "data/maps/VisitorCenter/scripts.pory"
	goto_if_unset FLAG_TEMP_5, VisCen_Liam_3
# 970 "data/maps/VisitorCenter/scripts.pory"
	lock
# 971 "data/maps/VisitorCenter/scripts.pory"
	faceplayer
# 972 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_Liam_Text_2, MSGBOX_YESNO
# 975 "data/maps/VisitorCenter/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq VisCen_Liam_8
# 986 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_Liam_Text_3
# 987 "data/maps/VisitorCenter/scripts.pory"
	setflag FLAG_TEMP_2
VisCen_Liam_7:
# 989 "data/maps/VisitorCenter/scripts.pory"
	release
VisCen_Liam_1:
	end

VisCen_Liam_2:
# 956 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_Liam_Text_0, MSGBOX_NPC
# 959 "data/maps/VisitorCenter/scripts.pory"
	applymovement LOCALID_LIAM, Common_Movement_FaceUp
# 960 "data/maps/VisitorCenter/scripts.pory"
	waitmovement 0
	goto VisCen_Liam_1

VisCen_Liam_3:
# 964 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_Liam_Text_1, MSGBOX_NPC
	goto VisCen_Liam_1

VisCen_Liam_8:
# 978 "data/maps/VisitorCenter/scripts.pory"
	setvar VAR_VISCEN_STATE, 0x10
# 979 "data/maps/VisitorCenter/scripts.pory"
	setvar VAR_TEMP_8, LOCALID_LIAM
# 980 "data/maps/VisitorCenter/scripts.pory"
	call RivalLink_Add_Liam
# 982 "data/maps/VisitorCenter/scripts.pory"
	goto Battle_Transition
	goto VisCen_Liam_7


VisCen_Olive::
# 996 "data/maps/VisitorCenter/scripts.pory"
	setspeaker SP_NAME_GIRL
# 998 "data/maps/VisitorCenter/scripts.pory"
	goto_if_unset FLAG_TEMP_1, VisCen_Olive_2
# 1006 "data/maps/VisitorCenter/scripts.pory"
	goto_if_unset FLAG_TEMP_5, VisCen_Olive_3
# 1014 "data/maps/VisitorCenter/scripts.pory"
	lock
# 1015 "data/maps/VisitorCenter/scripts.pory"
	faceplayer
# 1016 "data/maps/VisitorCenter/scripts.pory"
	bufferspeciesname 2, VAR_TEMP_6
# 1017 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_Olive_Text_2, MSGBOX_YESNO
# 1020 "data/maps/VisitorCenter/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq VisCen_Olive_8
# 1031 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_Olive_Text_3
# 1032 "data/maps/VisitorCenter/scripts.pory"
	setflag FLAG_TEMP_3
VisCen_Olive_7:
# 1034 "data/maps/VisitorCenter/scripts.pory"
	release
VisCen_Olive_1:
	end

VisCen_Olive_2:
# 1000 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_Olive_Text_0, MSGBOX_NPC
# 1003 "data/maps/VisitorCenter/scripts.pory"
	applymovement LOCALID_OLIVE, Common_Movement_FaceUp
# 1004 "data/maps/VisitorCenter/scripts.pory"
	waitmovement 0
	goto VisCen_Olive_1

VisCen_Olive_3:
# 1008 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_Olive_Text_1, MSGBOX_NPC
	goto VisCen_Olive_1

VisCen_Olive_8:
# 1023 "data/maps/VisitorCenter/scripts.pory"
	setvar VAR_VISCEN_STATE, 0x20
# 1024 "data/maps/VisitorCenter/scripts.pory"
	setvar VAR_TEMP_8, LOCALID_OLIVE
# 1025 "data/maps/VisitorCenter/scripts.pory"
	call RivalLink_Add_Olive
# 1027 "data/maps/VisitorCenter/scripts.pory"
	goto Battle_Transition
	goto VisCen_Olive_7


VisCen_Oyako::
# 1042 "data/maps/VisitorCenter/scripts.pory"
	lockall
# 1045 "data/maps/VisitorCenter/scripts.pory"
	applymovement LOCALID_OYA, Common_Movement_FaceUp
# 1046 "data/maps/VisitorCenter/scripts.pory"
	applymovement LOCALID_KO, Common_Movement_WalkInPlaceDown
# 1047 "data/maps/VisitorCenter/scripts.pory"
	waitmovement 0
# 1048 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_Oyako_Text_0
# 1049 "data/maps/VisitorCenter/scripts.pory"
	applymovement LOCALID_OYA, Common_Movement_WalkInPlaceUp
# 1050 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_Oyako_Text_1
# 1052 "data/maps/VisitorCenter/scripts.pory"
	releaseall
	end


VisCen_Employee::
# 1057 "data/maps/VisitorCenter/scripts.pory"
	goto_if_unset FLAG_SYS_POKEDEX_GET, VisCen_Employee_2
# 1064 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_Employee_Text_1, MSGBOX_NPC
VisCen_Employee_1:
	end

VisCen_Employee_2:
# 1059 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_Employee_Text_0, MSGBOX_NPC
	goto VisCen_Employee_1


VisCen_Riajuu::
# 1072 "data/maps/VisitorCenter/scripts.pory"
	lockall
# 1073 "data/maps/VisitorCenter/scripts.pory"
	applymovement LOCALID_KARESHI, Common_Movement_FaceLeft
# 1074 "data/maps/VisitorCenter/scripts.pory"
	applymovement LOCALID_KANOJO, Common_Movement_WalkInPlaceRight
# 1075 "data/maps/VisitorCenter/scripts.pory"
	waitmovement 0
# 1076 "data/maps/VisitorCenter/scripts.pory"
	goto_if_unset FLAG_TEMP_1, VisCen_Riajuu_2
# 1084 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_Riajuu_Text_2
# 1086 "data/maps/VisitorCenter/scripts.pory"
	applymovement LOCALID_KARESHI, Common_Movement_WalkInPlaceLeft
# 1087 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_Riajuu_Text_3
VisCen_Riajuu_1:
# 1089 "data/maps/VisitorCenter/scripts.pory"
	releaseall
	end

VisCen_Riajuu_2:
# 1078 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_Riajuu_Text_0
# 1079 "data/maps/VisitorCenter/scripts.pory"
	applymovement LOCALID_KARESHI, Common_Movement_WalkInPlaceLeft
# 1080 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_Riajuu_Text_1
	goto VisCen_Riajuu_1


VisCen_Beauty::
# 1095 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_Beauty_Text_0, MSGBOX_NPC
	end


VisCen_LassGramps::
# 1102 "data/maps/VisitorCenter/scripts.pory"
	lockall
# 1103 "data/maps/VisitorCenter/scripts.pory"
	applymovement LOCALID_GRAMPS, Common_Movement_FaceUp
# 1104 "data/maps/VisitorCenter/scripts.pory"
	applymovement LOCALID_LASS, Common_Movement_WalkInPlaceDown
# 1105 "data/maps/VisitorCenter/scripts.pory"
	waitmovement 0
# 1106 "data/maps/VisitorCenter/scripts.pory"
	goto_if_unset FLAG_TEMP_1, VisCen_LassGramps_2
# 1119 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_LassGramps_Text_4
# 1120 "data/maps/VisitorCenter/scripts.pory"
	applymovement LOCALID_GRAMPS, Common_Movement_WalkInPlaceUp
# 1121 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_LassGramps_Text_5
# 1123 "data/maps/VisitorCenter/scripts.pory"
	applymovement LOCALID_LASS, Common_Movement_WalkInPlaceDown
# 1124 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_LassGramps_Text_6
VisCen_LassGramps_1:
# 1126 "data/maps/VisitorCenter/scripts.pory"
	releaseall
	end

VisCen_LassGramps_2:
# 1108 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_LassGramps_Text_0
# 1109 "data/maps/VisitorCenter/scripts.pory"
	applymovement LOCALID_GRAMPS, Common_Movement_WalkInPlaceUp
# 1110 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_LassGramps_Text_1
# 1111 "data/maps/VisitorCenter/scripts.pory"
	applymovement LOCALID_LASS, Common_Movement_WalkInPlaceDown
# 1112 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_LassGramps_Text_2
# 1114 "data/maps/VisitorCenter/scripts.pory"
	applymovement LOCALID_GRAMPS, Common_Movement_WalkInPlaceUp
# 1115 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_LassGramps_Text_3
	goto VisCen_LassGramps_1


VisCen_TechnologyMan::
# 1131 "data/maps/VisitorCenter/scripts.pory"
	msgbox VisCen_TechnologyMan_Text_0, MSGBOX_NPC
	end


# 1158 "data/maps/VisitorCenter/scripts.pory"
Prof_WalkBehindBushes_1:
# 1160 "data/maps/VisitorCenter/scripts.pory"
	jump_in_place_down
# 1161 "data/maps/VisitorCenter/scripts.pory"
	delay_8
	step_end

# 1163 "data/maps/VisitorCenter/scripts.pory"
Prof_WalkBehindBushes_2:
# 1165 "data/maps/VisitorCenter/scripts.pory"
	walk_fast_left
# 1166 "data/maps/VisitorCenter/scripts.pory"
	walk_in_place_faster_down
	step_end

# 1169 "data/maps/VisitorCenter/scripts.pory"
Player_Ball_TopLeft:
# 1171 "data/maps/VisitorCenter/scripts.pory"
	walk_left
# 1172 "data/maps/VisitorCenter/scripts.pory"
	walk_down
# 1172 "data/maps/VisitorCenter/scripts.pory"
	walk_down
# 1173 "data/maps/VisitorCenter/scripts.pory"
	walk_right
# 1174 "data/maps/VisitorCenter/scripts.pory"
	face_up
	step_end

# 1176 "data/maps/VisitorCenter/scripts.pory"
Player_Ball_Left:
# 1178 "data/maps/VisitorCenter/scripts.pory"
	walk_down
# 1179 "data/maps/VisitorCenter/scripts.pory"
	walk_right
# 1180 "data/maps/VisitorCenter/scripts.pory"
	face_up
	step_end

# 1182 "data/maps/VisitorCenter/scripts.pory"
Player_Ball_TopRight:
# 1184 "data/maps/VisitorCenter/scripts.pory"
	walk_right
# 1185 "data/maps/VisitorCenter/scripts.pory"
	walk_down
# 1185 "data/maps/VisitorCenter/scripts.pory"
	walk_down
# 1186 "data/maps/VisitorCenter/scripts.pory"
	walk_left
# 1187 "data/maps/VisitorCenter/scripts.pory"
	face_up
	step_end

# 1189 "data/maps/VisitorCenter/scripts.pory"
Player_Ball_Right:
# 1191 "data/maps/VisitorCenter/scripts.pory"
	walk_down
# 1192 "data/maps/VisitorCenter/scripts.pory"
	walk_left
# 1193 "data/maps/VisitorCenter/scripts.pory"
	face_up
	step_end

# 1197 "data/maps/VisitorCenter/scripts.pory"
Liam_Ball_L:
# 1199 "data/maps/VisitorCenter/scripts.pory"
	walk_fast_up
# 1199 "data/maps/VisitorCenter/scripts.pory"
	walk_fast_up
# 1200 "data/maps/VisitorCenter/scripts.pory"
	walk_fast_right
# 1201 "data/maps/VisitorCenter/scripts.pory"
	walk_in_place_faster_up
	step_end

# 1203 "data/maps/VisitorCenter/scripts.pory"
Liam_Ball_M:
# 1205 "data/maps/VisitorCenter/scripts.pory"
	walk_fast_up
# 1206 "data/maps/VisitorCenter/scripts.pory"
	walk_fast_right
# 1206 "data/maps/VisitorCenter/scripts.pory"
	walk_fast_right
# 1207 "data/maps/VisitorCenter/scripts.pory"
	walk_fast_up
	step_end

# 1209 "data/maps/VisitorCenter/scripts.pory"
Liam_Ball_R:
# 1211 "data/maps/VisitorCenter/scripts.pory"
	walk_fast_up
# 1212 "data/maps/VisitorCenter/scripts.pory"
	walk_fast_right
# 1212 "data/maps/VisitorCenter/scripts.pory"
	walk_fast_right
# 1212 "data/maps/VisitorCenter/scripts.pory"
	walk_fast_right
# 1213 "data/maps/VisitorCenter/scripts.pory"
	walk_fast_up
	step_end

# 1216 "data/maps/VisitorCenter/scripts.pory"
Olive_Ball_L:
# 1218 "data/maps/VisitorCenter/scripts.pory"
	walk_up
# 1219 "data/maps/VisitorCenter/scripts.pory"
	walk_in_place_left
# 1220 "data/maps/VisitorCenter/scripts.pory"
	walk_left
# 1220 "data/maps/VisitorCenter/scripts.pory"
	walk_left
# 1220 "data/maps/VisitorCenter/scripts.pory"
	walk_left
# 1221 "data/maps/VisitorCenter/scripts.pory"
	walk_up
	step_end

# 1223 "data/maps/VisitorCenter/scripts.pory"
Olive_Ball_M:
# 1225 "data/maps/VisitorCenter/scripts.pory"
	walk_up
# 1226 "data/maps/VisitorCenter/scripts.pory"
	walk_in_place_left
# 1227 "data/maps/VisitorCenter/scripts.pory"
	walk_left
# 1227 "data/maps/VisitorCenter/scripts.pory"
	walk_left
# 1228 "data/maps/VisitorCenter/scripts.pory"
	walk_up
	step_end

# 1230 "data/maps/VisitorCenter/scripts.pory"
Olive_Ball_R:
# 1232 "data/maps/VisitorCenter/scripts.pory"
	walk_up
# 1232 "data/maps/VisitorCenter/scripts.pory"
	walk_up
# 1233 "data/maps/VisitorCenter/scripts.pory"
	walk_in_place_left
# 1234 "data/maps/VisitorCenter/scripts.pory"
	walk_left
# 1235 "data/maps/VisitorCenter/scripts.pory"
	walk_in_place_faster_up
	step_end

# 1259 "data/maps/VisitorCenter/scripts.pory"
Liam_ChoiceA_P3:
# 1261 "data/maps/VisitorCenter/scripts.pory"
	walk_in_place_right
# 1262 "data/maps/VisitorCenter/scripts.pory"
	delay_8
# 1262 "data/maps/VisitorCenter/scripts.pory"
	delay_8
# 1262 "data/maps/VisitorCenter/scripts.pory"
	delay_8
# 1262 "data/maps/VisitorCenter/scripts.pory"
	delay_8
# 1262 "data/maps/VisitorCenter/scripts.pory"
	delay_8
# 1262 "data/maps/VisitorCenter/scripts.pory"
	delay_8
# 1262 "data/maps/VisitorCenter/scripts.pory"
	delay_8
# 1262 "data/maps/VisitorCenter/scripts.pory"
	delay_8
# 1263 "data/maps/VisitorCenter/scripts.pory"
	walk_right
# 1264 "data/maps/VisitorCenter/scripts.pory"
	delay_8
	step_end

# 1266 "data/maps/VisitorCenter/scripts.pory"
Olive_ChoiceA_P3:
# 1268 "data/maps/VisitorCenter/scripts.pory"
	delay_8
# 1268 "data/maps/VisitorCenter/scripts.pory"
	delay_8
# 1269 "data/maps/VisitorCenter/scripts.pory"
	face_left
# 1270 "data/maps/VisitorCenter/scripts.pory"
	delay_8
# 1270 "data/maps/VisitorCenter/scripts.pory"
	delay_8
# 1270 "data/maps/VisitorCenter/scripts.pory"
	delay_8
# 1270 "data/maps/VisitorCenter/scripts.pory"
	delay_8
# 1271 "data/maps/VisitorCenter/scripts.pory"
	walk_down
# 1272 "data/maps/VisitorCenter/scripts.pory"
	face_up
	step_end

# 1279 "data/maps/VisitorCenter/scripts.pory"
Liam_ChoiceB_P1:
# 1281 "data/maps/VisitorCenter/scripts.pory"
	delay_8
# 1281 "data/maps/VisitorCenter/scripts.pory"
	delay_8
# 1282 "data/maps/VisitorCenter/scripts.pory"
	walk_down
# 1283 "data/maps/VisitorCenter/scripts.pory"
	walk_left
# 1283 "data/maps/VisitorCenter/scripts.pory"
	walk_left
	step_end

# 1285 "data/maps/VisitorCenter/scripts.pory"
Olive_ChoiceB_P1:
# 1287 "data/maps/VisitorCenter/scripts.pory"
	face_left
# 1288 "data/maps/VisitorCenter/scripts.pory"
	delay_8
# 1288 "data/maps/VisitorCenter/scripts.pory"
	delay_8
# 1288 "data/maps/VisitorCenter/scripts.pory"
	delay_8
# 1288 "data/maps/VisitorCenter/scripts.pory"
	delay_8
# 1289 "data/maps/VisitorCenter/scripts.pory"
	face_down
# 1290 "data/maps/VisitorCenter/scripts.pory"
	delay_8
# 1290 "data/maps/VisitorCenter/scripts.pory"
	delay_8
# 1290 "data/maps/VisitorCenter/scripts.pory"
	delay_8
# 1290 "data/maps/VisitorCenter/scripts.pory"
	delay_8
# 1290 "data/maps/VisitorCenter/scripts.pory"
	delay_8
# 1290 "data/maps/VisitorCenter/scripts.pory"
	delay_8
# 1291 "data/maps/VisitorCenter/scripts.pory"
	walk_left
# 1292 "data/maps/VisitorCenter/scripts.pory"
	delay_8
	step_end

# 1298 "data/maps/VisitorCenter/scripts.pory"
Liam_ChoiceB_P3:
# 1300 "data/maps/VisitorCenter/scripts.pory"
	delay_8
# 1300 "data/maps/VisitorCenter/scripts.pory"
	delay_8
# 1301 "data/maps/VisitorCenter/scripts.pory"
	face_left
	step_end

# 1303 "data/maps/VisitorCenter/scripts.pory"
Olive_ChoiceB_P3:
# 1305 "data/maps/VisitorCenter/scripts.pory"
	face_left
# 1306 "data/maps/VisitorCenter/scripts.pory"
	delay_8
# 1306 "data/maps/VisitorCenter/scripts.pory"
	delay_8
# 1306 "data/maps/VisitorCenter/scripts.pory"
	delay_8
# 1306 "data/maps/VisitorCenter/scripts.pory"
	delay_8
# 1306 "data/maps/VisitorCenter/scripts.pory"
	delay_8
# 1306 "data/maps/VisitorCenter/scripts.pory"
	delay_8
# 1307 "data/maps/VisitorCenter/scripts.pory"
	walk_in_place_right
# 1308 "data/maps/VisitorCenter/scripts.pory"
	delay_8
	step_end

# 1312 "data/maps/VisitorCenter/scripts.pory"
Prof_Walk_1_1:
# 1314 "data/maps/VisitorCenter/scripts.pory"
	walk_right
# 1314 "data/maps/VisitorCenter/scripts.pory"
	walk_right
# 1315 "data/maps/VisitorCenter/scripts.pory"
	walk_down
	step_end

# 1317 "data/maps/VisitorCenter/scripts.pory"
Prof_Walk_1_2:
# 1319 "data/maps/VisitorCenter/scripts.pory"
	walk_up
# 1320 "data/maps/VisitorCenter/scripts.pory"
	walk_right
# 1320 "data/maps/VisitorCenter/scripts.pory"
	walk_right
# 1321 "data/maps/VisitorCenter/scripts.pory"
	walk_down
# 1321 "data/maps/VisitorCenter/scripts.pory"
	walk_down
	step_end

# 1323 "data/maps/VisitorCenter/scripts.pory"
Prof_Walk_2:
# 1325 "data/maps/VisitorCenter/scripts.pory"
	walk_down
# 1326 "data/maps/VisitorCenter/scripts.pory"
	walk_left
# 1327 "data/maps/VisitorCenter/scripts.pory"
	walk_in_place_down
	step_end

# 1329 "data/maps/VisitorCenter/scripts.pory"
Prof_Walk_3:
# 1331 "data/maps/VisitorCenter/scripts.pory"
	delay_8
# 1331 "data/maps/VisitorCenter/scripts.pory"
	delay_8
# 1331 "data/maps/VisitorCenter/scripts.pory"
	delay_8
# 1331 "data/maps/VisitorCenter/scripts.pory"
	delay_8
# 1332 "data/maps/VisitorCenter/scripts.pory"
	walk_left
# 1332 "data/maps/VisitorCenter/scripts.pory"
	walk_left
# 1333 "data/maps/VisitorCenter/scripts.pory"
	walk_in_place_down
	step_end

# 1335 "data/maps/VisitorCenter/scripts.pory"
Prof_Center_1:
# 1337 "data/maps/VisitorCenter/scripts.pory"
	walk_fast_right
# 1338 "data/maps/VisitorCenter/scripts.pory"
	delay_8
# 1339 "data/maps/VisitorCenter/scripts.pory"
	walk_in_place_down
	step_end

# 1341 "data/maps/VisitorCenter/scripts.pory"
Prof_Center_2:
# 1343 "data/maps/VisitorCenter/scripts.pory"
	walk_in_place_faster_up
# 1344 "data/maps/VisitorCenter/scripts.pory"
	delay_8
# 1345 "data/maps/VisitorCenter/scripts.pory"
	walk_in_place_down
	step_end

VisCen_ExitBlock_Text_0:
# 110 "data/maps/VisitorCenter/scripts.pory"
	.string "{COLOR LIGHT_GRAY}{SHADOW WHITE}Can't leave Mom behind…$"

VisCen_RaffleStart_Text_0:
# 129 "data/maps/VisitorCenter/scripts.pory"
	.string "…And the 1st place winner, with the\n"
	.string "first pick of the three, is…$"

VisCen_RaffleStart_Text_1:
# 142 "data/maps/VisitorCenter/scripts.pory"
	.string "…This gal!!\n"
	.string "{FONT_SMALL}What was your name, kid…?\p"
	.string "{FONT_NORMAL}…{PLAYER}!\n"
	.string "Please, step up and claim your prize!$"

VisCen_RaffleStart_Text_2:
# 149 "data/maps/VisitorCenter/scripts.pory"
	.string "…This guy!!\n"
	.string "{FONT_SMALL}What was your name, kid…?\p"
	.string "{FONT_NORMAL}…{PLAYER}!\n"
	.string "Please, step up and claim your prize!$"

VisCen_RaffleStart_Text_3:
# 167 "data/maps/VisitorCenter/scripts.pory"
	.string "{SPEAKER NAME_UNKNOWN}W-wait a moment! This is a once in a\n"
	.string "lifetime chance!$"

VisCen_RaffleStart_Text_4:
# 171 "data/maps/VisitorCenter/scripts.pory"
	.string "{SPEAKER NAME_UNKNOWN}It's a free Pokémon!!\n"
	.string "For free, kid!$"

VisCen_RaffleStart_Text_5:
# 176 "data/maps/VisitorCenter/scripts.pory"
	.string "{SPEAKER NAME_UNKNOWN}You're old enough to start your own\n"
	.string "Pokémon Journey!\p"
	.string "Doesn't that sound exciting to you…?$"

VisCen_RaffleStart_Text_6:
# 181 "data/maps/VisitorCenter/scripts.pory"
	.string "{SPEAKER NAME_UNKNOWN}N-Need to check with your mother first,\n"
	.string "maybe?\p"
	.string "Don't worry, I'm sure she would be\n"
	.string "thrilled!$"

VisCen_RaffleStart_Text_7:
# 186 "data/maps/VisitorCenter/scripts.pory"
	.string "{SPEAKER NAME_UNKNOWN}{FONT_SMALL}Kid, please, no one else in this crowd\n"
	.string "will cut it!\p"
	.string "Even if it's just for show, I'm beggin'\n"
	.string "ya!$"

CrowdBlock_RivalEvent_Text_0:
# 222 "data/maps/VisitorCenter/scripts.pory"
	.string "{SPEAKER NAME_UNKNOWN}Hold on, kid! There's two willing\n"
	.string "opponents right here!!$"

VisCen_BallPick_Text_0:
# 271 "data/maps/VisitorCenter/scripts.pory"
	.string "Pretty cool, right?\p"
	.string "So what do you think? {COLOR GREEN}Grass type{COLOR DARK_GRAY}\n"
	.string "Pokémon suit you?$"

VisCen_BallPick_Text_1:
# 289 "data/maps/VisitorCenter/scripts.pory"
	.string "Feisty little one, huh?\p"
	.string "I get ya, so you've got your eye on {COLOR RED}Fire\n"
	.string "type{COLOR DARK_GRAY} Pokémon, that it?$"

VisCen_BallPick_Text_2:
# 309 "data/maps/VisitorCenter/scripts.pory"
	.string "A cute kid, that one!\p"
	.string "What do you say? Wanna give that {COLOR BLUE}Water\n"
	.string "type{COLOR DARK_GRAY} Pokémon a good home?$"

VisCen_BallPick_Text_3:
# 356 "data/maps/VisitorCenter/scripts.pory"
	.string "{SPEAKER NAME_UNKNOWN}Treat 'em well, alright?$"

VisCen_BallPick_Text_4:
# 362 "data/maps/VisitorCenter/scripts.pory"
	.string "{SPEAKER NAME_NONE}{PLAYER} received the {STR_VAR_1}\n"
	.string "from the Professor!$"

VisCen_BallPick_Text_5:
# 366 "data/maps/VisitorCenter/scripts.pory"
	.string "Do you want to give a nickname to this\n"
	.string "{STR_VAR_1}?$"

VisCen_BallPick_Text_6:
# 377 "data/maps/VisitorCenter/scripts.pory"
	.string "{SPEAKER NAME_UNKNOWN}Excellent choice by our big winner!\p"
	.string "Now, will winners Number 2 and 3 step up\n"
	.string "as well?$"

VisCen_BallPick_Text_7:
# 433 "data/maps/VisitorCenter/scripts.pory"
	.string "{SPEAKER NAME_UNKNOWN}So, what do you think of your new\n"
	.string "partners?\p"
	.string "Some rare choices, right? Wasn't easy\n"
	.string "to get a hold of 'em…$"

VisCen_BallPick_Text_8:
# 440 "data/maps/VisitorCenter/scripts.pory"
	.string "Partners, huh…? These Pokémon?$"

VisCen_BallPick_Text_9:
# 445 "data/maps/VisitorCenter/scripts.pory"
	.string "{SPEAKER NAME_UNKNOWN}That's right, your first Pokémon for a\n"
	.string "new journey!\p"
	.string "Much more exciting than some boring\n"
	.string "sightseeing, yeah?$"

VisCen_BallPick_Text_10:
# 452 "data/maps/VisitorCenter/scripts.pory"
	.string "I was rather looking forward to the\n"
	.string "sightseeing, actually…$"

VisCen_BallPick_Text_11:
# 458 "data/maps/VisitorCenter/scripts.pory"
	.string "{SPEAKER NAME_UNKNOWN}…But I can already see the excitement\n"
	.string "in your child eyes!\p"
	.string "You're itchin' to battle already, aren't\n"
	.string "ya {PLAYER}?$"

VisCen_BallPick_Text_12:
# 464 "data/maps/VisitorCenter/scripts.pory"
	.string "Of course you are!\n"
	.string "{FONT_SMALL}Thanks for the out.{FONT_NORMAL}\p"
	.string "What's an adventure without hardship?\n"
	.string "Without Rivals??\p"
	.string "Take hold of your destiny or whatever,\n"
	.string "kid! Who's your mark?$"

VisCen_BallPick_Text_13:
# 477 "data/maps/VisitorCenter/scripts.pory"
	.string "Hey, hey… just work with me a little,\n"
	.string "huh?\l"
	.string "{FONT_SMALL}You just got a gift.$"

VisCen_BallPick_Text_14:
# 501 "data/maps/VisitorCenter/scripts.pory"
	.string "{SPEAKER NAME_BOY}Getting cold feet?\p"
	.string "If you don't want your Pokémon, I can\n"
	.string "take care of it!$"

VisCen_BallPick_Text_15:
# 506 "data/maps/VisitorCenter/scripts.pory"
	.string "{SPEAKER NAME_UNKNOWN}Ooh, those are fighting words!\n"
	.string "You're not just gonna take that, right?$"

VisCen_BallPick_Text_16:
# 536 "data/maps/VisitorCenter/scripts.pory"
	.string "{SPEAKER NAME_GIRL}Well, it would be rude not to get to know\n"
	.string "each other, right?\p"
	.string "I think {STR_VAR_3} wants to play…$"

VisCen_BallPick_Text_17:
# 541 "data/maps/VisitorCenter/scripts.pory"
	.string "{SPEAKER NAME_UNKNOWN}That's right, you three are in it for the\n"
	.string "long haul now!\p"
	.string "Why don't you two come on over?$"

Battle_Transition_Text_0:
# 631 "data/maps/VisitorCenter/scripts.pory"
	.string "{SPEAKER NAME_UNKNOWN}Alright, everyone watching? You're\n"
	.string "lookin' at the new Champ in the making!\p"
	.string "{FONT_SMALL}Just put on a good show, kid.$"

Battle_Transition_Text_1:
# 633 "data/maps/VisitorCenter/scripts.pory"
	.string "Great, great. Good work.$"

VisCen_Liam_PostBattle_Text_0:
# 704 "data/maps/VisitorCenter/scripts.pory"
	.string "{SPEAKER NAME_LIAM}So you've got a head start, but we'll\n"
	.string "catch up!$"

VisCen_Liam_PostBattle_Text_1:
# 708 "data/maps/VisitorCenter/scripts.pory"
	.string "{SPEAKER NAME_LIAM}How was that? I'm pretty good at this,\n"
	.string "don't you think?$"

VisCen_Olive_PostBattle_Text_0:
# 720 "data/maps/VisitorCenter/scripts.pory"
	.string "{SPEAKER NAME_OLIVE}Thank you for the battle. I can tell our\n"
	.string "Pokémon had fun!$"

VisCen_Rivals_PostBattle_Text_0:
# 729 "data/maps/VisitorCenter/scripts.pory"
	.string "{SPEAKER NAME_UNKNOWN}You kids done?\p"
	.string "Su{PAUSE 8}per{PAUSE 8} fun,{PAUSE 8} right?\n"
	.string "Anyway, already told your other friend,\l"
	.string "but take these.$"

VisCen_Rivals_PostBattle_Text_1:
# 758 "data/maps/VisitorCenter/scripts.pory"
	.string "{SPEAKER NAME_UNKNOWN}Don't lose it, alright?$"

VisCen_Prof_PostBattle_Text_0:
# 767 "data/maps/VisitorCenter/scripts.pory"
	.string "{SPEAKER NAME_UNKNOWN}Alright, alright. Got that out of your\n"
	.string "system?\p"
	.string "Wasn't really in the script, but\n"
	.string "whatever gets you motivated.$"

VisCen_Prof_PostBattle_Text_1:
# 772 "data/maps/VisitorCenter/scripts.pory"
	.string "{SPEAKER NAME_UNKNOWN}…Er. You alright, kid?\p"
	.string "You gotta watch it, or your little guy's\n"
	.string "gonna hurt…\l"
	.string "{FONT_SMALL}You only get one, alright?$"

VisCen_Prof_PostBattle_Text_2:
# 781 "data/maps/VisitorCenter/scripts.pory"
	.string "{SPEAKER NAME_UNKNOWN}Here, go ahead and take this. Don't lose\n"
	.string "it, understand?$"

VisCen_Closing_Event_Text_0:
# 805 "data/maps/VisitorCenter/scripts.pory"
	.string "{SPEAKER NAME_UNKNOWN}It's a device that automatically stores\n"
	.string "data about Pokémon!$"

VisCen_Closing_Event_Text_1:
# 810 "data/maps/VisitorCenter/scripts.pory"
	.string "{SPEAKER NAME_UNKNOWN}That's right, it's the latest and\n"
	.string "greatest in Pokémon Trainer\l"
	.string "Technology!\p"
	.string "Well yeah, okay, maybe you've seen it\n"
	.string "before. Everyone's got one these days.\p"
	.string "But I won't be hearing anything about\n"
	.string "those Pokétch apps or whatever!\l"
	.string "This is complex technology, you know?$"

VisCen_Closing_Event_Text_2:
# 816 "data/maps/VisitorCenter/scripts.pory"
	.string "Now, just seeing Pokémon is fine, but\n"
	.string "you'll learn more by catching 'em.\p"
	.string "The tour guides here probably have\n"
	.string "Pokéballs for you…$"

VisCen_Closing_Event_Text_3:
# 820 "data/maps/VisitorCenter/scripts.pory"
	.string "Hm? Why can't I give you some?\l"
	.string "You're wringin' me dry here…$"

VisCen_Closing_Event_Text_4:
# 828 "data/maps/VisitorCenter/scripts.pory"
	.string "{COLOR GREEN}The tour will begin shortly.\p"
	.string "Please meet with your designated tour\n"
	.string "guide outside the center.$"

VisCen_Closing_Event_Text_5:
# 834 "data/maps/VisitorCenter/scripts.pory"
	.string "{SPEAKER NAME_UNKNOWN}Whoops, that's my cue.\p"
	.string "Remember you three, if anyone asks\n"
	.string "where you got these?\p"
	.string "{SPEAKER NAME_SEQUOIA}Let them know {COLOR BLUE}Professor Sequoia{COLOR DARK_GRAY}\n"
	.string "hooked you up, alright?\l"
	.string "I'll be seeing you around!$"

VisCen_AreaSign_Text_0:
# 854 "data/maps/VisitorCenter/scripts.pory"
	.string "SEKIEN VISITOR CENTER\n"
	.string "Welcome to our wonderful region!$"

VisCen_ExitSign_Text_0:
# 861 "data/maps/VisitorCenter/scripts.pory"
	.string "ROUTE 1\n"
	.string "Nature Trail ahead$"

VisCen_FenceSign_Text_0:
# 868 "data/maps/VisitorCenter/scripts.pory"
	.string "Please do not touch the plants.$"

VisCen_MisplacedBush_Text_0:
# 874 "data/maps/VisitorCenter/scripts.pory"
	.string "It looks like it was recently uprooted.$"

VisCen_Professor_Text_0:
# 886 "data/maps/VisitorCenter/scripts.pory"
	.string "{SPEAKER NAME_UNKNOWN}What's the matter, big winner? Tough\n"
	.string "decision?\p"
	.string "…There's no strings attached, I\n"
	.string "promise!$"

VisCen_Professor_Text_1:
# 894 "data/maps/VisitorCenter/scripts.pory"
	.string "{SPEAKER NAME_UNKNOWN}Hmm? What, you want to battle me or\n"
	.string "something?$"

VisCen_Professor_Text_2:
# 901 "data/maps/VisitorCenter/scripts.pory"
	.string "Did neither of them want to? Really…?\n"
	.string "{FONT_SMALL}Ugh…{FONT_NORMAL}\p"
	.string "Fine, fine. If I've gotta break the ice\n"
	.string "for you, it's better than nothing.$"

VisCen_Professor_Text_3:
# 909 "data/maps/VisitorCenter/scripts.pory"
	.string "{SPEAKER NAME_UNKNOWN}Hey, you two come here for a sec.$"

VisCen_Professor_Text_4:
# 920 "data/maps/VisitorCenter/scripts.pory"
	.string "Come on… did you even try talking to\n"
	.string "the other two yet?\p"
	.string "Competing with others your age is much\n"
	.string "more mentally stimulating.\p"
	.string "Besides, I'm not really supposed to be\n"
	.string "involved in the{COLOR BLUE} stud-{COLOR DARK_GRAY}\l"
	.string "in your Pokémon Journey.$"

VisCen_Professor_Text_5:
# 929 "data/maps/VisitorCenter/scripts.pory"
	.string "I said no already, kid. Why don't you{COLOR RED} ask\n"
	.string "one of those two{COLOR DARK_GRAY} instead?$"

VisCen_Professor_Text_6:
# 936 "data/maps/VisitorCenter/scripts.pory"
	.string "Of course, don't be silly…\p"
	.string "You've got two eager {COLOR RED}rivals{COLOR DARK_GRAY} right there.\n"
	.string "Just ask them!$"

VisCen_Liam_Text_0:
# 956 "data/maps/VisitorCenter/scripts.pory"
	.string "He said I'm a winner, but it doesn't\n"
	.string "change my goals!\p"
	.string "I'll catch the strongest Pokémon out\n"
	.string "there!$"

VisCen_Liam_Text_1:
# 964 "data/maps/VisitorCenter/scripts.pory"
	.string "So, you're the one who won first place.\p"
	.string "Just don't take the good one!$"

VisCen_Liam_Text_2:
# 972 "data/maps/VisitorCenter/scripts.pory"
	.string "Picking me, huh? Well, I'm not about to\n"
	.string "miss my first shot!$"

VisCen_Liam_Text_3:
# 986 "data/maps/VisitorCenter/scripts.pory"
	.string "What, don't get scared! I'll go easy on\n"
	.string "you!$"

VisCen_Olive_Text_0:
# 1000 "data/maps/VisitorCenter/scripts.pory"
	.string "Hmm… a free Pokémon, huh-?\l"
	.string "That's a lot of responsibility…$"

VisCen_Olive_Text_1:
# 1008 "data/maps/VisitorCenter/scripts.pory"
	.string "Lucky you-!\p"
	.string "Did you hear? I get to have the last\n"
	.string "Pokémon!$"

VisCen_Olive_Text_2:
# 1017 "data/maps/VisitorCenter/scripts.pory"
	.string "{STR_VAR_3} and I…? Well, why not!$"

VisCen_Olive_Text_3:
# 1031 "data/maps/VisitorCenter/scripts.pory"
	.string "Oh…? Well, why not?$"

VisCen_Oyako_Text_0:
# 1048 "data/maps/VisitorCenter/scripts.pory"
	.string "{SPEAKER NAME_GIRL}Mom, mom! I want a Pokémon too!$"

VisCen_Oyako_Text_1:
# 1050 "data/maps/VisitorCenter/scripts.pory"
	.string "{SPEAKER NAME_MOTHER}Don't listen to the strange man, dear.$"

VisCen_Employee_Text_0:
# 1059 "data/maps/VisitorCenter/scripts.pory"
	.string "Hey, what's going on? Does this guy\n"
	.string "even work here?$"

VisCen_Employee_Text_1:
# 1064 "data/maps/VisitorCenter/scripts.pory"
	.string "Working here at the Visitor Center\n"
	.string "makes me want to take a trip, too.\p"
	.string "Maybe I'll go visit Hoenn?$"

VisCen_Riajuu_Text_0:
# 1078 "data/maps/VisitorCenter/scripts.pory"
	.string "{SPEAKER NAME_GIRL}If he chooses you, honey, can I have\n"
	.string "your Pokémon instead…?$"

VisCen_Riajuu_Text_1:
# 1080 "data/maps/VisitorCenter/scripts.pory"
	.string "{SPEAKER NAME_BOY}Huh?? I mean, o-of course you can,\n"
	.string "haha…$"

VisCen_Riajuu_Text_2:
# 1084 "data/maps/VisitorCenter/scripts.pory"
	.string "{SPEAKER NAME_GIRL}Aww, neither of our tickets won…\p"
	.string "but you'll catch me a cute Pokémon\n"
	.string "anyway, right?$"

VisCen_Riajuu_Text_3:
# 1087 "data/maps/VisitorCenter/scripts.pory"
	.string "{SPEAKER NAME_BOY}Of course, of course! {FONT_SMALL}Whew…$"

VisCen_Beauty_Text_0:
# 1095 "data/maps/VisitorCenter/scripts.pory"
	.string "{SPEAKER NAME_LADY}This free Pokémon stuff sounds fishy\n"
	.string "if you ask me…\p"
	.string "Is he even a real Professor?$"

VisCen_LassGramps_Text_0:
# 1108 "data/maps/VisitorCenter/scripts.pory"
	.string "{SPEAKER NAME_GIRL}Grandpa, did you hold onto your ticket?$"

VisCen_LassGramps_Text_1:
# 1110 "data/maps/VisitorCenter/scripts.pory"
	.string "{SPEAKER NAME_OLDMAN}Hm?{PAUSE 16} What's that??{PAUSE 16}\n"
	.string "Speak up, kiddo!$"

VisCen_LassGramps_Text_2:
# 1112 "data/maps/VisitorCenter/scripts.pory"
	.string "{SPEAKER NAME_GIRL}THE TICKET, GRANDPA.\n"
	.string "THE {COLOR BLUE}RAFFLE TICKET{COLOR DARK_GRAY} FOR A FREE POKéMON?$"

VisCen_LassGramps_Text_3:
# 1115 "data/maps/VisitorCenter/scripts.pory"
	.string "{SPEAKER NAME_OLDMAN}Hah???$"

VisCen_LassGramps_Text_4:
# 1119 "data/maps/VisitorCenter/scripts.pory"
	.string "{SPEAKER NAME_GIRL}Looks like we didn't win, huh gramps?$"

VisCen_LassGramps_Text_5:
# 1121 "data/maps/VisitorCenter/scripts.pory"
	.string "{SPEAKER NAME_OLDMAN}Givin' away Pokémon for free… hah! In my\n"
	.string "day, you had to wrangle your Pokémon\l"
	.string "with your own two hands!!$"

VisCen_LassGramps_Text_6:
# 1124 "data/maps/VisitorCenter/scripts.pory"
	.string "{SPEAKER NAME_GIRL}Is… that even remotely true?$"

VisCen_TechnologyMan_Text_0:
# 1131 "data/maps/VisitorCenter/scripts.pory"
	.string "Technology is incredible!\p"
	.string "You can even create your own world if\n"
	.string "you put your mind to it!$"

VisCen_Liam_Intro:
# 638 "data/maps/VisitorCenter/scripts.pory"
	.string "{SPEAKER NAME_LIAM}The name's {COLOR BLUE}Liam{COLOR DARK_GRAY}!\p"
	.string "Sorry, but you're gonna be our first\n"
	.string "step on the way to the top!$"

VisCen_Olive_Intro:
# 643 "data/maps/VisitorCenter/scripts.pory"
	.string "{SPEAKER NAME_OLIVE}By the way, I'm {COLOR BLUE}Olive{COLOR DARK_GRAY}!\p"
	.string "We'll be seeing each other a lot, so let's\n"
	.string "get along, alright?$"

VisCen_Liam_Loss:
# 649 "data/maps/VisitorCenter/scripts.pory"
	.string "Man… and I was sure this was the one…$"

VisCen_Olive_Loss:
# 653 "data/maps/VisitorCenter/scripts.pory"
	.string "Oh… tired already?$"

Prof_DexText::
# 845 "data/maps/VisitorCenter/scripts.pory"
	.string "{PLAYER} received the Pokédex from the\n"
	.string "Professor.$"

Liam_Pick_Txt::
# 1138 "data/maps/VisitorCenter/scripts.pory"
	.string "Then I'll take this one!$"

Liam_Receive_Txt::
# 1142 "data/maps/VisitorCenter/scripts.pory"
	.string "The Boy received {STR_VAR_2}\n"
	.string "from the Professor!$"

Olive_Pick_Txt::
# 1147 "data/maps/VisitorCenter/scripts.pory"
	.string "So, this one is mine?$"

Olive_Receive_Txt::
# 1151 "data/maps/VisitorCenter/scripts.pory"
	.string "The Girl received {STR_VAR_3}\n"
	.string "from the Professor!$"
