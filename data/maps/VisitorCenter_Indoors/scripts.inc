VisitorCenter_Indoors_MapScripts::
# 43 "data/maps/VisitorCenter_Indoors/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, VisitorCenter_Indoors_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

VisitorCenter_Indoors_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 45 "data/maps/VisitorCenter_Indoors/scripts.pory"
	map_script_2 VAR_VISCEN_STATE, 1, VisCen_In_Enter
	.2byte 0


VisCen_In_Enter::
# 51 "data/maps/VisitorCenter_Indoors/scripts.pory"
	lock
# 52 "data/maps/VisitorCenter_Indoors/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Player_Enter
# 53 "data/maps/VisitorCenter_Indoors/scripts.pory"
	waitmovement 0
# 54 "data/maps/VisitorCenter_Indoors/scripts.pory"
	setvar VAR_VISCEN_STATE, 2
	end


VisCen_In_RoadBlock::
# 60 "data/maps/VisitorCenter_Indoors/scripts.pory"
	checkitem ITEM_SS_TICKET, 1
# 63 "data/maps/VisitorCenter_Indoors/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_le VisCen_In_RoadBlock_1
	return

VisCen_In_RoadBlock_1:
# 65 "data/maps/VisitorCenter_Indoors/scripts.pory"
	lock
# 66 "data/maps/VisitorCenter_Indoors/scripts.pory"
	msgbox VisCen_In_RoadBlock_Text_0, MSGBOX_AUTOCLOSE
# 68 "data/maps/VisitorCenter_Indoors/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 69 "data/maps/VisitorCenter_Indoors/scripts.pory"
	waitmovement 0
# 70 "data/maps/VisitorCenter_Indoors/scripts.pory"
	release
	end


VisCen_In_DoorBlock::
# 77 "data/maps/VisitorCenter_Indoors/scripts.pory"
	lockall
# 78 "data/maps/VisitorCenter_Indoors/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 79 "data/maps/VisitorCenter_Indoors/scripts.pory"
	playse SE_LEDGE
# 80 "data/maps/VisitorCenter_Indoors/scripts.pory"
	applymovement 4, Prof_JumpOut
# 81 "data/maps/VisitorCenter_Indoors/scripts.pory"
	waitmovement 0
# 82 "data/maps/VisitorCenter_Indoors/scripts.pory"
	msgbox VisCen_In_DoorBlock_Text_0
# 83 "data/maps/VisitorCenter_Indoors/scripts.pory"
	closemessage
# 84 "data/maps/VisitorCenter_Indoors/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 87 "data/maps/VisitorCenter_Indoors/scripts.pory"
	compare VAR_TEMP_0, 1
	goto_if_eq VisCen_In_DoorBlock_2
# 90 "data/maps/VisitorCenter_Indoors/scripts.pory"
	applymovement 4, Prof_Approach_Right
VisCen_In_DoorBlock_1:
# 91 "data/maps/VisitorCenter_Indoors/scripts.pory"
	waitmovement 0
# 93 "data/maps/VisitorCenter_Indoors/scripts.pory"
	setspeaker SP_NAME_UNKNOWN
# 94 "data/maps/VisitorCenter_Indoors/scripts.pory"
	goto_if_set FLAG_TEMP_3, VisCen_In_DoorBlock_6
# 104 "data/maps/VisitorCenter_Indoors/scripts.pory"
	msgbox VisCen_In_DoorBlock_Text_2
VisCen_In_DoorBlock_5:
# 109 "data/maps/VisitorCenter_Indoors/scripts.pory"
	setspeaker SP_NAME_NONE
# 112 "data/maps/VisitorCenter_Indoors/scripts.pory"
	additem ITEM_EON_TICKET, 1
# 113 "data/maps/VisitorCenter_Indoors/scripts.pory"
	playfanfare MUS_RG_OBTAIN_KEY_ITEM
# 114 "data/maps/VisitorCenter_Indoors/scripts.pory"
	msgbox VisCen_In_DoorBlock_Text_3
# 116 "data/maps/VisitorCenter_Indoors/scripts.pory"
	waitfanfare
# 118 "data/maps/VisitorCenter_Indoors/scripts.pory"
	msgbox VisCen_In_DoorBlock_Text_4
# 119 "data/maps/VisitorCenter_Indoors/scripts.pory"
	closemessage
# 122 "data/maps/VisitorCenter_Indoors/scripts.pory"
	compare VAR_TEMP_0, 1
	goto_if_eq VisCen_In_DoorBlock_10
# 125 "data/maps/VisitorCenter_Indoors/scripts.pory"
	applymovement 4, Prof_Exit_from_Right
VisCen_In_DoorBlock_9:
# 126 "data/maps/VisitorCenter_Indoors/scripts.pory"
	waitmovement 0
# 127 "data/maps/VisitorCenter_Indoors/scripts.pory"
	removeobject 4
# 128 "data/maps/VisitorCenter_Indoors/scripts.pory"
	playse SE_EXIT
# 129 "data/maps/VisitorCenter_Indoors/scripts.pory"
	waitse
# 132 "data/maps/VisitorCenter_Indoors/scripts.pory"
	setvar VAR_VISCEN_STATE, 3
# 134 "data/maps/VisitorCenter_Indoors/scripts.pory"
	releaseall
	end

VisCen_In_DoorBlock_2:
# 88 "data/maps/VisitorCenter_Indoors/scripts.pory"
	applymovement 4, Prof_Approach_Left
	goto VisCen_In_DoorBlock_1

VisCen_In_DoorBlock_6:
# 96 "data/maps/VisitorCenter_Indoors/scripts.pory"
	msgbox VisCen_In_DoorBlock_Text_1
	goto VisCen_In_DoorBlock_5

VisCen_In_DoorBlock_10:
# 123 "data/maps/VisitorCenter_Indoors/scripts.pory"
	applymovement 4, Prof_Exit_from_Left
	goto VisCen_In_DoorBlock_9


VisCen_In_Mom::
# 141 "data/maps/VisitorCenter_Indoors/scripts.pory"
	lock
# 144 "data/maps/VisitorCenter_Indoors/scripts.pory"
	setspeaker SP_NAME_MOM
# 146 "data/maps/VisitorCenter_Indoors/scripts.pory"
	goto_if_set FLAG_VC_OUT_BALLS, VisCen_In_Mom_2
# 172 "data/maps/VisitorCenter_Indoors/scripts.pory"
	msgbox VisCen_In_Mom_Text_3
# 173 "data/maps/VisitorCenter_Indoors/scripts.pory"
	call Common_NPCNotice
# 174 "data/maps/VisitorCenter_Indoors/scripts.pory"
	msgbox VisCen_In_Mom_Text_4, MSGBOX_AUTOCLOSE
# 176 "data/maps/VisitorCenter_Indoors/scripts.pory"
	applymovement 3, Common_Movement_FaceUp
# 177 "data/maps/VisitorCenter_Indoors/scripts.pory"
	waitmovement 0
VisCen_In_Mom_1:
	end

VisCen_In_Mom_2:
# 148 "data/maps/VisitorCenter_Indoors/scripts.pory"
	msgbox VisCen_In_Mom_Text_0
# 149 "data/maps/VisitorCenter_Indoors/scripts.pory"
	call Common_NPCNotice
# 150 "data/maps/VisitorCenter_Indoors/scripts.pory"
	msgbox VisCen_In_Mom_Text_1
# 154 "data/maps/VisitorCenter_Indoors/scripts.pory"
	closemessage
# 157 "data/maps/VisitorCenter_Indoors/scripts.pory"
	playse SE_DING_DONG
# 158 "data/maps/VisitorCenter_Indoors/scripts.pory"
	waitse
# 159 "data/maps/VisitorCenter_Indoors/scripts.pory"
	delay 32
# 161 "data/maps/VisitorCenter_Indoors/scripts.pory"
	msgbox VisCen_In_Mom_Text_2, MSGBOX_AUTOCLOSE
# 164 "data/maps/VisitorCenter_Indoors/scripts.pory"
	setflag FLAG_VC_COMPLETE
# 165 "data/maps/VisitorCenter_Indoors/scripts.pory"
	addvar VAR_VISCEN_STATE, 0x90
# 167 "data/maps/VisitorCenter_Indoors/scripts.pory"
	warp MAP_VISITOR_CENTER, 0, 0, 0
# 168 "data/maps/VisitorCenter_Indoors/scripts.pory"
	waitstate
	goto VisCen_In_Mom_1


VisCen_In_Professor::
# 184 "data/maps/VisitorCenter_Indoors/scripts.pory"
	goto_if_unset FLAG_TEMP_3, VisCen_In_Professor_2
# 196 "data/maps/VisitorCenter_Indoors/scripts.pory"
	lock
# 197 "data/maps/VisitorCenter_Indoors/scripts.pory"
	msgbox VisCen_In_Professor_Text_2
# 198 "data/maps/VisitorCenter_Indoors/scripts.pory"
	call Common_NPCNotice
# 199 "data/maps/VisitorCenter_Indoors/scripts.pory"
	msgbox VisCen_In_Professor_Text_3
VisCen_In_Professor_1:
# 201 "data/maps/VisitorCenter_Indoors/scripts.pory"
	applymovement 4, Common_Movement_FaceRight
# 202 "data/maps/VisitorCenter_Indoors/scripts.pory"
	waitmovement 0
# 203 "data/maps/VisitorCenter_Indoors/scripts.pory"
	release
	end

VisCen_In_Professor_2:
# 186 "data/maps/VisitorCenter_Indoors/scripts.pory"
	lock
# 187 "data/maps/VisitorCenter_Indoors/scripts.pory"
	msgbox VisCen_In_Professor_Text_0
# 189 "data/maps/VisitorCenter_Indoors/scripts.pory"
	call Common_NPCNotice
# 190 "data/maps/VisitorCenter_Indoors/scripts.pory"
	msgbox VisCen_In_Professor_Text_1
# 192 "data/maps/VisitorCenter_Indoors/scripts.pory"
	setflag FLAG_TEMP_3
	goto VisCen_In_Professor_1


VisCen_In_Receptionist::
# 217 "data/maps/VisitorCenter_Indoors/scripts.pory"
	compare VAR_TEMP_3, 99
	goto_if_lt VisCen_In_Receptionist_2
# 275 "data/maps/VisitorCenter_Indoors/scripts.pory"
	msgbox VisCen_In_Receptionist_Text_9, MSGBOX_NPC
	return

VisCen_In_Receptionist_2:
# 219 "data/maps/VisitorCenter_Indoors/scripts.pory"
	lock
# 220 "data/maps/VisitorCenter_Indoors/scripts.pory"
	msgbox VisCen_In_Receptionist_Text_0, MSGBOX_YESNO
# 223 "data/maps/VisitorCenter_Indoors/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq VisCen_In_Receptionist_5
# 237 "data/maps/VisitorCenter_Indoors/scripts.pory"
	switch VAR_TEMP_3
# 239 "data/maps/VisitorCenter_Indoors/scripts.pory"
	case 0, VisCen_In_Receptionist_9
# 243 "data/maps/VisitorCenter_Indoors/scripts.pory"
	case 1, VisCen_In_Receptionist_10
# 248 "data/maps/VisitorCenter_Indoors/scripts.pory"
	case 2, VisCen_In_Receptionist_11
# 253 "data/maps/VisitorCenter_Indoors/scripts.pory"
	case 3, VisCen_In_Receptionist_12
# 259 "data/maps/VisitorCenter_Indoors/scripts.pory"
	case 4, VisCen_In_Receptionist_13
# 266 "data/maps/VisitorCenter_Indoors/scripts.pory"
	setvar VAR_TEMP_3, 99
# 267 "data/maps/VisitorCenter_Indoors/scripts.pory"
	msgbox VisCen_In_Receptionist_Text_8, MSGBOX_AUTOCLOSE
VisCen_In_Receptionist_4:
	end

VisCen_In_Receptionist_5:
# 225 "data/maps/VisitorCenter_Indoors/scripts.pory"
	msgbox VisCen_In_Receptionist_Text_1
# 226 "data/maps/VisitorCenter_Indoors/scripts.pory"
	closemessage
# 229 "data/maps/VisitorCenter_Indoors/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 231 "data/maps/VisitorCenter_Indoors/scripts.pory"
	msgbox VisCen_In_Receptionist_Text_2, MSGBOX_AUTOCLOSE
	goto VisCen_In_Receptionist_4

VisCen_In_Receptionist_9:
# 240 "data/maps/VisitorCenter_Indoors/scripts.pory"
	setvar VAR_TEMP_3, 1
# 241 "data/maps/VisitorCenter_Indoors/scripts.pory"
	msgbox VisCen_In_Receptionist_Text_3, MSGBOX_AUTOCLOSE
	goto VisCen_In_Receptionist_4

VisCen_In_Receptionist_10:
# 244 "data/maps/VisitorCenter_Indoors/scripts.pory"
	setvar VAR_TEMP_3, 2
# 245 "data/maps/VisitorCenter_Indoors/scripts.pory"
	msgbox VisCen_In_Receptionist_Text_4, MSGBOX_AUTOCLOSE
	goto VisCen_In_Receptionist_4

VisCen_In_Receptionist_11:
# 249 "data/maps/VisitorCenter_Indoors/scripts.pory"
	setvar VAR_TEMP_3, 3
# 250 "data/maps/VisitorCenter_Indoors/scripts.pory"
	msgbox VisCen_In_Receptionist_Text_5, MSGBOX_AUTOCLOSE
	goto VisCen_In_Receptionist_4

VisCen_In_Receptionist_12:
# 254 "data/maps/VisitorCenter_Indoors/scripts.pory"
	setvar VAR_TEMP_3, 4
# 255 "data/maps/VisitorCenter_Indoors/scripts.pory"
	msgbox VisCen_In_Receptionist_Text_6, MSGBOX_AUTOCLOSE
	goto VisCen_In_Receptionist_4

VisCen_In_Receptionist_13:
# 260 "data/maps/VisitorCenter_Indoors/scripts.pory"
	setvar VAR_TEMP_3, 5
# 261 "data/maps/VisitorCenter_Indoors/scripts.pory"
	msgbox VisCen_In_Receptionist_Text_7, MSGBOX_AUTOCLOSE
	goto VisCen_In_Receptionist_4


VisCen_In_PokeParents::
# 280 "data/maps/VisitorCenter_Indoors/scripts.pory"
	lock
# 281 "data/maps/VisitorCenter_Indoors/scripts.pory"
	goto_if_unset FLAG_TEMP_1, VisCen_In_PokeParents_1
# 305 "data/maps/VisitorCenter_Indoors/scripts.pory"
	msgbox VisCen_In_PokeParents_Text_4, MSGBOX_AUTOCLOSE
# 307 "data/maps/VisitorCenter_Indoors/scripts.pory"
	release
	end

VisCen_In_PokeParents_1:
# 283 "data/maps/VisitorCenter_Indoors/scripts.pory"
	applymovement 9, Common_Movement_WalkInPlaceFasterLeft
# 284 "data/maps/VisitorCenter_Indoors/scripts.pory"
	waitmovement 0
# 285 "data/maps/VisitorCenter_Indoors/scripts.pory"
	msgbox VisCen_In_PokeParents_Text_0
# 287 "data/maps/VisitorCenter_Indoors/scripts.pory"
	applymovement 8, Common_Movement_WalkInPlaceFasterRight
# 288 "data/maps/VisitorCenter_Indoors/scripts.pory"
	waitmovement 0
# 289 "data/maps/VisitorCenter_Indoors/scripts.pory"
	msgbox VisCen_In_PokeParents_Text_1
# 291 "data/maps/VisitorCenter_Indoors/scripts.pory"
	applymovement 9, Common_Movement_WalkInPlaceFasterLeft
# 292 "data/maps/VisitorCenter_Indoors/scripts.pory"
	waitmovement 0
# 293 "data/maps/VisitorCenter_Indoors/scripts.pory"
	msgbox VisCen_In_PokeParents_Text_2
# 295 "data/maps/VisitorCenter_Indoors/scripts.pory"
	applymovement 8, Common_Movement_WalkInPlaceFasterRight
# 296 "data/maps/VisitorCenter_Indoors/scripts.pory"
	waitmovement 0
# 297 "data/maps/VisitorCenter_Indoors/scripts.pory"
	msgbox VisCen_In_PokeParents_Text_3, MSGBOX_AUTOCLOSE
# 299 "data/maps/VisitorCenter_Indoors/scripts.pory"
	setflag FLAG_TEMP_1
# 300 "data/maps/VisitorCenter_Indoors/scripts.pory"
	releaseall
	end


VisCen_In_PokeKid::
# 313 "data/maps/VisitorCenter_Indoors/scripts.pory"
	setspeaker SP_NAME_BOY
# 314 "data/maps/VisitorCenter_Indoors/scripts.pory"
	goto_if_unset FLAG_TEMP_5, VisCen_In_PokeKid_1
# 323 "data/maps/VisitorCenter_Indoors/scripts.pory"
	msgbox VisCen_In_PokeKid_Text_1, MSGBOX_NPC
	return

VisCen_In_PokeKid_1:
# 316 "data/maps/VisitorCenter_Indoors/scripts.pory"
	setflag FLAG_TEMP_5
# 317 "data/maps/VisitorCenter_Indoors/scripts.pory"
	msgbox VisCen_In_PokeKid_Text_0, MSGBOX_NPC
	return


VisCen_In_Parasol::
# 330 "data/maps/VisitorCenter_Indoors/scripts.pory"
	setspeaker SP_NAME_GIRL
# 331 "data/maps/VisitorCenter_Indoors/scripts.pory"
	goto_if_unset FLAG_TEMP_4, VisCen_In_Parasol_1
# 341 "data/maps/VisitorCenter_Indoors/scripts.pory"
	msgbox VisCen_In_Parasol_Text_1, MSGBOX_NPC
	return

VisCen_In_Parasol_1:
# 333 "data/maps/VisitorCenter_Indoors/scripts.pory"
	setflag FLAG_TEMP_4
# 334 "data/maps/VisitorCenter_Indoors/scripts.pory"
	msgbox VisCen_In_Parasol_Text_0, MSGBOX_NPC
	return


VisCen_In_Birdman::
# 348 "data/maps/VisitorCenter_Indoors/scripts.pory"
	setspeaker SP_NAME_MAN
# 349 "data/maps/VisitorCenter_Indoors/scripts.pory"
	goto_if_unset FLAG_TEMP_2, VisCen_In_Birdman_1
# 369 "data/maps/VisitorCenter_Indoors/scripts.pory"
	msgbox VisCen_In_Birdman_Text_2, MSGBOX_NPC
	return

VisCen_In_Birdman_1:
# 351 "data/maps/VisitorCenter_Indoors/scripts.pory"
	lockall
# 352 "data/maps/VisitorCenter_Indoors/scripts.pory"
	faceplayer
# 353 "data/maps/VisitorCenter_Indoors/scripts.pory"
	msgbox VisCen_In_Birdman_Text_0
# 357 "data/maps/VisitorCenter_Indoors/scripts.pory"
	applymovement 6, Common_Movement_WalkInPlaceFasterRight
# 358 "data/maps/VisitorCenter_Indoors/scripts.pory"
	waitmovement 0
# 359 "data/maps/VisitorCenter_Indoors/scripts.pory"
	msgbox VisCen_In_Birdman_Text_1
# 360 "data/maps/VisitorCenter_Indoors/scripts.pory"
	closemessage
# 362 "data/maps/VisitorCenter_Indoors/scripts.pory"
	setflag FLAG_TEMP_2
# 363 "data/maps/VisitorCenter_Indoors/scripts.pory"
	applymovement 7, Common_Movement_FaceLeft
# 364 "data/maps/VisitorCenter_Indoors/scripts.pory"
	waitmovement 0
# 365 "data/maps/VisitorCenter_Indoors/scripts.pory"
	goto Wingull_Squawk
	return


VisCen_In_Wingull::
# 374 "data/maps/VisitorCenter_Indoors/scripts.pory"
	lock
# 375 "data/maps/VisitorCenter_Indoors/scripts.pory"
	faceplayer
# 376 "data/maps/VisitorCenter_Indoors/scripts.pory"
	goto Wingull_Squawk
	return


Wingull_Squawk:
# 380 "data/maps/VisitorCenter_Indoors/scripts.pory"
	applymovement 7, Common_Movement_QuestionMark
# 381 "data/maps/VisitorCenter_Indoors/scripts.pory"
	playmoncry SPECIES_WINGULL, 0
# 382 "data/maps/VisitorCenter_Indoors/scripts.pory"
	waitmoncry
# 383 "data/maps/VisitorCenter_Indoors/scripts.pory"
	releaseall
	end


VisCen_In_Otaku::
# 389 "data/maps/VisitorCenter_Indoors/scripts.pory"
	setspeaker SP_NAME_MAN
# 390 "data/maps/VisitorCenter_Indoors/scripts.pory"
	compare VAR_CUTE_BABY, 0
	goto_if_gt VisCen_In_Otaku_2
# 402 "data/maps/VisitorCenter_Indoors/scripts.pory"
	lockall
# 403 "data/maps/VisitorCenter_Indoors/scripts.pory"
	faceplayer
# 404 "data/maps/VisitorCenter_Indoors/scripts.pory"
	msgbox VisCen_In_Otaku_Text_1, MSGBOX_YESNO
# 408 "data/maps/VisitorCenter_Indoors/scripts.pory"
	goto_if_eq VAR_RESULT, 1, VisCen_In_Otaku_Agree
VisCen_In_Otaku_1:
# 410 "data/maps/VisitorCenter_Indoors/scripts.pory"
	msgbox VisCen_In_Otaku_Text_2, MSGBOX_AUTOCLOSE
	end

VisCen_In_Otaku_2:
# 392 "data/maps/VisitorCenter_Indoors/scripts.pory"
	lockall
# 393 "data/maps/VisitorCenter_Indoors/scripts.pory"
	faceplayer
# 394 "data/maps/VisitorCenter_Indoors/scripts.pory"
	msgbox VisCen_In_Otaku_Text_0, MSGBOX_YESNO
# 398 "data/maps/VisitorCenter_Indoors/scripts.pory"
	goto_if_eq VAR_RESULT, 1, VisCen_In_Otaku_Agree
	goto VisCen_In_Otaku_1


VisCen_In_Otaku_Agree:
# 416 "data/maps/VisitorCenter_Indoors/scripts.pory"
	msgbox VisCen_In_Otaku_Agree_Text_0
# 418 "data/maps/VisitorCenter_Indoors/scripts.pory"
	closemessage
# 420 "data/maps/VisitorCenter_Indoors/scripts.pory"
	call VisCen_In_Otaku_ChoiceLoop
# 422 "data/maps/VisitorCenter_Indoors/scripts.pory"
	msgbox VisCen_In_Otaku_Agree_Text_1
# 424 "data/maps/VisitorCenter_Indoors/scripts.pory"
	closemessage
# 425 "data/maps/VisitorCenter_Indoors/scripts.pory"
	hidemonpic
# 427 "data/maps/VisitorCenter_Indoors/scripts.pory"
	msgbox VisCen_In_Otaku_Agree_Text_2, MSGBOX_AUTOCLOSE
# 430 "data/maps/VisitorCenter_Indoors/scripts.pory"
	release
	end


VisCen_In_Otaku_ChoiceLoop:
# 435 "data/maps/VisitorCenter_Indoors/scripts.pory"
	random 5
# 436 "data/maps/VisitorCenter_Indoors/scripts.pory"
	copyvar VAR_TEMP_4, VAR_RESULT
# 437 "data/maps/VisitorCenter_Indoors/scripts.pory"
	addvar VAR_TEMP_4, 1
# 438 "data/maps/VisitorCenter_Indoors/scripts.pory"
	goto_if_eq VAR_TEMP_4, VAR_TEMP_5, VisCen_In_Otaku_ChoiceLoop
# 439 "data/maps/VisitorCenter_Indoors/scripts.pory"
	goto VisCen_In_Otaku_ShowMon
	return


VisCen_In_Otaku_ShowMon:
# 443 "data/maps/VisitorCenter_Indoors/scripts.pory"
	copyvar VAR_TEMP_5, VAR_TEMP_4
# 445 "data/maps/VisitorCenter_Indoors/scripts.pory"
	switch VAR_TEMP_5
# 447 "data/maps/VisitorCenter_Indoors/scripts.pory"
	case 1, VisCen_In_Otaku_ShowMon_3
# 449 "data/maps/VisitorCenter_Indoors/scripts.pory"
	case 2, VisCen_In_Otaku_ShowMon_4
# 451 "data/maps/VisitorCenter_Indoors/scripts.pory"
	case 3, VisCen_In_Otaku_ShowMon_5
# 453 "data/maps/VisitorCenter_Indoors/scripts.pory"
	case 4, VisCen_In_Otaku_ShowMon_6
# 455 "data/maps/VisitorCenter_Indoors/scripts.pory"
	case 5, VisCen_In_Otaku_ShowMon_7
# 458 "data/maps/VisitorCenter_Indoors/scripts.pory"
	setvar VAR_CUTE_BABY, SPECIES_STUNFISK
VisCen_In_Otaku_ShowMon_1:
# 460 "data/maps/VisitorCenter_Indoors/scripts.pory"
	showmonpic VAR_CUTE_BABY, 10, 3
# 461 "data/maps/VisitorCenter_Indoors/scripts.pory"
	delay 48
	return

VisCen_In_Otaku_ShowMon_3:
# 448 "data/maps/VisitorCenter_Indoors/scripts.pory"
	setvar VAR_CUTE_BABY, SPECIES_CLEFFA
	goto VisCen_In_Otaku_ShowMon_1

VisCen_In_Otaku_ShowMon_4:
# 450 "data/maps/VisitorCenter_Indoors/scripts.pory"
	setvar VAR_CUTE_BABY, SPECIES_TOGEPI
	goto VisCen_In_Otaku_ShowMon_1

VisCen_In_Otaku_ShowMon_5:
# 452 "data/maps/VisitorCenter_Indoors/scripts.pory"
	setvar VAR_CUTE_BABY, SPECIES_AZURILL
	goto VisCen_In_Otaku_ShowMon_1

VisCen_In_Otaku_ShowMon_6:
# 454 "data/maps/VisitorCenter_Indoors/scripts.pory"
	setvar VAR_CUTE_BABY, SPECIES_CUTIEFLY
	goto VisCen_In_Otaku_ShowMon_1

VisCen_In_Otaku_ShowMon_7:
# 456 "data/maps/VisitorCenter_Indoors/scripts.pory"
	setvar VAR_CUTE_BABY, SPECIES_MILCERY
	goto VisCen_In_Otaku_ShowMon_1


VisCen_In_RestingMan::
# 467 "data/maps/VisitorCenter_Indoors/scripts.pory"
	msgbox VisCen_In_RestingMan_Text_0, MSGBOX_NPC
	return


# 477 "data/maps/VisitorCenter_Indoors/scripts.pory"
Player_Enter:
# 479 "data/maps/VisitorCenter_Indoors/scripts.pory"
	walk_down
# 479 "data/maps/VisitorCenter_Indoors/scripts.pory"
	walk_down
# 479 "data/maps/VisitorCenter_Indoors/scripts.pory"
	walk_down
	step_end

# 489 "data/maps/VisitorCenter_Indoors/scripts.pory"
Prof_JumpOut:
# 491 "data/maps/VisitorCenter_Indoors/scripts.pory"
	jump_right
# 492 "data/maps/VisitorCenter_Indoors/scripts.pory"
	walk_down
	step_end

# 494 "data/maps/VisitorCenter_Indoors/scripts.pory"
Prof_Approach_Left:
# 496 "data/maps/VisitorCenter_Indoors/scripts.pory"
	walk_down
# 496 "data/maps/VisitorCenter_Indoors/scripts.pory"
	walk_down
# 496 "data/maps/VisitorCenter_Indoors/scripts.pory"
	walk_down
	step_end

# 498 "data/maps/VisitorCenter_Indoors/scripts.pory"
Prof_Approach_Right:
# 500 "data/maps/VisitorCenter_Indoors/scripts.pory"
	walk_right
# 501 "data/maps/VisitorCenter_Indoors/scripts.pory"
	walk_down
# 501 "data/maps/VisitorCenter_Indoors/scripts.pory"
	walk_down
# 501 "data/maps/VisitorCenter_Indoors/scripts.pory"
	walk_down
	step_end

# 503 "data/maps/VisitorCenter_Indoors/scripts.pory"
Prof_Exit_from_Left:
# 505 "data/maps/VisitorCenter_Indoors/scripts.pory"
	walk_right
# 506 "data/maps/VisitorCenter_Indoors/scripts.pory"
	walk_down
# 507 "data/maps/VisitorCenter_Indoors/scripts.pory"
	delay_16
# 508 "data/maps/VisitorCenter_Indoors/scripts.pory"
	set_invisible
	step_end

# 510 "data/maps/VisitorCenter_Indoors/scripts.pory"
Prof_Exit_from_Right:
# 512 "data/maps/VisitorCenter_Indoors/scripts.pory"
	walk_left
# 513 "data/maps/VisitorCenter_Indoors/scripts.pory"
	walk_down
# 514 "data/maps/VisitorCenter_Indoors/scripts.pory"
	delay_16
# 515 "data/maps/VisitorCenter_Indoors/scripts.pory"
	set_invisible
	step_end

VisCen_In_RoadBlock_Text_0:
# 66 "data/maps/VisitorCenter_Indoors/scripts.pory"
	.string "{COLOR LIGHT_BLUE}I don't have a bus pass…$"

VisCen_In_DoorBlock_Text_0:
# 82 "data/maps/VisitorCenter_Indoors/scripts.pory"
	.string "{SPEAKER NAME_UNKNOWN}Hey kid, hang on just a sec!$"

VisCen_In_DoorBlock_Text_1:
# 96 "data/maps/VisitorCenter_Indoors/scripts.pory"
	.string "You know, now that I get a good look at\n"
	.string "you…\p"
	.string "Yeah, yeah… I can see it.\p"
	.string "Hey, sorry for the rudeness earlier.\n"
	.string "Listen, you like raffles?\p"
	.string "I-{PAUSE 8} We're holding one outside, a big\n"
	.string "Pokémon giveaway!\p"
	.string "Why don't you hold onto this ticket and\n"
	.string "stop on by?$"

VisCen_In_DoorBlock_Text_2:
# 104 "data/maps/VisitorCenter_Indoors/scripts.pory"
	.string "You wouldn't wanna miss out on the\n"
	.string "Pokémon Raffle, would ya?\p"
	.string "{FONT_SMALL}Yeah, yeah… looks about right…\p"
	.string "{FONT_NORMAL}Why don't you take this ticket? One\n"
	.string "free per tourist!$"

VisCen_In_DoorBlock_Text_3:
# 114 "data/maps/VisitorCenter_Indoors/scripts.pory"
	.string "You received a Raffle Ticket from the\n"
	.string "{COLOR BLUE}strange professor{COLOR DARK_GRAY}!$"

VisCen_In_DoorBlock_Text_4:
# 118 "data/maps/VisitorCenter_Indoors/scripts.pory"
	.string "{SPEAKER NAME_UNKNOWN}I'll go on ahead, just follow me! Trust\n"
	.string "me, it'll be worth it.$"

VisCen_In_Mom_Text_0:
# 148 "data/maps/VisitorCenter_Indoors/scripts.pory"
	.string "I just had a few more questions…$"

VisCen_In_Mom_Text_1:
# 150 "data/maps/VisitorCenter_Indoors/scripts.pory"
	.string "Hm? What's that? Oh, are they already\n"
	.string "heading out…? So pushy!\p"
	.string "…What's that you've got there?\n"
	.string "A Pokédex? And a Pokémon too??\p"
	.string "Here for 5 minutes and you're already\n"
	.string "talking to strangers…\p"
	.string "Well, I'm not looking after it for you,\n"
	.string "okay? Take care of it.$"

VisCen_In_Mom_Text_2:
# 161 "data/maps/VisitorCenter_Indoors/scripts.pory"
	.string "{SPEAKER NAME_MOM}Well, let's hurry along now! We don't\n"
	.string "want to fall behind!$"

VisCen_In_Mom_Text_3:
# 172 "data/maps/VisitorCenter_Indoors/scripts.pory"
	.string "Hi, I just had a few questions about the\n"
	.string "tour…$"

VisCen_In_Mom_Text_4:
# 174 "data/maps/VisitorCenter_Indoors/scripts.pory"
	.string "Oh, just a minute, dear. Why don't you\n"
	.string "take a look around for a while?$"

VisCen_In_Professor_Text_0:
# 187 "data/maps/VisitorCenter_Indoors/scripts.pory"
	.string "No, these guys won't do…\p"
	.string "Maybe someone with a little more…$"

VisCen_In_Professor_Text_1:
# 190 "data/maps/VisitorCenter_Indoors/scripts.pory"
	.string "Huh…? What's with the look, kid?\p"
	.string "You never see a guy standin' around\n"
	.string "some plants before?$"

VisCen_In_Professor_Text_2:
# 197 "data/maps/VisitorCenter_Indoors/scripts.pory"
	.string "Surely one of these chumps have gotta\n"
	.string "be…$"

VisCen_In_Professor_Text_3:
# 199 "data/maps/VisitorCenter_Indoors/scripts.pory"
	.string "Yeah alright I get it, hey why don't you\n"
	.string "{COLOR RED}go outside{COLOR DARK_GRAY} to play, maybe?$"

VisCen_In_Receptionist_Text_0:
# 220 "data/maps/VisitorCenter_Indoors/scripts.pory"
	.string "Hello, and welcome to our Visitor\n"
	.string "Center.\p"
	.string "Would you care for our free Pokémon\n"
	.string "{COLOR BLUE}healing services{COLOR DARK_GRAY}?$"

VisCen_In_Receptionist_Text_1:
# 225 "data/maps/VisitorCenter_Indoors/scripts.pory"
	.string "Of course! Wait right there.$"

VisCen_In_Receptionist_Text_2:
# 231 "data/maps/VisitorCenter_Indoors/scripts.pory"
	.string "Your Pokémon are as good as new!\n"
	.string "Take care out there!$"

VisCen_In_Receptionist_Text_3:
# 241 "data/maps/VisitorCenter_Indoors/scripts.pory"
	.string "No worries. Enjoy your time here!$"

VisCen_In_Receptionist_Text_4:
# 245 "data/maps/VisitorCenter_Indoors/scripts.pory"
	.string "Alright… Oh, if you were hoping to ride\n"
	.string "the bus, I'm afraid you need a {COLOR BLUE}Bus Pass{COLOR DARK_GRAY}.$"

VisCen_In_Receptionist_Text_5:
# 250 "data/maps/VisitorCenter_Indoors/scripts.pory"
	.string "Um… Are you perhaps, lost…?\n"
	.string "Where did you last see your {COLOR BLUE}Mom{COLOR DARK_GRAY}?$"

VisCen_In_Receptionist_Text_6:
# 255 "data/maps/VisitorCenter_Indoors/scripts.pory"
	.string "{COLOR BLUE}The tour pretty much follows the path{COLOR DARK_GRAY}…\n"
	.string "if you aren't sure where to go,\l"
	.string "you'll probably find them that way!$"

VisCen_In_Receptionist_Text_7:
# 261 "data/maps/VisitorCenter_Indoors/scripts.pory"
	.string "I'm, afraid I can't escort you myself,\n"
	.string "but I CAN heal your Pokémon!\l"
	.string "Er… did I mention that already…?$"

VisCen_In_Receptionist_Text_8:
# 267 "data/maps/VisitorCenter_Indoors/scripts.pory"
	.string "I-{PAUSE 8}If you don't need any assistance,\n"
	.string "please just enjoy the tour!!\l"
	.string "Have a nice day!!$"

VisCen_In_Receptionist_Text_9:
# 275 "data/maps/VisitorCenter_Indoors/scripts.pory"
	.string "Please have a nice day!!!!!$"

VisCen_In_PokeParents_Text_0:
# 285 "data/maps/VisitorCenter_Indoors/scripts.pory"
	.string "{SPEAKER NAME_MAN}Well we HAVE to see the\n"
	.string "{COLOR BLUE}Seedot outside Thyme Village{COLOR DARK_GRAY}.$"

VisCen_In_PokeParents_Text_1:
# 289 "data/maps/VisitorCenter_Indoors/scripts.pory"
	.string "{SPEAKER NAME_WOMAN}And don't forget the\n"
	.string "{COLOR BLUE}Hatenna in the forest{COLOR DARK_GRAY}!$"

VisCen_In_PokeParents_Text_2:
# 293 "data/maps/VisitorCenter_Indoors/scripts.pory"
	.string "{SPEAKER NAME_MAN}Do you think some {COLOR BLUE}Phantump\n"
	.string "{COLOR DARK_GRAY}will come out too??$"

VisCen_In_PokeParents_Text_3:
# 297 "data/maps/VisitorCenter_Indoors/scripts.pory"
	.string "{SPEAKER NAME_WOMAN}Oh I hope so!! This tour is going to be\n"
	.string "so exciting!$"

VisCen_In_PokeParents_Text_4:
# 305 "data/maps/VisitorCenter_Indoors/scripts.pory"
	.string "{COLOR LIGHT_BLUE}They're loudly poring over a travel\n"
	.string "brochure.$"

VisCen_In_PokeKid_Text_0:
# 317 "data/maps/VisitorCenter_Indoors/scripts.pory"
	.string "How can mom and dad get so giddy about\n"
	.string "some dumb tour?\p"
	.string "So cringe… I just wanna go home…$"

VisCen_In_PokeKid_Text_1:
# 323 "data/maps/VisitorCenter_Indoors/scripts.pory"
	.string "Who wants to visit a dumb place like\n"
	.string "this anyway?$"

VisCen_In_Parasol_Text_0:
# 334 "data/maps/VisitorCenter_Indoors/scripts.pory"
	.string "We're finally here!\p"
	.string "Fresh air, beautiful sights, bustling\n"
	.string "crowds…\p"
	.string "I'm sure to find my inspiration on this\n"
	.string "trip, just you wait!$"

VisCen_In_Parasol_Text_1:
# 341 "data/maps/VisitorCenter_Indoors/scripts.pory"
	.string "I guess I should make plans on where to\n"
	.string "go at each stop!$"

VisCen_In_Birdman_Text_0:
# 353 "data/maps/VisitorCenter_Indoors/scripts.pory"
	.string "Oh, hello there! Are you in our tour\n"
	.string "group as well? Nice to meet you!\p"
	.string "We're both so excited to see new things\n"
	.string "and make new friends!$"

VisCen_In_Birdman_Text_1:
# 359 "data/maps/VisitorCenter_Indoors/scripts.pory"
	.string "Isn't that right, Wingull?$"

VisCen_In_Birdman_Text_2:
# 369 "data/maps/VisitorCenter_Indoors/scripts.pory"
	.string "We'll see you on the trail!$"

VisCen_In_Otaku_Text_0:
# 394 "data/maps/VisitorCenter_Indoors/scripts.pory"
	.string "Hehe…{PAUSE 16} So you're back…{PAUSE 16}\p"
	.string "Then you must…{PAUSE 16}\n"
	.string "want to see…{PAUSE 16} {COLOR RED}more{COLOR DARK_GRAY}?$"

VisCen_In_Otaku_Text_1:
# 404 "data/maps/VisitorCenter_Indoors/scripts.pory"
	.string "Hehe…{PAUSE 16} Hey kid…\p"
	.string "Do you wanna…{PAUSE 16}\n"
	.string "See something…{PAUSE 16} {SHADOW DARK_GRAY}amazing{SHADOW LIGHT_GRAY}?$"

VisCen_In_Otaku_Text_2:
# 410 "data/maps/VisitorCenter_Indoors/scripts.pory"
	.string "Hehehe…{PAUSE 16} Your loss…$"

VisCen_In_Otaku_Agree_Text_0:
# 416 "data/maps/VisitorCenter_Indoors/scripts.pory"
	.string "Okay…{PAUSE 16} Come a little closer…{PAUSE 16}\n"
	.string "Are you ready…?$"

VisCen_In_Otaku_Agree_Text_1:
# 422 "data/maps/VisitorCenter_Indoors/scripts.pory"
	.string "{SPEAKER NAME_MAN}Right here…{PAUSE 16} in this brochure…{PAUSE 16}\p"
	.string "…You see it?{PAUSE 16} Isn't it cute…?$"

VisCen_In_Otaku_Agree_Text_2:
# 427 "data/maps/VisitorCenter_Indoors/scripts.pory"
	.string "{SPEAKER NAME_MAN}I want to find…{PAUSE 16} all the cutest Pokémon\n"
	.string "in the Sekien region…\p"
	.string "Hehe…{PAUSE 16} I hope you find some cute\n"
	.string "Pokémon too…$"

VisCen_In_RestingMan_Text_0:
# 467 "data/maps/VisitorCenter_Indoors/scripts.pory"
	.string "Ah… a new tour's starting huh?\n"
	.string "I just finished with mine.\p"
	.string "It was a blast touring the whole\n"
	.string "region, but I'm all tuckered out.$"
