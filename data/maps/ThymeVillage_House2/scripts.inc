ThymeVillage_House2_MapScripts::
	.byte 0


Thyme_House2_Lady::
# 5 "data/maps/ThymeVillage_House2/scripts.pory"
	lock
# 6 "data/maps/ThymeVillage_House2/scripts.pory"
	faceplayer
# 7 "data/maps/ThymeVillage_House2/scripts.pory"
	goto_if_unset FLAG_BADGE01_GET, Thyme_House2_Lady_2
# 16 "data/maps/ThymeVillage_House2/scripts.pory"
	msgbox Thyme_House2_Lady_Text_1
Thyme_House2_Lady_1:
# 19 "data/maps/ThymeVillage_House2/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 20 "data/maps/ThymeVillage_House2/scripts.pory"
	waitmovement 0
# 21 "data/maps/ThymeVillage_House2/scripts.pory"
	release
	end

Thyme_House2_Lady_2:
# 9 "data/maps/ThymeVillage_House2/scripts.pory"
	msgbox Thyme_House2_Lady_Text_0
	goto Thyme_House2_Lady_1


Thyme_House2_Man::
# 27 "data/maps/ThymeVillage_House2/scripts.pory"
	lock
# 28 "data/maps/ThymeVillage_House2/scripts.pory"
	faceplayer
# 29 "data/maps/ThymeVillage_House2/scripts.pory"
	msgbox Thyme_House2_Man_Text_0
# 31 "data/maps/ThymeVillage_House2/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 32 "data/maps/ThymeVillage_House2/scripts.pory"
	waitmovement 0
# 33 "data/maps/ThymeVillage_House2/scripts.pory"
	release
	end


Thyme_House2_Lady_Text_0:
# 9 "data/maps/ThymeVillage_House2/scripts.pory"
	.string "You've been on the nature path from the\n"
	.string "Visitor Center, right?\p"
	.string "I hope no Wurmples managed to sting\n"
	.string "your Pokémon.\p"
	.string "The gift shop here sells {COLOR GREEN}special healing\n"
	.string "herbs {COLOR DARK_GRAY}just in case!$"

Thyme_House2_Lady_Text_1:
# 16 "data/maps/ThymeVillage_House2/scripts.pory"
	.string "Residents of the deep woods don't feel\n"
	.string "the same, but I like the traffic.\p"
	.string "There are always new types of people\n"
	.string "coming through, like you!$"

Thyme_House2_Man_Text_0:
# 29 "data/maps/ThymeVillage_House2/scripts.pory"
	.string "What do you need, kid?\p"
	.string "Sofy101's cooking show is gonna be on\n"
	.string "soon. I've never missed an episode!$"
