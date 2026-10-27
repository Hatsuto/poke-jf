VisitorCenter_BusStop_MapScripts::
# 6 "data/maps/VisitorCenter_BusStop/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, VisitorCenter_BusStop_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

VisitorCenter_BusStop_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 8 "data/maps/VisitorCenter_BusStop/scripts.pory"
	map_script_2 VAR_VISCEN_STATE, 0, VisCen_Street_Opening
	.2byte 0


VisCen_Street_Opening::
# 26 "data/maps/VisitorCenter_BusStop/scripts.pory"
	lock
# 28 "data/maps/VisitorCenter_BusStop/scripts.pory"
	setrespawn HEAL_LOCATION_VISITOR_CENTER
# 31 "data/maps/VisitorCenter_BusStop/scripts.pory"
	delay 15
# 32 "data/maps/VisitorCenter_BusStop/scripts.pory"
	playse SE_LEDGE
# 33 "data/maps/VisitorCenter_BusStop/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Player_ExitTruck
# 34 "data/maps/VisitorCenter_BusStop/scripts.pory"
	delay 15
# 35 "data/maps/VisitorCenter_BusStop/scripts.pory"
	playse SE_PIN
# 36 "data/maps/VisitorCenter_BusStop/scripts.pory"
	applymovement 2, Common_Movement_ExclamationMark
# 37 "data/maps/VisitorCenter_BusStop/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 40 "data/maps/VisitorCenter_BusStop/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 41 "data/maps/VisitorCenter_BusStop/scripts.pory"
	applymovement 2, Mom_Approach
# 42 "data/maps/VisitorCenter_BusStop/scripts.pory"
	waitmovement 0
# 43 "data/maps/VisitorCenter_BusStop/scripts.pory"
	msgbox VisCen_Street_Opening_Text_0, MSGBOX_AUTOCLOSE
# 52 "data/maps/VisitorCenter_BusStop/scripts.pory"
	applymovement 2, Mom_Deproach
# 53 "data/maps/VisitorCenter_BusStop/scripts.pory"
	waitmovement 0
# 54 "data/maps/VisitorCenter_BusStop/scripts.pory"
	playse SE_EXIT
# 56 "data/maps/VisitorCenter_BusStop/scripts.pory"
	removeobject 2
# 57 "data/maps/VisitorCenter_BusStop/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 58 "data/maps/VisitorCenter_BusStop/scripts.pory"
	setvar VAR_VISCEN_STATE, 1
# 60 "data/maps/VisitorCenter_BusStop/scripts.pory"
	delay 12
# 61 "data/maps/VisitorCenter_BusStop/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 62 "data/maps/VisitorCenter_BusStop/scripts.pory"
	release
	end


VisCen_Street_Truck::
# 69 "data/maps/VisitorCenter_BusStop/scripts.pory"
	lock
# 70 "data/maps/VisitorCenter_BusStop/scripts.pory"
	msgbox VisCen_Street_Truck_Text_0
# 72 "data/maps/VisitorCenter_BusStop/scripts.pory"
	release
	end


VisCen_Street_Sign::
# 78 "data/maps/VisitorCenter_BusStop/scripts.pory"
	lock
# 79 "data/maps/VisitorCenter_BusStop/scripts.pory"
	msgbox VisCen_Street_Sign_Text_0, MSGBOX_SIGN
# 82 "data/maps/VisitorCenter_BusStop/scripts.pory"
	release
	end


# 86 "data/maps/VisitorCenter_BusStop/scripts.pory"
Player_ExitTruck:
# 88 "data/maps/VisitorCenter_BusStop/scripts.pory"
	jump_right
# 89 "data/maps/VisitorCenter_BusStop/scripts.pory"
	walk_up
# 90 "data/maps/VisitorCenter_BusStop/scripts.pory"
	delay_16
# 90 "data/maps/VisitorCenter_BusStop/scripts.pory"
	delay_16
	step_end

# 93 "data/maps/VisitorCenter_BusStop/scripts.pory"
Mom_Approach:
# 95 "data/maps/VisitorCenter_BusStop/scripts.pory"
	walk_down
# 96 "data/maps/VisitorCenter_BusStop/scripts.pory"
	face_left
	step_end

# 99 "data/maps/VisitorCenter_BusStop/scripts.pory"
Mom_Deproach:
# 101 "data/maps/VisitorCenter_BusStop/scripts.pory"
	walk_up
# 101 "data/maps/VisitorCenter_BusStop/scripts.pory"
	walk_up
# 102 "data/maps/VisitorCenter_BusStop/scripts.pory"
	set_invisible
	step_end

VisCen_Street_Opening_Text_0:
# 43 "data/maps/VisitorCenter_BusStop/scripts.pory"
	.string "MOM: {PLAYER}, we're finally here!\n"
	.string "Did you enjoy the ride?\p"
	.string "I'm still not sure why you wanted to sit\n"
	.string "with all the luggage…\p"
	.string "We have a lot of walking ahead of us,\n"
	.string "so I hope it was comfy!\p"
	.string "The other passengers are waiting inside\n"
	.string "while they get the tour all set up.\p"
	.string "We have some time before it starts.\n"
	.string "Why don't you come meet them?$"

VisCen_Street_Truck_Text_0:
# 70 "data/maps/VisitorCenter_BusStop/scripts.pory"
	.string "It's a loading truck for the luggage.\p"
	.string "It seemed a lot bigger from the inside.$"

VisCen_Street_Sign_Text_0:
# 79 "data/maps/VisitorCenter_BusStop/scripts.pory"
	.string "It's a schedule for the bus route\n"
	.string "around the Sekien region.\p"
	.string "Looks like someone drew all over it,\n"
	.string "though…$"
