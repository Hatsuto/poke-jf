Route02_Entrance_MapScripts::
# 34 "data/maps/Route02_Entrance/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route2_TreeBlock
	.byte 0


Route2_TreeBlock::
# 39 "data/maps/Route02_Entrance/scripts.pory"
	goto_if_unset FLAG_BADGE01_GET, Route2_TreeBlock_1
	return

Route2_TreeBlock_1:
# 42 "data/maps/Route02_Entrance/scripts.pory"
	setflag FLAG_ROUTE_2_TREVENANT
# 43 "data/maps/Route02_Entrance/scripts.pory"
	setflag FLAG_ROUTE_2_MOM
# 46 "data/maps/Route02_Entrance/scripts.pory"
	setmetatile 13, 18, 0x1E, 0x1
# 47 "data/maps/Route02_Entrance/scripts.pory"
	setmetatile 13 + 1, 18, 0x1F, 0x1
# 48 "data/maps/Route02_Entrance/scripts.pory"
	setmetatile 13, 18 + 1, 0x26, 0x1
# 49 "data/maps/Route02_Entrance/scripts.pory"
	setmetatile 13 + 1, 18 + 1, 0x27, 0x1
# 51 "data/maps/Route02_Entrance/scripts.pory"
	setmetatile 15, 18, 0x1E, 0x1
# 52 "data/maps/Route02_Entrance/scripts.pory"
	setmetatile 15 + 1, 18, 0x1F, 0x1
# 53 "data/maps/Route02_Entrance/scripts.pory"
	setmetatile 15, 18 + 1, 0x26, 0x1
# 54 "data/maps/Route02_Entrance/scripts.pory"
	setmetatile 15 + 1, 18 + 1, 0x27, 0x1
# 56 "data/maps/Route02_Entrance/scripts.pory"
	setmetatile 17, 18, 0x1E, 0x1
# 57 "data/maps/Route02_Entrance/scripts.pory"
	setmetatile 17 + 1, 18, 0x1F, 0x1
# 58 "data/maps/Route02_Entrance/scripts.pory"
	setmetatile 17, 18 + 1, 0x26, 0x1
# 59 "data/maps/Route02_Entrance/scripts.pory"
	setmetatile 17 + 1, 18 + 1, 0x27, 0x1
# 61 "data/maps/Route02_Entrance/scripts.pory"
	setmetatile 14, 20, 0x1E, 0x1
# 62 "data/maps/Route02_Entrance/scripts.pory"
	setmetatile 14 + 1, 20, 0x1F, 0x1
# 63 "data/maps/Route02_Entrance/scripts.pory"
	setmetatile 14, 20 + 1, 0x26, 0x1
# 64 "data/maps/Route02_Entrance/scripts.pory"
	setmetatile 14 + 1, 20 + 1, 0x27, 0x1
# 66 "data/maps/Route02_Entrance/scripts.pory"
	setmetatile 16, 20, 0x1E, 0x1
# 67 "data/maps/Route02_Entrance/scripts.pory"
	setmetatile 16 + 1, 20, 0x1F, 0x1
# 68 "data/maps/Route02_Entrance/scripts.pory"
	setmetatile 16, 20 + 1, 0x26, 0x1
# 69 "data/maps/Route02_Entrance/scripts.pory"
	setmetatile 16 + 1, 20 + 1, 0x27, 0x1
# 71 "data/maps/Route02_Entrance/scripts.pory"
	setmetatile 14, 22, 0x1E, 0x1
# 72 "data/maps/Route02_Entrance/scripts.pory"
	setmetatile 14 + 1, 22, 0x1F, 0x1
# 73 "data/maps/Route02_Entrance/scripts.pory"
	setmetatile 14, 22 + 1, 0x26, 0x1
# 74 "data/maps/Route02_Entrance/scripts.pory"
	setmetatile 14 + 1, 22 + 1, 0x27, 0x1
# 76 "data/maps/Route02_Entrance/scripts.pory"
	setmetatile 16, 22, 0x1E, 0x1
# 77 "data/maps/Route02_Entrance/scripts.pory"
	setmetatile 16 + 1, 22, 0x1F, 0x1
# 78 "data/maps/Route02_Entrance/scripts.pory"
	setmetatile 16, 22 + 1, 0x26, 0x1
# 79 "data/maps/Route02_Entrance/scripts.pory"
	setmetatile 16 + 1, 22 + 1, 0x27, 0x1
# 81 "data/maps/Route02_Entrance/scripts.pory"
	setmetatile 31, 6, 0x1E, 0x1
# 82 "data/maps/Route02_Entrance/scripts.pory"
	setmetatile 31 + 1, 6, 0x1F, 0x1
# 83 "data/maps/Route02_Entrance/scripts.pory"
	setmetatile 31, 6 + 1, 0x26, 0x1
# 84 "data/maps/Route02_Entrance/scripts.pory"
	setmetatile 31 + 1, 6 + 1, 0x27, 0x1
	return


Route2_MomEvent::
# 94 "data/maps/Route02_Entrance/scripts.pory"
	lock
# 95 "data/maps/Route02_Entrance/scripts.pory"
	msgbox Route2_MomEvent_Text_0
# 96 "data/maps/Route02_Entrance/scripts.pory"
	closemessage
# 98 "data/maps/Route02_Entrance/scripts.pory"
	addobject LOCALID_R2_MOM_CUTSCENE
# 100 "data/maps/Route02_Entrance/scripts.pory"
	compare VAR_TEMP_0, 22
	goto_if_eq Route2_MomEvent_2
Route2_MomEvent_1:
# 105 "data/maps/Route02_Entrance/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route2_Player_ToMom
# 106 "data/maps/Route02_Entrance/scripts.pory"
	applymovement LOCALID_R2_MOM_CUTSCENE, Route2_Mom_Arrive
# 107 "data/maps/Route02_Entrance/scripts.pory"
	waitmovement 0
# 109 "data/maps/Route02_Entrance/scripts.pory"
	msgbox Route2_MomEvent_Text_1, MSGBOX_YESNO
# 112 "data/maps/Route02_Entrance/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route2_MomEvent_5
# 121 "data/maps/Route02_Entrance/scripts.pory"
	msgbox Route2_MomEvent_Text_3
Route2_MomEvent_4:
# 125 "data/maps/Route02_Entrance/scripts.pory"
	msgbox Route2_MomEvent_Text_4
# 126 "data/maps/Route02_Entrance/scripts.pory"
	closemessage
# 127 "data/maps/Route02_Entrance/scripts.pory"
	applymovement LOCALID_R2_MOM_CUTSCENE, Common_Movement_WalkRight
# 128 "data/maps/Route02_Entrance/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 129 "data/maps/Route02_Entrance/scripts.pory"
	playfanfare MUS_RG_OBTAIN_KEY_ITEM
# 130 "data/maps/Route02_Entrance/scripts.pory"
	msgbox Route2_MomEvent_Text_5
# 132 "data/maps/Route02_Entrance/scripts.pory"
	waitfanfare
# 133 "data/maps/Route02_Entrance/scripts.pory"
	closemessage
# 134 "data/maps/Route02_Entrance/scripts.pory"
	applymovement LOCALID_R2_MOM_CUTSCENE, Route2_Mom_Leaving
# 135 "data/maps/Route02_Entrance/scripts.pory"
	waitmovement 0
# 136 "data/maps/Route02_Entrance/scripts.pory"
	msgbox Route2_MomEvent_Text_6
# 138 "data/maps/Route02_Entrance/scripts.pory"
	applymovement LOCALID_R2_MOM_CUTSCENE, Common_Movement_FaceRight
# 139 "data/maps/Route02_Entrance/scripts.pory"
	waitmovement 0
# 140 "data/maps/Route02_Entrance/scripts.pory"
	msgbox Route2_MomEvent_Text_7
# 142 "data/maps/Route02_Entrance/scripts.pory"
	closemessage
# 143 "data/maps/Route02_Entrance/scripts.pory"
	applymovement LOCALID_R2_MOM_CUTSCENE, Route2_Mom_Leave
# 144 "data/maps/Route02_Entrance/scripts.pory"
	waitmovement 0
# 146 "data/maps/Route02_Entrance/scripts.pory"
	removeobject LOCALID_R2_MOM_CUTSCENE
# 147 "data/maps/Route02_Entrance/scripts.pory"
	setvar VAR_THYME_STATE, 3
# 148 "data/maps/Route02_Entrance/scripts.pory"
	setflag FLAG_ROUTE_2_MOM
# 150 "data/maps/Route02_Entrance/scripts.pory"
	release
	end

Route2_MomEvent_2:
# 102 "data/maps/Route02_Entrance/scripts.pory"
	applymovement LOCALID_R2_TERYN, Route2_Teryn_AsideUp
# 103 "data/maps/Route02_Entrance/scripts.pory"
	waitmovement 0
	goto Route2_MomEvent_1

Route2_MomEvent_5:
# 114 "data/maps/Route02_Entrance/scripts.pory"
	msgbox Route2_MomEvent_Text_2
	goto Route2_MomEvent_4


# 153 "data/maps/Route02_Entrance/scripts.pory"
Route2_Player_ToMom:
# 155 "data/maps/Route02_Entrance/scripts.pory"
	walk_left
# 155 "data/maps/Route02_Entrance/scripts.pory"
	walk_left
	step_end

# 157 "data/maps/Route02_Entrance/scripts.pory"
Route2_Mom_Arrive:
# 159 "data/maps/Route02_Entrance/scripts.pory"
	walk_down
# 159 "data/maps/Route02_Entrance/scripts.pory"
	walk_down
# 159 "data/maps/Route02_Entrance/scripts.pory"
	walk_down
# 159 "data/maps/Route02_Entrance/scripts.pory"
	walk_down
# 159 "data/maps/Route02_Entrance/scripts.pory"
	walk_down
# 159 "data/maps/Route02_Entrance/scripts.pory"
	walk_down
# 160 "data/maps/Route02_Entrance/scripts.pory"
	walk_right
	step_end

# 162 "data/maps/Route02_Entrance/scripts.pory"
Route2_Mom_Leaving:
# 164 "data/maps/Route02_Entrance/scripts.pory"
	walk_left
# 164 "data/maps/Route02_Entrance/scripts.pory"
	walk_left
	step_end

# 166 "data/maps/Route02_Entrance/scripts.pory"
Route2_Mom_Leave:
# 168 "data/maps/Route02_Entrance/scripts.pory"
	walk_up
# 168 "data/maps/Route02_Entrance/scripts.pory"
	walk_up
# 168 "data/maps/Route02_Entrance/scripts.pory"
	walk_up
# 168 "data/maps/Route02_Entrance/scripts.pory"
	walk_up
# 168 "data/maps/Route02_Entrance/scripts.pory"
	walk_up
# 168 "data/maps/Route02_Entrance/scripts.pory"
	walk_up
	step_end

Route2_TerynVanish::
# 173 "data/maps/Route02_Entrance/scripts.pory"
	setflag FLAG_ROUTE_2_TERYN
# 174 "data/maps/Route02_Entrance/scripts.pory"
	setvar VAR_THYME_STATE, 4
	return


Route2_ContinueOn::
# 179 "data/maps/Route02_Entrance/scripts.pory"
	lock
# 180 "data/maps/Route02_Entrance/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 181 "data/maps/Route02_Entrance/scripts.pory"
	applymovement LOCALID_R2_MOM_BLOCK, Common_Movement_FacePlayer
# 182 "data/maps/Route02_Entrance/scripts.pory"
	compare VAR_TEMP_0, 16
	goto_if_lt Route2_ContinueOn_2
# 186 "data/maps/Route02_Entrance/scripts.pory"
	compare VAR_TEMP_0, 16
	goto_if_gt Route2_ContinueOn_3
Route2_ContinueOn_1:
# 190 "data/maps/Route02_Entrance/scripts.pory"
	waitmovement 0
# 191 "data/maps/Route02_Entrance/scripts.pory"
	msgbox Route2_ContinueOn_Text_0
# 195 "data/maps/Route02_Entrance/scripts.pory"
	closemessage
# 196 "data/maps/Route02_Entrance/scripts.pory"
	applymovement LOCALID_R2_MOM_BLOCK, Common_Movement_WalkDown
# 197 "data/maps/Route02_Entrance/scripts.pory"
	waitmovement 0
# 199 "data/maps/Route02_Entrance/scripts.pory"
	msgbox Route2_ContinueOn_Text_1
# 201 "data/maps/Route02_Entrance/scripts.pory"
	setflag FLAG_ROUTE_2_MOM
# 202 "data/maps/Route02_Entrance/scripts.pory"
	setvar VAR_THYME_STATE, 7
# 204 "data/maps/Route02_Entrance/scripts.pory"
	release
# 205 "data/maps/Route02_Entrance/scripts.pory"
	applymovement LOCALID_R2_MOM_BLOCK, Route2_Mom_JogToRoute3
	end

Route2_ContinueOn_2:
# 184 "data/maps/Route02_Entrance/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
	goto Route2_ContinueOn_1

Route2_ContinueOn_3:
# 188 "data/maps/Route02_Entrance/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
	goto Route2_ContinueOn_1


# 208 "data/maps/Route02_Entrance/scripts.pory"
Route2_Mom_JogToRoute3:
# 210 "data/maps/Route02_Entrance/scripts.pory"
	walk_fast_down
# 210 "data/maps/Route02_Entrance/scripts.pory"
	walk_fast_down
# 210 "data/maps/Route02_Entrance/scripts.pory"
	walk_fast_down
# 210 "data/maps/Route02_Entrance/scripts.pory"
	walk_fast_down
# 210 "data/maps/Route02_Entrance/scripts.pory"
	walk_fast_down
# 210 "data/maps/Route02_Entrance/scripts.pory"
	walk_fast_down
# 210 "data/maps/Route02_Entrance/scripts.pory"
	walk_fast_down
# 210 "data/maps/Route02_Entrance/scripts.pory"
	walk_fast_down
# 210 "data/maps/Route02_Entrance/scripts.pory"
	walk_fast_down
# 210 "data/maps/Route02_Entrance/scripts.pory"
	walk_fast_down
# 210 "data/maps/Route02_Entrance/scripts.pory"
	walk_fast_down
# 210 "data/maps/Route02_Entrance/scripts.pory"
	walk_fast_down
# 210 "data/maps/Route02_Entrance/scripts.pory"
	walk_fast_down
# 210 "data/maps/Route02_Entrance/scripts.pory"
	walk_fast_down
# 210 "data/maps/Route02_Entrance/scripts.pory"
	walk_fast_down
# 210 "data/maps/Route02_Entrance/scripts.pory"
	walk_fast_down
# 211 "data/maps/Route02_Entrance/scripts.pory"
	set_invisible
	step_end

Route2_BerrySign::
# 222 "data/maps/Route02_Entrance/scripts.pory"
	msgbox Route2_BerrySign_Text_0, MSGBOX_SIGN
	return


Route2_ForestSign::
# 229 "data/maps/Route02_Entrance/scripts.pory"
	msgbox Route2_ForestSign_Text_0, MSGBOX_SIGN
	return


Route2_RangerM::
# 240 "data/maps/Route02_Entrance/scripts.pory"
	msgbox Route2_RangerM_Text_0, MSGBOX_NPC
	return


Route2_RangerF::
# 247 "data/maps/Route02_Entrance/scripts.pory"
	msgbox Route2_RangerF_Text_0, MSGBOX_NPC
	return


Route2_Girl::
# 254 "data/maps/Route02_Entrance/scripts.pory"
	msgbox Route2_Girl_Text_0, MSGBOX_NPC
	return


Route2_Lady::
# 261 "data/maps/Route02_Entrance/scripts.pory"
	msgbox Route2_Lady_Text_0, MSGBOX_NPC
	return


Route2_Guide::
# 268 "data/maps/Route02_Entrance/scripts.pory"
	setspeaker Route2_Guide_Text_0
# 269 "data/maps/Route02_Entrance/scripts.pory"
	goto_if_unset FLAG_TEMP_2, Route2_Guide_1
# 279 "data/maps/Route02_Entrance/scripts.pory"
	msgbox Route2_Guide_Text_2, MSGBOX_NPC
	return

Route2_Guide_1:
# 271 "data/maps/Route02_Entrance/scripts.pory"
	setflag FLAG_TEMP_2
# 272 "data/maps/Route02_Entrance/scripts.pory"
	msgbox Route2_Guide_Text_1, MSGBOX_NPC
	return


Route2_Teryn::
# 286 "data/maps/Route02_Entrance/scripts.pory"
	compare VAR_THYME_STATE, 2
	goto_if_lt Route2_Teryn_1
# 301 "data/maps/Route02_Entrance/scripts.pory"
	goto_if_set FLAG_TEMP_1, Route2_Teryn_2
# 311 "data/maps/Route02_Entrance/scripts.pory"
	lock
# 312 "data/maps/Route02_Entrance/scripts.pory"
	faceplayer
# 314 "data/maps/Route02_Entrance/scripts.pory"
	msgbox Route2_Teryn_Text_3
# 315 "data/maps/Route02_Entrance/scripts.pory"
	closemessage
# 316 "data/maps/Route02_Entrance/scripts.pory"
	call Route2_TerynAside
# 317 "data/maps/Route02_Entrance/scripts.pory"
	msgbox Route2_Teryn_Text_4
# 318 "data/maps/Route02_Entrance/scripts.pory"
	setflag FLAG_TEMP_1
# 319 "data/maps/Route02_Entrance/scripts.pory"
	release
	end

Route2_Teryn_1:
# 288 "data/maps/Route02_Entrance/scripts.pory"
	lock
# 289 "data/maps/Route02_Entrance/scripts.pory"
	faceplayer
# 291 "data/maps/Route02_Entrance/scripts.pory"
	msgbox Route2_Teryn_Text_0
# 293 "data/maps/Route02_Entrance/scripts.pory"
	closemessage
# 294 "data/maps/Route02_Entrance/scripts.pory"
	call Route2_TerynAside
# 295 "data/maps/Route02_Entrance/scripts.pory"
	msgbox Route2_Teryn_Text_1
# 296 "data/maps/Route02_Entrance/scripts.pory"
	setvar VAR_THYME_STATE, 2
# 297 "data/maps/Route02_Entrance/scripts.pory"
	setflag FLAG_TEMP_1
# 298 "data/maps/Route02_Entrance/scripts.pory"
	release
	end

Route2_Teryn_2:
# 304 "data/maps/Route02_Entrance/scripts.pory"
	msgbox Route2_Teryn_Text_2, MSGBOX_NPC
	return


Route2_TerynAside:
# 325 "data/maps/Route02_Entrance/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 326 "data/maps/Route02_Entrance/scripts.pory"
	compare VAR_TEMP_0, 21
	goto_if_eq Route2_TerynAside_2
# 332 "data/maps/Route02_Entrance/scripts.pory"
	applymovement LOCALID_R2_TERYN, Route2_Teryn_AsideLeft
Route2_TerynAside_1:
# 334 "data/maps/Route02_Entrance/scripts.pory"
	waitmovement 0
	return

Route2_TerynAside_2:
# 328 "data/maps/Route02_Entrance/scripts.pory"
	applymovement LOCALID_R2_TERYN, Route2_Teryn_AsideUp
	goto Route2_TerynAside_1


# 336 "data/maps/Route02_Entrance/scripts.pory"
Route2_Teryn_AsideLeft:
# 338 "data/maps/Route02_Entrance/scripts.pory"
	walk_left
# 339 "data/maps/Route02_Entrance/scripts.pory"
	face_right
	step_end

# 341 "data/maps/Route02_Entrance/scripts.pory"
Route2_Teryn_AsideUp:
# 343 "data/maps/Route02_Entrance/scripts.pory"
	walk_up
# 344 "data/maps/Route02_Entrance/scripts.pory"
	face_down
	step_end

Route2_Trevenant::
# 349 "data/maps/Route02_Entrance/scripts.pory"
	lock
# 350 "data/maps/Route02_Entrance/scripts.pory"
	playmoncry SPECIES_TREVENANT, 0
# 352 "data/maps/Route02_Entrance/scripts.pory"
	setvar VAR_0x8004, 0
# 353 "data/maps/Route02_Entrance/scripts.pory"
	setvar VAR_0x8005, 2
# 354 "data/maps/Route02_Entrance/scripts.pory"
	setvar VAR_0x8006, 7
# 355 "data/maps/Route02_Entrance/scripts.pory"
	setvar VAR_0x8007, 3
# 357 "data/maps/Route02_Entrance/scripts.pory"
	special ShakeCamera
# 358 "data/maps/Route02_Entrance/scripts.pory"
	waitstate
# 360 "data/maps/Route02_Entrance/scripts.pory"
	msgbox Route2_Trevenant_Text_0, MSGBOX_AUTOCLOSE
	return


Route2_MomEvent_Text_0:
# 95 "data/maps/Route02_Entrance/scripts.pory"
	.string "Wait just a minute!!$"

Route2_MomEvent_Text_1:
# 109 "data/maps/Route02_Entrance/scripts.pory"
	.string "{SPEAKER NAME_MOM}What are you thinking??\n"
	.string "Are you really going out there alone?$"

Route2_MomEvent_Text_2:
# 114 "data/maps/Route02_Entrance/scripts.pory"
	.string "Goodness, what am I going to do with\n"
	.string "you… I wasn't really serious earlier!\p"
	.string "But I figured you would… you've got\n"
	.string "your little friend with you now.\l"
	.string "That's how it starts.$"

Route2_MomEvent_Text_3:
# 121 "data/maps/Route02_Entrance/scripts.pory"
	.string "Don't be smart with me! I wasn't born\n"
	.string "yesterday, you know?\p"
	.string "Kids like you get their Pokémon and\n"
	.string "they're suddenly so independent…$"

Route2_MomEvent_Text_4:
# 125 "data/maps/Route02_Entrance/scripts.pory"
	.string "Well, I guess it was just a matter of\n"
	.string "time. You're going to want these.$"

Route2_MomEvent_Text_5:
# 130 "data/maps/Route02_Entrance/scripts.pory"
	.string "Mom gave you a pair of Running Shoes!\n"
	.string "({COLOR RED}Hold {B_BUTTON}{COLOR DARK_GRAY} while moving to run!)$"

Route2_MomEvent_Text_6:
# 136 "data/maps/Route02_Entrance/scripts.pory"
	.string "{SPEAKER NAME_MOM}I picked them up at the gift shop. I\n"
	.string "know they're not the most stylish, but\l"
	.string "your feet will thank you later.$"

Route2_MomEvent_Text_7:
# 140 "data/maps/Route02_Entrance/scripts.pory"
	.string "…Just don't do anything too crazy,\n"
	.string "alright?\p"
	.string "And be back before they get all this\n"
	.string "sorted out, or I'm leaving you here.$"

Route2_ContinueOn_Text_0:
# 191 "data/maps/Route02_Entrance/scripts.pory"
	.string "{SPEAKER NAME_MOM}Honey, you still look a mess. Did you\n"
	.string "even give your Pokémon a rest?\p"
	.string "How are you feeling? Tired? Full of\n"
	.string "energy?\p"
	.string "Your mom's feeling pent up waiting\n"
	.string "around, so we're going for a brisk walk,\l"
	.string "alright?$"

Route2_ContinueOn_Text_1:
# 199 "data/maps/Route02_Entrance/scripts.pory"
	.string "Try and keep up!$"

Route2_BerrySign_Text_0:
# 222 "data/maps/Route02_Entrance/scripts.pory"
	.string "Berries, free to pick for all guests!\p"
	.string "We simply ask that you plant some\n"
	.string "extras for the next person!$"

Route2_ForestSign_Text_0:
# 229 "data/maps/Route02_Entrance/scripts.pory"
	.string "NO PATH BEYOND THIS POINT\n"
	.string "Please respect the local wildlife.$"

Route2_RangerM_Text_0:
# 240 "data/maps/Route02_Entrance/scripts.pory"
	.string "Wouldn't you know it, the path got all\n"
	.string "blocked up overnight…\p"
	.string "Must've been a landslide or something\n"
	.string "from the recent rainfall.$"

Route2_RangerF_Text_0:
# 247 "data/maps/Route02_Entrance/scripts.pory"
	.string "Well, this kinda thing happens, being\n"
	.string "nature and all.\p"
	.string "Nothing for it but to figure out a\n"
	.string "different way.$"

Route2_Girl_Text_0:
# 254 "data/maps/Route02_Entrance/scripts.pory"
	.string "{SPEAKER NAME_GIRL}Hey Mr. and Mrs. Ranger, can't we get\n"
	.string "through here?\p"
	.string "I wanna see the wild Pokémon!$"

Route2_Lady_Text_0:
# 261 "data/maps/Route02_Entrance/scripts.pory"
	.string "{SPEAKER NAME_LADY}It's weird, isn't it…? For a path to get\n"
	.string "blocked up just like that?\p"
	.string "These aren't even the same trees…\n"
	.string "I mean, like, even I noticed, you know?$"

Route2_Guide_Text_0:
# 268 "data/maps/Route02_Entrance/scripts.pory"
	.string "GUIDE$"

Route2_Guide_Text_1:
# 272 "data/maps/Route02_Entrance/scripts.pory"
	.string "Oh man, not again…\p"
	.string "I'm sorry, but we can't continue the\n"
	.string "tour until we can get the path clear.\l"
	.string "It shouldn't be much longer…! I hope…$"

Route2_Guide_Text_2:
# 279 "data/maps/Route02_Entrance/scripts.pory"
	.string "For now, why not try… um… chatting with\n"
	.string "your fellow tourists?$"

Route2_Teryn_Text_0:
# 291 "data/maps/Route02_Entrance/scripts.pory"
	.string "You know, I heard the locals talking\n"
	.string "about this kind of thing…\p"
	.string "I think there's someone who could help\n"
	.string "over in the forest?$"

Route2_Teryn_Text_1:
# 295 "data/maps/Route02_Entrance/scripts.pory"
	.string "I think I saw an entrance just beyond\n"
	.string "here, if you wanted to take a look.$"

Route2_Teryn_Text_2:
# 304 "data/maps/Route02_Entrance/scripts.pory"
	.string "They say some kind of Witch lives there,\n"
	.string "but I think that's just for publicity.\p"
	.string "But just in case, you might want to\n"
	.string "stock up at the Pokémart first.\p"
	.string "…No, not the gift shop. The one with the\n"
	.string "blue roof.$"

Route2_Teryn_Text_3:
# 314 "data/maps/Route02_Entrance/scripts.pory"
	.string "Oh, excuse me.$"

Route2_Teryn_Text_4:
# 317 "data/maps/Route02_Entrance/scripts.pory"
	.string "Take care out there!$"

Route2_Trevenant_Text_0:
# 360 "data/maps/Route02_Entrance/scripts.pory"
	.string "{COLOR LIGHT_BLUE}{SHADOW WHITE}It seems hard at work.\n"
	.string "Let's go around another way.$"
