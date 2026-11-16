ThymeVillage_Mart_MapScripts::
	.byte 0


Thyme_Mart_Clerk::
# 5 "data/maps/ThymeVillage_Mart/scripts.pory"
	lock
# 6 "data/maps/ThymeVillage_Mart/scripts.pory"
	faceplayer
# 7 "data/maps/ThymeVillage_Mart/scripts.pory"
	msgbox gText_HowMayIServeYou
# 8 "data/maps/ThymeVillage_Mart/scripts.pory"
	waitmessage
# 9 "data/maps/ThymeVillage_Mart/scripts.pory"
	pokemart Thyme_Mart_Pokemart
# 10 "data/maps/ThymeVillage_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain
# 11 "data/maps/ThymeVillage_Mart/scripts.pory"
	release
	end


# 15 "data/maps/ThymeVillage_Mart/scripts.pory"

# 16 "data/maps/ThymeVillage_Mart/scripts.pory"
Thyme_Mart_Pokemart:
# 17 "data/maps/ThymeVillage_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 18 "data/maps/ThymeVillage_Mart/scripts.pory"
	.2byte ITEM_POTION
# 19 "data/maps/ThymeVillage_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 20 "data/maps/ThymeVillage_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 21 "data/maps/ThymeVillage_Mart/scripts.pory"
	.2byte ITEM_AWAKENING
# 22 "data/maps/ThymeVillage_Mart/scripts.pory"
	.2byte ITEM_NONE
# 23 "data/maps/ThymeVillage_Mart/scripts.pory"
	release
# 24 "data/maps/ThymeVillage_Mart/scripts.pory"
	end

Thyme_Mart_Boy::
# 32 "data/maps/ThymeVillage_Mart/scripts.pory"
	msgbox Thyme_Mart_Boy_Text_0, MSGBOX_NPC
	return


Thyme_Mart_Woman::
# 39 "data/maps/ThymeVillage_Mart/scripts.pory"
	msgbox Thyme_Mart_Woman_Text_0, MSGBOX_NPC
	return


Thyme_Mart_RiajuuM::
# 46 "data/maps/ThymeVillage_Mart/scripts.pory"
	msgbox Thyme_Mart_RiajuuM_Text_0, MSGBOX_NPC
	return


Thyme_Mart_Boy_Text_0:
# 32 "data/maps/ThymeVillage_Mart/scripts.pory"
	.string "Sure, you could run back to a\n"
	.string "Pokémon Center when tired,\p"
	.string "But isn't it so much easier to just\n"
	.string "carry a few Potions?$"

Thyme_Mart_Woman_Text_0:
# 39 "data/maps/ThymeVillage_Mart/scripts.pory"
	.string "I'll let you in on a little shopper's\n"
	.string "secret…\p"
	.string "If you buy 10 or more Pokéballs, they'll\n"
	.string "throw in another one for free!$"

Thyme_Mart_RiajuuM_Text_0:
# 46 "data/maps/ThymeVillage_Mart/scripts.pory"
	.string "{SPEAKER NAME_BOY}I stopped by here to stock up on\n"
	.string "supplies before we continue the tour…\p"
	.string "But I get the feeling my girlfriend's\n"
	.string "already run off without me… haha…$"
