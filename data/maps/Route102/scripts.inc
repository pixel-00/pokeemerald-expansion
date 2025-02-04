# 1 "data/maps/Route102/scripts.pory"

# 2 "data/maps/Route102/scripts.pory"
.set LOCALID_RIVAL, 10
# 3 "data/maps/Route102/scripts.pory"
.set LOCALID_GRUNT, 11
# 4 "data/maps/Route102/scripts.pory"

# 5 "data/maps/Route102/scripts.pory"
Route102_MapScripts::
# 6 "data/maps/Route102/scripts.pory"
	.byte 0
# 7 "data/maps/Route102/scripts.pory"

# 8 "data/maps/Route102/scripts.pory"
Route102_EventScript_LittleBoy::
# 9 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_ImNotVeryTall, MSGBOX_NPC
# 10 "data/maps/Route102/scripts.pory"
	end
# 11 "data/maps/Route102/scripts.pory"

# 12 "data/maps/Route102/scripts.pory"
Route102_EventScript_RouteSignGreenglade::
# 13 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_RouteSignGreenglade, MSGBOX_SIGN
# 14 "data/maps/Route102/scripts.pory"
	end
# 15 "data/maps/Route102/scripts.pory"

# 16 "data/maps/Route102/scripts.pory"
Route102_EventScript_RouteSignPetalburg::
# 17 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_RouteSignPetalburg, MSGBOX_SIGN
# 18 "data/maps/Route102/scripts.pory"
	end
# 19 "data/maps/Route102/scripts.pory"

# 20 "data/maps/Route102/scripts.pory"
Route102_EventScript_Boy::
# 21 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_CatchWholeBunchOfPokemon, MSGBOX_NPC
# 22 "data/maps/Route102/scripts.pory"
	end
# 23 "data/maps/Route102/scripts.pory"

# 24 "data/maps/Route102/scripts.pory"
Route102_EventScript_Calvin::
# 25 "data/maps/Route102/scripts.pory"
	trainerbattle_single TRAINER_CALVIN_1, Route102_Text_CalvinIntro, Route102_Text_CalvinDefeated, Route102_EventScript_CalvinRegisterMatchCallAfterBattle
# 26 "data/maps/Route102/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 27 "data/maps/Route102/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route102_EventScript_CalvinRematch
# 28 "data/maps/Route102/scripts.pory"
	setvar VAR_0x8004, TRAINER_CALVIN_1
# 29 "data/maps/Route102/scripts.pory"
	specialvar VAR_RESULT, IsTrainerRegistered
# 30 "data/maps/Route102/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route102_EventScript_CalvinTryRegister
# 31 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_CalvinPostBattle, MSGBOX_DEFAULT
# 32 "data/maps/Route102/scripts.pory"
	release
# 33 "data/maps/Route102/scripts.pory"
	end
# 34 "data/maps/Route102/scripts.pory"

# 35 "data/maps/Route102/scripts.pory"
Route102_EventScript_CalvinRegisterMatchCallAfterBattle::
# 36 "data/maps/Route102/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 37 "data/maps/Route102/scripts.pory"
	waitmovement 0
# 38 "data/maps/Route102/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route102_EventScript_CalvinRegisterMatchCall
# 39 "data/maps/Route102/scripts.pory"
	release
# 40 "data/maps/Route102/scripts.pory"
	end
# 41 "data/maps/Route102/scripts.pory"

# 42 "data/maps/Route102/scripts.pory"
Route102_EventScript_CalvinRegisterMatchCall::
# 43 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_CalvinRegisterShort, MSGBOX_DEFAULT
# 44 "data/maps/Route102/scripts.pory"
	register_matchcall TRAINER_CALVIN_1
# 45 "data/maps/Route102/scripts.pory"
	release
# 46 "data/maps/Route102/scripts.pory"
	end
# 47 "data/maps/Route102/scripts.pory"

# 48 "data/maps/Route102/scripts.pory"
Route102_EventScript_CalvinTryRegister::
# 49 "data/maps/Route102/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route102_EventScript_CalvinRegister
# 50 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_CalvinPostBattle, MSGBOX_DEFAULT
# 51 "data/maps/Route102/scripts.pory"
	release
# 52 "data/maps/Route102/scripts.pory"
	end
# 53 "data/maps/Route102/scripts.pory"

# 54 "data/maps/Route102/scripts.pory"
Route102_EventScript_CalvinRegister::
# 55 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_CalvinRegister, MSGBOX_DEFAULT
# 56 "data/maps/Route102/scripts.pory"
	register_matchcall TRAINER_CALVIN_1
# 57 "data/maps/Route102/scripts.pory"
	release
# 58 "data/maps/Route102/scripts.pory"
	end
# 59 "data/maps/Route102/scripts.pory"

# 60 "data/maps/Route102/scripts.pory"
Route102_EventScript_CalvinRematch::
# 61 "data/maps/Route102/scripts.pory"
	trainerbattle_rematch TRAINER_CALVIN_1, Route102_Text_CalvinRematchIntro, Route102_Text_CalvinRematchDefeated
# 62 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_CalvinRematchPostBattle, MSGBOX_AUTOCLOSE
# 63 "data/maps/Route102/scripts.pory"
	end
# 64 "data/maps/Route102/scripts.pory"

# 65 "data/maps/Route102/scripts.pory"
Route102_EventScript_Rick::
# 66 "data/maps/Route102/scripts.pory"
	trainerbattle_single TRAINER_RICK, Route102_Text_RickIntro, Route102_Text_RickDefeated
# 67 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_RickPostBattle, MSGBOX_AUTOCLOSE
# 68 "data/maps/Route102/scripts.pory"
	end
# 69 "data/maps/Route102/scripts.pory"

# 70 "data/maps/Route102/scripts.pory"
Route102_EventScript_Tiana::
# 71 "data/maps/Route102/scripts.pory"
	trainerbattle_single TRAINER_TIANA, Route102_Text_TianaIntro, Route102_Text_TianaDefeated
# 72 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_TianaPostBattle, MSGBOX_AUTOCLOSE
# 73 "data/maps/Route102/scripts.pory"
	end
# 74 "data/maps/Route102/scripts.pory"

# 75 "data/maps/Route102/scripts.pory"
Route102_EventScript_Allen::
# 76 "data/maps/Route102/scripts.pory"
	trainerbattle_single TRAINER_ALLEN, Route102_Text_AllenIntro, Route102_Text_AllenDefeated
# 77 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_AllenPostBattle, MSGBOX_AUTOCLOSE
# 78 "data/maps/Route102/scripts.pory"
	end
# 79 "data/maps/Route102/scripts.pory"

# 80 "data/maps/Route102/scripts.pory"
Route102_Text_WatchMeCatchPokemon:
# 81 "data/maps/Route102/scripts.pory"
	.string "WALLY: {PLAYER}…\n"
# 82 "data/maps/Route102/scripts.pory"
	.string "POKéMON hide in tall grass like this,\l"
# 83 "data/maps/Route102/scripts.pory"
	.string "don't they?\p"
# 84 "data/maps/Route102/scripts.pory"
	.string "Please watch me and see if I can\n"
# 85 "data/maps/Route102/scripts.pory"
	.string "catch one properly.\p"
# 86 "data/maps/Route102/scripts.pory"
	.string "…Whoa!$"
# 87 "data/maps/Route102/scripts.pory"

# 88 "data/maps/Route102/scripts.pory"
Route102_Text_WallyIDidIt:
# 89 "data/maps/Route102/scripts.pory"
	.string "WALLY: I did it… It's my…\n"
# 90 "data/maps/Route102/scripts.pory"
	.string "My POKéMON!$"
# 91 "data/maps/Route102/scripts.pory"

# 92 "data/maps/Route102/scripts.pory"
Route102_Text_LetsGoBack:
# 93 "data/maps/Route102/scripts.pory"
	.string "{PLAYER}, thank you!\n"
# 94 "data/maps/Route102/scripts.pory"
	.string "Let's go back to the GYM!$"
# 95 "data/maps/Route102/scripts.pory"

# 96 "data/maps/Route102/scripts.pory"
Route102_Text_ImNotVeryTall:
# 97 "data/maps/Route102/scripts.pory"
	.string "I'm…not very tall, so I sink right\n"
# 98 "data/maps/Route102/scripts.pory"
	.string "into tall grass.\p"
# 99 "data/maps/Route102/scripts.pory"
	.string "The grass goes up my nose and…\n"
# 100 "data/maps/Route102/scripts.pory"
	.string "Fwafwafwafwafwa…\p"
# 101 "data/maps/Route102/scripts.pory"
	.string "Fwatchoo!$"
# 102 "data/maps/Route102/scripts.pory"

# 103 "data/maps/Route102/scripts.pory"
Route102_Text_CatchWholeBunchOfPokemon:
# 104 "data/maps/Route102/scripts.pory"
	.string "I'm going to catch a whole bunch of\n"
# 105 "data/maps/Route102/scripts.pory"
	.string "POKéMON!$"
# 106 "data/maps/Route102/scripts.pory"

# 107 "data/maps/Route102/scripts.pory"
Route102_Text_RouteSignGreenglade:
# 108 "data/maps/Route102/scripts.pory"
	.string "NEWGLADE TRAIL\n"
# 109 "data/maps/Route102/scripts.pory"
	.string "{LEFT_ARROW} GREENGLADE TOWN$"
# 110 "data/maps/Route102/scripts.pory"
    .string "{UP_ARROW} NEWHOPE CITY$"
# 111 "data/maps/Route102/scripts.pory"

# 112 "data/maps/Route102/scripts.pory"
Route102_Text_RouteSignPetalburg:
# 113 "data/maps/Route102/scripts.pory"
	.string "NEWGLADE TRAIL\n"
# 114 "data/maps/Route102/scripts.pory"
	.string "{RIGHT_ARROW} NEWHOPE CITY\l"
# 115 "data/maps/Route102/scripts.pory"
	.string "{LEFT_ARROW} GEMSTONE CAVE\l"
# 116 "data/maps/Route102/scripts.pory"
	.string "{DOWN_ARROW} GREENGLADE TOWN$"

NewgladeTrail_EventScript_TriggerTeamIntro::
# 121 "data/maps/Route102/scripts.pory"
	lockall
# 122 "data/maps/Route102/scripts.pory"
	playbgm MUS_HELP, 0
# 123 "data/maps/Route102/scripts.pory"
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
# 124 "data/maps/Route102/scripts.pory"
	switch VAR_TEMP_1
# 125 "data/maps/Route102/scripts.pory"
	case 5, NewgladeTrail_EventScript_TriggerTeamIntro_3
# 127 "data/maps/Route102/scripts.pory"
	case 6, NewgladeTrail_EventScript_TriggerTeamIntro_4
# 129 "data/maps/Route102/scripts.pory"
	case 7, NewgladeTrail_EventScript_TriggerTeamIntro_5
# 131 "data/maps/Route102/scripts.pory"
	case 8, NewgladeTrail_EventScript_TriggerTeamIntro_6
# 133 "data/maps/Route102/scripts.pory"
	case 9, NewgladeTrail_EventScript_TriggerTeamIntro_7
# 135 "data/maps/Route102/scripts.pory"
	case 10, NewgladeTrail_EventScript_TriggerTeamIntro_8
# 137 "data/maps/Route102/scripts.pory"
	case 11, NewgladeTrail_EventScript_TriggerTeamIntro_9
# 139 "data/maps/Route102/scripts.pory"
	case 12, NewgladeTrail_EventScript_TriggerTeamIntro_10
# 141 "data/maps/Route102/scripts.pory"
	case 13, NewgladeTrail_EventScript_TriggerTeamIntro_11
# 143 "data/maps/Route102/scripts.pory"
	case 14, NewgladeTrail_EventScript_TriggerTeamIntro_12
# 145 "data/maps/Route102/scripts.pory"
	case 15, NewgladeTrail_EventScript_TriggerTeamIntro_13
# 147 "data/maps/Route102/scripts.pory"
	case 16, NewgladeTrail_EventScript_TriggerTeamIntro_14
NewgladeTrail_EventScript_TriggerTeamIntro_1:
# 150 "data/maps/Route102/scripts.pory"
	waitmovement 0
# 151 "data/maps/Route102/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp3
# 152 "data/maps/Route102/scripts.pory"
	waitmovement 0
# 153 "data/maps/Route102/scripts.pory"
	msgbox NewgladeTrail_EventScript_TriggerTeamIntro_Text_0
# 154 "data/maps/Route102/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_FaceDown
# 155 "data/maps/Route102/scripts.pory"
	waitmovement 0
# 156 "data/maps/Route102/scripts.pory"
	playse SE_PIN
# 157 "data/maps/Route102/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 158 "data/maps/Route102/scripts.pory"
	waitmovement 0
# 159 "data/maps/Route102/scripts.pory"
	msgbox NewgladeTrail_EventScript_TriggerTeamIntro_Text_1
# 160 "data/maps/Route102/scripts.pory"
	applymovement LOCALID_GRUNT, NewgladeTrail_Movement_GruntToPlayer
# 161 "data/maps/Route102/scripts.pory"
	waitmovement 0
# 162 "data/maps/Route102/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 163 "data/maps/Route102/scripts.pory"
	waitmovement 0
# 164 "data/maps/Route102/scripts.pory"
	msgbox NewgladeTrail_EventScript_TriggerTeamIntro_Text_2
# 165 "data/maps/Route102/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_PETALBURG_WOODS, NewgladeTrail_Text_GruntLost
# 166 "data/maps/Route102/scripts.pory"
	msgbox NewgladeTrail_EventScript_TriggerTeamIntro_Text_3
# 167 "data/maps/Route102/scripts.pory"
	applymovement LOCALID_GRUNT, NewgladeTrail_Movement_GruntRunAway1
# 168 "data/maps/Route102/scripts.pory"
	waitmovement 0
# 169 "data/maps/Route102/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 170 "data/maps/Route102/scripts.pory"
	waitmovement 0
# 171 "data/maps/Route102/scripts.pory"
	applymovement LOCALID_GRUNT, NewgladeTrail_Movement_GruntRunAway2
# 172 "data/maps/Route102/scripts.pory"
	waitmovement 0
# 173 "data/maps/Route102/scripts.pory"
	setflag FLAG_HIDE_NEWGLADE_TRAIL_GRUNT
# 174 "data/maps/Route102/scripts.pory"
	setvar VAR_NEWGLADE_TRAIL_STATE, 1
# 175 "data/maps/Route102/scripts.pory"
	releaseall
	end

NewgladeTrail_EventScript_TriggerTeamIntro_3:
# 126 "data/maps/Route102/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight4
	goto NewgladeTrail_EventScript_TriggerTeamIntro_1

NewgladeTrail_EventScript_TriggerTeamIntro_4:
# 128 "data/maps/Route102/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight3
	goto NewgladeTrail_EventScript_TriggerTeamIntro_1

NewgladeTrail_EventScript_TriggerTeamIntro_5:
# 130 "data/maps/Route102/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight2
	goto NewgladeTrail_EventScript_TriggerTeamIntro_1

NewgladeTrail_EventScript_TriggerTeamIntro_6:
# 132 "data/maps/Route102/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
	goto NewgladeTrail_EventScript_TriggerTeamIntro_1

NewgladeTrail_EventScript_TriggerTeamIntro_7:
	goto NewgladeTrail_EventScript_TriggerTeamIntro_1

NewgladeTrail_EventScript_TriggerTeamIntro_8:
# 136 "data/maps/Route102/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
	goto NewgladeTrail_EventScript_TriggerTeamIntro_1

NewgladeTrail_EventScript_TriggerTeamIntro_9:
# 138 "data/maps/Route102/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft2
	goto NewgladeTrail_EventScript_TriggerTeamIntro_1

NewgladeTrail_EventScript_TriggerTeamIntro_10:
# 140 "data/maps/Route102/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft3
	goto NewgladeTrail_EventScript_TriggerTeamIntro_1

NewgladeTrail_EventScript_TriggerTeamIntro_11:
# 142 "data/maps/Route102/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft4
	goto NewgladeTrail_EventScript_TriggerTeamIntro_1

NewgladeTrail_EventScript_TriggerTeamIntro_12:
# 144 "data/maps/Route102/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft5
	goto NewgladeTrail_EventScript_TriggerTeamIntro_1

NewgladeTrail_EventScript_TriggerTeamIntro_13:
# 146 "data/maps/Route102/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft6
	goto NewgladeTrail_EventScript_TriggerTeamIntro_1

NewgladeTrail_EventScript_TriggerTeamIntro_14:
# 148 "data/maps/Route102/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft7
	goto NewgladeTrail_EventScript_TriggerTeamIntro_1


# 182 "data/maps/Route102/scripts.pory"
NewgladeTrail_Movement_GruntToPlayer:
# 183 "data/maps/Route102/scripts.pory"
	walk_left
# 184 "data/maps/Route102/scripts.pory"
	walk_down
# 184 "data/maps/Route102/scripts.pory"
	walk_down
# 184 "data/maps/Route102/scripts.pory"
	walk_down
# 185 "data/maps/Route102/scripts.pory"
	face_right
	step_end

# 188 "data/maps/Route102/scripts.pory"
NewgladeTrail_Movement_GruntRunAway1:
# 189 "data/maps/Route102/scripts.pory"
	walk_fast_up
# 189 "data/maps/Route102/scripts.pory"
	walk_fast_up
# 189 "data/maps/Route102/scripts.pory"
	walk_fast_up
# 189 "data/maps/Route102/scripts.pory"
	walk_fast_up
	step_end

# 192 "data/maps/Route102/scripts.pory"
NewgladeTrail_Movement_GruntRunAway2:
# 193 "data/maps/Route102/scripts.pory"
	walk_fast_right
# 193 "data/maps/Route102/scripts.pory"
	walk_fast_right
# 193 "data/maps/Route102/scripts.pory"
	walk_fast_right
# 193 "data/maps/Route102/scripts.pory"
	walk_fast_right
# 193 "data/maps/Route102/scripts.pory"
	walk_fast_right
# 193 "data/maps/Route102/scripts.pory"
	walk_fast_right
# 193 "data/maps/Route102/scripts.pory"
	walk_fast_right
# 193 "data/maps/Route102/scripts.pory"
	walk_fast_right
# 193 "data/maps/Route102/scripts.pory"
	walk_fast_right
	step_end

NewgladeTrail_EventScript_TriggerTeamIntro_Text_0:
# 153 "data/maps/Route102/scripts.pory"
	.string "Hey, stop it!$"

NewgladeTrail_EventScript_TriggerTeamIntro_Text_1:
# 159 "data/maps/Route102/scripts.pory"
	.string "Please, you have to stop him! I don't\n"
	.string "have any POKéMON!$"

NewgladeTrail_EventScript_TriggerTeamIntro_Text_2:
# 164 "data/maps/Route102/scripts.pory"
	.string "You think you can handle me?$"

NewgladeTrail_EventScript_TriggerTeamIntro_Text_3:
# 166 "data/maps/Route102/scripts.pory"
	.string "No, no, NO!\p"
	.string "I'll get you back for this, just you\n"
	.string "wait!$"

NewgladeTrail_Text_GruntLost::
# 179 "data/maps/Route102/scripts.pory"
	.string "Wh-what?!\n"
	.string "Who do you think you are?\l"
	.string "This isn't the last you'll hear of TEAM\l"
	.string "LIMIT!$"
