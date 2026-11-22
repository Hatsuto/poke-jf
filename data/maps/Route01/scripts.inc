Route01_MapScripts::
	.byte 0


Route1_TourGuide::
# 30 "data/maps/Route01/scripts.pory"
	delay 15
# 31 "data/maps/Route01/scripts.pory"
	applymovement LOCALID_R1_MOM, Common_Movement_WalkInPlaceRight
# 32 "data/maps/Route01/scripts.pory"
	waitmovement 0
# 33 "data/maps/Route01/scripts.pory"
	delay 15
# 35 "data/maps/Route01/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 37 "data/maps/Route01/scripts.pory"
	switch VAR_TEMP_1
# 39 "data/maps/Route01/scripts.pory"
	case 11, Route1_TourGuide_3
# 42 "data/maps/Route01/scripts.pory"
	case 11 + 1, Route1_TourGuide_4
# 45 "data/maps/Route01/scripts.pory"
	case 11 + 2, Route1_TourGuide_5
Route1_TourGuide_1:
# 48 "data/maps/Route01/scripts.pory"
	waitmovement 0
# 49 "data/maps/Route01/scripts.pory"
	applymovement LOCALID_R1_MOM, Common_Movement_WalkInPlaceLeft
# 50 "data/maps/Route01/scripts.pory"
	waitmovement 0
# 53 "data/maps/Route01/scripts.pory"
	applymovement LOCALID_R1_BALLGUY, Common_Movement_FaceDown
# 54 "data/maps/Route01/scripts.pory"
	waitmovement 0
# 55 "data/maps/Route01/scripts.pory"
	call Group_Attention
# 56 "data/maps/Route01/scripts.pory"
	applymovement LOCALID_R1_GUIDE, Common_Movement_WalkInPlaceRight
# 57 "data/maps/Route01/scripts.pory"
	waitmovement 0
# 59 "data/maps/Route01/scripts.pory"
	setspeaker Route1_TourGuide_Text_0
# 60 "data/maps/Route01/scripts.pory"
	msgbox Route1_TourGuide_Text_1
# 66 "data/maps/Route01/scripts.pory"
	closemessage
# 68 "data/maps/Route01/scripts.pory"
	applymovement LOCALID_R1_GUIDE, Common_Movement_WalkInPlaceDown
# 69 "data/maps/Route01/scripts.pory"
	waitmovement 0
# 70 "data/maps/Route01/scripts.pory"
	call Group_OurNextStop
# 72 "data/maps/Route01/scripts.pory"
	setspeaker Route1_TourGuide_Text_0
# 73 "data/maps/Route01/scripts.pory"
	msgbox Route1_TourGuide_Text_2
# 75 "data/maps/Route01/scripts.pory"
	closemessage
# 77 "data/maps/Route01/scripts.pory"
	applymovement LOCALID_R1_GUIDE, Common_Movement_WalkInPlaceLeft
# 78 "data/maps/Route01/scripts.pory"
	waitmovement 0
# 79 "data/maps/Route01/scripts.pory"
	call Group_OnYourLeft
# 81 "data/maps/Route01/scripts.pory"
	setspeaker Route1_TourGuide_Text_0
# 82 "data/maps/Route01/scripts.pory"
	msgbox Route1_TourGuide_Text_3
# 86 "data/maps/Route01/scripts.pory"
	closemessage
# 88 "data/maps/Route01/scripts.pory"
	applymovement LOCALID_R1_BALLGUY, Common_Movement_FaceRight
# 89 "data/maps/Route01/scripts.pory"
	applymovement LOCALID_R1_GUIDE, Common_Movement_WalkRight
# 90 "data/maps/Route01/scripts.pory"
	waitmovement 0
# 92 "data/maps/Route01/scripts.pory"
	setspeaker Route1_TourGuide_Text_0
# 93 "data/maps/Route01/scripts.pory"
	msgbox Route1_TourGuide_Text_4
# 97 "data/maps/Route01/scripts.pory"
	closemessage
# 99 "data/maps/Route01/scripts.pory"
	setvar VAR_LAST_TALKED, LOCALID_R1_BALLGUY
# 100 "data/maps/Route01/scripts.pory"
	call Common_NPCNotice
# 102 "data/maps/Route01/scripts.pory"
	applymovement LOCALID_R1_MOM, Common_Movement_WalkInPlaceUp
# 103 "data/maps/Route01/scripts.pory"
	waitmovement 0
# 104 "data/maps/Route01/scripts.pory"
	msgbox Route1_TourGuide_Text_5
# 107 "data/maps/Route01/scripts.pory"
	closemessage
# 109 "data/maps/Route01/scripts.pory"
	applymovement LOCALID_R1_MOM, Common_Movement_WalkInPlaceLeft
# 110 "data/maps/Route01/scripts.pory"
	waitmovement 0
# 111 "data/maps/Route01/scripts.pory"
	applymovement LOCALID_R1_GUIDE, Common_Movement_WalkInPlaceDown
# 112 "data/maps/Route01/scripts.pory"
	waitmovement 0
# 113 "data/maps/Route01/scripts.pory"
	call Group_Attention
# 115 "data/maps/Route01/scripts.pory"
	setspeaker Route1_TourGuide_Text_0
# 116 "data/maps/Route01/scripts.pory"
	msgbox Route1_TourGuide_Text_6
# 117 "data/maps/Route01/scripts.pory"
	closemessage
# 121 "data/maps/Route01/scripts.pory"
	setvar VAR_ROUTE_1_STATE, 1
# 122 "data/maps/Route01/scripts.pory"
	setflag FLAG_ROUTE_1_ROAD_NPC
# 124 "data/maps/Route01/scripts.pory"
	playse SE_EXIT
# 125 "data/maps/Route01/scripts.pory"
	warp MAP_ROUTE01, 0xFF, 25, 12
# 126 "data/maps/Route01/scripts.pory"
	waitstate
# 127 "data/maps/Route01/scripts.pory"
	releaseall
	end

Route1_TourGuide_3:
# 40 "data/maps/Route01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Player_TopToMom
	goto Route1_TourGuide_1

Route1_TourGuide_4:
# 43 "data/maps/Route01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Player_MidToMom
	goto Route1_TourGuide_1

Route1_TourGuide_5:
# 46 "data/maps/Route01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Player_BotToMom
	goto Route1_TourGuide_1


Group_Attention:
# 132 "data/maps/Route01/scripts.pory"
	applymovement LOCALID_R1_NPC_TOP2, Common_Movement_FaceDown
# 133 "data/maps/Route01/scripts.pory"
	applymovement LOCALID_R1_NPC_MID, Common_Movement_FaceLeft
# 135 "data/maps/Route01/scripts.pory"
	delay 8
# 136 "data/maps/Route01/scripts.pory"
	applymovement LOCALID_R1_NPC_TOP1, Common_Movement_FaceDown
# 137 "data/maps/Route01/scripts.pory"
	applymovement LOCALID_R1_NPC_BOT2, Common_Movement_FaceUp
# 139 "data/maps/Route01/scripts.pory"
	delay 8
# 140 "data/maps/Route01/scripts.pory"
	applymovement LOCALID_R1_MOM, Common_Movement_FaceLeft
# 142 "data/maps/Route01/scripts.pory"
	delay 8
# 143 "data/maps/Route01/scripts.pory"
	applymovement LOCALID_R1_NPC_BOT1, Common_Movement_FaceUp
# 145 "data/maps/Route01/scripts.pory"
	waitmovement 0
	return


Group_OurNextStop:
# 149 "data/maps/Route01/scripts.pory"
	applymovement LOCALID_R1_NPC_TOP2, Common_Movement_FaceDown
# 150 "data/maps/Route01/scripts.pory"
	applymovement LOCALID_R1_NPC_MID, Common_Movement_FaceDown
# 152 "data/maps/Route01/scripts.pory"
	delay 8
# 153 "data/maps/Route01/scripts.pory"
	applymovement LOCALID_R1_NPC_TOP1, Common_Movement_FaceDown
# 154 "data/maps/Route01/scripts.pory"
	applymovement LOCALID_R1_NPC_BOT2, Common_Movement_FaceDown
# 156 "data/maps/Route01/scripts.pory"
	delay 8
# 157 "data/maps/Route01/scripts.pory"
	applymovement LOCALID_R1_MOM, Common_Movement_FaceDown
# 159 "data/maps/Route01/scripts.pory"
	delay 8
# 160 "data/maps/Route01/scripts.pory"
	applymovement LOCALID_R1_NPC_BOT1, Common_Movement_FaceDown
# 162 "data/maps/Route01/scripts.pory"
	waitmovement 0
	return


Group_OnYourLeft:
# 166 "data/maps/Route01/scripts.pory"
	applymovement LOCALID_R1_NPC_TOP2, Common_Movement_FaceLeft
# 167 "data/maps/Route01/scripts.pory"
	applymovement LOCALID_R1_NPC_MID, Common_Movement_FaceLeft
# 169 "data/maps/Route01/scripts.pory"
	delay 8
# 170 "data/maps/Route01/scripts.pory"
	applymovement LOCALID_R1_NPC_TOP1, Common_Movement_FaceLeft
# 171 "data/maps/Route01/scripts.pory"
	applymovement LOCALID_R1_NPC_BOT2, Common_Movement_FaceLeft
# 173 "data/maps/Route01/scripts.pory"
	delay 8
# 174 "data/maps/Route01/scripts.pory"
	applymovement LOCALID_R1_MOM, Common_Movement_FaceLeft
# 176 "data/maps/Route01/scripts.pory"
	delay 8
# 177 "data/maps/Route01/scripts.pory"
	applymovement LOCALID_R1_NPC_BOT1, Common_Movement_FaceLeft
# 179 "data/maps/Route01/scripts.pory"
	waitmovement 0
	return


Route1_RoadBlock::
# 186 "data/maps/Route01/scripts.pory"
	lock
# 187 "data/maps/Route01/scripts.pory"
	msgbox Route1_RoadBlock_Text_0, MSGBOX_AUTOCLOSE
# 189 "data/maps/Route01/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 190 "data/maps/Route01/scripts.pory"
	compare VAR_TEMP_1, 10
	goto_if_eq Route1_RoadBlock_2
# 196 "data/maps/Route01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
Route1_RoadBlock_1:
# 198 "data/maps/Route01/scripts.pory"
	waitmovement 0
# 199 "data/maps/Route01/scripts.pory"
	release
	end

Route1_RoadBlock_2:
# 192 "data/maps/Route01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
	goto Route1_RoadBlock_1


Route1_LiamBlock::
# 204 "data/maps/Route01/scripts.pory"
	lock
# 208 "data/maps/Route01/scripts.pory"
	setvar VAR_LAST_TALKED, LOCALID_R1_LIAM
# 209 "data/maps/Route01/scripts.pory"
	Call Common_NPCNotice
# 211 "data/maps/Route01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 212 "data/maps/Route01/scripts.pory"
	waitmovement 0
# 214 "data/maps/Route01/scripts.pory"
	goto Route1_LiamTalk
	return


Route1_Liam::
# 218 "data/maps/Route01/scripts.pory"
	lock
# 219 "data/maps/Route01/scripts.pory"
	faceplayer
# 221 "data/maps/Route01/scripts.pory"
	goto Route1_LiamTalk
	return


Route1_BallGuy::
# 227 "data/maps/Route01/scripts.pory"
	setspeaker Route1_BallGuy_Text_0
# 228 "data/maps/Route01/scripts.pory"
	goto_if_unset FLAG_ROUTE_1_BALL_GUY, Route1_BallGuy_2
# 251 "data/maps/Route01/scripts.pory"
	call Check_Balls
# 252 "data/maps/Route01/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route1_BallGuy_5
# 281 "data/maps/Route01/scripts.pory"
	msgbox Route1_BallGuy_Text_6, MSGBOX_NPC
Route1_BallGuy_1:
# 286 "data/maps/Route01/scripts.pory"
	release
	end

Route1_BallGuy_2:
# 230 "data/maps/Route01/scripts.pory"
	lockall
# 231 "data/maps/Route01/scripts.pory"
	faceplayer
# 234 "data/maps/Route01/scripts.pory"
	msgbox Route1_BallGuy_Text_1
# 237 "data/maps/Route01/scripts.pory"
	giveitem ITEM_POKE_BALL, 5
# 238 "data/maps/Route01/scripts.pory"
	giveitem ITEM_POTION, 3
# 240 "data/maps/Route01/scripts.pory"
	msgbox Route1_BallGuy_Text_2, MSGBOX_AUTOCLOSE
# 247 "data/maps/Route01/scripts.pory"
	setflag FLAG_ROUTE_1_BALL_GUY
	goto Route1_BallGuy_1

Route1_BallGuy_5:
# 254 "data/maps/Route01/scripts.pory"
	goto_if_unset FLAG_ROUTE_1_PATH_NPC, Route1_BallGuy_8
# 264 "data/maps/Route01/scripts.pory"
	lockall
# 265 "data/maps/Route01/scripts.pory"
	faceplayer
# 267 "data/maps/Route01/scripts.pory"
	msgbox Route1_BallGuy_Text_4
# 270 "data/maps/Route01/scripts.pory"
	giveitem ITEM_POKE_BALL, 1
# 272 "data/maps/Route01/scripts.pory"
	msgbox Route1_BallGuy_Text_5, MSGBOX_AUTOCLOSE
	goto Route1_BallGuy_1

Route1_BallGuy_8:
# 257 "data/maps/Route01/scripts.pory"
	msgbox Route1_BallGuy_Text_3, MSGBOX_NPC
	goto Route1_BallGuy_1


Check_Balls:
# 293 "data/maps/Route01/scripts.pory"
	setvar VAR_TEMP_2, ITEM_POKE_BALL
Check_Balls_2:
# 296 "data/maps/Route01/scripts.pory"
	checkitem VAR_TEMP_2, 1
# 297 "data/maps/Route01/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Check_Balls_5
# 301 "data/maps/Route01/scripts.pory"
	addvar VAR_TEMP_2, 1
# 302 "data/maps/Route01/scripts.pory"
	compare VAR_TEMP_2, ITEM_CHERISH_BALL
	goto_if_le Check_Balls_2
	return

Check_Balls_5:
	return


Route1_GrassKid::
# 306 "data/maps/Route01/scripts.pory"
	msgbox Route1_GrassKid_Text_0, MSGBOX_NPC
	return


Route1_RoadSign::
# 313 "data/maps/Route01/scripts.pory"
	msgbox Route1_RoadSign_Text_0, MSGBOX_SIGN
	return


Route1_GrassSign::
# 317 "data/maps/Route01/scripts.pory"
	msgbox Route1_GrassSign_Text_0, MSGBOX_SIGN
	return


Route1_Birdman::
# 325 "data/maps/Route01/scripts.pory"
	msgbox Route1_Birdman_Text_0, MSGBOX_NPC
	return


Route1_Wingull::
# 332 "data/maps/Route01/scripts.pory"
	lock
# 333 "data/maps/Route01/scripts.pory"
	faceplayer
# 334 "data/maps/Route01/scripts.pory"
	applymovement LOCALID_R1_WINGULL, Common_Movement_QuestionMark
# 335 "data/maps/Route01/scripts.pory"
	playmoncry SPECIES_WINGULL, 0
# 336 "data/maps/Route01/scripts.pory"
	waitmoncry
# 337 "data/maps/Route01/scripts.pory"
	release
	end


Route1_Olive::
# 342 "data/maps/Route01/scripts.pory"
	lock
# 343 "data/maps/Route01/scripts.pory"
	faceplayer
# 344 "data/maps/Route01/scripts.pory"
	switch VAR_ROUTE_1_OLIVE
# 346 "data/maps/Route01/scripts.pory"
	case 0, Route1_Olive_3
# 391 "data/maps/Route01/scripts.pory"
	case 0x10, Route1_Olive_4
# 398 "data/maps/Route01/scripts.pory"
	case 0x11, Route1_Olive_5
# 405 "data/maps/Route01/scripts.pory"
	case 0x20, Route1_Olive_6
# 411 "data/maps/Route01/scripts.pory"
	case 0x30, Route1_Olive_7
Route1_Olive_1:
# 416 "data/maps/Route01/scripts.pory"
	release
	end

Route1_Olive_3:
# 348 "data/maps/Route01/scripts.pory"
	call RivalLink_Get_OliveStarter
# 349 "data/maps/Route01/scripts.pory"
	bufferspeciesname 0, VAR_RESULT
# 352 "data/maps/Route01/scripts.pory"
	switch VAR_VISCEN_STATE
# 354 "data/maps/Route01/scripts.pory"
	case 0xB0, Route1_Olive_9
# 355 "data/maps/Route01/scripts.pory"
	case 0xB1, Route1_Olive_9
# 366 "data/maps/Route01/scripts.pory"
	setvar VAR_ROUTE_1_OLIVE, 0x10
# 367 "data/maps/Route01/scripts.pory"
	msgbox Route1_Olive_Text_1
# 373 "data/maps/Route01/scripts.pory"
	getpartysize
# 374 "data/maps/Route01/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_gt Route1_Olive_12
# 381 "data/maps/Route01/scripts.pory"
	msgbox Route1_Olive_Text_3
Route1_Olive_11:
# 386 "data/maps/Route01/scripts.pory"
	msgbox Route1_Olive_Text_4, MSGBOX_YESNO
# 388 "data/maps/Route01/scripts.pory"
	goto Route1_Olive_Confirm
	goto Route1_Olive_1

Route1_Olive_4:
# 392 "data/maps/Route01/scripts.pory"
	bufferleadmonspeciesname 0
# 393 "data/maps/Route01/scripts.pory"
	msgbox Route1_Olive_Text_5, MSGBOX_YESNO
# 396 "data/maps/Route01/scripts.pory"
	goto Route1_Olive_Confirm
	goto Route1_Olive_1

Route1_Olive_5:
# 399 "data/maps/Route01/scripts.pory"
	setvar VAR_ROUTE_1_OLIVE, 0x20
# 400 "data/maps/Route01/scripts.pory"
	msgbox Route1_Olive_Text_6, MSGBOX_AUTOCLOSE
	goto Route1_Olive_1

Route1_Olive_6:
# 406 "data/maps/Route01/scripts.pory"
	msgbox Route1_Olive_Text_7, MSGBOX_AUTOCLOSE
	goto Route1_Olive_1

Route1_Olive_7:
# 412 "data/maps/Route01/scripts.pory"
	msgbox Route1_Olive_Text_8, MSGBOX_AUTOCLOSE
	goto Route1_Olive_1

Route1_Olive_9:
# 356 "data/maps/Route01/scripts.pory"
	setvar VAR_ROUTE_1_OLIVE, 0x30
# 357 "data/maps/Route01/scripts.pory"
	msgbox Route1_Olive_Text_0, MSGBOX_AUTOCLOSE
	goto Route1_Olive_1

Route1_Olive_12:
# 376 "data/maps/Route01/scripts.pory"
	msgbox Route1_Olive_Text_2
	goto Route1_Olive_11


Route1_Olive_Confirm:
# 421 "data/maps/Route01/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route1_Olive_Confirm_1
# 440 "data/maps/Route01/scripts.pory"
	msgbox Route1_Olive_Confirm_Text_0, MSGBOX_AUTOCLOSE
# 444 "data/maps/Route01/scripts.pory"
	release
	end

Route1_Olive_Confirm_1:
# 423 "data/maps/Route01/scripts.pory"
	addvar VAR_ROUTE_1_OLIVE, 0x1
# 424 "data/maps/Route01/scripts.pory"
	call RivalLink_Add_Olive
# 425 "data/maps/Route01/scripts.pory"
	switch VAR_STARTER_MON
# 427 "data/maps/Route01/scripts.pory"
	case 0, Route1_Olive_Confirm_5
# 430 "data/maps/Route01/scripts.pory"
	case 1, Route1_Olive_Confirm_6
# 433 "data/maps/Route01/scripts.pory"
	case 2, Route1_Olive_Confirm_7
	return

Route1_Olive_Confirm_5:
# 428 "data/maps/Route01/scripts.pory"
	trainerbattle_single TRAINER_ROUTE_1_OLIVE_WTR, Route1_Olive_Intro, Route1_Olive_Loss, Route1_Olive_PostBattle
	return

Route1_Olive_Confirm_6:
# 431 "data/maps/Route01/scripts.pory"
	trainerbattle_single TRAINER_ROUTE_1_OLIVE_GRS, Route1_Olive_Intro, Route1_Olive_Loss, Route1_Olive_PostBattle
	return

Route1_Olive_Confirm_7:
# 434 "data/maps/Route01/scripts.pory"
	trainerbattle_single TRAINER_ROUTE_1_OLIVE_FIR, Route1_Olive_Intro, Route1_Olive_Loss, Route1_Olive_PostBattle
	return


Route1_Olive_PostBattle:
# 458 "data/maps/Route01/scripts.pory"
	lock
# 459 "data/maps/Route01/scripts.pory"
	setvar VAR_ROUTE_1_OLIVE, 0x20
# 460 "data/maps/Route01/scripts.pory"
	getpartysize
# 461 "data/maps/Route01/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_gt Route1_Olive_PostBattle_2
# 470 "data/maps/Route01/scripts.pory"
	msgbox Route1_Olive_PostBattle_Text_1, MSGBOX_AUTOCLOSE
Route1_Olive_PostBattle_1:
# 475 "data/maps/Route01/scripts.pory"
	release
	end

Route1_Olive_PostBattle_2:
# 463 "data/maps/Route01/scripts.pory"
	msgbox Route1_Olive_PostBattle_Text_0, MSGBOX_AUTOCLOSE
	goto Route1_Olive_PostBattle_1


Route1_LiamTalk:
# 481 "data/maps/Route01/scripts.pory"
	switch VAR_ROUTE_1_LIAM
# 483 "data/maps/Route01/scripts.pory"
	case 0, Route1_LiamTalk_3
# 531 "data/maps/Route01/scripts.pory"
	case 0x10, Route1_LiamTalk_4
# 535 "data/maps/Route01/scripts.pory"
	case 0x11, Route1_LiamTalk_5
# 542 "data/maps/Route01/scripts.pory"
	case 0x20, Route1_LiamTalk_6
# 546 "data/maps/Route01/scripts.pory"
	case 0x30, Route1_LiamTalk_7
Route1_LiamTalk_1:
# 551 "data/maps/Route01/scripts.pory"
	release
	end

Route1_LiamTalk_3:
# 484 "data/maps/Route01/scripts.pory"
	switch VAR_VISCEN_STATE
# 486 "data/maps/Route01/scripts.pory"
	case 0xA0, Route1_LiamTalk_9
# 492 "data/maps/Route01/scripts.pory"
	case 0xA1, Route1_LiamTalk_10
# 504 "data/maps/Route01/scripts.pory"
	setvar VAR_ROUTE_1_LIAM, 0x10
# 505 "data/maps/Route01/scripts.pory"
	msgbox Route1_LiamTalk_Text_2
# 507 "data/maps/Route01/scripts.pory"
	switch VAR_VISCEN_STATE
# 509 "data/maps/Route01/scripts.pory"
	case 0xB0, Route1_LiamTalk_14
# 513 "data/maps/Route01/scripts.pory"
	case 0xB1, Route1_LiamTalk_15
# 517 "data/maps/Route01/scripts.pory"
	case 0xC0, Route1_LiamTalk_16
# 518 "data/maps/Route01/scripts.pory"
	case 0xC1, Route1_LiamTalk_16
Route1_LiamTalk_12:
# 524 "data/maps/Route01/scripts.pory"
	msgbox Route1_LiamTalk_Text_6, MSGBOX_YESNO
# 529 "data/maps/Route01/scripts.pory"
	goto Route1_Liam_Confirm
	goto Route1_LiamTalk_1

Route1_LiamTalk_4:
# 532 "data/maps/Route01/scripts.pory"
	msgbox Route1_LiamTalk_Text_7, MSGBOX_YESNO
# 534 "data/maps/Route01/scripts.pory"
	goto Route1_Liam_Confirm
	goto Route1_LiamTalk_1

Route1_LiamTalk_5:
# 536 "data/maps/Route01/scripts.pory"
	setvar VAR_ROUTE_1_LIAM, 0x20
# 537 "data/maps/Route01/scripts.pory"
	msgbox Route1_LiamTalk_Text_8, MSGBOX_AUTOCLOSE
	goto Route1_LiamTalk_1

Route1_LiamTalk_6:
# 543 "data/maps/Route01/scripts.pory"
	msgbox Route1_LiamTalk_Text_9, MSGBOX_AUTOCLOSE
	goto Route1_LiamTalk_1

Route1_LiamTalk_7:
# 547 "data/maps/Route01/scripts.pory"
	msgbox Route1_LiamTalk_Text_10, MSGBOX_AUTOCLOSE
	goto Route1_LiamTalk_1

Route1_LiamTalk_9:
# 487 "data/maps/Route01/scripts.pory"
	setvar VAR_ROUTE_1_LIAM, 0x30
# 488 "data/maps/Route01/scripts.pory"
	msgbox Route1_LiamTalk_Text_0
	goto Route1_LiamTalk_1

Route1_LiamTalk_10:
# 493 "data/maps/Route01/scripts.pory"
	setvar VAR_ROUTE_1_LIAM, 0x30
# 494 "data/maps/Route01/scripts.pory"
	msgbox Route1_LiamTalk_Text_1, MSGBOX_AUTOCLOSE
	goto Route1_LiamTalk_1

Route1_LiamTalk_14:
# 510 "data/maps/Route01/scripts.pory"
	msgbox Route1_LiamTalk_Text_3
	goto Route1_LiamTalk_12

Route1_LiamTalk_15:
# 514 "data/maps/Route01/scripts.pory"
	msgbox Route1_LiamTalk_Text_4
	goto Route1_LiamTalk_12

Route1_LiamTalk_16:
# 519 "data/maps/Route01/scripts.pory"
	msgbox Route1_LiamTalk_Text_5
	goto Route1_LiamTalk_12


Route1_Liam_Confirm:
# 556 "data/maps/Route01/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route1_Liam_Confirm_1
# 575 "data/maps/Route01/scripts.pory"
	msgbox Route1_Liam_Confirm_Text_0, MSGBOX_AUTOCLOSE
# 579 "data/maps/Route01/scripts.pory"
	release
	end

Route1_Liam_Confirm_1:
# 558 "data/maps/Route01/scripts.pory"
	addvar VAR_ROUTE_1_LIAM, 0x1
# 559 "data/maps/Route01/scripts.pory"
	call RivalLink_Add_Liam
# 560 "data/maps/Route01/scripts.pory"
	switch VAR_STARTER_MON
# 562 "data/maps/Route01/scripts.pory"
	case 0, Route1_Liam_Confirm_5
# 565 "data/maps/Route01/scripts.pory"
	case 1, Route1_Liam_Confirm_6
# 568 "data/maps/Route01/scripts.pory"
	case 2, Route1_Liam_Confirm_7
	return

Route1_Liam_Confirm_5:
# 563 "data/maps/Route01/scripts.pory"
	trainerbattle_single TRAINER_ROUTE_1_LIAM_FIR, Route1_Liam_Intro, Route1_Liam_Loss, Route1_Liam_PostBattle
	return

Route1_Liam_Confirm_6:
# 566 "data/maps/Route01/scripts.pory"
	trainerbattle_single TRAINER_ROUTE_1_LIAM_WTR, Route1_Liam_Intro, Route1_Liam_Loss, Route1_Liam_PostBattle
	return

Route1_Liam_Confirm_7:
# 569 "data/maps/Route01/scripts.pory"
	trainerbattle_single TRAINER_ROUTE_1_LIAM_GRS, Route1_Liam_Intro, Route1_Liam_Loss, Route1_Liam_PostBattle
	return


Route1_Liam_PostBattle:
# 593 "data/maps/Route01/scripts.pory"
	lock
# 594 "data/maps/Route01/scripts.pory"
	setvar VAR_ROUTE_1_LIAM, 0x20
# 596 "data/maps/Route01/scripts.pory"
	setspeaker SP_NAME_LIAM
# 598 "data/maps/Route01/scripts.pory"
	compare VAR_VISCEN_STATE, 0xB0
	goto_if_eq Route1_Liam_PostBattle_2
# 606 "data/maps/Route01/scripts.pory"
	msgbox Route1_Liam_PostBattle_Text_1
Route1_Liam_PostBattle_1:
# 610 "data/maps/Route01/scripts.pory"
	msgbox Route1_Liam_PostBattle_Text_2, MSGBOX_AUTOCLOSE
# 616 "data/maps/Route01/scripts.pory"
	release
	end

Route1_Liam_PostBattle_2:
# 600 "data/maps/Route01/scripts.pory"
	msgbox Route1_Liam_PostBattle_Text_0
	goto Route1_Liam_PostBattle_1


# 621 "data/maps/Route01/scripts.pory"
Player_TopToMom:
# 623 "data/maps/Route01/scripts.pory"
	walk_left
# 624 "data/maps/Route01/scripts.pory"
	walk_left
	step_end

# 627 "data/maps/Route01/scripts.pory"
Player_MidToMom:
# 629 "data/maps/Route01/scripts.pory"
	walk_left
# 630 "data/maps/Route01/scripts.pory"
	walk_up
# 631 "data/maps/Route01/scripts.pory"
	walk_left
	step_end

# 634 "data/maps/Route01/scripts.pory"
Player_BotToMom:
# 636 "data/maps/Route01/scripts.pory"
	walk_left
# 637 "data/maps/Route01/scripts.pory"
	walk_up
# 638 "data/maps/Route01/scripts.pory"
	walk_up
# 639 "data/maps/Route01/scripts.pory"
	walk_left
	step_end

Route1_TourGuide_Text_0:
# 59 "data/maps/Route01/scripts.pory"
	.string "GUIDE$"

Route1_TourGuide_Text_1:
# 60 "data/maps/Route01/scripts.pory"
	.string "Alright, is everyone present?\p"
	.string "As I was saying, welcome, everyone, to\n"
	.string "the Sekien region tour!\p"
	.string "We hope to show you all the beautiful\n"
	.string "sights we have here, as well as our\l"
	.string "biggest cities and attractions!\p"
	.string "We'll be moving through each area on a\n"
	.string "regular schedule, so please try and\l"
	.string "stay with the group.$"

Route1_TourGuide_Text_2:
# 73 "data/maps/Route01/scripts.pory"
	.string "Our first stop is {COLOR RED}Thyme Village{COLOR DARK_GRAY}, one of\n"
	.string "our important nature reserves.$"

Route1_TourGuide_Text_3:
# 82 "data/maps/Route01/scripts.pory"
	.string "For the adventurous, we recommend the\n"
	.string "scenic route, this way.\p"
	.string "Be warned, of course, that wild Pokémon\n"
	.string "may lurk in tall grass.\l"
	.string "Be sure to use a Repel!$"

Route1_TourGuide_Text_4:
# 93 "data/maps/Route01/scripts.pory"
	.string "And for those who signed up for our\n"
	.string "{PKMN} Experience Package,\l"
	.string "don't forget to pick up your\l"
	.string "complimentary {COLOR BLUE}Trainer supplies!{COLOR DARK_GRAY}$"

Route1_TourGuide_Text_5:
# 104 "data/maps/Route01/scripts.pory"
	.string "{SPEAKER NAME_MOM}{PLAYER}, why don't you take the scenic\n"
	.string "route?\p"
	.string "Your mom is tired from the trip…\n"
	.string "Let's meet up in town, okay?$"

Route1_TourGuide_Text_6:
# 116 "data/maps/Route01/scripts.pory"
	.string "Now, let's be off!$"

Route1_RoadBlock_Text_0:
# 187 "data/maps/Route01/scripts.pory"
	.string "{COLOR LIGHT_BLUE}{SHADOW WHITE}I shouldn't walk on the road…$"

Route1_BallGuy_Text_0:
# 227 "data/maps/Route01/scripts.pory"
	.string "EMPLOYEE$"

Route1_BallGuy_Text_1:
# 234 "data/maps/Route01/scripts.pory"
	.string "Hello, and thank you for choosing us for\n"
	.string "your tour!\p"
	.string "Are you an aspiring trainer? Then\n"
	.string "please, take these!$"

Route1_BallGuy_Text_2:
# 240 "data/maps/Route01/scripts.pory"
	.string "Some Pokéballs and Potions, courtesy\n"
	.string "of our local Pokémart!\p"
	.string "Make sure to {COLOR BLUE}weaken Pokémon before\n"
	.string "trying to catch them{COLOR DARK_GRAY}, and feel free to\l"
	.string "{COLOR BLUE}use potions if yours start to feel\l"
	.string "tired{COLOR DARK_GRAY}!\p"
	.string "And be sure to visit any Pokémart to\n"
	.string "stock up once you run out!$"

Route1_BallGuy_Text_3:
# 257 "data/maps/Route01/scripts.pory"
	.string "Sorry, we only prepared one starter kit\n"
	.string "per trainer. You'll have to visit the\l"
	.string "Pokémart in the next town for more!$"

Route1_BallGuy_Text_4:
# 267 "data/maps/Route01/scripts.pory"
	.string "Hello again! Have you run low on\n"
	.string "Pokéballs?\p"
	.string "Not to worry. We're fully restocked, so\n"
	.string "have one on the house!$"

Route1_BallGuy_Text_5:
# 272 "data/maps/Route01/scripts.pory"
	.string "When using a Pokéball, be sure you\n"
	.string "weaken the wild Pokémon first.\p"
	.string "Immobilizing them with a status effect\n"
	.string "may also help.\p"
	.string "Good luck out there!$"

Route1_BallGuy_Text_6:
# 281 "data/maps/Route01/scripts.pory"
	.string "Be sure to visit our Pokémarts to stock\n"
	.string "up on supplies!$"

Route1_GrassKid_Text_0:
# 306 "data/maps/Route01/scripts.pory"
	.string "I dropped some money trying to rush\n"
	.string "back to the Center earlier.\p"
	.string "I bet that darned Fletchling is already\n"
	.string "making a nest out of my cash…$"

Route1_RoadSign_Text_0:
# 313 "data/maps/Route01/scripts.pory"
	.string "Please do not block traffic.$"

Route1_GrassSign_Text_0:
# 317 "data/maps/Route01/scripts.pory"
	.string "ROUTE 1 - Walking Trail\n"
	.string "Be on the lookout for wild Pokémon in\l"
	.string "the tall grass!$"

Route1_Birdman_Text_0:
# 325 "data/maps/Route01/scripts.pory"
	.string "{SPEAKER NAME_MAN}So this is the Sekien region!\p"
	.string "I heard there's some pretty interesting\n"
	.string "wildlife here…\p"
	.string "But well, we are still kinda close to the\n"
	.string "roads.$"

Route1_Olive_Text_0:
# 357 "data/maps/Route01/scripts.pory"
	.string "{SPEAKER NAME_OLIVE}Oh, hello again! {PLAYER}, right?\p"
	.string "After our battle, {STR_VAR_1} was\n"
	.string "suddenly so excited to head out.\l"
	.string "I wonder what they're thinking…?\p"
	.string "Mr. Sequoia said we should try to catch\n"
	.string "more Pokémon ourselves, but we are\l"
	.string "taking a short rest here.\p"
	.string "I think {COLOR BLUE}that boy {COLOR DARK_GRAY} was looking for you,\n"
	.string "though. Maybe he's nearby?$"

Route1_Olive_Text_1:
# 367 "data/maps/Route01/scripts.pory"
	.string "{SPEAKER NAME_GIRL}Oh, hello! You're the one from the\n"
	.string "raffle, yes…?\p"
	.string "I must not have introduced myself. My\n"
	.string "name is {COLOR BLUE}Olive{COLOR DARK_GRAY}!\p"
	.string "We watched your battle earlier… Yes,\n"
	.string "{STR_VAR_1} and I.\p"
	.string "She was so excited after watching you\n"
	.string "that we went ahead right away!$"

Route1_Olive_Text_2:
# 376 "data/maps/Route01/scripts.pory"
	.string "I see you have already started making\n"
	.string "new friends as well!\p"
	.string "I am sure Mr. Sequoia would be happy\n"
	.string "with us.$"

Route1_Olive_Text_3:
# 381 "data/maps/Route01/scripts.pory"
	.string "Have you thought about making some new\n"
	.string "friends along the way?\p"
	.string "Mr. Sequoia said we should do our best\n"
	.string "to, so we have!$"

Route1_Olive_Text_4:
# 386 "data/maps/Route01/scripts.pory"
	.string "Before we settle in for a break… what\n"
	.string "do you say?\l"
	.string "Would you like to play with us too?$"

Route1_Olive_Text_5:
# 393 "data/maps/Route01/scripts.pory"
	.string "{SPEAKER NAME_OLIVE}Hello again! Did you need something?\p"
	.string "…Oh! Did you and your {STR_VAR_1}\n"
	.string "want to play?$"

Route1_Olive_Text_6:
# 400 "data/maps/Route01/scripts.pory"
	.string "{SPEAKER NAME_OLIVE}I'm so sorry for before! I hope your\n"
	.string "Pokémon are alright.\p"
	.string "Thank you for playing with us. We feel\n"
	.string "all energized now!$"

Route1_Olive_Text_7:
# 406 "data/maps/Route01/scripts.pory"
	.string "{SPEAKER NAME_OLIVE}We're still thinking about the League\n"
	.string "Challenge ourselves…\p"
	.string "It sounds like it would be a lot of work,\n"
	.string "but it could be fun, too.$"

Route1_Olive_Text_8:
# 412 "data/maps/Route01/scripts.pory"
	.string "{SPEAKER NAME_OLIVE}Isn't the weather perfect for a quiet\n"
	.string "walk?\p"
	.string "If you take it slow, you can even avoid\n"
	.string "most of the tall grass.$"

Route1_Olive_Confirm_Text_0:
# 440 "data/maps/Route01/scripts.pory"
	.string "Oh, I understand! You must be tired,\n"
	.string "too.\p"
	.string "Well, we will be here for a while before\n"
	.string "going to Thyme.\l"
	.string "Why don't you take a break, too?$"

Route1_Olive_PostBattle_Text_0:
# 463 "data/maps/Route01/scripts.pory"
	.string "{SPEAKER NAME_OLIVE}You are already quite used to this,\n"
	.string "aren't you?\p"
	.string "Are you going to take the Sekien League\n"
	.string "Challenge as well?\p"
	.string "I heard that the tour sponsors\n"
	.string "challengers, but nobody has really\l"
	.string "mentioned it…$"

Route1_Olive_PostBattle_Text_1:
# 470 "data/maps/Route01/scripts.pory"
	.string "{SPEAKER NAME_OLIVE}You two are really quite confident,\n"
	.string "aren't you?\p"
	.string "I suppose you are taking the Sekien\n"
	.string "League Challenge, then? I heard that\l"
	.string "the tour sponsors challengers, but\l"
	.string "nobody has really mentioned it…$"

Route1_LiamTalk_Text_0:
# 488 "data/maps/Route01/scripts.pory"
	.string "{SPEAKER NAME_LIAM}Oh, it's you… {PLAYER}, was it?\p"
	.string "You might've noticed, but Pokémon tire\n"
	.string "really easily.\p"
	.string "They can only use their moves so much,\n"
	.string "and if they faint that's it.\p"
	.string "You should really bring lots of items…\n"
	.string "if you plan to keep up, anyway.$"

Route1_LiamTalk_Text_1:
# 494 "data/maps/Route01/scripts.pory"
	.string "{SPEAKER NAME_LIAM}Oh, {PLAYER}.\p"
	.string "You really surprised me, winning right\n"
	.string "after just meeting your Pokémon.\p"
	.string "But I'm not about to fall behind,\n"
	.string "alright?\p"
	.string "I've already caught some of the\n"
	.string "Pokémon on this path…\l"
	.string "I'm just taking a short break.\p"
	.string "Have you seen that other girl yet?\n"
	.string "She's around here too.\p"
	.string "I think I might challenge her once we're\n"
	.string "all in Thyme.$"

Route1_LiamTalk_Text_2:
# 505 "data/maps/Route01/scripts.pory"
	.string "{SPEAKER NAME_BOY}Hey, you're the other one from the\n"
	.string "raffle, right?\p"
	.string "Was it {PLAYER}…? I overheard before\n"
	.string "your battle.$"

Route1_LiamTalk_Text_3:
# 510 "data/maps/Route01/scripts.pory"
	.string "{COLOR BLUE}That girl {COLOR DARK_GRAY} is more skilled than she\n"
	.string "looks, huh? Or was it bad luck?$"

Route1_LiamTalk_Text_4:
# 514 "data/maps/Route01/scripts.pory"
	.string "You're pretty good at this, huh? Or was\n"
	.string "{COLOR BLUE}that girl {COLOR DARK_GRAY}just not into it?$"

Route1_LiamTalk_Text_5:
# 519 "data/maps/Route01/scripts.pory"
	.string "That {COLOR BLUE}weird professor{COLOR DARK_GRAY}… he's not telling\n"
	.string "us the whole story, huh?$"

Route1_LiamTalk_Text_6:
# 524 "data/maps/Route01/scripts.pory"
	.string "{SPEAKER NAME_LIAM}Anyway, my name's {COLOR BLUE}Liam.\p"
	.string "{COLOR DARK_GRAY}But more importantly, I wanna see\n"
	.string "something for myself:\l"
	.string "Just how good are you as a rival?\p"
	.string "What do you say? How about a battle?$"

Route1_LiamTalk_Text_7:
# 532 "data/maps/Route01/scripts.pory"
	.string "{SPEAKER NAME_LIAM}Heading into town? Or did you change\n"
	.string "your mind about battling me?$"

Route1_LiamTalk_Text_8:
# 537 "data/maps/Route01/scripts.pory"
	.string "{SPEAKER NAME_LIAM}Hey, are you alright?\p"
	.string "I need you to get stronger on this trip\n"
	.string "too, okay?\p"
	.string "{COLOR BLUE}That professor {COLOR DARK_GRAY}said we're rivals now, so\n"
	.string "you have to keep up!\p"
	.string "I'm expecting more of a challenge next\n"
	.string "time we battle!$"

Route1_LiamTalk_Text_9:
# 543 "data/maps/Route01/scripts.pory"
	.string "{SPEAKER NAME_LIAM}Did you notice? I really tried to get a\n"
	.string "head start.\p"
	.string "Catching lots of Pokémon is the key to\n"
	.string "being ready for anything.$"

Route1_LiamTalk_Text_10:
# 547 "data/maps/Route01/scripts.pory"
	.string "{SPEAKER NAME_LIAM}If you're still hanging around here, you\n"
	.string "should catch more Pokémon.\p"
	.string "You can travel with six, so there's no\n"
	.string "reason to ever have any less.$"

Route1_Liam_Confirm_Text_0:
# 575 "data/maps/Route01/scripts.pory"
	.string "Huh? Why not? Oh, I get it.\l"
	.string "You want to get stronger first, right?\p"
	.string "I'll just have to battle you later on.\n"
	.string "We've got time!$"

Route1_Liam_PostBattle_Text_0:
# 600 "data/maps/Route01/scripts.pory"
	.string "For real…? Am I the weakest link?\l"
	.string "No, we just got started after all.\l"
	.string "There's lots of time to get stronger!$"

Route1_Liam_PostBattle_Text_1:
# 606 "data/maps/Route01/scripts.pory"
	.string "You guys are actually pretty strong,\n"
	.string "huh?\p"
	.string "I won't underestimate you a second\n"
	.string "time!$"

Route1_Liam_PostBattle_Text_2:
# 610 "data/maps/Route01/scripts.pory"
	.string "By the way, have you heard of the\n"
	.string "Sekien League Challenge?\p"
	.string "That's what I came here for, not any of\n"
	.string "this tourist stuff.\p"
	.string "So I need you to keep battling us along\n"
	.string "the way, okay?\p"
	.string "You'll probably keep getting stronger\n"
	.string "too, so we could both use the practice.$"

Route1_Olive_Intro:
# 448 "data/maps/Route01/scripts.pory"
	.string "I thought you might!$"

Route1_Olive_Loss:
# 452 "data/maps/Route01/scripts.pory"
	.string "Haha, we lost!$"

Route1_Liam_Intro:
# 583 "data/maps/Route01/scripts.pory"
	.string "Good answer!$"

Route1_Liam_Loss:
# 587 "data/maps/Route01/scripts.pory"
	.string "Huh? I'm already out of Pokémon…$"
