ThymeForest_MapScripts::
# 11 "data/maps/ThymeForest/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, ThymeForest_TreeBlock
	.byte 0


ThymeForest_TreeBlock::
# 16 "data/maps/ThymeForest/scripts.pory"
	setmetatile 57, 43, 0x1E, 0x1
# 17 "data/maps/ThymeForest/scripts.pory"
	setmetatile 57 + 1, 43, 0x1F, 0x1
# 18 "data/maps/ThymeForest/scripts.pory"
	setmetatile 57, 43 + 1, 0x26, 0x1
# 19 "data/maps/ThymeForest/scripts.pory"
	setmetatile 57 + 1, 43 + 1, 0x27, 0x1
# 21 "data/maps/ThymeForest/scripts.pory"
	setmetatile 58, 45, 0x1E, 0x1
# 22 "data/maps/ThymeForest/scripts.pory"
	setmetatile 58 + 1, 45, 0x1F, 0x1
# 23 "data/maps/ThymeForest/scripts.pory"
	setmetatile 58, 45 + 1, 0x26, 0x1
# 24 "data/maps/ThymeForest/scripts.pory"
	setmetatile 58 + 1, 45 + 1, 0x27, 0x1
	return


ThymeForest_ShopBlock::
# 33 "data/maps/ThymeForest/scripts.pory"
	lock
# 34 "data/maps/ThymeForest/scripts.pory"
	setvar VAR_LAST_TALKED, LOCALID_TF_BOUNCER
# 35 "data/maps/ThymeForest/scripts.pory"
	call Common_NPCNotice
# 37 "data/maps/ThymeForest/scripts.pory"
	setflag FLAG_TEMP_1
# 38 "data/maps/ThymeForest/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ThymeForest_PlayerBTFO
# 39 "data/maps/ThymeForest/scripts.pory"
	applymovement LOCALID_TF_BOUNCER, ThymeForest_BouncerBounce
# 40 "data/maps/ThymeForest/scripts.pory"
	waitmovement 0
# 41 "data/maps/ThymeForest/scripts.pory"
	goto ThymeForest_Bouncer
	return


# 43 "data/maps/ThymeForest/scripts.pory"
ThymeForest_PlayerBTFO:
# 45 "data/maps/ThymeForest/scripts.pory"
	walk_fast_right
# 46 "data/maps/ThymeForest/scripts.pory"
	face_left
	step_end

# 48 "data/maps/ThymeForest/scripts.pory"
ThymeForest_BouncerBounce:
# 50 "data/maps/ThymeForest/scripts.pory"
	walk_up
# 51 "data/maps/ThymeForest/scripts.pory"
	face_right
	step_end

# 53 "data/maps/ThymeForest/scripts.pory"
ThymeForest_BouncerBouncent:
# 55 "data/maps/ThymeForest/scripts.pory"
	walk_down
# 56 "data/maps/ThymeForest/scripts.pory"
	face_right
	step_end

ThymeForest_ExperienceTip::
# 76 "data/maps/ThymeForest/scripts.pory"
	msgbox ThymeForest_ExperienceTip_Text_0, MSGBOX_SIGN
	return


ThymeForest_HiddenItemTip::
# 84 "data/maps/ThymeForest/scripts.pory"
	msgbox ThymeForest_HiddenItemTip_Text_0, MSGBOX_SIGN
	return


ThymeForest_LedgeTip::
# 91 "data/maps/ThymeForest/scripts.pory"
	msgbox ThymeForest_LedgeTip_Text_0, MSGBOX_SIGN
	return


ThymeForest_Bouncer::
# 102 "data/maps/ThymeForest/scripts.pory"
	lock
# 104 "data/maps/ThymeForest/scripts.pory"
	msgbox ThymeForest_Bouncer_Text_0
# 107 "data/maps/ThymeForest/scripts.pory"
	closemessage
# 108 "data/maps/ThymeForest/scripts.pory"
	goto_if_set FLAG_TEMP_1, ThymeForest_Bouncer_1
# 118 "data/maps/ThymeForest/scripts.pory"
	applymovement LOCALID_TF_BOUNCER, Common_Movement_FaceRight
# 119 "data/maps/ThymeForest/scripts.pory"
	release
	end

ThymeForest_Bouncer_1:
# 110 "data/maps/ThymeForest/scripts.pory"
	clearflag FLAG_TEMP_1
# 111 "data/maps/ThymeForest/scripts.pory"
	applymovement LOCALID_TF_BOUNCER, ThymeForest_BouncerBouncent
# 112 "data/maps/ThymeForest/scripts.pory"
	waitmovement 0
# 113 "data/maps/ThymeForest/scripts.pory"
	release
	end


ThymeForest_Otaku::
# 131 "data/maps/ThymeForest/scripts.pory"
	trainerbattle_single TRAINER_THYMEFOREST_GREGATHAN, ThymeForest_Otaku_Text_0, ThymeForest_Otaku_Text_1, ThymeForest_Otaku_RateMyPokemon
# 137 "data/maps/ThymeForest/scripts.pory"
	msgbox ThymeForest_Otaku_Text_2, MSGBOX_NPC
	return


ThymeForest_Otaku_RateMyPokemon:
# 142 "data/maps/ThymeForest/scripts.pory"
	lock
# 143 "data/maps/ThymeForest/scripts.pory"
	setspeaker SP_NAME_OTAKU
# 144 "data/maps/ThymeForest/scripts.pory"
	compare VAR_CUTE_BABY, 0
	goto_if_gt ThymeForest_Otaku_RateMyPokemon_2
# 152 "data/maps/ThymeForest/scripts.pory"
	msgbox ThymeForest_Otaku_RateMyPokemon_Text_1
ThymeForest_Otaku_RateMyPokemon_1:
# 155 "data/maps/ThymeForest/scripts.pory"
	closemessage
# 156 "data/maps/ThymeForest/scripts.pory"
	msgbox ThymeForest_Otaku_RateMyPokemon_Text_2, MSGBOX_YESNO
# 160 "data/maps/ThymeForest/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ThymeForest_Otaku_RateMyPokemon_6
# 168 "data/maps/ThymeForest/scripts.pory"
	compare VAR_CUTE_BABY, 0
	goto_if_gt ThymeForest_Otaku_RateMyPokemon_7
ThymeForest_Otaku_RateMyPokemon_5:
# 176 "data/maps/ThymeForest/scripts.pory"
	goto ThymeForest_Otaku_Acceptance
	return

ThymeForest_Otaku_RateMyPokemon_2:
# 146 "data/maps/ThymeForest/scripts.pory"
	bufferspeciesname 0, VAR_CUTE_BABY
# 147 "data/maps/ThymeForest/scripts.pory"
	msgbox ThymeForest_Otaku_RateMyPokemon_Text_0
	goto ThymeForest_Otaku_RateMyPokemon_1

ThymeForest_Otaku_RateMyPokemon_6:
# 162 "data/maps/ThymeForest/scripts.pory"
	compare VAR_CUTE_BABY, 0
	goto_if_eq ThymeForest_Otaku_RateMyPokemon_11
ThymeForest_Otaku_RateMyPokemon_10:
# 166 "data/maps/ThymeForest/scripts.pory"
	goto ThymeForest_Otaku_Rejection
	goto ThymeForest_Otaku_RateMyPokemon_5

ThymeForest_Otaku_RateMyPokemon_7:
# 170 "data/maps/ThymeForest/scripts.pory"
	msgbox ThymeForest_Otaku_RateMyPokemon_Text_3, MSGBOX_YESNO
# 171 "data/maps/ThymeForest/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ThymeForest_Otaku_RateMyPokemon_13
	goto ThymeForest_Otaku_RateMyPokemon_5

ThymeForest_Otaku_RateMyPokemon_11:
# 164 "data/maps/ThymeForest/scripts.pory"
	setvar VAR_CUTE_BABY, SPECIES_STUNFISK
	goto ThymeForest_Otaku_RateMyPokemon_10

ThymeForest_Otaku_RateMyPokemon_13:
# 173 "data/maps/ThymeForest/scripts.pory"
	goto ThymeForest_Otaku_Rejection
	goto ThymeForest_Otaku_RateMyPokemon_5


ThymeForest_Otaku_Rejection:
# 180 "data/maps/ThymeForest/scripts.pory"
	msgbox ThymeForest_Otaku_Rejection_Text_0
# 181 "data/maps/ThymeForest/scripts.pory"
	goto ThymeForest_Otaku_PostScript
	return


ThymeForest_Otaku_Acceptance:
# 185 "data/maps/ThymeForest/scripts.pory"
	setvar VAR_CUTE_BABY, SPECIES_MORELULL
# 186 "data/maps/ThymeForest/scripts.pory"
	msgbox ThymeForest_Otaku_Acceptance_Text_0
# 187 "data/maps/ThymeForest/scripts.pory"
	goto ThymeForest_Otaku_PostScript
	return


ThymeForest_Otaku_PostScript:
# 191 "data/maps/ThymeForest/scripts.pory"
	msgbox ThymeForest_Otaku_PostScript_Text_0
# 192 "data/maps/ThymeForest/scripts.pory"
	closemessage
# 193 "data/maps/ThymeForest/scripts.pory"
	giveitem ITEM_FLUFFY_TAIL, 1
# 194 "data/maps/ThymeForest/scripts.pory"
	msgbox ThymeForest_Otaku_PostScript_Text_1, MSGBOX_AUTOCLOSE
	return


ThymeForest_RiajuuF::
# 200 "data/maps/ThymeForest/scripts.pory"
	setspeaker SP_NAME_GIRL
# 201 "data/maps/ThymeForest/scripts.pory"
	goto_if_unset FLAG_TEMP_2, ThymeForest_RiajuuF_1
# 211 "data/maps/ThymeForest/scripts.pory"
	msgbox ThymeForest_RiajuuF_Text_1, MSGBOX_NPC
	return

ThymeForest_RiajuuF_1:
# 203 "data/maps/ThymeForest/scripts.pory"
	setflag FLAG_TEMP_2
# 204 "data/maps/ThymeForest/scripts.pory"
	msgbox ThymeForest_RiajuuF_Text_0, MSGBOX_NPC
	return


ThymeForest_TravelNurse::
# 221 "data/maps/ThymeForest/scripts.pory"
	lock
# 222 "data/maps/ThymeForest/scripts.pory"
	faceplayer
# 223 "data/maps/ThymeForest/scripts.pory"
	compare VAR_ACTIVITY_TRACK, 5
	goto_if_gt ThymeForest_TravelNurse_1
# 233 "data/maps/ThymeForest/scripts.pory"
	compare VAR_ACTIVITY_TRACK, 0
	goto_if_gt ThymeForest_TravelNurse_2
# 259 "data/maps/ThymeForest/scripts.pory"
	setvar VAR_ITEM_ID, ITEM_POTION
# 260 "data/maps/ThymeForest/scripts.pory"
	specialvar VAR_RESULT, CheckItemQuantity
# 261 "data/maps/ThymeForest/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ThymeForest_TravelNurse_10
# 270 "data/maps/ThymeForest/scripts.pory"
	msgbox ThymeForest_TravelNurse_Text_8
ThymeForest_TravelNurse_9:
# 275 "data/maps/ThymeForest/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 277 "data/maps/ThymeForest/scripts.pory"
	msgbox ThymeForest_TravelNurse_Text_9
# 278 "data/maps/ThymeForest/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 279 "data/maps/ThymeForest/scripts.pory"
	removeobject LOCALID_TF_RENEE
# 280 "data/maps/ThymeForest/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 281 "data/maps/ThymeForest/scripts.pory"
	release
	end

ThymeForest_TravelNurse_1:
# 225 "data/maps/ThymeForest/scripts.pory"
	msgbox ThymeForest_TravelNurse_Text_0
# 229 "data/maps/ThymeForest/scripts.pory"
	trainerbattle_single TRAINER_THYMEFOREST_RENEE, ThymeForest_TravelNurse_Text_1, ThymeForest_TravelNurse_Text_2, ThymeForest_PostNurseBattle
	return

ThymeForest_TravelNurse_2:
# 235 "data/maps/ThymeForest/scripts.pory"
	msgbox ThymeForest_TravelNurse_Text_3, MSGBOX_YESNO
# 240 "data/maps/ThymeForest/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ThymeForest_TravelNurse_6
# 248 "data/maps/ThymeForest/scripts.pory"
	msgbox ThymeForest_TravelNurse_Text_5, MSGBOX_AUTOCLOSE
# 249 "data/maps/ThymeForest/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 250 "data/maps/ThymeForest/scripts.pory"
	trainerbattle_single TRAINER_THYMEFOREST_RENEE, ThymeForest_TravelNurse_Text_6, ThymeForest_TravelNurse_Text_2, ThymeForest_PostNurseBattle
# 253 "data/maps/ThymeForest/scripts.pory"
	release
	end

ThymeForest_TravelNurse_6:
# 242 "data/maps/ThymeForest/scripts.pory"
	trainerbattle_single TRAINER_THYMEFOREST_RENEE, ThymeForest_TravelNurse_Text_4, ThymeForest_TravelNurse_Text_2, ThymeForest_PostNurseBattle
	return

ThymeForest_TravelNurse_10:
# 263 "data/maps/ThymeForest/scripts.pory"
	msgbox ThymeForest_TravelNurse_Text_7
	goto ThymeForest_TravelNurse_9


ThymeForest_PostNurseBattle:
# 287 "data/maps/ThymeForest/scripts.pory"
	lock
# 288 "data/maps/ThymeForest/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 289 "data/maps/ThymeForest/scripts.pory"
	msgbox ThymeForest_PostNurseBattle_Text_0, MSGBOX_AUTOCLOSE
# 293 "data/maps/ThymeForest/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 294 "data/maps/ThymeForest/scripts.pory"
	removeobject LOCALID_TF_RENEE
# 295 "data/maps/ThymeForest/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 296 "data/maps/ThymeForest/scripts.pory"
	release
	end


ThymeForest_Boy::
# 306 "data/maps/ThymeForest/scripts.pory"
	msgbox ThymeForest_Boy_Text_0, MSGBOX_NPC
	return


ThymeForest_LedgeBoy::
# 313 "data/maps/ThymeForest/scripts.pory"
	msgbox ThymeForest_LedgeBoy_Text_0, MSGBOX_NPC
	return


ThymeForest_BugCatcher_Andre::
# 325 "data/maps/ThymeForest/scripts.pory"
	trainerbattle_single TRAINER_THYMEFOREST_ANDRE, ThymeForest_BugCatcher_Andre_Text_0, ThymeForest_BugCatcher_Andre_Text_1
# 329 "data/maps/ThymeForest/scripts.pory"
	msgbox ThymeForest_BugCatcher_Andre_Text_2, MSGBOX_NPC
	end


ThymeForest_Youngster_Jacob::
# 337 "data/maps/ThymeForest/scripts.pory"
	trainerbattle_single TRAINER_THYMEFOREST_JACOB, ThymeForest_Youngster_Jacob_Text_0, ThymeForest_Youngster_Jacob_Text_1
# 340 "data/maps/ThymeForest/scripts.pory"
	msgbox ThymeForest_Youngster_Jacob_Text_2, MSGBOX_NPC
	end


ThymeForest_Youngster_Cory::
# 348 "data/maps/ThymeForest/scripts.pory"
	trainerbattle_single TRAINER_THYMEFOREST_CORY, ThymeForest_Youngster_Cory_Text_0, ThymeForest_Youngster_Cory_Text_1
# 351 "data/maps/ThymeForest/scripts.pory"
	msgbox ThymeForest_Youngster_Cory_Text_2, MSGBOX_NPC
	end


ThymeForest_BugCatcher_Rove::
# 359 "data/maps/ThymeForest/scripts.pory"
	trainerbattle_single TRAINER_THYMEFOREST_ROVE, ThymeForest_BugCatcher_Rove_Text_0, ThymeForest_BugCatcher_Rove_Text_1
# 362 "data/maps/ThymeForest/scripts.pory"
	msgbox ThymeForest_BugCatcher_Rove_Text_2, MSGBOX_NPC
	end


ThymeForest_NinjaBoy_Cho::
# 370 "data/maps/ThymeForest/scripts.pory"
	trainerbattle_single TRAINER_THYMEFOREST_CHO, ThymeForest_NinjaBoy_Cho_Text_0, ThymeForest_NinjaBoy_Cho_Text_1
# 373 "data/maps/ThymeForest/scripts.pory"
	msgbox ThymeForest_NinjaBoy_Cho_Text_2, MSGBOX_NPC
	end


ThymeForest_AromaLady_Amanita::
# 381 "data/maps/ThymeForest/scripts.pory"
	trainerbattle_single TRAINER_THYMEFOREST_AMANITA, ThymeForest_AromaLady_Amanita_Text_0, ThymeForest_AromaLady_Amanita_Text_1
# 385 "data/maps/ThymeForest/scripts.pory"
	msgbox ThymeForest_AromaLady_Amanita_Text_2, MSGBOX_NPC
	end


ThymeForest_ExperienceTip_Text_0:
# 76 "data/maps/ThymeForest/scripts.pory"
	.string "Trainer Tips!\p"
	.string "All Pokémon - strong or weak - can gain\n"
	.string "experience just by seeing an opponent.\p"
	.string "Try to use many different kinds by\n"
	.string "switching them with teammates.\p"
	.string "With a little help, you never know who\n"
	.string "may grow strong themselves!$"

ThymeForest_HiddenItemTip_Text_0:
# 84 "data/maps/ThymeForest/scripts.pory"
	.string "Trainer Tips!\p"
	.string "-is what it reads, but it looks like\n"
	.string "someone forgot to write any.$"

ThymeForest_LedgeTip_Text_0:
# 91 "data/maps/ThymeForest/scripts.pory"
	.string "Trainer Tips!\p"
	.string "You can hop down thin ledges by walking\n"
	.string "into them!$"

ThymeForest_Bouncer_Text_0:
# 104 "data/maps/ThymeForest/scripts.pory"
	.string "Sorry, kid. Can't let you through\n"
	.string "without a BADGE…\p"
	.string "That's right… an Employee Badge.\n"
	.string "Staff only.\p"
	.string "If you're going back to Thyme, gotta\n"
	.string "head back the way you came.$"

ThymeForest_Otaku_Text_0:
# 132 "data/maps/ThymeForest/scripts.pory"
	.string "{SPEAKER NAME_MAN}Hehehe… I found one…\p"
	.string "A cute…{PAUSE 8} little…{PAUSE 8} Pokémon…$"

ThymeForest_Otaku_Text_1:
# 133 "data/maps/ThymeForest/scripts.pory"
	.string "Oh no… it fell asleep…$"

ThymeForest_Otaku_Text_2:
# 137 "data/maps/ThymeForest/scripts.pory"
	.string "{SPEAKER NAME_OTAKU}Morelull is pretty cute… but its spores\n"
	.string "might be bad for allergies…$"

ThymeForest_Otaku_RateMyPokemon_Text_0:
# 147 "data/maps/ThymeForest/scripts.pory"
	.string "You… I remember you…\p"
	.string "I showed you that cute\n"
	.string "{STR_VAR_1}…\n"
	.string "Do you remember?$"

ThymeForest_Otaku_RateMyPokemon_Text_1:
# 152 "data/maps/ThymeForest/scripts.pory"
	.string "Wait… you're on the tour… just like me.\p"
	.string "You walked by back at the Visitor\n"
	.string "Center… I saw you from the corner…$"

ThymeForest_Otaku_RateMyPokemon_Text_2:
# 156 "data/maps/ThymeForest/scripts.pory"
	.string "I didn't know you were a trainer. Then,\n"
	.string "maybe you can answer…\p"
	.string "Morelull… do you think it was cute?$"

ThymeForest_Otaku_RateMyPokemon_Text_3:
# 170 "data/maps/ThymeForest/scripts.pory"
	.string "Really…? Even cuter than\n"
	.string "{STR_VAR_1}…??$"

ThymeForest_Otaku_Rejection_Text_0:
# 180 "data/maps/ThymeForest/scripts.pory"
	.string "Oh… I understand. Then… I need to keep\n"
	.string "looking…$"

ThymeForest_Otaku_Acceptance_Text_0:
# 186 "data/maps/ThymeForest/scripts.pory"
	.string "I see… so that is what a real trainer\n"
	.string "thinks… hehe…$"

ThymeForest_Otaku_PostScript_Text_0:
# 191 "data/maps/ThymeForest/scripts.pory"
	.string "Thank you for telling me. Why don't you\n"
	.string "take this?$"

ThymeForest_Otaku_PostScript_Text_1:
# 194 "data/maps/ThymeForest/scripts.pory"
	.string "{SPEAKER NAME_OTAKU}Pokémon like to play with these… even\n"
	.string "wild ones.\p"
	.string "I recommend using it if you don't want\n"
	.string "to fight…$"

ThymeForest_RiajuuF_Text_0:
# 204 "data/maps/ThymeForest/scripts.pory"
	.string "Hey, have you seen my boyfriend\n"
	.string "around?\p"
	.string "We're supposed to catch Pokémon\n"
	.string "together, but I turned around and he\l"
	.string "was gone…\p"
	.string "Maybe… no, I'm sure he'll be here soon.$"

ThymeForest_RiajuuF_Text_1:
# 211 "data/maps/ThymeForest/scripts.pory"
	.string "We'll be fine. It's just a normal forest.\p"
	.string "There's no such thing as ghosts, or\n"
	.string "witches!\p"
	.string "Just Ghost-type Pokémon.\n"
	.string "And witch-like Pokémon.$"

ThymeForest_TravelNurse_Text_0:
# 225 "data/maps/ThymeForest/scripts.pory"
	.string "Salut! Euh… Hello!\p"
	.string "What is this? An amateur trainer, so\n"
	.string "deep in this forest?\p"
	.string "And yet I can see you come so prepared,\n"
	.string "with so many Potions!$"

ThymeForest_TravelNurse_Text_1:
# 230 "data/maps/ThymeForest/scripts.pory"
	.string "Then surely, you are ready! We battle!$"

ThymeForest_TravelNurse_Text_2:
# 231 "data/maps/ThymeForest/scripts.pory"
	.string "Magnifique!$"

ThymeForest_TravelNurse_Text_3:
# 235 "data/maps/ThymeForest/scripts.pory"
	.string "Salut! Euh… Hello!\p"
	.string "What is this? An amateur trainer, so\n"
	.string "deep in this forest?\p"
	.string "You come prepared with Potions, yet\n"
	.string "surely, you are already tired, no?$"

ThymeForest_TravelNurse_Text_4:
# 243 "data/maps/ThymeForest/scripts.pory"
	.string "Truly, no…?\nThen, you are ready! We battle!$"

ThymeForest_TravelNurse_Text_5:
# 248 "data/maps/ThymeForest/scripts.pory"
	.string "Then come, let this nurse rest your poor\n"
	.string "Pokémon!$"

ThymeForest_TravelNurse_Text_6:
# 251 "data/maps/ThymeForest/scripts.pory"
	.string "Good, you are ready! Now, we battle!$"

ThymeForest_TravelNurse_Text_7:
# 263 "data/maps/ThymeForest/scripts.pory"
	.string "Salut! Euh… Hello!\p"
	.string "What is this? An amateur trainer, so\n"
	.string "deep in this forest?\p"
	.string "And so little prepared! No Potions at\n"
	.string "all!!\p"
	.string "Come, let this nurse rest your poor\n"
	.string "Pokémon!$"

ThymeForest_TravelNurse_Text_8:
# 270 "data/maps/ThymeForest/scripts.pory"
	.string "Salut! Euh… Hello!\p"
	.string "What is this? An amateur trainer, so\n"
	.string "deep in this forest?\p"
	.string "And so little prepared! Surely this is\n"
	.string "not enough Potions for your friends?\p"
	.string "Come, let this nurse rest your Pokémon!$"

ThymeForest_TravelNurse_Text_9:
# 277 "data/maps/ThymeForest/scripts.pory"
	.string "I must depart! Take care of your\n"
	.string "Pokémon, for the sake of battling!$"

ThymeForest_PostNurseBattle_Text_0:
# 289 "data/maps/ThymeForest/scripts.pory"
	.string "Thank you for a wonderful battle.\p"
	.string "I must depart, but you must continue to\n"
	.string "grow strong!\p"
	.string "The {COLOR RED}SBC{COLOR DARK_GRAY} will be waiting for you!$"

ThymeForest_Boy_Text_0:
# 306 "data/maps/ThymeForest/scripts.pory"
	.string "I'll let you in on a Pokémon fact. Think\n"
	.string "of it like a tip, for trainers!\p"
	.string "In every habitat, there's usually one\n"
	.string "species that's rarely seen.\p"
	.string "Whether they're very good at hiding, or\n"
	.string "there just aren't many of them, you'll\l"
	.string "be lucky to find one.$"

ThymeForest_LedgeBoy_Text_0:
# 313 "data/maps/ThymeForest/scripts.pory"
	.string "Ow, ow… I fell down this ledge while\n"
	.string "trying to read that sign.\p"
	.string "Now I have to go south through the\n"
	.string "village just to get back up…$"

ThymeForest_BugCatcher_Andre_Text_0:
# 326 "data/maps/ThymeForest/scripts.pory"
	.string "Hey, I see you there!\n"
	.string "You ain't sneaking past me!$"

ThymeForest_BugCatcher_Andre_Text_1:
# 328 "data/maps/ThymeForest/scripts.pory"
	.string "…Not that I can stop you.$"

ThymeForest_BugCatcher_Andre_Text_2:
# 329 "data/maps/ThymeForest/scripts.pory"
	.string "Trainers like me are always itchin' to\n"
	.string "battle!\p"
	.string "Or… maybe I just got some bug bites.$"

ThymeForest_Youngster_Jacob_Text_0:
# 338 "data/maps/ThymeForest/scripts.pory"
	.string "You don't look familiar. Sneak off from\n"
	.string "the tour?$"

ThymeForest_Youngster_Jacob_Text_1:
# 339 "data/maps/ThymeForest/scripts.pory"
	.string "That any way to treat a local??$"

ThymeForest_Youngster_Jacob_Text_2:
# 340 "data/maps/ThymeForest/scripts.pory"
	.string "Not many people come through here.\p"
	.string "Too much wild Pokémon scares off you\n"
	.string "city folk.$"

ThymeForest_Youngster_Cory_Text_0:
# 349 "data/maps/ThymeForest/scripts.pory"
	.string "Whoa, wait! Watch where you're\n"
	.string "stepping!$"

ThymeForest_Youngster_Cory_Text_1:
# 350 "data/maps/ThymeForest/scripts.pory"
	.string "Gosh dangit.$"

ThymeForest_Youngster_Cory_Text_2:
# 351 "data/maps/ThymeForest/scripts.pory"
	.string "I'm looking through the grass for\n"
	.string "Items.\p"
	.string "Suspicious spaces, out-of-place rocks\n"
	.string "and bushes, you can find a lot if you\l"
	.string "look.$"

ThymeForest_BugCatcher_Rove_Text_0:
# 360 "data/maps/ThymeForest/scripts.pory"
	.string "Can you handle my newly evolved\n"
	.string "Pokémon!?$"

ThymeForest_BugCatcher_Rove_Text_1:
# 361 "data/maps/ThymeForest/scripts.pory"
	.string "I think I liked 'em better as Wurmple…$"

ThymeForest_BugCatcher_Rove_Text_2:
# 362 "data/maps/ThymeForest/scripts.pory"
	.string "The cool thing about Bug Pokémon is how\n"
	.string "fast they evolve.\p"
	.string "'Course, that also means they're done\n"
	.string "evolving pretty darn early.$"

ThymeForest_NinjaBoy_Cho_Text_0:
# 371 "data/maps/ThymeForest/scripts.pory"
	.string "To come all the way back here… you fool!$"

ThymeForest_NinjaBoy_Cho_Text_1:
# 372 "data/maps/ThymeForest/scripts.pory"
	.string "Ack… why did you even come this way…$"

ThymeForest_NinjaBoy_Cho_Text_2:
# 373 "data/maps/ThymeForest/scripts.pory"
	.string "Did you think I was hiding an item here,\n"
	.string "maybe?\p"
	.string "No… this is just where I like to hang\n"
	.string "out…$"

ThymeForest_AromaLady_Amanita_Text_0:
# 382 "data/maps/ThymeForest/scripts.pory"
	.string "Oh my, you're not from the village…\p"
	.string "Would you like me to show you the way\n"
	.string "back?$"

ThymeForest_AromaLady_Amanita_Text_1:
# 384 "data/maps/ThymeForest/scripts.pory"
	.string "Oh! Well, I suppose you'll do fine.$"

ThymeForest_AromaLady_Amanita_Text_2:
# 385 "data/maps/ThymeForest/scripts.pory"
	.string "Tourists don't usually come this way.\n"
	.string "You must be here for a good reason.$"
