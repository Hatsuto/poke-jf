ThymeVillage_Mart_MapScripts::
	.byte 0


Thyme_Mart_Clerk::
# 9 "data/maps/ThymeVillage_Mart/scripts.pory"
	lock
# 10 "data/maps/ThymeVillage_Mart/scripts.pory"
	faceplayer
# 11 "data/maps/ThymeVillage_Mart/scripts.pory"
	setvar VAR_0x8000, ITEM_POTION
# 12 "data/maps/ThymeVillage_Mart/scripts.pory"
	specialvar VAR_TEMP_0, CheckItemQuantity
# 13 "data/maps/ThymeVillage_Mart/scripts.pory"
	msgbox gText_HowMayIServeYou
# 14 "data/maps/ThymeVillage_Mart/scripts.pory"
	waitmessage
# 15 "data/maps/ThymeVillage_Mart/scripts.pory"
	pokemart Thyme_Mart_Pokemart
# 16 "data/maps/ThymeVillage_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain
# 17 "data/maps/ThymeVillage_Mart/scripts.pory"
	setvar VAR_0x8000, ITEM_POTION
# 18 "data/maps/ThymeVillage_Mart/scripts.pory"
	specialvar VAR_TEMP_1, CheckItemQuantity
# 21 "data/maps/ThymeVillage_Mart/scripts.pory"
	compare VAR_INNERTHYME_STATE, 0
	goto_if_eq Thyme_Mart_Clerk_2
Thyme_Mart_Clerk_1:
# 29 "data/maps/ThymeVillage_Mart/scripts.pory"
	release
	end

Thyme_Mart_Clerk_2:
Thyme_Mart_Clerk_4:
# 23 "data/maps/ThymeVillage_Mart/scripts.pory"
	compare VAR_TEMP_1, VAR_TEMP_0
	goto_if_gt Thyme_Mart_Clerk_6
	goto Thyme_Mart_Clerk_1

Thyme_Mart_Clerk_5:
# 25 "data/maps/ThymeVillage_Mart/scripts.pory"
	addvar VAR_ACTIVITY_TRACK, 1
# 26 "data/maps/ThymeVillage_Mart/scripts.pory"
	subvar VAR_TEMP_1, 1
	goto Thyme_Mart_Clerk_4

Thyme_Mart_Clerk_6:
# 23 "data/maps/ThymeVillage_Mart/scripts.pory"
	compare VAR_TEMP_1, 0
	goto_if_gt Thyme_Mart_Clerk_5
	goto Thyme_Mart_Clerk_1


# 33 "data/maps/ThymeVillage_Mart/scripts.pory"

# 34 "data/maps/ThymeVillage_Mart/scripts.pory"
Thyme_Mart_Pokemart:
# 35 "data/maps/ThymeVillage_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 36 "data/maps/ThymeVillage_Mart/scripts.pory"
	.2byte ITEM_POTION
# 37 "data/maps/ThymeVillage_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 38 "data/maps/ThymeVillage_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 39 "data/maps/ThymeVillage_Mart/scripts.pory"
	.2byte ITEM_AWAKENING
# 40 "data/maps/ThymeVillage_Mart/scripts.pory"
	.2byte ITEM_NONE
# 41 "data/maps/ThymeVillage_Mart/scripts.pory"
	release
# 42 "data/maps/ThymeVillage_Mart/scripts.pory"
	end

Thyme_Mart_Boy::
# 50 "data/maps/ThymeVillage_Mart/scripts.pory"
	msgbox Thyme_Mart_Boy_Text_0, MSGBOX_NPC
	return


Thyme_Mart_Woman::
# 57 "data/maps/ThymeVillage_Mart/scripts.pory"
	msgbox Thyme_Mart_Woman_Text_0, MSGBOX_NPC
	return


Thyme_Mart_RiajuuM::
# 64 "data/maps/ThymeVillage_Mart/scripts.pory"
	msgbox Thyme_Mart_RiajuuM_Text_0, MSGBOX_NPC
	return


Thyme_Mart_Boy_Text_0:
# 50 "data/maps/ThymeVillage_Mart/scripts.pory"
	.string "Sure, you could run back to a\n"
	.string "Pokémon Center when tired,\p"
	.string "But isn't it so much easier to just\n"
	.string "carry a few Potions?$"

Thyme_Mart_Woman_Text_0:
# 57 "data/maps/ThymeVillage_Mart/scripts.pory"
	.string "I'll let you in on a little shopper's\n"
	.string "secret…\p"
	.string "If you buy 10 or more Pokéballs, they'll\n"
	.string "throw in another one for free!$"

Thyme_Mart_RiajuuM_Text_0:
# 64 "data/maps/ThymeVillage_Mart/scripts.pory"
	.string "{SPEAKER NAME_BOY}I stopped by here to stock up on\n"
	.string "supplies before we continue the tour…\p"
	.string "But I get the feeling my girlfriend's\n"
	.string "already run off without me… haha…$"
