ThymeVillage_PokemonCenter_1F_MapScripts::
# 8 "data/maps/ThymeVillage_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Thyme_PokeCen_OnTransition
# 9 "data/maps/ThymeVillage_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0


Thyme_PokeCen_OnTransition:
# 14 "data/maps/ThymeVillage_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_THYME_VILLAGE
	end


Thyme_PokeCen_Nurse::
# 20 "data/maps/ThymeVillage_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x800B, 1
# 21 "data/maps/ThymeVillage_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 22 "data/maps/ThymeVillage_PokemonCenter_1F/scripts.pory"
	waitmessage
# 23 "data/maps/ThymeVillage_PokemonCenter_1F/scripts.pory"
	waitbuttonpress
# 24 "data/maps/ThymeVillage_PokemonCenter_1F/scripts.pory"
	release
	end


Thyme_PokeCen_Man::
# 34 "data/maps/ThymeVillage_PokemonCenter_1F/scripts.pory"
	msgbox Thyme_PokeCen_Man_Text_0, MSGBOX_NPC
	return


Thyme_PokeCen_Woman::
# 41 "data/maps/ThymeVillage_PokemonCenter_1F/scripts.pory"
	msgbox Thyme_PokeCen_Woman_Text_0, MSGBOX_NPC
	return


Thyme_PokeCen_Lass::
# 48 "data/maps/ThymeVillage_PokemonCenter_1F/scripts.pory"
	msgbox Thyme_PokeCen_Lass_Text_0, MSGBOX_NPC
	return


Thyme_PokeCen_Gramps::
# 57 "data/maps/ThymeVillage_PokemonCenter_1F/scripts.pory"
	msgbox Thyme_PokeCen_Gramps_Text_0, MSGBOX_NPC
	return


Thyme_PokeCen_Man_Text_0:
# 34 "data/maps/ThymeVillage_PokemonCenter_1F/scripts.pory"
	.string "It's amazing that Pokémon Centers are\n"
	.string "free to use.\p"
	.string "I suppose we have the Sekien League to\n"
	.string "thank for that.$"

Thyme_PokeCen_Woman_Text_0:
# 41 "data/maps/ThymeVillage_PokemonCenter_1F/scripts.pory"
	.string "Wherever you go, always try to visit the\n"
	.string "local Pokémon Center.\p"
	.string "That way you'll know where to run to in\n"
	.string "an emergency.$"

Thyme_PokeCen_Lass_Text_0:
# 48 "data/maps/ThymeVillage_PokemonCenter_1F/scripts.pory"
	.string "{SPEAKER NAME_GIRL}Lots of famous people are from Sekien,\n"
	.string "so it gets a lot of visitors.\p"
	.string "This is a first for me, but Thyme is\n"
	.string "actually Grandpa's hometown.\p"
	.string "He says there are Mythical Pokémon on\n"
	.string "every leg of this trip…\p"
	.string "But honestly, he's always saying wild\n"
	.string "stuff like that.$"

Thyme_PokeCen_Gramps_Text_0:
# 57 "data/maps/ThymeVillage_PokemonCenter_1F/scripts.pory"
	.string "{SPEAKER NAME_OLDMAN}So they say this is Thyme? Hogwash!\p"
	.string "The real natives of Thyme would never\n"
	.string "let 'em build a darned bus stop!$"
