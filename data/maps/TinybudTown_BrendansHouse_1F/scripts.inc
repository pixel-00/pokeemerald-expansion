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
	end
# 15 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"

# 16 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
TinybudTown_BrendansHouse_1F_EventScript_MoveMomToSink::
# 17 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	setobjectxyperm LOCALID_MOM, 2, 4
# 18 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	setobjectmovementtype LOCALID_MOM, MOVEMENT_TYPE_FACE_UP
# 19 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	return
# 20 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"

# 21 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
TinybudTown_BrendansHouse_1F_EventScript_MoveMomToStairs::
# 22 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	setobjectxyperm LOCALID_MOM, 8, 5
# 23 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	setobjectmovementtype LOCALID_MOM, MOVEMENT_TYPE_FACE_UP
# 24 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	return
# 25 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"

# 26 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
@ Many of the below scripts have no gender check because they assume youre in the correct house
# 27 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
@ The below SS Ticket script uses Mays house state by accident(?), but theyre both set identically after the intro
# 28 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
TinybudTown_BrendansHouse_1F_OnFrame:
# 29 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	map_script_2 VAR_INTRO_STATE, 1, TinybudTown_BrendansHouse_1F_EventScript_GoodMorning
# 30 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	map_script_2 VAR_INTRO_STATE, 2, TinybudTown_BrendansHouse_1F_EventScript_GoUpstairsToSetClock
# 31 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	.2byte 0
# 32 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"

# 33 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
TinybudTown_BrendansHouse_1F_EventScript_GoUpstairsToSetClock::
# 34 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	lockall
# 35 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	msgbox PlayersHouse_1F_Text_GoSetTheClock, MSGBOX_DEFAULT
# 36 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	closemessage
# 37 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TinybudTown_BrendansHouse_1F_Movement_PushTowardStairs
# 38 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_MOM, TinybudTown_BrendansHouse_1F_Movement_PushTowardStairs
# 39 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 40 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	warp MAP_TINYBUD_TOWN_BRENDANS_HOUSE_2F, 9, 2
# 41 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	waitstate
# 42 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	releaseall
# 43 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	end
# 44 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"

# 45 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
TinybudTown_BrendansHouse_1F_Movement_PushTowardStairs:
# 46 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 47 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	step_end
# 48 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"

# 49 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
TinybudTown_BrendansHouse_1F_EventScript_GoodMorning::
# 50 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	lock
# 51 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_MOM, TinybudTown_BrendansHouse_1F_Movement_WalkFromSink
# 52 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 53 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
    applymovement OBJ_EVENT_ID_PLAYER, TinybudTown_BrendansHouse_1F_Movement_FaceLeft
# 54 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
    waitmovement 0
# 55 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	msgbox PlayersHouse_1F_Text_GoodMorningClock, MSGBOX_DEFAULT
# 56 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	closemessage
# 57 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TinybudTown_BrendansHouse_1F_Movement_PushTowardStairs
# 58 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 59 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	warp MAP_TINYBUD_TOWN_BRENDANS_HOUSE_2F, 9, 2
# 60 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	waitstate
# 61 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	release
# 62 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	end
# 63 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"

# 64 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_GoSetTheClock:
# 65 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: {PLAYER}.\p"
# 66 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	.string "Go set the clock, hon.$"
# 67 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"

# 68 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_YouShouldRestABit:
# 69 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: How are you doing, {PLAYER}?\n"
# 70 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	.string "You look a little tired.\p"
# 71 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	.string "I think you should rest a bit.$"
# 72 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"

# 73 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_TheresAMovieOnTV:
# 74 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	.string "There is a movie on TV.\p"
# 75 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	.string "Two men are dancing on a big piano\n"
# 76 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	.string "keyboard.\p"
# 77 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	.string "Better get going!$"

# 80 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
TinybudTown_BrendansHouse_1F_Movement_WalkFromSink:
# 81 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 81 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 81 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 81 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 81 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	walk_right
	step_end

# 84 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
TinybudTown_BrendansHouse_1F_Movement_FaceLeft:
# 85 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	face_left
	step_end

# 88 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
TinybudTown_BrendansHouse_1F_Movement_FaceUp:
# 89 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	face_up
	step_end

PlayersHouse_1F_EventScript_TV::
# 101 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	lockall
# 102 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	msgbox PlayersHouse_1F_EventScript_TV_Text_0
# 103 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	releaseall
	end


PlayersHouse_1F_EventScript_MomsKirlia::
# 108 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	lock
# 109 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	faceplayer
# 110 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	waitse
# 111 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	playmoncry SPECIES_KIRLIA, CRY_MODE_NORMAL
# 112 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	msgbox PlayersHouse_1F_EventScript_MomsKirlia_Text_0
# 113 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	waitmoncry
# 114 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	release
	end


PlayersHouse_1F_EventScript_GoMeetDadTop::
# 119 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	lock
# 120 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_MOM, PlayersHouse_1F_Movement_GoMeetDadTop
# 121 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 122 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TinybudTown_BrendansHouse_1F_Movement_FaceUp
# 123 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 124 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	call PlayersHouse_1F_EventScript_GoMeetDad
# 125 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_MOM, PlayersHouse_1F_Movement_GoMeetDadTopReturn
# 126 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 127 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	release
	end


PlayersHouse_1F_EventScript_GoMeetDadLeft::
# 132 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	lock
# 133 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_MOM, PlayersHouse_1F_Movement_GoMeetDadLeft
# 134 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 135 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TinybudTown_BrendansHouse_1F_Movement_FaceLeft
# 136 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 137 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	call PlayersHouse_1F_EventScript_GoMeetDad
# 138 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_MOM, PlayersHouse_1F_Movement_GoMeetDadLeftReturn
# 139 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 140 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	release
	end


PlayersHouse_1F_EventScript_GoMeetDadRight::
# 145 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	lock
# 146 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_MOM, PlayersHouse_1F_Movement_GoMeetDadRight
# 147 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 148 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TinybudTown_BrendansHouse_1F_Movement_FaceUp
# 149 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 150 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	call PlayersHouse_1F_EventScript_GoMeetDad
# 151 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_MOM, PlayersHouse_1F_Movement_GoMeetDadRightReturn
# 152 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 153 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	release
	end


# 157 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Movement_GoMeetDadTop:
# 158 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 159 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 159 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 159 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 159 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 159 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 159 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 160 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	walk_down
	step_end

# 163 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Movement_GoMeetDadLeft:
# 164 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	walk_down
# 164 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	walk_down
# 165 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 165 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 165 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 165 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	walk_right
	step_end

# 168 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Movement_GoMeetDadRight:
# 169 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 170 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 170 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 170 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 170 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 170 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 170 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 170 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 171 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	walk_down
	step_end

# 174 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Movement_GoMeetDadTopReturn:
# 175 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 176 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	walk_left
# 176 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	walk_left
# 176 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	walk_left
# 176 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	walk_left
# 176 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	walk_left
# 176 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	walk_left
# 177 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	walk_down
# 178 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	face_right
	step_end

# 181 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Movement_GoMeetDadLeftReturn:
# 182 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	walk_left
# 182 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	walk_left
# 182 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	walk_left
# 182 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	walk_left
# 183 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 183 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 184 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	face_right
	step_end

# 187 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Movement_GoMeetDadRightReturn:
# 188 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 189 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	walk_left
# 189 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	walk_left
# 189 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	walk_left
# 189 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	walk_left
# 189 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	walk_left
# 189 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	walk_left
# 189 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	walk_left
# 190 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	walk_down
# 191 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	face_right
	step_end

PlayersHouse_1F_EventScript_GoMeetDad::
# 195 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	msgbox PlayersHouse_1F_EventScript_GoMeetDad_Text_0
# 196 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	closemessage
# 197 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_INTRO_STATE, 4
	return


PlayersHouse_1F_EventScript_TV_Text_0:
# 102 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	.string "It's a documentary about the life of\n"
	.string "CYNTHIA, the current CHAMPION of the\l"
	.string "SINNOH region.\l"
	.string "… … … … … … … … … … … … … … … …\p"
	.string "Better get going!$"

PlayersHouse_1F_EventScript_MomsKirlia_Text_0:
# 112 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	.string "KIRLIA looks at you curiously.$"

PlayersHouse_1F_EventScript_GoMeetDad_Text_0:
# 195 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: By the way {PLAYER}, DAD wanted\n"
	.string "me to tell you to meet him over\l"
	.string "at the LUSH CLEARING.\p"
	.string "Why don't you head over there now, hon?$"

PlayersHouse_1F_Text_GoodMorningClock::
# 92 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: Good morning, {PLAYER}! Are you\n"
	.string "all rested up?\p"
	.string "Would you mind setting the clock\n"
	.string "upstairs? You know how I am with these\l"
	.string "things.$"

PlayersHouse_1F_Text_RunningShoesManual::
# 96 "data/maps/TinybudTown_BrendansHouse_1F/scripts.pory"
	.string "This book is titled ‘PRINCIPLES OF\n"
	.string "MATHEMATICAL ANALYSIS’ by WALTER\l"
	.string "RUDIN.\p"
	.string "… … … … … … … … … … … … … … … …\p"
	.string "Looks tough!$"
