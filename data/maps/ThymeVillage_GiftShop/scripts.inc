ThymeVillage_GiftShop_MapScripts::
# 20 "data/maps/ThymeVillage_GiftShop/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, ThymeVillage_GiftShop_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

ThymeVillage_GiftShop_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 22 "data/maps/ThymeVillage_GiftShop/scripts.pory"
	map_script_2 VAR_THYME_STATE, 5, Thyme_GiftShop_PostBadge
	.2byte 0


Thyme_GiftShop_PostBadge::
# 28 "data/maps/ThymeVillage_GiftShop/scripts.pory"
	lock
# 29 "data/maps/ThymeVillage_GiftShop/scripts.pory"
	setvar VAR_LAST_TALKED, 1
# 30 "data/maps/ThymeVillage_GiftShop/scripts.pory"
	call Common_NPCNotice
# 32 "data/maps/ThymeVillage_GiftShop/scripts.pory"
	msgbox Thyme_GiftShop_PostBadge_Text_0
# 36 "data/maps/ThymeVillage_GiftShop/scripts.pory"
	closemessage
# 38 "data/maps/ThymeVillage_GiftShop/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Thyme_GiftShop_PlayerOutOfCounter
# 39 "data/maps/ThymeVillage_GiftShop/scripts.pory"
	waitmovement 0
# 40 "data/maps/ThymeVillage_GiftShop/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceDown
# 41 "data/maps/ThymeVillage_GiftShop/scripts.pory"
	waitmovement 0
# 43 "data/maps/ThymeVillage_GiftShop/scripts.pory"
	msgbox Thyme_GiftShop_PostBadge_Text_1
# 44 "data/maps/ThymeVillage_GiftShop/scripts.pory"
	closemessage
# 46 "data/maps/ThymeVillage_GiftShop/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 47 "data/maps/ThymeVillage_GiftShop/scripts.pory"
	waitmovement 0
# 49 "data/maps/ThymeVillage_GiftShop/scripts.pory"
	msgbox Thyme_GiftShop_PostBadge_Text_2
# 51 "data/maps/ThymeVillage_GiftShop/scripts.pory"
	closemessage
# 53 "data/maps/ThymeVillage_GiftShop/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceLeft
# 54 "data/maps/ThymeVillage_GiftShop/scripts.pory"
	setvar VAR_LAST_TALKED, 16
# 55 "data/maps/ThymeVillage_GiftShop/scripts.pory"
	call Common_NPCNotice
# 57 "data/maps/ThymeVillage_GiftShop/scripts.pory"
	applymovement 16, Thyme_GiftShop_MomToPlayer
# 58 "data/maps/ThymeVillage_GiftShop/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 59 "data/maps/ThymeVillage_GiftShop/scripts.pory"
	waitmovement 0
# 61 "data/maps/ThymeVillage_GiftShop/scripts.pory"
	msgbox Thyme_GiftShop_PostBadge_Text_3
# 70 "data/maps/ThymeVillage_GiftShop/scripts.pory"
	closemessage
# 71 "data/maps/ThymeVillage_GiftShop/scripts.pory"
	applymovement 16, Common_Movement_WalkRight
# 72 "data/maps/ThymeVillage_GiftShop/scripts.pory"
	waitmovement 0
# 74 "data/maps/ThymeVillage_GiftShop/scripts.pory"
	giveitem ITEM_FRESH_WATER, 1
# 75 "data/maps/ThymeVillage_GiftShop/scripts.pory"
	closemessage
# 77 "data/maps/ThymeVillage_GiftShop/scripts.pory"
	applymovement 16, Thyme_GiftShop_MomExit
# 78 "data/maps/ThymeVillage_GiftShop/scripts.pory"
	waitmovement 0
# 79 "data/maps/ThymeVillage_GiftShop/scripts.pory"
	playse SE_EXIT
# 80 "data/maps/ThymeVillage_GiftShop/scripts.pory"
	removeobject 16
# 81 "data/maps/ThymeVillage_GiftShop/scripts.pory"
	waitse
# 82 "data/maps/ThymeVillage_GiftShop/scripts.pory"
	delay 16
# 84 "data/maps/ThymeVillage_GiftShop/scripts.pory"
	setflag FLAG_THYME_TOUR_NPC
# 85 "data/maps/ThymeVillage_GiftShop/scripts.pory"
	setflag FLAG_ROUTE_2_TREVENANT
# 86 "data/maps/ThymeVillage_GiftShop/scripts.pory"
	clearflag FLAG_ROUTE_2_MOM
# 87 "data/maps/ThymeVillage_GiftShop/scripts.pory"
	setvar VAR_THYME_STATE, 6
	end


# 90 "data/maps/ThymeVillage_GiftShop/scripts.pory"
Thyme_GiftShop_PlayerOutOfCounter:
# 92 "data/maps/ThymeVillage_GiftShop/scripts.pory"
	walk_down
# 92 "data/maps/ThymeVillage_GiftShop/scripts.pory"
	walk_down
# 92 "data/maps/ThymeVillage_GiftShop/scripts.pory"
	walk_down
# 92 "data/maps/ThymeVillage_GiftShop/scripts.pory"
	walk_down
# 93 "data/maps/ThymeVillage_GiftShop/scripts.pory"
	walk_left
	step_end

# 95 "data/maps/ThymeVillage_GiftShop/scripts.pory"
Thyme_GiftShop_MomToPlayer:
# 97 "data/maps/ThymeVillage_GiftShop/scripts.pory"
	walk_right
# 97 "data/maps/ThymeVillage_GiftShop/scripts.pory"
	walk_right
# 97 "data/maps/ThymeVillage_GiftShop/scripts.pory"
	walk_right
# 98 "data/maps/ThymeVillage_GiftShop/scripts.pory"
	walk_down
# 98 "data/maps/ThymeVillage_GiftShop/scripts.pory"
	walk_down
# 99 "data/maps/ThymeVillage_GiftShop/scripts.pory"
	walk_right
# 99 "data/maps/ThymeVillage_GiftShop/scripts.pory"
	walk_right
	step_end

# 101 "data/maps/ThymeVillage_GiftShop/scripts.pory"
Thyme_GiftShop_MomExit:
# 103 "data/maps/ThymeVillage_GiftShop/scripts.pory"
	walk_left
# 103 "data/maps/ThymeVillage_GiftShop/scripts.pory"
	walk_left
# 104 "data/maps/ThymeVillage_GiftShop/scripts.pory"
	walk_down
# 105 "data/maps/ThymeVillage_GiftShop/scripts.pory"
	delay_16
	step_end

Thyme_GiftShop_Clerk::
# 111 "data/maps/ThymeVillage_GiftShop/scripts.pory"
	lock
# 112 "data/maps/ThymeVillage_GiftShop/scripts.pory"
	faceplayer
# 113 "data/maps/ThymeVillage_GiftShop/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 114 "data/maps/ThymeVillage_GiftShop/scripts.pory"
	compare VAR_TEMP_0, 20
	goto_if_eq Thyme_GiftShop_Clerk_1
# 134 "data/maps/ThymeVillage_GiftShop/scripts.pory"
	msgbox Thyme_GiftShop_Clerk_Text_1, MSGBOX_YESNO
# 136 "data/maps/ThymeVillage_GiftShop/scripts.pory"
	closemessage
# 137 "data/maps/ThymeVillage_GiftShop/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Thyme_GiftShop_Clerk_8
# 145 "data/maps/ThymeVillage_GiftShop/scripts.pory"
	msgbox Thyme_GiftShop_Clerk_Text_2, MSGBOX_AUTOCLOSE
# 148 "data/maps/ThymeVillage_GiftShop/scripts.pory"
	release
	end

Thyme_GiftShop_Clerk_1:
# 116 "data/maps/ThymeVillage_GiftShop/scripts.pory"
	goto_if_unset FLAG_BADGE01_GET, Thyme_GiftShop_Clerk_5
# 124 "data/maps/ThymeVillage_GiftShop/scripts.pory"
	msgbox gText_HowMayIServeYou
# 125 "data/maps/ThymeVillage_GiftShop/scripts.pory"
	waitmessage
# 126 "data/maps/ThymeVillage_GiftShop/scripts.pory"
	pokemart Thyme_GiftShop_Expanded
Thyme_GiftShop_Clerk_4:
# 128 "data/maps/ThymeVillage_GiftShop/scripts.pory"
	msgbox gText_PleaseComeAgain
# 129 "data/maps/ThymeVillage_GiftShop/scripts.pory"
	release
	end

Thyme_GiftShop_Clerk_5:
# 118 "data/maps/ThymeVillage_GiftShop/scripts.pory"
	msgbox Thyme_GiftShop_Clerk_Text_0
# 119 "data/maps/ThymeVillage_GiftShop/scripts.pory"
	waitmessage
# 120 "data/maps/ThymeVillage_GiftShop/scripts.pory"
	pokemart Thyme_GiftShop_Basic
	goto Thyme_GiftShop_Clerk_4

Thyme_GiftShop_Clerk_8:
# 140 "data/maps/ThymeVillage_GiftShop/scripts.pory"
	release
	end


# 154 "data/maps/ThymeVillage_GiftShop/scripts.pory"

# 155 "data/maps/ThymeVillage_GiftShop/scripts.pory"
	.align 2
# 156 "data/maps/ThymeVillage_GiftShop/scripts.pory"
Thyme_GiftShop_Basic:
# 157 "data/maps/ThymeVillage_GiftShop/scripts.pory"
	.2byte ITEM_BERRY_JUICE
# 158 "data/maps/ThymeVillage_GiftShop/scripts.pory"
	.2byte ITEM_ENERGY_ROOT
# 159 "data/maps/ThymeVillage_GiftShop/scripts.pory"
	.2byte ITEM_FLUFFY_TAIL
# 160 "data/maps/ThymeVillage_GiftShop/scripts.pory"
	.2byte ITEM_NONE
# 161 "data/maps/ThymeVillage_GiftShop/scripts.pory"
	release
# 162 "data/maps/ThymeVillage_GiftShop/scripts.pory"
	end
# 163 "data/maps/ThymeVillage_GiftShop/scripts.pory"
	
# 164 "data/maps/ThymeVillage_GiftShop/scripts.pory"
	.align 2
# 165 "data/maps/ThymeVillage_GiftShop/scripts.pory"
Thyme_GiftShop_Expanded:
# 166 "data/maps/ThymeVillage_GiftShop/scripts.pory"
	.2byte ITEM_ROSE_INCENSE
# 167 "data/maps/ThymeVillage_GiftShop/scripts.pory"
	.2byte ITEM_BERRY_JUICE
# 168 "data/maps/ThymeVillage_GiftShop/scripts.pory"
	.2byte ITEM_ENERGY_ROOT
# 169 "data/maps/ThymeVillage_GiftShop/scripts.pory"
	.2byte ITEM_RED_NECTAR
# 170 "data/maps/ThymeVillage_GiftShop/scripts.pory"
	.2byte ITEM_YELLOW_NECTAR
# 171 "data/maps/ThymeVillage_GiftShop/scripts.pory"
	.2byte ITEM_PINK_NECTAR
# 172 "data/maps/ThymeVillage_GiftShop/scripts.pory"
	.2byte ITEM_PURPLE_NECTAR
# 173 "data/maps/ThymeVillage_GiftShop/scripts.pory"
	.2byte ITEM_FLUFFY_TAIL
# 174 "data/maps/ThymeVillage_GiftShop/scripts.pory"
	.2byte ITEM_NONE
# 175 "data/maps/ThymeVillage_GiftShop/scripts.pory"
	release
# 176 "data/maps/ThymeVillage_GiftShop/scripts.pory"
	end

Thyme_GiftShop_Mom::
# 184 "data/maps/ThymeVillage_GiftShop/scripts.pory"
	setspeaker SP_NAME_MOM
# 185 "data/maps/ThymeVillage_GiftShop/scripts.pory"
	compare VAR_THYME_STATE, 3
	goto_if_lt Thyme_GiftShop_Mom_1
# 191 "data/maps/ThymeVillage_GiftShop/scripts.pory"
	goto_if_unset FLAG_TEMP_2, Thyme_GiftShop_Mom_2
# 201 "data/maps/ThymeVillage_GiftShop/scripts.pory"
	msgbox Thyme_GiftShop_Mom_Text_2, MSGBOX_NPC
	return

Thyme_GiftShop_Mom_1:
# 187 "data/maps/ThymeVillage_GiftShop/scripts.pory"
	msgbox Thyme_GiftShop_Mom_Text_0, MSGBOX_NPC
	return

Thyme_GiftShop_Mom_2:
# 193 "data/maps/ThymeVillage_GiftShop/scripts.pory"
	setflag FLAG_TEMP_2
# 194 "data/maps/ThymeVillage_GiftShop/scripts.pory"
	msgbox Thyme_GiftShop_Mom_Text_1, MSGBOX_NPC
	return


Thyme_GiftShop_Mother::
# 208 "data/maps/ThymeVillage_GiftShop/scripts.pory"
	setspeaker SP_NAME_WOMAN
# 209 "data/maps/ThymeVillage_GiftShop/scripts.pory"
	goto_if_unset FLAG_TEMP_3, Thyme_GiftShop_Mother_1
# 225 "data/maps/ThymeVillage_GiftShop/scripts.pory"
	msgbox Thyme_GiftShop_Mother_Text_1, MSGBOX_AUTOCLOSE
	return

Thyme_GiftShop_Mother_1:
# 211 "data/maps/ThymeVillage_GiftShop/scripts.pory"
	lock
# 212 "data/maps/ThymeVillage_GiftShop/scripts.pory"
	faceplayer
# 213 "data/maps/ThymeVillage_GiftShop/scripts.pory"
	setflag FLAG_TEMP_3
# 214 "data/maps/ThymeVillage_GiftShop/scripts.pory"
	msgbox Thyme_GiftShop_Mother_Text_0
# 218 "data/maps/ThymeVillage_GiftShop/scripts.pory"
	closemessage
# 219 "data/maps/ThymeVillage_GiftShop/scripts.pory"
	applymovement 14, Common_Movement_FaceLeft
# 220 "data/maps/ThymeVillage_GiftShop/scripts.pory"
	waitmovement 0
	end


Thyme_GiftShop_PokeFans::
# 231 "data/maps/ThymeVillage_GiftShop/scripts.pory"
	goto_if_unset FLAG_TEMP_4, Thyme_GiftShop_PokeFans_1
# 267 "data/maps/ThymeVillage_GiftShop/scripts.pory"
	lock
# 268 "data/maps/ThymeVillage_GiftShop/scripts.pory"
	msgbox Thyme_GiftShop_PokeFans_Text_5
# 269 "data/maps/ThymeVillage_GiftShop/scripts.pory"
	release
	end

Thyme_GiftShop_PokeFans_1:
# 233 "data/maps/ThymeVillage_GiftShop/scripts.pory"
	lockall
# 235 "data/maps/ThymeVillage_GiftShop/scripts.pory"
	applymovement 13, Common_Movement_WalkInPlaceUp
# 236 "data/maps/ThymeVillage_GiftShop/scripts.pory"
	waitmovement 0
# 237 "data/maps/ThymeVillage_GiftShop/scripts.pory"
	msgbox Thyme_GiftShop_PokeFans_Text_0
# 238 "data/maps/ThymeVillage_GiftShop/scripts.pory"
	closemessage
# 240 "data/maps/ThymeVillage_GiftShop/scripts.pory"
	applymovement 12, Common_Movement_WalkInPlaceUp
# 241 "data/maps/ThymeVillage_GiftShop/scripts.pory"
	waitmovement 0
# 242 "data/maps/ThymeVillage_GiftShop/scripts.pory"
	msgbox Thyme_GiftShop_PokeFans_Text_1
# 244 "data/maps/ThymeVillage_GiftShop/scripts.pory"
	closemessage
# 246 "data/maps/ThymeVillage_GiftShop/scripts.pory"
	applymovement 13, Common_Movement_WalkInPlaceUp
# 247 "data/maps/ThymeVillage_GiftShop/scripts.pory"
	waitmovement 0
# 248 "data/maps/ThymeVillage_GiftShop/scripts.pory"
	msgbox Thyme_GiftShop_PokeFans_Text_2
# 249 "data/maps/ThymeVillage_GiftShop/scripts.pory"
	closemessage
# 251 "data/maps/ThymeVillage_GiftShop/scripts.pory"
	applymovement 12, Common_Movement_WalkInPlaceUp
# 252 "data/maps/ThymeVillage_GiftShop/scripts.pory"
	waitmovement 0
# 253 "data/maps/ThymeVillage_GiftShop/scripts.pory"
	msgbox Thyme_GiftShop_PokeFans_Text_3
# 254 "data/maps/ThymeVillage_GiftShop/scripts.pory"
	closemessage
# 256 "data/maps/ThymeVillage_GiftShop/scripts.pory"
	applymovement 13, Common_Movement_WalkInPlaceUp
# 257 "data/maps/ThymeVillage_GiftShop/scripts.pory"
	waitmovement 0
# 258 "data/maps/ThymeVillage_GiftShop/scripts.pory"
	msgbox Thyme_GiftShop_PokeFans_Text_4
# 259 "data/maps/ThymeVillage_GiftShop/scripts.pory"
	closemessage
# 261 "data/maps/ThymeVillage_GiftShop/scripts.pory"
	setflag FLAG_TEMP_4
# 262 "data/maps/ThymeVillage_GiftShop/scripts.pory"
	releaseall
	end


Thyme_GiftShop_Parasol::
# 276 "data/maps/ThymeVillage_GiftShop/scripts.pory"
	msgbox Thyme_GiftShop_Parasol_Text_0, MSGBOX_NPC
	return


Thyme_GiftShop_DollBlock::
# 283 "data/maps/ThymeVillage_GiftShop/scripts.pory"
	goto_if_unset FLAG_TEMP_1, Thyme_GiftShop_DollBlock_1
# 301 "data/maps/ThymeVillage_GiftShop/scripts.pory"
	msgbox Thyme_GiftShop_DollBlock_Text_2, MSGBOX_NPC
	return

Thyme_GiftShop_DollBlock_1:
# 285 "data/maps/ThymeVillage_GiftShop/scripts.pory"
	lock
# 286 "data/maps/ThymeVillage_GiftShop/scripts.pory"
	msgbox Thyme_GiftShop_DollBlock_Text_0
# 287 "data/maps/ThymeVillage_GiftShop/scripts.pory"
	closemessage
# 289 "data/maps/ThymeVillage_GiftShop/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceDown
# 290 "data/maps/ThymeVillage_GiftShop/scripts.pory"
	waitmovement 0
# 291 "data/maps/ThymeVillage_GiftShop/scripts.pory"
	msgbox Thyme_GiftShop_DollBlock_Text_1
# 292 "data/maps/ThymeVillage_GiftShop/scripts.pory"
	closemessage
# 294 "data/maps/ThymeVillage_GiftShop/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 295 "data/maps/ThymeVillage_GiftShop/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceLeft
# 296 "data/maps/ThymeVillage_GiftShop/scripts.pory"
	waitmovement 0
# 297 "data/maps/ThymeVillage_GiftShop/scripts.pory"
	setflag FLAG_TEMP_1
	return


Thyme_GiftShop_FridgeLady::
# 311 "data/maps/ThymeVillage_GiftShop/scripts.pory"
	msgbox Thyme_GiftShop_FridgeLady_Text_0, MSGBOX_NPC
	return


Thyme_GiftShop_ShelfLady::
# 317 "data/maps/ThymeVillage_GiftShop/scripts.pory"
	msgbox Thyme_GiftShop_ShelfLady_Text_0, MSGBOX_NPC
	return


Thyme_GiftShop_ShelfMan::
# 324 "data/maps/ThymeVillage_GiftShop/scripts.pory"
	msgbox Thyme_GiftShop_ShelfMan_Text_0, MSGBOX_NPC
	return


Thyme_GiftShop_NormalDolls::
# 332 "data/maps/ThymeVillage_GiftShop/scripts.pory"
	goto_if_unset FLAG_THYME_TOUR_NPC, Thyme_GiftShop_NormalDolls_1
# 339 "data/maps/ThymeVillage_GiftShop/scripts.pory"
	msgbox Thyme_GiftShop_NormalDolls_Text_1, MSGBOX_NPC
	return

Thyme_GiftShop_NormalDolls_1:
# 334 "data/maps/ThymeVillage_GiftShop/scripts.pory"
	msgbox Thyme_GiftShop_NormalDolls_Text_0, MSGBOX_NPC
	return


Thyme_GiftShop_WaterDolls::
# 345 "data/maps/ThymeVillage_GiftShop/scripts.pory"
	goto_if_unset FLAG_THYME_TOUR_NPC, Thyme_GiftShop_WaterDolls_1
# 352 "data/maps/ThymeVillage_GiftShop/scripts.pory"
	msgbox Thyme_GiftShop_WaterDolls_Text_1, MSGBOX_NPC
	return

Thyme_GiftShop_WaterDolls_1:
# 347 "data/maps/ThymeVillage_GiftShop/scripts.pory"
	msgbox Thyme_GiftShop_WaterDolls_Text_0, MSGBOX_NPC
	return


Thyme_GiftShop_PostBadge_Text_0:
# 32 "data/maps/ThymeVillage_GiftShop/scripts.pory"
	.string "Oh, hello. I take it you have your\n"
	.string "badge?\p"
	.string "That's right… a {COLOR RED}Sekien League Gym\n"
	.string "Badge{COLOR DARK_GRAY}.\p"
	.string "That means the mayor recognized you as\n"
	.string "trustworthy, so I don't mind you using\l"
	.string "the back entrance whenever you'd like.$"

Thyme_GiftShop_PostBadge_Text_1:
# 43 "data/maps/ThymeVillage_GiftShop/scripts.pory"
	.string "Ah, before you go,$"

Thyme_GiftShop_PostBadge_Text_2:
# 49 "data/maps/ThymeVillage_GiftShop/scripts.pory"
	.string "We finally got some new stock, so be\n"
	.string "sure to check it out!\p"
	.string "(From the other side of the counter, of\n"
	.string "course.)$"

Thyme_GiftShop_PostBadge_Text_3:
# 61 "data/maps/ThymeVillage_GiftShop/scripts.pory"
	.string "{SPEAKER NAME_MOM}Oh, there you are.\p"
	.string "Look at you, you're all covered in\n"
	.string "grass!!\n"
	.string "Goodness…\p"
	.string "Well, you'll never believe it, but those\n"
	.string "trees that were blocking the path?\p"
	.string "They just… disappeared!\p"
	.string "Before we knew it, the forest rangers\n"
	.string "said there had been another landslide.\p"
	.string "We all looked outside after, and it was\n"
	.string "like the trees were never there.\p"
	.string "Crazy, right? Bet you regret missing\n"
	.string "that, huh? …No?\p"
	.string "…Well, anyway, they've already went on\n"
	.string "ahead.\p"
	.string "Clean yourself off a little and come\n"
	.string "meet me outside, alright?$"

Thyme_GiftShop_Clerk_Text_0:
# 118 "data/maps/ThymeVillage_GiftShop/scripts.pory"
	.string "Welcome!\p"
	.string "We are unfortunately low on stock right\n"
	.string "now, but here is what we have available.$"

Thyme_GiftShop_Clerk_Text_1:
# 134 "data/maps/ThymeVillage_GiftShop/scripts.pory"
	.string "Would you like an escort to our village?$"

Thyme_GiftShop_Clerk_Text_2:
# 145 "data/maps/ThymeVillage_GiftShop/scripts.pory"
	.string "Don't hesitate to ask. It's on the\n"
	.string "house!\p"
	.string "But, if you wanted to buy something,\n"
	.string "please go across the counter first.$"

Thyme_GiftShop_Mom_Text_0:
# 187 "data/maps/ThymeVillage_GiftShop/scripts.pory"
	.string "Hmm? What'd you follow me for, hun?\p"
	.string "Nothing but Poké Dolls to catch here.\n"
	.string "The tall grass is outside.$"

Thyme_GiftShop_Mom_Text_1:
# 194 "data/maps/ThymeVillage_GiftShop/scripts.pory"
	.string "Oh honey, don't worry about me.\p"
	.string "I knew it as soon as you showed me your\n"
	.string "Pokédex.\p"
	.string "I just wasn't expecting you to do this\n"
	.string "while we were on vacation…$"

Thyme_GiftShop_Mom_Text_2:
# 201 "data/maps/ThymeVillage_GiftShop/scripts.pory"
	.string "I'm okay with you going slightly off the\n"
	.string "path.\p"
	.string "Just no going on ahead of the group,\n"
	.string "okay?$"

Thyme_GiftShop_Mother_Text_0:
# 214 "data/maps/ThymeVillage_GiftShop/scripts.pory"
	.string "That girl of mine has not once stopped\n"
	.string "talking about Pokémon…\p"
	.string "Not since that greasy man put on that\n"
	.string "stunt giving them away!\p"
	.string "What was he thinking? Doesn't he know\n"
	.string "how dangerous they are for children?\p"
	.string "Goodness… Maybe she'll calm down if I\n"
	.string "buy her a doll…$"

Thyme_GiftShop_Mother_Text_1:
# 225 "data/maps/ThymeVillage_GiftShop/scripts.pory"
	.string "…But which Pokémon does she even\n"
	.string "like…?\n"
	.string "Can she even tell the difference?$"

Thyme_GiftShop_PokeFans_Text_0:
# 237 "data/maps/ThymeVillage_GiftShop/scripts.pory"
	.string "{SPEAKER NAME_MAN}Kyaaa!! Look how big and fluffy he is!!$"

Thyme_GiftShop_PokeFans_Text_1:
# 242 "data/maps/ThymeVillage_GiftShop/scripts.pory"
	.string "{SPEAKER NAME_WOMAN}And the little guys in the back!!\p"
	.string "You think our little boy would like that\n"
	.string "cool-looking one?$"

Thyme_GiftShop_PokeFans_Text_2:
# 248 "data/maps/ThymeVillage_GiftShop/scripts.pory"
	.string "{SPEAKER NAME_MAN}Oh I just know he'd love it! He's got so\n"
	.string "many just like it in his room!$"

Thyme_GiftShop_PokeFans_Text_3:
# 253 "data/maps/ThymeVillage_GiftShop/scripts.pory"
	.string "{SPEAKER NAME_WOMAN}That's so true! How many have we bought\n"
	.string "him over the years…?$"

Thyme_GiftShop_PokeFans_Text_4:
# 258 "data/maps/ThymeVillage_GiftShop/scripts.pory"
	.string "{SPEAKER NAME_MAN}Hahaha, I don't remember anymore!$"

Thyme_GiftShop_PokeFans_Text_5:
# 268 "data/maps/ThymeVillage_GiftShop/scripts.pory"
	.string "{COLOR LIGHT_BLUE}{SHADOW WHITE}They're loud enough to hear from the\n"
	.string "entrance.$"

Thyme_GiftShop_Parasol_Text_0:
# 276 "data/maps/ThymeVillage_GiftShop/scripts.pory"
	.string "{SPEAKER NAME_GIRL}I was all excited to take in the sights…\n"
	.string "but…\p"
	.string "M-maybe after I look around here a\n"
	.string "little longer first.$"

Thyme_GiftShop_DollBlock_Text_0:
# 286 "data/maps/ThymeVillage_GiftShop/scripts.pory"
	.string "{COLOR LIGHT_BLUE}It's a Clefairy doll. Mom collects these.$"

Thyme_GiftShop_DollBlock_Text_1:
# 291 "data/maps/ThymeVillage_GiftShop/scripts.pory"
	.string "Just a reminder of store policy:\n"
	.string "You touch it, you buy it!$"

Thyme_GiftShop_DollBlock_Text_2:
# 301 "data/maps/ThymeVillage_GiftShop/scripts.pory"
	.string "{COLOR LIGHT_BLUE}It's too expensive to touch.$"

Thyme_GiftShop_FridgeLady_Text_0:
# 311 "data/maps/ThymeVillage_GiftShop/scripts.pory"
	.string "They may not have a very conventional\n"
	.string "stock, but it sure is unique.\p"
	.string "That counts for something, right?$"

Thyme_GiftShop_ShelfLady_Text_0:
# 317 "data/maps/ThymeVillage_GiftShop/scripts.pory"
	.string "I prefer shopping here instead of at\n"
	.string "the {COLOR BLUE}Pokémart{COLOR DARK_GRAY}.\p"
	.string "I don't really know what's in Potions\n"
	.string "and Full Heals…\p"
	.string "but at least I know an expensive root\n"
	.string "when I see one.$"

Thyme_GiftShop_ShelfMan_Text_0:
# 324 "data/maps/ThymeVillage_GiftShop/scripts.pory"
	.string "I tell ya, the herbal medicine they sell\n"
	.string "works wonders!\p"
	.string "…If your Pokémon can stand the taste.\p"
	.string "They might resent you for it, but\n"
	.string "nothing beats good health.$"

Thyme_GiftShop_NormalDolls_Text_0:
# 334 "data/maps/ThymeVillage_GiftShop/scripts.pory"
	.string "{COLOR LIGHT_BLUE}A cadre of Poké Dolls holds would-be\n"
	.string "shoppers at bay.$"

Thyme_GiftShop_NormalDolls_Text_1:
# 339 "data/maps/ThymeVillage_GiftShop/scripts.pory"
	.string "{COLOR LIGHT_BLUE}A lone guardian keeps this corner of\n"
	.string "the shop safe.$"

Thyme_GiftShop_WaterDolls_Text_0:
# 347 "data/maps/ThymeVillage_GiftShop/scripts.pory"
	.string "{COLOR LIGHT_BLUE}It feels like a beach party.$"

Thyme_GiftShop_WaterDolls_Text_1:
# 352 "data/maps/ThymeVillage_GiftShop/scripts.pory"
	.string "{COLOR LIGHT_BLUE}It feels like a pool party.$"
