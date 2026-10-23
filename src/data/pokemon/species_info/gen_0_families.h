#ifdef __INTELLISENSE__
const struct SpeciesInfo gSpeciesInfoGen0[] =
{
#endif

#if P_FAMILY_GREMBER
    [SPECIES_GREMBER] =
    {
        .baseHP        = 35,
        .baseAttack    = 20,
        .baseDefense   = 20,
        .baseSpeed     = 40,
        .baseSpAttack  = 30,
        .baseSpDefense = 40,
        .types = MON_TYPES(TYPE_FAIRY),
        .catchRate = 235,
        .expYield = 57,
        .evYield_Speed = 1,
        .itemRare = ITEM_RAWST_BERRY,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FAIRY, EGG_GROUP_AMORPHOUS),
        .abilities = { ABILITY_RUN_AWAY, ABILITY_ILLUMINATE, ABILITY_PICKUP },
        .bodyColor = BODY_COLOR_RED,
		.speciesName = _("Grember"),
		.cryId = CRY_GREMBER,
		.natDexNum = NATIONAL_DEX_GREMBER,
		.categoryName = _("Garden Gnome"),
		.height = 2,
		.weight = 5,
		.description = COMPOUND_STRING(
			"Grember hides from its many predators\n"
			"amongst mushrooms and shrubs. It quietly\n"
			"awaits the day it grows strong enough to\n"
			"exact its revenge."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Grember,
        .frontPicSize = MON_COORDS_SIZE(32, 40),
        .frontPicYOffset = 10,
        .frontAnimFrames = ANIM_FRAMES(
			ANIMCMD_FRAME(1, 1),
			ANIMCMD_FRAME(0, 1),
			ANIMCMD_FRAME(1, 1),
			ANIMCMD_FRAME(0, 1),
			ANIMCMD_FRAME(1, 2),
			ANIMCMD_FRAME(0, 2),
			ANIMCMD_FRAME(1, 3),
			ANIMCMD_FRAME(0, 3),
			ANIMCMD_FRAME(1, 4),
			ANIMCMD_FRAME(0, 4),
			ANIMCMD_FRAME(1, 8),
			ANIMCMD_FRAME(0, 8),
			ANIMCMD_FRAME(1, 12),
			ANIMCMD_FRAME(0, 10),
			ANIMCMD_FRAME(1, 10),
			ANIMCMD_FRAME(0, 20),
		),
        .frontAnimId = ANIM_V_JUMPS_H_JUMPS,
        .backPic = gMonBackPic_Grember,
        .backPicSize = MON_COORDS_SIZE(32, 48),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_H_SHAKE,
        .palette = gMonPalette_Grember,
        .shinyPalette = gMonShinyPalette_Grember,
        .iconSprite = gMonIcon_Grember,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_FAST,
        SHADOW(-2, 5, SHADOW_SIZE_S)
        FOOTPRINT(Grember)
        OVERWORLD(
            sPicTable_Grember,
            SIZE_32x32,
            SHADOW_SIZE_S,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Grember,
            gShinyOverworldPalette_Grember
        )
        .levelUpLearnset = sGremberLevelUpLearnset,
        .teachableLearnset = sGremberTeachableLearnset,
        .eggMoveLearnset = sGremberEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 18, SPECIES_CHARBOLD}),
    },

    [SPECIES_CHARBOLD] =
    {
        .baseHP        = 40,
        .baseAttack    = 50,
        .baseDefense   = 40,
        .baseSpeed     = 65,
        .baseSpAttack  = 60,
        .baseSpDefense = 50,
        .types = MON_TYPES(TYPE_FAIRY, TYPE_FIRE),
        .catchRate = 120,
        .expYield = 130,
        .evYield_SpAttack = 1,
		.evYield_Speed = 1,
        .itemRare = ITEM_CHARCOAL,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
	    .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FAIRY, EGG_GROUP_AMORPHOUS),
        .abilities = { ABILITY_LEVITATE, ABILITY_FLASH_FIRE, ABILITY_MAGICIAN },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Charbold"),
		.cryId = CRY_CHARBOLD,
		.natDexNum = NATIONAL_DEX_CHARBOLD,
		.categoryName = _("Wild Child"),
        .height = 5,
        .weight = 80,
        .description = COMPOUND_STRING(
			"A flammable powder billows from the stalk\n"
			"on its head, igniting the air around it.\n"
			"It playfully floats about the forest,\n"
			"leaving brushfires in its wake."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Charbold,
        .frontPicSize = MON_COORDS_SIZE(64, 48),
        .frontPicYOffset = 7,
        .frontAnimFrames = ANIM_FRAMES(
			ANIMCMD_FRAME(1, 10),
			ANIMCMD_FRAME(0, 10),
			ANIMCMD_FRAME(1, 10),
			ANIMCMD_FRAME(0, 10),
			ANIMCMD_FRAME(1, 10),
			ANIMCMD_FRAME(0, 10),
			ANIMCMD_FRAME(1, 10),
			ANIMCMD_FRAME(0, 10),
			ANIMCMD_FRAME(1, 10),
			ANIMCMD_FRAME(0, 10),
		),
        .frontAnimId = ANIM_V_SLIDE_WOBBLE,
        .backPic = gMonBackPic_Charbold,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 3,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_LARGE,
        .palette = gMonPalette_Charbold,
        .shinyPalette = gMonShinyPalette_Charbold,
        .iconSprite = gMonIcon_Charbold,
        .iconPalIndex = 3,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-3, 11, SHADOW_SIZE_M)
        FOOTPRINT(Charbold)
        OVERWORLD(
            sPicTable_Charbold,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_Charbold,
            gShinyOverworldPalette_Charbold
        )
        .levelUpLearnset = sCharboldLevelUpLearnset,
        .teachableLearnset = sCharboldTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 36, SPECIES_SHAMPYRE}),
    },

    [SPECIES_SHAMPYRE] =
    {
        .baseHP        = 80,
        .baseAttack    = 90,
        .baseDefense   = 65,
        .baseSpeed     = 90,
        .baseSpAttack  = 100,
        .baseSpDefense = 75,
	    .types = MON_TYPES(TYPE_FAIRY, TYPE_FIRE),
        .catchRate = 45,
        .expYield = 255,
        .evYield_SpAttack = 2,
		.evYield_Speed = 1,
        .itemRare = ITEM_CHARCOAL,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
	    .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FAIRY, EGG_GROUP_AMORPHOUS),
        .abilities = { ABILITY_LEVITATE, ABILITY_FLASH_FIRE, ABILITY_MAGICIAN },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Shampyre"),
		.cryId = CRY_SHAMPYRE,
		.natDexNum = NATIONAL_DEX_SHAMPYRE,
		.categoryName = _("Wild Fire"),
        .height = 11,
        .weight = 195,
        .description = COMPOUND_STRING(
			"Its fierce flames make it hard to approach.\n"
			"Other Pokémon know to avoid the burns that\n"
			"mark its territory, which it leaves behind\n"
			"as a warning."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Shampyre,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 7,
        .frontAnimFrames = ANIM_FRAMES(
			ANIMCMD_FRAME(0, 30),
			ANIMCMD_FRAME(1, 40),
			ANIMCMD_FRAME(0, 20),
		),
        .frontAnimId = ANIM_SHRINK_GROW_VIBRATE,
        .backPic = gMonBackPic_Shampyre,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        .palette = gMonPalette_Shampyre,
        .shinyPalette = gMonShinyPalette_Shampyre,
        .iconSprite = gMonIcon_Shampyre,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-3, 11, SHADOW_SIZE_M)
        FOOTPRINT(Shampyre)
        OVERWORLD(
            sPicTable_Shampyre,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_Shampyre,
            gShinyOverworldPalette_Shampyre
        )
        .levelUpLearnset = sShampyreLevelUpLearnset,
        .teachableLearnset = sShampyreTeachableLearnset,
    },
#endif //P_FAMILY_GREMBER

#if P_FAMILY_CUDDLEFISH
    [SPECIES_CUDDLEFISH] =
    {
        .baseHP        = 60,
        .baseAttack    = 65,
        .baseDefense   = 60,
        .baseSpeed     = 55,
        .baseSpAttack  = 60,
        .baseSpDefense = 40,
        .types = MON_TYPES(TYPE_NORMAL, TYPE_WATER),
        .catchRate = 190,
        .expYield = 57,
        .evYield_Defense = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_3, EGG_GROUP_WATER_3),
        .abilities = { ABILITY_NO_GUARD, ABILITY_SUCTION_CUPS, ABILITY_STRONG_JAW },
        .bodyColor = BODY_COLOR_PINK,
        .speciesName = _("Cuddlefish"),
		.cryId = CRY_CUDDLEFISH,
		.natDexNum = NATIONAL_DEX_CUDDLEFISH,
        .categoryName = _("Embrace"),
        .height = 3,
        .weight = 48,
        .description = COMPOUND_STRING(
			"Small and timid, it rides on other Pokémon\n"
			"for safety, and will protect its host in\n"
			"return. Despite its small size, it is\n"
			"actually quite heavy."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Cuddlefish,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = 13,
        .frontAnimFrames = ANIM_FRAMES(
			ANIMCMD_FRAME(0, 21),
			ANIMCMD_FRAME(1, 45),
			ANIMCMD_FRAME(1, 10),
			ANIMCMD_FRAME(0, 10),
		),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE_SLOW,
        .backPic = gMonBackPic_Cuddlefish,
        .backPicSize = MON_COORDS_SIZE(48, 24),
        .backPicYOffset = 16,
        .backAnimId = BACK_ANIM_V_STRETCH,
        .palette = gMonPalette_Cuddlefish,
        .shinyPalette = gMonShinyPalette_Cuddlefish,
        .iconSprite = gMonIcon_Cuddlefish,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-3, 14, SHADOW_SIZE_S)
        FOOTPRINT(Cuddlefish)
        OVERWORLD(
            sPicTable_Cuddlefish,
            SIZE_32x32,
            SHADOW_SIZE_S,
            TRACKS_SPOT,
            sAnimTable_Following,
            gOverworldPalette_Cuddlefish,
            gShinyOverworldPalette_Cuddlefish
        )
        .levelUpLearnset = sCuddlefishLevelUpLearnset,
        .teachableLearnset = sCuddlefishTeachableLearnset,
        .eggMoveLearnset = sCuddlefishEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 27, SPECIES_CUDDLEFIST}),
    },

    [SPECIES_CUDDLEFIST] =
    {
        .baseHP        = 90,
        .baseAttack    = 100,
        .baseDefense   = 90,
        .baseSpeed     = 85,
        .baseSpAttack  = 75,
        .baseSpDefense = 60,
        .types = MON_TYPES(TYPE_NORMAL, TYPE_WATER),
        .catchRate = 70,
        .expYield = 175,
        .evYield_Defense = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_3, EGG_GROUP_WATER_3),
        .abilities = { ABILITY_NO_GUARD, ABILITY_SUCTION_CUPS, ABILITY_STRONG_JAW },
        .bodyColor = BODY_COLOR_PINK,
        .speciesName = _("Cuddlefist"),
		.cryId = CRY_CUDDLEFIST,
		.natDexNum = NATIONAL_DEX_CUDDLEFIST,
        .categoryName = _("Embrace"),
        .height = 12,
        .weight = 75,
        .description = COMPOUND_STRING(
			"On land, it nestles in the warmth found on\n"
			"hairy or fuzzy heads. While it may appear\n"
			"docile, you shouldn't disturb its rest, or\n"
			"it will clamp down with razor sharp teeth."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Cuddlefist,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = ANIM_FRAMES(
			ANIMCMD_FRAME(1, 60),
			ANIMCMD_FRAME(0, 1),
		),
        .frontAnimId = ANIM_FIGURE_8,
        .backPic = gMonBackPic_Cuddlefist,
        .backPicSize = MON_COORDS_SIZE(64, 32),
        .backPicYOffset = 16,
        .backAnimId = BACK_ANIM_V_STRETCH,
        .palette = gMonPalette_Cuddlefist,
        .shinyPalette = gMonShinyPalette_Cuddlefist,
        .iconSprite = gMonIcon_Cuddlefist,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_FAST,
        SHADOW(-2, 5, SHADOW_SIZE_S)
        FOOTPRINT(Cuddlefist)
        OVERWORLD(
            sPicTable_Cuddlefist,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_Cuddlefist,
            gShinyOverworldPalette_Cuddlefist
        )
        .levelUpLearnset = sCuddlefistLevelUpLearnset,
        .teachableLearnset = sCuddlefistTeachableLearnset,
    },
#endif //P_FAMILY_CUDDLEFISH

#ifdef __INTELLISENSE__
};
#endif
