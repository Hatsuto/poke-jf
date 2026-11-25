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
# 99 "data/maps/Route02_Entrance/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route2_Player_ToMom
# 100 "data/maps/Route02_Entrance/scripts.pory"
	applymovement LOCALID_R2_MOM_CUTSCENE, Route2_Mom_Arrive
# 101 "data/maps/Route02_Entrance/scripts.pory"
	waitmovement 0
# 103 "data/maps/Route02_Entrance/scripts.pory"
	msgbox Route2_MomEvent_Text_1, MSGBOX_YESNO
# 106 "data/maps/Route02_Entrance/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route2_MomEvent_2
# 115 "data/maps/Route02_Entrance/scripts.pory"
	msgbox Route2_MomEvent_Text_3
Route2_MomEvent_1:
# 119 "data/maps/Route02_Entrance/scripts.pory"
	msgbox Route2_MomEvent_Text_4
# 120 "data/maps/Route02_Entrance/scripts.pory"
	closemessage
# 121 "data/maps/Route02_Entrance/scripts.pory"
	applymovement LOCALID_R2_MOM_CUTSCENE, Common_Movement_WalkRight
# 122 "data/maps/Route02_Entrance/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 123 "data/maps/Route02_Entrance/scripts.pory"
	playfanfare MUS_RG_OBTAIN_KEY_ITEM
# 124 "data/maps/Route02_Entrance/scripts.pory"
	msgbox Route2_MomEvent_Text_5
# 126 "data/maps/Route02_Entrance/scripts.pory"
	waitfanfare
# 127 "data/maps/Route02_Entrance/scripts.pory"
	closemessage
# 128 "data/maps/Route02_Entrance/scripts.pory"
	applymovement LOCALID_R2_MOM_CUTSCENE, Common_Movement_WalkLeft
# 129 "data/maps/Route02_Entrance/scripts.pory"
	waitmovement 0
# 130 "data/maps/Route02_Entrance/scripts.pory"
	msgbox Route2_MomEvent_Text_6
# 132 "data/maps/Route02_Entrance/scripts.pory"
	applymovement LOCALID_R2_MOM_CUTSCENE, Common_Movement_FaceRight
# 133 "data/maps/Route02_Entrance/scripts.pory"
	waitmovement 0
# 134 "data/maps/Route02_Entrance/scripts.pory"
	msgbox Route2_MomEvent_Text_7
# 136 "data/maps/Route02_Entrance/scripts.pory"
	closemessage
# 137 "data/maps/Route02_Entrance/scripts.pory"
	applymovement LOCALID_R2_MOM_CUTSCENE, Route2_Mom_Leave
# 138 "data/maps/Route02_Entrance/scripts.pory"
	waitmovement 0
# 140 "data/maps/Route02_Entrance/scripts.pory"
	removeobject LOCALID_R2_MOM_CUTSCENE
# 141 "data/maps/Route02_Entrance/scripts.pory"
	setvar VAR_THYME_STATE, 4
# 143 "data/maps/Route02_Entrance/scripts.pory"
	release
	end

Route2_MomEvent_2:
# 108 "data/maps/Route02_Entrance/scripts.pory"
	msgbox Route2_MomEvent_Text_2
	goto Route2_MomEvent_1


# 146 "data/maps/Route02_Entrance/scripts.pory"
Route2_Player_ToMom:
# 148 "data/maps/Route02_Entrance/scripts.pory"
	walk_up
# 149 "data/maps/Route02_Entrance/scripts.pory"
	face_left
	step_end

# 151 "data/maps/Route02_Entrance/scripts.pory"
Route2_Mom_Arrive:
# 153 "data/maps/Route02_Entrance/scripts.pory"
	walk_down
# 153 "data/maps/Route02_Entrance/scripts.pory"
	walk_down
# 153 "data/maps/Route02_Entrance/scripts.pory"
	walk_down
# 153 "data/maps/Route02_Entrance/scripts.pory"
	walk_down
# 153 "data/maps/Route02_Entrance/scripts.pory"
	walk_down
# 153 "data/maps/Route02_Entrance/scripts.pory"
	walk_down
# 154 "data/maps/Route02_Entrance/scripts.pory"
	walk_right
# 154 "data/maps/Route02_Entrance/scripts.pory"
	walk_right
# 154 "data/maps/Route02_Entrance/scripts.pory"
	walk_right
	step_end

# 156 "data/maps/Route02_Entrance/scripts.pory"
Route2_Mom_Leave:
# 158 "data/maps/Route02_Entrance/scripts.pory"
	walk_up
# 158 "data/maps/Route02_Entrance/scripts.pory"
	walk_up
# 159 "data/maps/Route02_Entrance/scripts.pory"
	walk_left
# 159 "data/maps/Route02_Entrance/scripts.pory"
	walk_left
# 160 "data/maps/Route02_Entrance/scripts.pory"
	walk_up
# 160 "data/maps/Route02_Entrance/scripts.pory"
	walk_up
# 160 "data/maps/Route02_Entrance/scripts.pory"
	walk_up
# 160 "data/maps/Route02_Entrance/scripts.pory"
	walk_up
	step_end

Route2_ContinueOn::
# 165 "data/maps/Route02_Entrance/scripts.pory"
	lock
# 166 "data/maps/Route02_Entrance/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 167 "data/maps/Route02_Entrance/scripts.pory"
	applymovement LOCALID_R2_MOM_BLOCK, Common_Movement_FacePlayer
# 168 "data/maps/Route02_Entrance/scripts.pory"
	compare VAR_TEMP_0, 16
	goto_if_lt Route2_ContinueOn_2
# 172 "data/maps/Route02_Entrance/scripts.pory"
	compare VAR_TEMP_0, 16
	goto_if_gt Route2_ContinueOn_3
Route2_ContinueOn_1:
# 176 "data/maps/Route02_Entrance/scripts.pory"
	waitmovement 0
# 177 "data/maps/Route02_Entrance/scripts.pory"
	msgbox Route2_ContinueOn_Text_0
# 181 "data/maps/Route02_Entrance/scripts.pory"
	closemessage
# 182 "data/maps/Route02_Entrance/scripts.pory"
	applymovement LOCALID_R2_MOM_BLOCK, Common_Movement_WalkDown
# 183 "data/maps/Route02_Entrance/scripts.pory"
	waitmovement 0
# 185 "data/maps/Route02_Entrance/scripts.pory"
	msgbox Route2_ContinueOn_Text_1
# 187 "data/maps/Route02_Entrance/scripts.pory"
	setflag FLAG_ROUTE_2_MOM
# 188 "data/maps/Route02_Entrance/scripts.pory"
	setvar VAR_THYME_STATE, 7
# 190 "data/maps/Route02_Entrance/scripts.pory"
	release
# 191 "data/maps/Route02_Entrance/scripts.pory"
	applymovement LOCALID_R2_MOM_BLOCK, Route2_Mom_JogToRoute3
	end

Route2_ContinueOn_2:
# 170 "data/maps/Route02_Entrance/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
	goto Route2_ContinueOn_1

Route2_ContinueOn_3:
# 174 "data/maps/Route02_Entrance/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
	goto Route2_ContinueOn_1


# 194 "data/maps/Route02_Entrance/scripts.pory"
Route2_Mom_JogToRoute3:
# 196 "data/maps/Route02_Entrance/scripts.pory"
	walk_fast_down
# 196 "data/maps/Route02_Entrance/scripts.pory"
	walk_fast_down
# 196 "data/maps/Route02_Entrance/scripts.pory"
	walk_fast_down
# 196 "data/maps/Route02_Entrance/scripts.pory"
	walk_fast_down
# 196 "data/maps/Route02_Entrance/scripts.pory"
	walk_fast_down
# 196 "data/maps/Route02_Entrance/scripts.pory"
	walk_fast_down
# 196 "data/maps/Route02_Entrance/scripts.pory"
	walk_fast_down
# 196 "data/maps/Route02_Entrance/scripts.pory"
	walk_fast_down
# 196 "data/maps/Route02_Entrance/scripts.pory"
	walk_fast_down
# 196 "data/maps/Route02_Entrance/scripts.pory"
	walk_fast_down
# 196 "data/maps/Route02_Entrance/scripts.pory"
	walk_fast_down
# 196 "data/maps/Route02_Entrance/scripts.pory"
	walk_fast_down
# 196 "data/maps/Route02_Entrance/scripts.pory"
	walk_fast_down
# 196 "data/maps/Route02_Entrance/scripts.pory"
	walk_fast_down
# 196 "data/maps/Route02_Entrance/scripts.pory"
	walk_fast_down
# 196 "data/maps/Route02_Entrance/scripts.pory"
	walk_fast_down
# 197 "data/maps/Route02_Entrance/scripts.pory"
	set_invisible
	step_end

Route2_BerrySign::
# 208 "data/maps/Route02_Entrance/scripts.pory"
	msgbox Route2_BerrySign_Text_0, MSGBOX_SIGN
	return


Route2_ForestSign::
# 215 "data/maps/Route02_Entrance/scripts.pory"
	msgbox Route2_ForestSign_Text_0, MSGBOX_SIGN
	return


Route2_RangerM::
# 226 "data/maps/Route02_Entrance/scripts.pory"
	msgbox Route2_RangerM_Text_0, MSGBOX_NPC
	return


Route2_RangerF::
# 233 "data/maps/Route02_Entrance/scripts.pory"
	msgbox Route2_RangerF_Text_0, MSGBOX_NPC
	return


Route2_Girl::
# 240 "data/maps/Route02_Entrance/scripts.pory"
	msgbox Route2_Girl_Text_0, MSGBOX_NPC
	return


Route2_Lady::
# 247 "data/maps/Route02_Entrance/scripts.pory"
	msgbox Route2_Lady_Text_0, MSGBOX_NPC
	return


Route2_Guide::
# 254 "data/maps/Route02_Entrance/scripts.pory"
	setspeaker Route2_Guide_Text_0
# 255 "data/maps/Route02_Entrance/scripts.pory"
	goto_if_unset FLAG_TEMP_2, Route2_Guide_1
# 265 "data/maps/Route02_Entrance/scripts.pory"
	msgbox Route2_Guide_Text_2, MSGBOX_NPC
	return

Route2_Guide_1:
# 257 "data/maps/Route02_Entrance/scripts.pory"
	setflag FLAG_TEMP_2
# 258 "data/maps/Route02_Entrance/scripts.pory"
	msgbox Route2_Guide_Text_1, MSGBOX_NPC
	return


Route2_Teryn::
# 272 "data/maps/Route02_Entrance/scripts.pory"
	lock
# 273 "data/maps/Route02_Entrance/scripts.pory"
	faceplayer
# 275 "data/maps/Route02_Entrance/scripts.pory"
	msgbox Route2_Teryn_Text_0
# 278 "data/maps/Route02_Entrance/scripts.pory"
	closemessage
# 279 "data/maps/Route02_Entrance/scripts.pory"
	applymovement LOCALID_R2_TERYN, Route2_Teryn_Aside
# 280 "data/maps/Route02_Entrance/scripts.pory"
	waitmovement 0
# 281 "data/maps/Route02_Entrance/scripts.pory"
	msgbox Route2_Teryn_Text_1
# 282 "data/maps/Route02_Entrance/scripts.pory"
	applymovement LOCALID_R2_TERYN, Route2_Teryn_Bookit
# 283 "data/maps/Route02_Entrance/scripts.pory"
	waitmovement 0
# 284 "data/maps/Route02_Entrance/scripts.pory"
	removeobject LOCALID_R2_TERYN
# 285 "data/maps/Route02_Entrance/scripts.pory"
	setvar VAR_THYME_STATE, 2
# 286 "data/maps/Route02_Entrance/scripts.pory"
	release
	end


# 289 "data/maps/Route02_Entrance/scripts.pory"
Route2_Teryn_Aside:
# 291 "data/maps/Route02_Entrance/scripts.pory"
	walk_down
# 292 "data/maps/Route02_Entrance/scripts.pory"
	walk_in_place_up
	step_end

# 294 "data/maps/Route02_Entrance/scripts.pory"
Route2_Teryn_Bookit:
# 296 "data/maps/Route02_Entrance/scripts.pory"
	walk_fast_right
# 296 "data/maps/Route02_Entrance/scripts.pory"
	walk_fast_right
# 296 "data/maps/Route02_Entrance/scripts.pory"
	walk_fast_right
# 296 "data/maps/Route02_Entrance/scripts.pory"
	walk_fast_right
# 296 "data/maps/Route02_Entrance/scripts.pory"
	walk_fast_right
# 296 "data/maps/Route02_Entrance/scripts.pory"
	walk_fast_right
# 296 "data/maps/Route02_Entrance/scripts.pory"
	walk_fast_right
# 296 "data/maps/Route02_Entrance/scripts.pory"
	walk_fast_right
	step_end

Route2_Trevenant::
# 301 "data/maps/Route02_Entrance/scripts.pory"
	lock
# 302 "data/maps/Route02_Entrance/scripts.pory"
	playmoncry SPECIES_TREVENANT, 0
# 304 "data/maps/Route02_Entrance/scripts.pory"
	setvar VAR_0x8004, 0
# 305 "data/maps/Route02_Entrance/scripts.pory"
	setvar VAR_0x8005, 2
# 306 "data/maps/Route02_Entrance/scripts.pory"
	setvar VAR_0x8006, 7
# 307 "data/maps/Route02_Entrance/scripts.pory"
	setvar VAR_0x8007, 3
# 309 "data/maps/Route02_Entrance/scripts.pory"
	special ShakeCamera
# 310 "data/maps/Route02_Entrance/scripts.pory"
	waitstate
# 312 "data/maps/Route02_Entrance/scripts.pory"
	msgbox Route2_Trevenant_Text_0, MSGBOX_AUTOCLOSE
	return


Route2_MomEvent_Text_0:
# 95 "data/maps/Route02_Entrance/scripts.pory"
	.string "Wait just a minute!!$"

Route2_MomEvent_Text_1:
# 103 "data/maps/Route02_Entrance/scripts.pory"
	.string "{SPEAKER NAME_MOM}What are you thinking??\n"
	.string "Are you really going out there alone?$"

Route2_MomEvent_Text_2:
# 108 "data/maps/Route02_Entrance/scripts.pory"
	.string "Goodness, what am I going to do with\n"
	.string "you… I wasn't really serious earlier!\p"
	.string "But I figured you would… you've got\n"
	.string "your little friend with you now.\l"
	.string "That's how it starts.$"

Route2_MomEvent_Text_3:
# 115 "data/maps/Route02_Entrance/scripts.pory"
	.string "Don't be smart with me! I wasn't born\n"
	.string "yesterday, you know?\p"
	.string "Kids like you get their Pokémon and\n"
	.string "they're suddenly so independent…$"

Route2_MomEvent_Text_4:
# 119 "data/maps/Route02_Entrance/scripts.pory"
	.string "Well, I guess it was just a matter of\n"
	.string "time. You're going to want these.$"

Route2_MomEvent_Text_5:
# 124 "data/maps/Route02_Entrance/scripts.pory"
	.string "Mom gave you a pair of Running Shoes!\n"
	.string "({COLOR RED}Hold {B_BUTTON}{COLOR DARK_GRAY} while moving to run!)$"

Route2_MomEvent_Text_6:
# 130 "data/maps/Route02_Entrance/scripts.pory"
	.string "{SPEAKER NAME_MOM}I picked them up at the gift shop. I\n"
	.string "know they're not the most stylish, but\l"
	.string "your feet will thank you later.$"

Route2_MomEvent_Text_7:
# 134 "data/maps/Route02_Entrance/scripts.pory"
	.string "…Just don't do anything too crazy,\n"
	.string "alright?\p"
	.string "And be back before they get all this\n"
	.string "sorted out, or I'm leaving you here.$"

Route2_ContinueOn_Text_0:
# 177 "data/maps/Route02_Entrance/scripts.pory"
	.string "{SPEAKER NAME_MOM}Honey, you still look a mess. Did you\n"
	.string "even give your Pokémon a rest?\p"
	.string "How are you feeling? Tired? Full of\n"
	.string "energy?\p"
	.string "Your mom's feeling pent up waiting\n"
	.string "around, so we're going for a brisk walk,\l"
	.string "alright?$"

Route2_ContinueOn_Text_1:
# 185 "data/maps/Route02_Entrance/scripts.pory"
	.string "Try and keep up!$"

Route2_BerrySign_Text_0:
# 208 "data/maps/Route02_Entrance/scripts.pory"
	.string "Berries, free to pick for all guests!\p"
	.string "We simply ask that you plant some\n"
	.string "extras for the next person!$"

Route2_ForestSign_Text_0:
# 215 "data/maps/Route02_Entrance/scripts.pory"
	.string "NO PATH BEYOND THIS POINT\n"
	.string "Please respect the local wildlife.$"

Route2_RangerM_Text_0:
# 226 "data/maps/Route02_Entrance/scripts.pory"
	.string "Wouldn't you know it, the path got all\n"
	.string "blocked up overnight…\p"
	.string "Must've been a landslide or something\n"
	.string "from the recent rainfall.$"

Route2_RangerF_Text_0:
# 233 "data/maps/Route02_Entrance/scripts.pory"
	.string "Well, this kinda thing happens, being\n"
	.string "nature and all.\p"
	.string "Nothing for it but to figure out a\n"
	.string "different way.$"

Route2_Girl_Text_0:
# 240 "data/maps/Route02_Entrance/scripts.pory"
	.string "{SPEAKER NAME_GIRL}Hey Mr. and Mrs. Ranger, can't we get\n"
	.string "through here?\p"
	.string "I wanna see the wild Pokémon!$"

Route2_Lady_Text_0:
# 247 "data/maps/Route02_Entrance/scripts.pory"
	.string "{SPEAKER NAME_LADY}It's weird, isn't it…? For a path to get\n"
	.string "blocked up just like that?\p"
	.string "These aren't even the same trees…\n"
	.string "I mean, like, even I noticed, you know?$"

Route2_Guide_Text_0:
# 254 "data/maps/Route02_Entrance/scripts.pory"
	.string "GUIDE$"

Route2_Guide_Text_1:
# 258 "data/maps/Route02_Entrance/scripts.pory"
	.string "Oh man, not again…\p"
	.string "I'm sorry, but we can't continue the\n"
	.string "tour until we can get the path clear.\l"
	.string "It shouldn't be much longer…! I hope…$"

Route2_Guide_Text_2:
# 265 "data/maps/Route02_Entrance/scripts.pory"
	.string "For now, why not try… um… chatting with\n"
	.string "your fellow tourists?$"

Route2_Teryn_Text_0:
# 275 "data/maps/Route02_Entrance/scripts.pory"
	.string "H-Hey, did you hear that?\p"
	.string "I thought I heard something coming\n"
	.string "from the woods!\p"
	.string "I h-heard it's dangerous… but I'll check\n"
	.string "it out. Don't tell the tour guide.$"

Route2_Teryn_Text_1:
# 281 "data/maps/Route02_Entrance/scripts.pory"
	.string "And definitely don't follow me!\n"
	.string "I'll be back!$"

Route2_Trevenant_Text_0:
# 312 "data/maps/Route02_Entrance/scripts.pory"
	.string "{COLOR LIGHT_BLUE}{SHADOW WHITE}It seems hard at work.\n"
	.string "Let's go around another way.$"
