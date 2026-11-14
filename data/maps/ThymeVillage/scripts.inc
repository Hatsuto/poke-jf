ThymeVillage_MapScripts::
	.byte 0


Thyme_Mom::
# 28 "data/maps/ThymeVillage/scripts.pory"
	lock
# 29 "data/maps/ThymeVillage/scripts.pory"
	faceplayer
# 32 "data/maps/ThymeVillage/scripts.pory"
	msgbox Thyme_Mom_Text_0
# 33 "data/maps/ThymeVillage/scripts.pory"
	closemessage
# 35 "data/maps/ThymeVillage/scripts.pory"
	goto Thyme_MomSpeech
	return


Thyme_MomEvent::
# 39 "data/maps/ThymeVillage/scripts.pory"
	lock
# 41 "data/maps/ThymeVillage/scripts.pory"
	setvar VAR_LAST_TALKED, LOCALID_MOM
# 42 "data/maps/ThymeVillage/scripts.pory"
	call Common_NPCNotice
# 44 "data/maps/ThymeVillage/scripts.pory"
	setspeaker SP_NAME_MOM
# 46 "data/maps/ThymeVillage/scripts.pory"
	checkplayergender
# 47 "data/maps/ThymeVillage/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Thyme_MomEvent_2
# 53 "data/maps/ThymeVillage/scripts.pory"
	msgbox Thyme_MomEvent_Text_1
Thyme_MomEvent_1:
# 55 "data/maps/ThymeVillage/scripts.pory"
	closemessage
# 57 "data/maps/ThymeVillage/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 58 "data/maps/ThymeVillage/scripts.pory"
	switch VAR_TEMP_0
# 60 "data/maps/ThymeVillage/scripts.pory"
	case 5, Thyme_MomEvent_7
# 62 "data/maps/ThymeVillage/scripts.pory"
	case 5 + 1, Thyme_MomEvent_8
# 64 "data/maps/ThymeVillage/scripts.pory"
	case 5 + 2, Thyme_MomEvent_9
# 66 "data/maps/ThymeVillage/scripts.pory"
	case 5 + 3, Thyme_MomEvent_10
Thyme_MomEvent_5:
# 69 "data/maps/ThymeVillage/scripts.pory"
	waitmovement 0
# 70 "data/maps/ThymeVillage/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 71 "data/maps/ThymeVillage/scripts.pory"
	waitmovement 0
# 73 "data/maps/ThymeVillage/scripts.pory"
	goto Thyme_MomSpeech
	return

Thyme_MomEvent_2:
# 49 "data/maps/ThymeVillage/scripts.pory"
	msgbox Thyme_MomEvent_Text_0
	goto Thyme_MomEvent_1

Thyme_MomEvent_7:
# 61 "data/maps/ThymeVillage/scripts.pory"
	applymovement LOCALID_MOM, Mom_WalkLeft4
	goto Thyme_MomEvent_5

Thyme_MomEvent_8:
# 63 "data/maps/ThymeVillage/scripts.pory"
	applymovement LOCALID_MOM, Mom_WalkLeft3
	goto Thyme_MomEvent_5

Thyme_MomEvent_9:
# 65 "data/maps/ThymeVillage/scripts.pory"
	applymovement LOCALID_MOM, Mom_WalkLeft2
	goto Thyme_MomEvent_5

Thyme_MomEvent_10:
# 67 "data/maps/ThymeVillage/scripts.pory"
	applymovement LOCALID_MOM, Mom_WalkLeft1
	goto Thyme_MomEvent_5


Thyme_MomSpeech:
# 77 "data/maps/ThymeVillage/scripts.pory"
	setflag FLAG_ROUTE_1_PATH_NPC
# 78 "data/maps/ThymeVillage/scripts.pory"
	switch VAR_STARTER_MON
# 80 "data/maps/ThymeVillage/scripts.pory"
	case 0, Thyme_MomSpeech_3
# 82 "data/maps/ThymeVillage/scripts.pory"
	case 1, Thyme_MomSpeech_4
# 84 "data/maps/ThymeVillage/scripts.pory"
	case 2, Thyme_MomSpeech_5
Thyme_MomSpeech_1:
# 88 "data/maps/ThymeVillage/scripts.pory"
	msgbox Thyme_MomSpeech_Text_0
# 96 "data/maps/ThymeVillage/scripts.pory"
	closemessage
# 98 "data/maps/ThymeVillage/scripts.pory"
	addmoney 2000
# 99 "data/maps/ThymeVillage/scripts.pory"
	playse SE_SHOP
# 100 "data/maps/ThymeVillage/scripts.pory"
	msgbox Thyme_MomSpeech_Text_1
# 101 "data/maps/ThymeVillage/scripts.pory"
	waitse
# 102 "data/maps/ThymeVillage/scripts.pory"
	closemessage
# 104 "data/maps/ThymeVillage/scripts.pory"
	msgbox Thyme_MomSpeech_Text_2
# 108 "data/maps/ThymeVillage/scripts.pory"
	closemessage
# 110 "data/maps/ThymeVillage/scripts.pory"
	applymovement LOCALID_MOM, Mom_Leave
# 111 "data/maps/ThymeVillage/scripts.pory"
	waitmovement 0
# 112 "data/maps/ThymeVillage/scripts.pory"
	removeobject LOCALID_MOM
# 113 "data/maps/ThymeVillage/scripts.pory"
	setvar VAR_THYME_STATE, 1
# 115 "data/maps/ThymeVillage/scripts.pory"
	release
	end

Thyme_MomSpeech_3:
# 81 "data/maps/ThymeVillage/scripts.pory"
	bufferspeciesname 0, SPECIES_STARTER_GRS
	goto Thyme_MomSpeech_1

Thyme_MomSpeech_4:
# 83 "data/maps/ThymeVillage/scripts.pory"
	bufferspeciesname 0, SPECIES_STARTER_FIR
	goto Thyme_MomSpeech_1

Thyme_MomSpeech_5:
# 85 "data/maps/ThymeVillage/scripts.pory"
	bufferspeciesname 0, SPECIES_STARTER_WTR
	goto Thyme_MomSpeech_1


# 118 "data/maps/ThymeVillage/scripts.pory"
Mom_WalkLeft1:
# 120 "data/maps/ThymeVillage/scripts.pory"
	walk_left
# 121 "data/maps/ThymeVillage/scripts.pory"
	face_up
	step_end

# 123 "data/maps/ThymeVillage/scripts.pory"
Mom_WalkLeft2:
# 125 "data/maps/ThymeVillage/scripts.pory"
	walk_left
# 125 "data/maps/ThymeVillage/scripts.pory"
	walk_left
# 126 "data/maps/ThymeVillage/scripts.pory"
	face_up
	step_end

# 128 "data/maps/ThymeVillage/scripts.pory"
Mom_WalkLeft3:
# 130 "data/maps/ThymeVillage/scripts.pory"
	walk_left
# 130 "data/maps/ThymeVillage/scripts.pory"
	walk_left
# 130 "data/maps/ThymeVillage/scripts.pory"
	walk_left
# 131 "data/maps/ThymeVillage/scripts.pory"
	face_up
	step_end

# 133 "data/maps/ThymeVillage/scripts.pory"
Mom_WalkLeft4:
# 135 "data/maps/ThymeVillage/scripts.pory"
	walk_left
# 135 "data/maps/ThymeVillage/scripts.pory"
	walk_left
# 135 "data/maps/ThymeVillage/scripts.pory"
	walk_left
# 135 "data/maps/ThymeVillage/scripts.pory"
	walk_left
# 136 "data/maps/ThymeVillage/scripts.pory"
	face_up
	step_end

# 138 "data/maps/ThymeVillage/scripts.pory"
Mom_Leave:
# 140 "data/maps/ThymeVillage/scripts.pory"
	walk_down
# 140 "data/maps/ThymeVillage/scripts.pory"
	walk_down
# 140 "data/maps/ThymeVillage/scripts.pory"
	walk_down
# 140 "data/maps/ThymeVillage/scripts.pory"
	walk_down
# 140 "data/maps/ThymeVillage/scripts.pory"
	walk_down
# 140 "data/maps/ThymeVillage/scripts.pory"
	walk_down
# 140 "data/maps/ThymeVillage/scripts.pory"
	walk_down
	step_end

Thyme_BusBlock::
# 146 "data/maps/ThymeVillage/scripts.pory"
	lock
# 148 "data/maps/ThymeVillage/scripts.pory"
	setvar VAR_LAST_TALKED, LOCALID_BUSMAN
# 149 "data/maps/ThymeVillage/scripts.pory"
	call Common_NPCNotice
# 151 "data/maps/ThymeVillage/scripts.pory"
	goto Thyme_BusMan
	return


Thyme_EntranceSign::
# 160 "data/maps/ThymeVillage/scripts.pory"
	msgbox Thyme_EntranceSign_Text_0, MSGBOX_SIGN
	return


Thyme_BusSign::
# 167 "data/maps/ThymeVillage/scripts.pory"
	msgbox Thyme_BusSign_Text_0, MSGBOX_SIGN
	return


Thyme_ExitSign::
# 172 "data/maps/ThymeVillage/scripts.pory"
	msgbox Thyme_ExitSign_Text_0, MSGBOX_SIGN
	return


Thyme_ShopSign::
# 179 "data/maps/ThymeVillage/scripts.pory"
	msgbox Thyme_ShopSign_Text_0, MSGBOX_SIGN
	return


Thyme_BusMan::
# 192 "data/maps/ThymeVillage/scripts.pory"
	lock
# 193 "data/maps/ThymeVillage/scripts.pory"
	faceplayer
# 195 "data/maps/ThymeVillage/scripts.pory"
	msgbox Thyme_BusMan_Text_0
# 198 "data/maps/ThymeVillage/scripts.pory"
	closemessage
# 200 "data/maps/ThymeVillage/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 201 "data/maps/ThymeVillage/scripts.pory"
	compare VAR_TEMP_1, 16
	goto_if_le Thyme_BusMan_2
Thyme_BusMan_1:
# 207 "data/maps/ThymeVillage/scripts.pory"
	release
	end

Thyme_BusMan_2:
# 203 "data/maps/ThymeVillage/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 204 "data/maps/ThymeVillage/scripts.pory"
	waitmovement 0
	goto Thyme_BusMan_1


Thyme_OldMan::
# 213 "data/maps/ThymeVillage/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, Thyme_OldMan_1
# 220 "data/maps/ThymeVillage/scripts.pory"
	goto_if_unset FLAG_TEMP_2, Thyme_OldMan_2
# 230 "data/maps/ThymeVillage/scripts.pory"
	msgbox Thyme_OldMan_Text_2, MSGBOX_NPC
	return

Thyme_OldMan_1:
# 215 "data/maps/ThymeVillage/scripts.pory"
	msgbox Thyme_OldMan_Text_0, MSGBOX_NPC
	return

Thyme_OldMan_2:
# 222 "data/maps/ThymeVillage/scripts.pory"
	setflag FLAG_TEMP_2
# 223 "data/maps/ThymeVillage/scripts.pory"
	msgbox Thyme_OldMan_Text_1, MSGBOX_NPC
	return


Thyme_Gardener::
# 239 "data/maps/ThymeVillage/scripts.pory"
	goto_if_unset FLAG_TEMP_3, Thyme_Gardener_1
# 248 "data/maps/ThymeVillage/scripts.pory"
	msgbox Thyme_Gardener_Text_1, MSGBOX_NPC
	return

Thyme_Gardener_1:
# 241 "data/maps/ThymeVillage/scripts.pory"
	setflag FLAG_TEMP_3
# 242 "data/maps/ThymeVillage/scripts.pory"
	msgbox Thyme_Gardener_Text_0, MSGBOX_NPC
	return


Thyme_Employee::
# 256 "data/maps/ThymeVillage/scripts.pory"
	goto_if_unset FLAG_TEMP_4, Thyme_Employee_1
# 275 "data/maps/ThymeVillage/scripts.pory"
	msgbox Thyme_Employee_Text_2, MSGBOX_NPC
	return

Thyme_Employee_1:
# 258 "data/maps/ThymeVillage/scripts.pory"
	setflag FLAG_TEMP_4
# 259 "data/maps/ThymeVillage/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, Thyme_Employee_4
# 268 "data/maps/ThymeVillage/scripts.pory"
	msgbox Thyme_Employee_Text_1, MSGBOX_NPC
	return

Thyme_Employee_4:
# 261 "data/maps/ThymeVillage/scripts.pory"
	msgbox Thyme_Employee_Text_0, MSGBOX_NPC
	return


Thyme_PokeKid::
# 283 "data/maps/ThymeVillage/scripts.pory"
	setspeaker SP_NAME_BOY
# 284 "data/maps/ThymeVillage/scripts.pory"
	goto_if_unset FLAG_TEMP_1, Thyme_PokeKid_1
# 301 "data/maps/ThymeVillage/scripts.pory"
	msgbox Thyme_PokeKid_Text_1, MSGBOX_NPC
	return

Thyme_PokeKid_1:
# 286 "data/maps/ThymeVillage/scripts.pory"
	setflag FLAG_TEMP_1
# 287 "data/maps/ThymeVillage/scripts.pory"
	compare VAR_CUTE_BABY, 0
	goto_if_gt Thyme_PokeKid_5
# 293 "data/maps/ThymeVillage/scripts.pory"
	bufferspeciesname 0, SPECIES_PIKACHU
Thyme_PokeKid_4:
# 295 "data/maps/ThymeVillage/scripts.pory"
	msgbox Thyme_PokeKid_Text_0, MSGBOX_NPC
	return

Thyme_PokeKid_5:
# 289 "data/maps/ThymeVillage/scripts.pory"
	bufferspeciesname 0, VAR_CUTE_BABY
	goto Thyme_PokeKid_4


Thyme_Mom_Text_0:
# 32 "data/maps/ThymeVillage/scripts.pory"
	.string "{SPEAKER NAME_MOM}Oh, there you are, {PLAYER}!$"

Thyme_MomEvent_Text_0:
# 49 "data/maps/ThymeVillage/scripts.pory"
	.string "There you are, young lady!$"

Thyme_MomEvent_Text_1:
# 53 "data/maps/ThymeVillage/scripts.pory"
	.string "There you are, young man!$"

Thyme_MomSpeech_Text_0:
# 88 "data/maps/ThymeVillage/scripts.pory"
	.string "{SPEAKER NAME_MOM}So? How are you and that\n"
	.string "{STR_VAR_1} getting along?\p"
	.string "It's not all fun and games taking care\n"
	.string "of that thing, you know.\p"
	.string "Now that you're a Pokemon Trainer,\n"
	.string "everyone and their grandma will be\l"
	.string "itching to pick a fight with you.\p"
	.string "Yes! Grandmas too!\p"
	.string "If you aren't careful, your wallet will\n"
	.string "be empty before you know it.\p"
	.string "Just avoid talking to strangers, okay?\n"
	.string "…Well. Just in case, hang onto this.$"

Thyme_MomSpeech_Text_1:
# 100 "data/maps/ThymeVillage/scripts.pory"
	.string "Mom gave you ¥2000.$"

Thyme_MomSpeech_Text_2:
# 104 "data/maps/ThymeVillage/scripts.pory"
	.string "{SPEAKER NAME_MOM}This was supposed to be your allowance\n"
	.string "for the trip…\p"
	.string "But a Trainer like you has better things\n"
	.string "to do than shop with your mom, right?\p"
	.string "No, no, it's fine… you go and have fun\n"
	.string "out in the wilderness, honey.\p"
	.string "I'll just be in the gift shop until the\n"
	.string "tour gets moving again.$"

Thyme_EntranceSign_Text_0:
# 160 "data/maps/ThymeVillage/scripts.pory"
	.string "THYME NATURE RESERVE\n"
	.string "Help support our diverse wildlife!$"

Thyme_BusSign_Text_0:
# 167 "data/maps/ThymeVillage/scripts.pory"
	.string "Bus Stop ahead\n"
	.string "Runs 24/7 around the region$"

Thyme_ExitSign_Text_0:
# 172 "data/maps/ThymeVillage/scripts.pory"
	.string "{UP_ARROW} Visitor Center\n"
	.string "{RIGHT_ARROW} Gift Shop\l"
	.string "{DOWN_ARROW} Old Bay$"

Thyme_ShopSign_Text_0:
# 179 "data/maps/ThymeVillage/scripts.pory"
	.string "{COLOR GREEN}Thyme Nature Reserve Gift Shop\n"
	.string "{COLOR DARK_GRAY}Experience the magic of the nature! All\l"
	.string "proceeds go toward the benefit of the\l"
	.string "local forest population.$"

Thyme_BusMan_Text_0:
# 195 "data/maps/ThymeVillage/scripts.pory"
	.string "I'm sorry, but you need a Bus Pass to\n"
	.string "ride.\p"
	.string "You'll need to ask your parent or\n"
	.string "guardian purchase one for you.$"

Thyme_OldMan_Text_0:
# 215 "data/maps/ThymeVillage/scripts.pory"
	.string "Word is you're on good terms with our\n"
	.string "mayor, now.\p"
	.string "Or Leader, as his fans like to call him in\n"
	.string "the deep woods.\p"
	.string "Bit of an upstart, but we trust him\n"
	.string "enough to keep up this act.$"

Thyme_OldMan_Text_1:
# 223 "data/maps/ThymeVillage/scripts.pory"
	.string "Heya, traveler! Welcome to the Thyme\n"
	.string "Nature Preserve!\p"
	.string "Have you visited our gift shop yet?\p"
	.string "Lots of Natural Products for you good\n"
	.string "folk, heh!$"

Thyme_OldMan_Text_2:
# 230 "data/maps/ThymeVillage/scripts.pory"
	.string "Once you've done your business here, be\n"
	.string "sure to stick with your group, ya hear?\p"
	.string "Spritely kid like yourself might just\n"
	.string "get lost in the forest, heheh!$"

Thyme_Gardener_Text_0:
# 242 "data/maps/ThymeVillage/scripts.pory"
	.string "They say that the stuff they sell over\n"
	.string "at the gift shop is all-natural.\p"
	.string "…But that's obvious, right? Most of it's\n"
	.string "a bunch of mushrooms and dirt.$"

Thyme_Gardener_Text_1:
# 248 "data/maps/ThymeVillage/scripts.pory"
	.string "The normal half of their stock's\n"
	.string "actually just imported from the city.\p"
	.string "I'd know, I'm workin' here to get away\n"
	.string "from all that.$"

Thyme_Employee_Text_0:
# 261 "data/maps/ThymeVillage/scripts.pory"
	.string "So, you've been to our sister location\n"
	.string "already?\p"
	.string "Or, I suppose this was the sister\n"
	.string "location.\p"
	.string "Well, our gift shop has a different\n"
	.string "stock, so you should still stop by!$"

Thyme_Employee_Text_1:
# 268 "data/maps/ThymeVillage/scripts.pory"
	.string "Have you visited the Thyme Nature\n"
	.string "Preserve Gift Shop yet?\p"
	.string "It's just to the right! All our profits\n"
	.string "go to helping the forest!$"

Thyme_Employee_Text_2:
# 275 "data/maps/ThymeVillage/scripts.pory"
	.string "Our shop is stocked by popular demand,\n"
	.string "so you can be assured of its quality.\p"
	.string "You may not think you need Tiny\n"
	.string "Mushrooms, but you never know!$"

Thyme_PokeKid_Text_0:
# 295 "data/maps/ThymeVillage/scripts.pory"
	.string "I saw my parents going toward the gift\n"
	.string "shop, so I just dipped.\p"
	.string "I'm not gonna stand around while they\n"
	.string "cry over {STR_VAR_1} dolls again…$"

Thyme_PokeKid_Text_1:
# 301 "data/maps/ThymeVillage/scripts.pory"
	.string "They're always trying to drag me around\n"
	.string "to contests and stuff, too.\p"
	.string "How can they think I'm still into that\n"
	.string "kinda stuff?$"
