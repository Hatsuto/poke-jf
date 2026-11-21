RivalLink_Add_Liam::
	playse SE_RG_HELP_OPEN
	addvar VAR_LIAM_SOCIAL_LINK, 1
	return

RivalLink_Add_Olive::
	playse SE_RG_HELP_OPEN
	addvar VAR_OLIVE_SOCIAL_LINK, 1
	return
	
RivalLink_Check_IsOliveBetter::
	compare_var_to_var VAR_OLIVE_SOCIAL_LINK, VAR_LIAM_SOCIAL_LINK
	goto_if_gt RivalLink_OliveIsBetter
	setvar VAR_RESULT, RIVAL_LINK_NO
	return

RivalLink_OliveIsBetter:
	setvar VAR_RESULT, RIVAL_LINK_YES
	return
	
RivalLink_Check_IsLiamBetter::
	compare_var_to_var VAR_LIAM_SOCIAL_LINK, VAR_OLIVE_SOCIAL_LINK
	goto_if_gt RivalLink_LiamIsBetter
	setvar VAR_RESULT, RIVAL_LINK_NO
	return

RivalLink_LiamIsBetter:
	setvar VAR_RESULT, RIVAL_LINK_YES
	return

RivalLink_Get_PlayerStarter::
	switch VAR_STARTER_MON
	case 0, RivalLink_Return_GrassStarter
	case 1, RivalLink_Return_FireStarter
	case 2, RivalLink_Return_Water_Starter
	return

RivalLink_Get_LiamStarter::
	switch VAR_STARTER_MON
	case 0, RivalLink_Return_FireStarter
	case 1, RivalLink_Return_Water_Starter
	case 2, RivalLink_Return_GrassStarter
	return

RivalLink_Get_OliveStarter::
	switch VAR_STARTER_MON
	case 0, RivalLink_Return_Water_Starter
	case 1, RivalLink_Return_GrassStarter
	case 2, RivalLink_Return_FireStarter
	return
	
RivalLink_Return_GrassStarter:
	setvar VAR_0x8000, SPECIES_GRASS_STARTER_1
	goto RivalLink_Starter_BadgeCheck
	
RivalLink_Return_FireStarter:
	setvar VAR_0x8000, SPECIES_FIRE_STARTER_1
	goto RivalLink_Starter_BadgeCheck
	
RivalLink_Return_Water_Starter:
	setvar VAR_0x8000, SPECIES_WATER_STARTER_1
	goto RivalLink_Starter_BadgeCheck

RivalLink_Starter_BadgeCheck:
	goto_if_set FLAG_BADGE05_GET, RivalLink_Starter_Evo2
	goto_if_set FLAG_BADGE01_GET, RivalLink_Starter_Evo1
	copyvar VAR_RESULT, VAR_0x8000
	return
	
RivalLink_Starter_Evo1:
	addvar VAR_0x8000, RIVAL_LINK_EVO1_OFFSET
	copyvar VAR_RESULT, VAR_0x8000
	return
	
RivalLink_Starter_Evo2:
	addvar VAR_0x8000, RIVAL_LINK_EVO2_OFFSET
	copyvar VAR_RESULT, VAR_0x8000
	return
