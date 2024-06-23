# 1 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"

# 2 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
.set LOCALID_MOM, 1
# 3 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
.set LOCALID_RIVAL_MOM, 4
# 4 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
.set LOCALID_RIVAL, 7
# 5 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"

# 6 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
TinybudTown_BrendansHouse_1F_MapScripts::
# 7 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, TinybudTown_BrendansHouse_1F_OnTransition
# 8 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, TinybudTown_BrendansHouse_1F_OnFrame
# 9 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	.byte 0
# 10 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"

# 11 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
TinybudTown_BrendansHouse_1F_OnTransition:
# 12 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	call_if_eq VAR_INTRO_STATE, 1, TinybudTown_BrendansHouse_1F_EventScript_MoveMomToSink
# 13 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	call_if_eq VAR_INTRO_STATE, 2, TinybudTown_BrendansHouse_1F_EventScript_MoveMomToStairs
# 14 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	call_if_eq VAR_INTRO_STATE, 6, TinybudTown_BrendansHouse_1F_EventScript_MoveMomToTV
# 15 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	end
# 16 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"

# 17 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
TinybudTown_BrendansHouse_1F_EventScript_MoveMomToSink::
# 18 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	setobjectxyperm LOCALID_MOM, 2, 4
# 19 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	setobjectmovementtype LOCALID_MOM, MOVEMENT_TYPE_FACE_UP
# 20 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	return
# 21 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"

# 22 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
TinybudTown_BrendansHouse_1F_EventScript_MoveMomToStairs::
# 23 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	setobjectxyperm LOCALID_MOM, 8, 5
# 24 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	setobjectmovementtype LOCALID_MOM, MOVEMENT_TYPE_FACE_UP
# 25 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	return
# 26 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"

# 27 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
TinybudTown_BrendansHouse_1F_EventScript_MoveMomToTV::
# 28 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	setobjectxyperm LOCALID_MOM, 4, 5
# 29 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	setobjectmovementtype LOCALID_MOM, MOVEMENT_TYPE_FACE_UP
# 30 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	return
# 31 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"

# 32 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
@ Many of the below scripts have no gender check because they assume youre in the correct house
# 33 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
@ The below SS Ticket script uses Mays house state by accident(?), but theyre both set identically after the intro
# 34 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
TinybudTown_BrendansHouse_1F_OnFrame:
# 35 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	map_script_2 VAR_INTRO_STATE, 1, TinybudTown_BrendansHouse_1F_EventScript_GoodMorning
# 36 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	map_script_2 VAR_INTRO_STATE, 2, TinybudTown_BrendansHouse_1F_EventScript_GoUpstairsToSetClock
# 37 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	map_script_2 VAR_INTRO_STATE, 6, TinybudTown_BrendansHouse_1F_EventScript_PetalburgGymReport
# 38 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	map_script_2 VAR_TINYBUD_HOUSES_STATE_MAY, 3, PlayersHouse_1F_EventScript_GetSSTicketAndSeeLatiTV
# 39 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	.2byte 0
# 40 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"

# 41 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
TinybudTown_BrendansHouse_1F_EventScript_GoUpstairsToSetClock::
# 42 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	lockall
# 43 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	msgbox PlayersHouse_1F_Text_GoSetTheClock, MSGBOX_DEFAULT
# 44 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	closemessage
# 45 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TinybudTown_BrendansHouse_1F_Movement_PushTowardStairs
# 46 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_MOM, TinybudTown_BrendansHouse_1F_Movement_PushTowardStairs
# 47 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 48 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	warp MAP_TINYBUD_TOWN_BRENDANS_HOUSE_2F, 9, 2
# 49 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	waitstate
# 50 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	releaseall
# 51 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	end
# 52 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"

# 53 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
TinybudTown_BrendansHouse_1F_Movement_PushTowardStairs:
# 54 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 55 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	step_end
# 56 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"

# 57 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
TinybudTown_BrendansHouse_1F_EventScript_GoodMorning::
# 58 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	lock
# 59 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_MOM, TinybudTown_BrendansHouse_1F_Movement_WalkFromSink
# 60 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 61 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
    applymovement OBJ_EVENT_ID_PLAYER, TinybudTown_BrendansHouse_1F_Movement_FaceLeft
# 62 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
    waitmovement 0
# 63 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	msgbox PlayersHouse_1F_Text_GoodMorningClock, MSGBOX_DEFAULT
# 64 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	closemessage
# 65 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TinybudTown_BrendansHouse_1F_Movement_PushTowardStairs
# 66 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 67 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	warp MAP_TINYBUD_TOWN_BRENDANS_HOUSE_2F, 9, 2
# 68 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	waitstate
# 69 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	release
# 70 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	end
# 71 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"

# 72 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
TinybudTown_BrendansHouse_1F_EventScript_PetalburgGymReport::
# 73 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	lockall
# 74 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8004, MALE
# 75 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8005, LOCALID_MOM
# 76 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	goto PlayersHouse_1F_EventScript_PetalburgGymReportMale
# 77 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	end
# 78 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"

# 79 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
TinybudTown_BrendansHouse_1F_EventScript_MeetRival0::
# 80 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	lockall
# 81 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8008, 0
# 82 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	goto TinybudTown_BrendansHouse_1F_EventScript_MeetRival
# 83 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	end
# 84 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"

# 85 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
TinybudTown_BrendansHouse_1F_EventScript_MeetRival1::
# 86 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	lockall
# 87 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8008, 1
# 88 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	goto TinybudTown_BrendansHouse_1F_EventScript_MeetRival
# 89 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	end
# 90 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"

# 91 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
TinybudTown_BrendansHouse_1F_EventScript_MeetRival2::
# 92 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	lockall
# 93 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8008, 2
# 94 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	goto TinybudTown_BrendansHouse_1F_EventScript_MeetRival
# 95 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	end
# 96 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"

# 97 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
TinybudTown_BrendansHouse_1F_EventScript_MeetRival::
# 98 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	playse SE_EXIT
# 99 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	delay 10
# 100 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	addobject LOCALID_RIVAL
# 101 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	delay 30
# 102 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	playse SE_PIN
# 103 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 104 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 105 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 106 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 107 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	call_if_ne VAR_0x8008, 1, TinybudTown_BrendansHouse_1F_EventScript_PlayerFaceBrendan
# 108 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 109 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 0, TinybudTown_BrendansHouse_1F_EventScript_BrendanApproachPlayer0
# 110 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 1, TinybudTown_BrendansHouse_1F_EventScript_BrendanApproachPlayer1
# 111 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 2, TinybudTown_BrendansHouse_1F_EventScript_BrendanApproachPlayer2
# 112 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	msgbox RivalsHouse_1F_Text_BrendanWhoAreYou, MSGBOX_DEFAULT
# 113 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	closemessage
# 114 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 0, TinybudTown_BrendansHouse_1F_EventScript_BrendanGoUpstairs0
# 115 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 1, TinybudTown_BrendansHouse_1F_EventScript_BrendanGoUpstairs1
# 116 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 2, TinybudTown_BrendansHouse_1F_EventScript_BrendanGoUpstairs2
# 117 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	playse SE_EXIT
# 118 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	removeobject LOCALID_RIVAL
# 119 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	delay 30
# 120 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_TINYBUD_RIVAL_STATE, 3
# 121 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_TINYBUD_TOWN_STATE, 1
# 122 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	savebgm MUS_DUMMY
# 123 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	fadedefaultbgm
# 124 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	releaseall
# 125 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	end
# 126 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"

# 127 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
TinybudTown_BrendansHouse_1F_EventScript_PlayerFaceBrendan::
# 128 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 129 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 130 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	return
# 131 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"

# 132 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
TinybudTown_BrendansHouse_1F_EventScript_BrendanApproachPlayer0::
# 133 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL, TinybudTown_BrendansHouse_1F_Movement_BrendanApproachPlayer0
# 134 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 135 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	return
# 136 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"

# 137 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
TinybudTown_BrendansHouse_1F_EventScript_BrendanApproachPlayer1::
# 138 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL, TinybudTown_BrendansHouse_1F_Movement_BrendanApproachPlayer1
# 139 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 140 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	return
# 141 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"

# 142 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
TinybudTown_BrendansHouse_1F_EventScript_BrendanApproachPlayer2::
# 143 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL, TinybudTown_BrendansHouse_1F_Movement_BrendanApproachPlayer2
# 144 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 145 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	return
# 146 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"

# 147 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
TinybudTown_BrendansHouse_1F_Movement_BrendanApproachPlayer0:
# 148 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_left
# 149 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	walk_left
# 150 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 151 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 152 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 153 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 154 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 155 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	step_end
# 156 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"

# 157 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
TinybudTown_BrendansHouse_1F_Movement_BrendanApproachPlayer1:
# 158 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 159 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 160 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 161 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	step_end
# 162 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"

# 163 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
TinybudTown_BrendansHouse_1F_Movement_BrendanApproachPlayer2:
# 164 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 165 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 166 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 167 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 168 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 169 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 170 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 171 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	step_end
# 172 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"

# 173 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
TinybudTown_BrendansHouse_1F_EventScript_BrendanGoUpstairs0::
# 174 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TinybudTown_BrendansHouse_1F_Movement_PlayerWatchBrendanExit0
# 175 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL, TinybudTown_BrendansHouse_1F_Movement_BrendanGoUpstairs0
# 176 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 177 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	return
# 178 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"

# 179 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
TinybudTown_BrendansHouse_1F_EventScript_BrendanGoUpstairs1::
# 180 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TinybudTown_BrendansHouse_1F_Movement_PlayerWatchBrendanExit1
# 181 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL, TinybudTown_BrendansHouse_1F_Movement_BrendanGoUpstairs1
# 182 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 183 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	return
# 184 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"

# 185 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
TinybudTown_BrendansHouse_1F_EventScript_BrendanGoUpstairs2::
# 186 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TinybudTown_BrendansHouse_1F_Movement_PlayerWatchBrendanExit2
# 187 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL, TinybudTown_BrendansHouse_1F_Movement_BrendanGoUpstairs2
# 188 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 189 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	return
# 190 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"

# 191 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
TinybudTown_BrendansHouse_1F_Movement_PlayerWatchBrendanExit0:
# 192 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	delay_16
# 193 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	delay_8
# 194 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 195 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	step_end
# 196 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"

# 197 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
TinybudTown_BrendansHouse_1F_Movement_PlayerWatchBrendanExit1:
# 198 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	delay_16
# 199 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	delay_8
# 200 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 201 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	delay_16
# 202 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	delay_16
# 203 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 204 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	step_end
# 205 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"

# 206 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
TinybudTown_BrendansHouse_1F_Movement_PlayerWatchBrendanExit2:
# 207 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	delay_16
# 208 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	delay_8
# 209 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_left
# 210 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	step_end
# 211 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"

# 212 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
TinybudTown_BrendansHouse_1F_Movement_BrendanGoUpstairs0:
# 213 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 214 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 215 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 216 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 217 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 218 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	step_end
# 219 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"

# 220 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
TinybudTown_BrendansHouse_1F_Movement_BrendanGoUpstairs1:
# 221 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 222 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 223 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 224 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 225 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 226 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_left
# 227 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	walk_left
# 228 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 229 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 230 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	step_end
# 231 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"

# 232 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
TinybudTown_BrendansHouse_1F_Movement_BrendanGoUpstairs2:
# 233 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_left
# 234 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	walk_left
# 235 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 236 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 237 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 238 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	step_end
# 239 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"

# 240 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_GoSetTheClock:
# 241 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: {PLAYER}.\p"
# 242 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	.string "Go set the clock, hon.$"
# 243 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"

# 244 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_OhComeQuickly:
# 245 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: Oh! {PLAYER}, {PLAYER}!\n"
# 246 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	.string "Quick! Come quickly!$"
# 247 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"

# 248 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_MaybeDadWillBeOn:
# 249 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: Look! It's PETALBURG GYM!\n"
# 250 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	.string "Maybe DAD will be on!$"
# 251 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"

# 252 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_ItsOverWeMissedHim:
# 253 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: Oh… It's over.\p"
# 254 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	.string "I think DAD was on, but we missed him.\n"
# 255 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	.string "Too bad.$"
# 256 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"

# 257 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_GoIntroduceYourselfNextDoor:
# 258 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	.string "Oh, yes.\n"
# 259 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	.string "One of DAD's friends lives in town.\p"
# 260 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	.string "PROF. BIRCH is his name.\p"
# 261 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	.string "He lives right next door, so you should\n"
# 262 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	.string "go over and introduce yourself.$"
# 263 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"

# 264 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_SeeYouHoney:
# 265 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: See you, honey!$"
# 266 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"

# 267 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_DidYouMeetProfBirch:
# 268 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: Did you introduce yourself to\n"
# 269 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	.string "PROF. BIRCH?$"
# 270 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"

# 271 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_YouShouldRestABit:
# 272 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: How are you doing, {PLAYER}?\n"
# 273 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	.string "You look a little tired.\p"
# 274 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	.string "I think you should rest a bit.$"
# 275 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"

# 276 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_TakeCareHoney:
# 277 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: Take care, honey!$"
# 278 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"

# 279 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_GotDadsBadgeHeresSomethingFromMom:
# 280 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: Oh? Did DAD give you that BADGE?\p"
# 281 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	.string "Then here's something from your MOM!$"
# 282 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"

# 283 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_DontPushYourselfTooHard:
# 284 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	.string "Don't push yourself too hard, dear.\n"
# 285 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	.string "You can always come home.\p"
# 286 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	.string "Go for it, honey!$"
# 287 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"

# 288 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_IsThatAPokenav:
# 289 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: What is that, honey? A POKéNAV?\n"
# 290 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	.string "Someone from DEVON gave it to you?\p"
# 291 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	.string "Well, honey, how about registering\n"
# 292 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	.string "your mom?\p"
# 293 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	.string "… … …$"
# 294 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"

# 295 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_RegisteredMom:
# 296 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	.string "Registered MOM\n"
# 297 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	.string "in the POKéNAV.$"
# 298 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"

# 299 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_ReportFromPetalburgGym:
# 300 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	.string "INTERVIEWER: …We brought you this\n"
# 301 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	.string "report from in front of PETALBURG GYM.$"
# 302 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"

# 303 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_TheresAMovieOnTV:
# 304 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	.string "There is a movie on TV.\p"
# 305 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	.string "Two men are dancing on a big piano\n"
# 306 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	.string "keyboard.\p"
# 307 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	.string "Better get going!$"
# 308 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"

# 309 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_TicketFromBrineyCameForYou:
# 310 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	.string "DAD: Hm?\p"
# 311 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	.string "Hey, it's {PLAYER}!\p"
# 312 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	.string "It's been a while since I saw you,\n"
# 313 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	.string "but you look…stronger, somehow.\p"
# 314 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	.string "That's the impression I get.\n"
# 315 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	.string "But your old man hasn't given up yet!\p"
# 316 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	.string "Oh, yes, I have something for you.\n"
# 317 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	.string "This came to you from someone named\l"
# 318 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	.string "MR. BRINEY.$"
# 319 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"

# 320 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_PortsInSlateportLilycove:
# 321 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	.string "DAD: Hm, a TICKET for a ferry?\p"
# 322 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	.string "If I recall, there are ferry ports in\n"
# 323 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	.string "SLATEPORT and LILYCOVE.$"
# 324 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"

# 325 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_BetterGetBackToGym:
# 326 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	.string "I'd better get back to PETALBURG GYM.\p"
# 327 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	.string "MOM, thanks for looking after the house\n"
# 328 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	.string "while I'm away.$"
# 329 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"

# 330 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_DadShouldStayLonger:
# 331 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: That DAD of yours…\p"
# 332 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	.string "He comes home for the first time in a\n"
# 333 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	.string "while, but all he talks about is POKéMON.\p"
# 334 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	.string "He should relax and stay a little longer.$"
# 335 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"

# 336 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_IsThatABreakingStory:
# 337 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: Is that a breaking news story?$"
# 338 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"

# 339 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_LatiEmergencyNewsFlash:
# 340 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	.string "We bring you this emergency\n"
# 341 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	.string "news flash!\p"
# 342 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	.string "In various HOENN locales, there have\n"
# 343 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	.string "been reports of a BZZT…colored\l"
# 344 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	.string "POKéMON in flight.\p"
# 345 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	.string "The identity of this POKéMON is\n"
# 346 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	.string "currently unknown.\p"
# 347 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	.string "We now return you to the regular\n"
# 348 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	.string "movie program.$"
# 349 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"

# 350 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_WhatColorDidTheySay:
# 351 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: {PLAYER}, did you catch that?\p"
# 352 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	.string "What color did the announcer say\n"
# 353 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	.string "that POKéMON was?$"
# 354 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"

# 355 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_StillUnknownPokemon:
# 356 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: Well, isn't that something!\n"
# 357 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	.string "There are still unknown POKéMON.$"

# 360 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
TinybudTown_BrendansHouse_1F_Movement_WalkFromSink:
# 361 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 361 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 361 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 361 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 361 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	walk_right
	step_end

# 364 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
TinybudTown_BrendansHouse_1F_Movement_FaceLeft:
# 365 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	face_left
	step_end

# 368 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
TinybudTown_BrendansHouse_1F_Movement_FaceUp:
# 369 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	face_up
	step_end

PlayersHouse_1F_EventScript_TV::
# 381 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	lockall
# 382 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	msgbox PlayersHouse_1F_EventScript_TV_Text_0
# 383 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	releaseall
	end


PlayersHouse_1F_EventScript_MomsKirlia::
# 388 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	lock
# 389 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	faceplayer
# 390 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	waitse
# 391 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	playmoncry SPECIES_KIRLIA, CRY_MODE_NORMAL
# 392 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	msgbox PlayersHouse_1F_EventScript_MomsKirlia_Text_0
# 393 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	waitmoncry
# 394 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	release
	end


PlayersHouse_1F_EventScript_GoMeetDadTop::
# 399 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	lock
# 400 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_MOM, PlayersHouse_1F_Movement_GoMeetDadTop
# 401 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 402 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TinybudTown_BrendansHouse_1F_Movement_FaceUp
# 403 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 404 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	call PlayersHouse_1F_EventScript_GoMeetDad
# 405 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_MOM, PlayersHouse_1F_Movement_GoMeetDadTopReturn
# 406 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 407 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	release
	end


PlayersHouse_1F_EventScript_GoMeetDadLeft::
# 412 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	lock
# 413 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_MOM, PlayersHouse_1F_Movement_GoMeetDadLeft
# 414 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 415 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TinybudTown_BrendansHouse_1F_Movement_FaceLeft
# 416 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 417 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	call PlayersHouse_1F_EventScript_GoMeetDad
# 418 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_MOM, PlayersHouse_1F_Movement_GoMeetDadLeftReturn
# 419 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 420 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	release
	end


PlayersHouse_1F_EventScript_GoMeetDadRight::
# 425 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	lock
# 426 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_MOM, PlayersHouse_1F_Movement_GoMeetDadRight
# 427 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 428 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TinybudTown_BrendansHouse_1F_Movement_FaceUp
# 429 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 430 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	call PlayersHouse_1F_EventScript_GoMeetDad
# 431 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_MOM, PlayersHouse_1F_Movement_GoMeetDadRightReturn
# 432 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 433 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	release
	end


# 437 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Movement_GoMeetDadTop:
# 438 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 439 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 439 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 439 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 439 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 439 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 439 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 440 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	walk_down
	step_end

# 443 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Movement_GoMeetDadLeft:
# 444 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	walk_down
# 444 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	walk_down
# 445 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 445 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 445 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 445 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	walk_right
	step_end

# 448 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Movement_GoMeetDadRight:
# 449 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 450 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 450 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 450 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 450 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 450 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 450 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 450 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 451 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	walk_down
	step_end

# 454 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Movement_GoMeetDadTopReturn:
# 455 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 456 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	walk_left
# 456 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	walk_left
# 456 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	walk_left
# 456 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	walk_left
# 456 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	walk_left
# 456 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	walk_left
# 457 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	walk_down
# 458 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	face_right
	step_end

# 461 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Movement_GoMeetDadLeftReturn:
# 462 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	walk_left
# 462 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	walk_left
# 462 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	walk_left
# 462 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	walk_left
# 463 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 463 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 464 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	face_right
	step_end

# 467 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Movement_GoMeetDadRightReturn:
# 468 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 469 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	walk_left
# 469 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	walk_left
# 469 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	walk_left
# 469 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	walk_left
# 469 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	walk_left
# 469 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	walk_left
# 469 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	walk_left
# 470 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	walk_down
# 471 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	face_right
	step_end

PlayersHouse_1F_EventScript_GoMeetDad::
# 475 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	msgbox PlayersHouse_1F_EventScript_GoMeetDad_Text_0
# 476 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	closemessage
# 477 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_INTRO_STATE, 4
	return


PlayersHouse_1F_EventScript_TV_Text_0:
# 382 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	.string "It's a documentary about the life of\n"
	.string "Cynthia, the current Champion of the\l"
	.string "Sinnoh region.\l"
	.string "… … … … … … … … … … … … … … … …\p"
	.string "Better get going!$"

PlayersHouse_1F_EventScript_MomsKirlia_Text_0:
# 392 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	.string "Kirlia looks at you curiously.$"

PlayersHouse_1F_EventScript_GoMeetDad_Text_0:
# 475 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: By the way {PLAYER}, DAD wanted\n"
	.string "me to tell you to meet him over\l"
	.string "at the LUSH CLEARING.\p"
	.string "Why don't you head over there now, hon?$"

PlayersHouse_1F_Text_GoodMorningClock::
# 372 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: Good morning, {PLAYER}!\n"
	.string "Are you all rested up?\p"
	.string "Would you mind setting the clock\n"
	.string "upstairs? You know how I am with these\l"
	.string "things.$"

PlayersHouse_1F_Text_RunningShoesManual::
# 376 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	.string "This book is titled ‘Principles of\n"
	.string "Mathematical Analysis’ by Walter Rudin.\p"
	.string "… … … … … … … … … … … … … … … …\p"
	.string "Looks tough!$"
