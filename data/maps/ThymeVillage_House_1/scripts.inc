ThymeVillage_House1_MapScripts::
	.byte 0


Thyme_House1_Lady::
# 8 "data/maps/ThymeVillage_House_1/scripts.pory"
	msgbox Thyme_House1_Lady_Text_0, MSGBOX_NPC
	return


Thyme_House1_Boy::
# 17 "data/maps/ThymeVillage_House_1/scripts.pory"
	lockall
# 18 "data/maps/ThymeVillage_House_1/scripts.pory"
	faceplayer
# 19 "data/maps/ThymeVillage_House_1/scripts.pory"
	msgbox Thyme_House1_Boy_Text_0, MSGBOX_YESNO
# 24 "data/maps/ThymeVillage_House_1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Thyme_House1_Boy_2
# 30 "data/maps/ThymeVillage_House_1/scripts.pory"
	special ChoosePartyMon
# 31 "data/maps/ThymeVillage_House_1/scripts.pory"
	lockall
# 32 "data/maps/ThymeVillage_House_1/scripts.pory"
	specialvar VAR_0x8005, GetSelectedMonNicknameAndSpecies
# 33 "data/maps/ThymeVillage_House_1/scripts.pory"
	copyvar VAR_TEMP_0, VAR_0x8005
# 35 "data/maps/ThymeVillage_House_1/scripts.pory"
	switch VAR_TEMP_0
# 37 "data/maps/ThymeVillage_House_1/scripts.pory"
	case SPECIES_BEAUTIFLY, Thyme_House1_Boy_6
# 38 "data/maps/ThymeVillage_House_1/scripts.pory"
	case SPECIES_DUSTOX, Thyme_House1_Boy_6
# 40 "data/maps/ThymeVillage_House_1/scripts.pory"
	case SPECIES_WURMPLE, Thyme_House1_Boy_7
# 41 "data/maps/ThymeVillage_House_1/scripts.pory"
	case SPECIES_SILCOON, Thyme_House1_Boy_7
# 42 "data/maps/ThymeVillage_House_1/scripts.pory"
	case SPECIES_CASCOON, Thyme_House1_Boy_7
# 48 "data/maps/ThymeVillage_House_1/scripts.pory"
	msgbox Thyme_House1_Boy_Text_3, MSGBOX_AUTOCLOSE
	end

Thyme_House1_Boy_2:
# 26 "data/maps/ThymeVillage_House_1/scripts.pory"
	msgbox Thyme_House1_Boy_Text_1, MSGBOX_AUTOCLOSE
	end

Thyme_House1_Boy_4:
# 55 "data/maps/ThymeVillage_House_1/scripts.pory"
	msgbox Thyme_House1_Boy_Text_4, MSGBOX_YESNO
# 59 "data/maps/ThymeVillage_House_1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Thyme_House1_Boy_10
# 66 "data/maps/ThymeVillage_House_1/scripts.pory"
	special ChoosePartyMon
# 67 "data/maps/ThymeVillage_House_1/scripts.pory"
	lockall
# 68 "data/maps/ThymeVillage_House_1/scripts.pory"
	specialvar VAR_0x8005, GetSelectedMonNicknameAndSpecies
# 70 "data/maps/ThymeVillage_House_1/scripts.pory"
	compare VAR_0x8005, VAR_TEMP_0
	goto_if_eq Thyme_House1_Boy_13
# 78 "data/maps/ThymeVillage_House_1/scripts.pory"
	switch VAR_0x8005
# 80 "data/maps/ThymeVillage_House_1/scripts.pory"
	case SPECIES_BEAUTIFLY, Thyme_House1_Boy_16
# 81 "data/maps/ThymeVillage_House_1/scripts.pory"
	case SPECIES_DUSTOX, Thyme_House1_Boy_16
# 85 "data/maps/ThymeVillage_House_1/scripts.pory"
	case SPECIES_WURMPLE, Thyme_House1_Boy_17
# 86 "data/maps/ThymeVillage_House_1/scripts.pory"
	case SPECIES_SILCOON, Thyme_House1_Boy_17
# 87 "data/maps/ThymeVillage_House_1/scripts.pory"
	case SPECIES_CASCOON, Thyme_House1_Boy_17
# 93 "data/maps/ThymeVillage_House_1/scripts.pory"
	msgbox Thyme_House1_Boy_Text_8, MSGBOX_AUTOCLOSE
	end

Thyme_House1_Boy_6:
	goto Thyme_House1_Boy_4

Thyme_House1_Boy_7:
# 43 "data/maps/ThymeVillage_House_1/scripts.pory"
	msgbox Thyme_House1_Boy_Text_2, MSGBOX_AUTOCLOSE
	end

Thyme_House1_Boy_10:
# 61 "data/maps/ThymeVillage_House_1/scripts.pory"
	msgbox Thyme_House1_Boy_Text_5, MSGBOX_AUTOCLOSE
	end

Thyme_House1_Boy_13:
# 72 "data/maps/ThymeVillage_House_1/scripts.pory"
	msgbox Thyme_House1_Boy_Text_6, MSGBOX_AUTOCLOSE
	end

Thyme_House1_Boy_16:
# 82 "data/maps/ThymeVillage_House_1/scripts.pory"
	msgbox Thyme_House1_Boy_Text_7
	return

Thyme_House1_Boy_17:
# 88 "data/maps/ThymeVillage_House_1/scripts.pory"
	msgbox Thyme_House1_Boy_Text_2, MSGBOX_AUTOCLOSE
	end


Thyme_House1_Lady_Text_0:
# 8 "data/maps/ThymeVillage_House_1/scripts.pory"
	.string "May I ask, what did you come visit our\n"
	.string "region for?\p"
	.string "Was it our famous shows? The\n"
	.string "celebrities from the city?\p"
	.string "People say they enjoy the sights,\n"
	.string "appreciate the natural scenery…\p"
	.string "But, that's never the first reason.$"

Thyme_House1_Boy_Text_0:
# 19 "data/maps/ThymeVillage_House_1/scripts.pory"
	.string "Hey, you're a Pokémon Trainer, right?\n"
	.string "You must have caught all kinds of rare\l"
	.string "and cool Pokémon!\p"
	.string "I'm looking for a certain kind of\n"
	.string "Bug-type Pokémon…\p"
	.string "If you have it, can you show it to me?$"

Thyme_House1_Boy_Text_1:
# 26 "data/maps/ThymeVillage_House_1/scripts.pory"
	.string "Aw, okay…$"

Thyme_House1_Boy_Text_2:
# 43 "data/maps/ThymeVillage_House_1/scripts.pory"
	.string "Hm… that's not quite right, but I think\n"
	.string "you're on the right track.\p"
	.string "Maybe if it looked a little stronger?$"

Thyme_House1_Boy_Text_3:
# 48 "data/maps/ThymeVillage_House_1/scripts.pory"
	.string "Nah… that's not the one.\p"
	.string "I'm looking for one that's a little more…\n"
	.string "This or That, you know?\p"
	.string "I think I've even seen it in the forest\n"
	.string "before…$"

Thyme_House1_Boy_Text_4:
# 55 "data/maps/ThymeVillage_House_1/scripts.pory"
	.string "That's it!! That's the one! Or at least…\n"
	.string "I think it is?\p"
	.string "Do you have another one like it?$"

Thyme_House1_Boy_Text_5:
# 61 "data/maps/ThymeVillage_House_1/scripts.pory"
	.string "Aw, okay… but if you find one, come back\n"
	.string "and show me both, okay?$"

Thyme_House1_Boy_Text_6:
# 72 "data/maps/ThymeVillage_House_1/scripts.pory"
	.string "Oh… that looks the exact same…\p"
	.string "If you find one that's maybe {COLOR BLUE}related to\n"
	.string "that one{COLOR DARK_GRAY}, can you come back and show me\l"
	.string "both?$"

Thyme_House1_Boy_Text_7:
# 82 "data/maps/ThymeVillage_House_1/scripts.pory"
	.string "Yeah! That's right, Wurmple evolves into\n"
	.string "both of these!!\p"
	.string "I don't have a reward for you, though…\p"
	.string "{COLOR RED}Why don't you remind the game developer\n"
	.string "about this later?$"

Thyme_House1_Boy_Text_8:
# 93 "data/maps/ThymeVillage_House_1/scripts.pory"
	.string "No… these don't look related.\p"
	.string "If you find one that's maybe {COLOR BLUE}related to\n"
	.string "that one{COLOR DARK_GRAY}, can you come back and show me\l"
	.string "both?$"
