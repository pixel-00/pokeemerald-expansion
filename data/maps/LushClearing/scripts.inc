# 1 "data/maps/LushClearing/scripts.pory"

# 2 "data/maps/LushClearing/scripts.pory"
.set LOCALID_DAD, 3
# 3 "data/maps/LushClearing/scripts.pory"
.set LOCALID_BAG, 2
# 4 "data/maps/LushClearing/scripts.pory"

# 5 "data/maps/LushClearing/scripts.pory"
LushClearing_MapScripts::
# 6 "data/maps/LushClearing/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LushClearing_OnFrame
# 7 "data/maps/LushClearing/scripts.pory"
    map_script MAP_SCRIPT_ON_LOAD, LushClearing_OnLoad
# 8 "data/maps/LushClearing/scripts.pory"
	.byte 0
# 9 "data/maps/LushClearing/scripts.pory"

# 10 "data/maps/LushClearing/scripts.pory"
LushClearing_OnFrame:
# 11 "data/maps/LushClearing/scripts.pory"
	map_script_2 VAR_LUSH_CLEARING_STATE, 0, LushClearing_EventScript_HideMapNamePopup
# 12 "data/maps/LushClearing/scripts.pory"
	.2byte 0
# 13 "data/maps/LushClearing/scripts.pory"

# 14 "data/maps/LushClearing/scripts.pory"
LushClearing_EventScript_HideMapNamePopup::
# 15 "data/maps/LushClearing/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 16 "data/maps/LushClearing/scripts.pory"
	setvar VAR_LUSH_CLEARING_STATE, 1
# 17 "data/maps/LushClearing/scripts.pory"
	end
# 18 "data/maps/LushClearing/scripts.pory"

# 19 "data/maps/LushClearing/scripts.pory"
Route101_EventScript_Youngster::
# 20 "data/maps/LushClearing/scripts.pory"
	msgbox Route101_Text_TakeTiredPokemonToPokeCenter, MSGBOX_NPC
# 21 "data/maps/LushClearing/scripts.pory"
	end
# 22 "data/maps/LushClearing/scripts.pory"

# 23 "data/maps/LushClearing/scripts.pory"
Route101_EventScript_Boy::
# 24 "data/maps/LushClearing/scripts.pory"
	msgbox Route101_Text_WantToSeeCave, MSGBOX_NPC
# 25 "data/maps/LushClearing/scripts.pory"
	end
# 26 "data/maps/LushClearing/scripts.pory"

# 27 "data/maps/LushClearing/scripts.pory"
Route101_EventScript_RouteSign::
# 28 "data/maps/LushClearing/scripts.pory"
	msgbox Route101_Text_RouteSign, MSGBOX_SIGN
# 29 "data/maps/LushClearing/scripts.pory"
	end
# 30 "data/maps/LushClearing/scripts.pory"

# 31 "data/maps/LushClearing/scripts.pory"
Route101_EventScript_BirchsBag::
# 32 "data/maps/LushClearing/scripts.pory"
	lockall
# 33 "data/maps/LushClearing/scripts.pory"
    faceplayer
# 34 "data/maps/LushClearing/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 35 "data/maps/LushClearing/scripts.pory"
	fadescreen FADE_TO_BLACK
# 36 "data/maps/LushClearing/scripts.pory"
    removeobject LOCALID_BAG
# 37 "data/maps/LushClearing/scripts.pory"
    setobjectxy LOCALID_DAD, 10, 24
# 38 "data/maps/LushClearing/scripts.pory"
    applymovement LOCALID_DAD, Common_Movement_FaceDown
# 39 "data/maps/LushClearing/scripts.pory"
    waitmovement 0
# 40 "data/maps/LushClearing/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 41 "data/maps/LushClearing/scripts.pory"
    waitmovement 0
# 42 "data/maps/LushClearing/scripts.pory"
	special ChooseStarter
# 43 "data/maps/LushClearing/scripts.pory"
    waitstate
# 44 "data/maps/LushClearing/scripts.pory"
	trainerbattle TRAINER_BATTLE_INTRO, TRAINER_DAD_1, 0, LushClearing_Text_BeforeDadBattle, LushClearing_Text_DadDefeated, LushClearing_EventScript_DadDefeated
# 45 "data/maps/LushClearing/scripts.pory"
    end
# 46 "data/maps/LushClearing/scripts.pory"

# 47 "data/maps/LushClearing/scripts.pory"
Route101_Text_TakeTiredPokemonToPokeCenter:
# 48 "data/maps/LushClearing/scripts.pory"
	.string "If POKéMON get tired, take them to\n"
# 49 "data/maps/LushClearing/scripts.pory"
	.string "a POKéMON CENTER.\p"
# 50 "data/maps/LushClearing/scripts.pory"
	.string "There's a POKéMON CENTER in OLDALE\n"
# 51 "data/maps/LushClearing/scripts.pory"
	.string "TOWN right close by.$"
# 52 "data/maps/LushClearing/scripts.pory"

# 53 "data/maps/LushClearing/scripts.pory"
Route101_Text_RouteSign:
# 54 "data/maps/LushClearing/scripts.pory"
	.string "LUSH CLEARING\n"
# 55 "data/maps/LushClearing/scripts.pory"
	.string "{UP_ARROW} CHILLED GROTTO$"

LushClearing_EventScript_TriggerGetStarterMoveUp1::
# 63 "data/maps/LushClearing/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
	return


LushClearing_EventScript_TriggerGetStarterMoveUp2::
# 67 "data/maps/LushClearing/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp2
	return


LushClearing_EventScript_TriggerGetStarter2::
# 71 "data/maps/LushClearing/scripts.pory"
	lockall
# 72 "data/maps/LushClearing/scripts.pory"
	msgbox LushClearing_EventScript_TriggerGetStarter2_Text_0
# 73 "data/maps/LushClearing/scripts.pory"
	closemessage
# 74 "data/maps/LushClearing/scripts.pory"
	applymovement LOCALID_DAD, LushClearing_Movement_DadApproachPlayer
# 75 "data/maps/LushClearing/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LushClearing_Movement_TriggerGetStarter2
# 76 "data/maps/LushClearing/scripts.pory"
	waitmovement 0
# 77 "data/maps/LushClearing/scripts.pory"
	goto LushClearing_EventScript_TriggerGetStarter
	return


LushClearing_EventScript_TriggerGetStarter1::
# 81 "data/maps/LushClearing/scripts.pory"
	lockall
# 82 "data/maps/LushClearing/scripts.pory"
	msgbox LushClearing_EventScript_TriggerGetStarter2_Text_0
# 83 "data/maps/LushClearing/scripts.pory"
	closemessage
# 84 "data/maps/LushClearing/scripts.pory"
	applymovement LOCALID_DAD, LushClearing_Movement_DadApproachPlayer
# 85 "data/maps/LushClearing/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LushClearing_Movement_TriggerGetStarter1
# 86 "data/maps/LushClearing/scripts.pory"
	waitmovement 0
# 87 "data/maps/LushClearing/scripts.pory"
	goto LushClearing_EventScript_TriggerGetStarter
	return


# 90 "data/maps/LushClearing/scripts.pory"
LushClearing_Movement_TriggerGetStarter2:
# 91 "data/maps/LushClearing/scripts.pory"
	walk_left
# 91 "data/maps/LushClearing/scripts.pory"
	walk_left
# 92 "data/maps/LushClearing/scripts.pory"
	walk_up
# 92 "data/maps/LushClearing/scripts.pory"
	walk_up
# 93 "data/maps/LushClearing/scripts.pory"
	walk_left
	step_end

# 96 "data/maps/LushClearing/scripts.pory"
LushClearing_Movement_TriggerGetStarter1:
# 97 "data/maps/LushClearing/scripts.pory"
	walk_left
# 97 "data/maps/LushClearing/scripts.pory"
	walk_left
# 98 "data/maps/LushClearing/scripts.pory"
	walk_up
# 99 "data/maps/LushClearing/scripts.pory"
	walk_left
	step_end

# 102 "data/maps/LushClearing/scripts.pory"
LushClearing_Movement_DadApproachPlayer:
# 103 "data/maps/LushClearing/scripts.pory"
	walk_fast_down
# 103 "data/maps/LushClearing/scripts.pory"
	walk_fast_down
# 103 "data/maps/LushClearing/scripts.pory"
	walk_fast_down
# 104 "data/maps/LushClearing/scripts.pory"
	walk_down
# 104 "data/maps/LushClearing/scripts.pory"
	walk_down
# 105 "data/maps/LushClearing/scripts.pory"
	walk_right
	step_end

LushClearing_EventScript_TriggerGetStarter::
# 109 "data/maps/LushClearing/scripts.pory"
	msgbox LushClearing_EventScript_TriggerGetStarter_Text_0
# 110 "data/maps/LushClearing/scripts.pory"
	closemessage
# 111 "data/maps/LushClearing/scripts.pory"
	applymovement LOCALID_DAD, Common_Movement_FaceDown
# 112 "data/maps/LushClearing/scripts.pory"
	waitmovement 0
# 113 "data/maps/LushClearing/scripts.pory"
	delay 20
# 114 "data/maps/LushClearing/scripts.pory"
	addobject LOCALID_BAG
# 115 "data/maps/LushClearing/scripts.pory"
	delay 20
# 116 "data/maps/LushClearing/scripts.pory"
	applymovement LOCALID_DAD, Common_Movement_FaceRight
# 117 "data/maps/LushClearing/scripts.pory"
	waitmovement 0
# 118 "data/maps/LushClearing/scripts.pory"
	msgbox LushClearing_EventScript_TriggerGetStarter_Text_1
# 119 "data/maps/LushClearing/scripts.pory"
	setvar VAR_INTRO_STATE, 5
# 120 "data/maps/LushClearing/scripts.pory"
	releaseall
	end


LushClearing_EventScript_PreventLeavingNorth::
# 125 "data/maps/LushClearing/scripts.pory"
	lockall
# 126 "data/maps/LushClearing/scripts.pory"
	msgbox LushClearing_EventScript_PreventLeavingNorth_Text_0
# 127 "data/maps/LushClearing/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 128 "data/maps/LushClearing/scripts.pory"
	waitmovement 0
# 129 "data/maps/LushClearing/scripts.pory"
	releaseall
	end


LushClearing_EventScript_PreventLeavingEast::
# 134 "data/maps/LushClearing/scripts.pory"
	lockall
# 135 "data/maps/LushClearing/scripts.pory"
	msgbox LushClearing_EventScript_PreventLeavingNorth_Text_0
# 136 "data/maps/LushClearing/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
# 137 "data/maps/LushClearing/scripts.pory"
	waitmovement 0
# 138 "data/maps/LushClearing/scripts.pory"
	releaseall
	end


LushClearing_EventScript_PreventLeavingSouth::
# 143 "data/maps/LushClearing/scripts.pory"
	lockall
# 144 "data/maps/LushClearing/scripts.pory"
	msgbox LushClearing_EventScript_PreventLeavingNorth_Text_0
# 145 "data/maps/LushClearing/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 146 "data/maps/LushClearing/scripts.pory"
	waitmovement 0
# 147 "data/maps/LushClearing/scripts.pory"
	releaseall
	end


LushClearing_EventScript_Dad::
# 152 "data/maps/LushClearing/scripts.pory"
	compare VAR_INTRO_STATE, 5
	goto_if_eq LushClearing_EventScript_Dad_2
# 157 "data/maps/LushClearing/scripts.pory"
	compare VAR_INTRO_STATE, 6
	goto_if_eq LushClearing_EventScript_Dad_3
# 162 "data/maps/LushClearing/scripts.pory"
	releaseall
	end

LushClearing_EventScript_Dad_2:
# 153 "data/maps/LushClearing/scripts.pory"
	msgbox LushClearing_EventScript_Dad_Text_0, MSGBOX_NPC
# 154 "data/maps/LushClearing/scripts.pory"
	closemessage
	end

LushClearing_EventScript_Dad_3:
# 158 "data/maps/LushClearing/scripts.pory"
	msgbox LushClearing_EventScript_Dad_Text_1, MSGBOX_NPC
# 159 "data/maps/LushClearing/scripts.pory"
	closemessage
	end


LushClearing_EventScript_DadDefeated::
# 179 "data/maps/LushClearing/scripts.pory"
	msgbox LushClearing_EventScript_DadDefeated_Text_0
# 180 "data/maps/LushClearing/scripts.pory"
	closemessage
# 181 "data/maps/LushClearing/scripts.pory"
	special HealPlayerParty
# 182 "data/maps/LushClearing/scripts.pory"
	setflag FLAG_HIDE_STARTERS_BAG
# 183 "data/maps/LushClearing/scripts.pory"
	setflag FLAG_HIDE_LUSH_CLEARING_DAD
# 184 "data/maps/LushClearing/scripts.pory"
	setvar VAR_INTRO_STATE, 6
# 185 "data/maps/LushClearing/scripts.pory"
	releaseall
	end


LushClearing_OnLoad::
# 190 "data/maps/LushClearing/scripts.pory"
	compare VAR_INTRO_STATE, 6
	goto_if_ge LushClearing_OnLoad_1
	return

LushClearing_OnLoad_1:
# 191 "data/maps/LushClearing/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_101_BOY
	return


LushClearing_EventScript_TriggerGetStarter2_Text_0:
# 72 "data/maps/LushClearing/scripts.pory"
	.string "{PLAYER}!$"

LushClearing_EventScript_TriggerGetStarter_Text_0:
# 109 "data/maps/LushClearing/scripts.pory"
	.string "DAD: There you are, {PLAYER}.\p"
	.string "You must be wondering why I asked you\n"
	.string "to come out here.$"

LushClearing_EventScript_TriggerGetStarter_Text_1:
# 118 "data/maps/LushClearing/scripts.pory"
	.string "DAD: Inside this bag are three rare\n"
	.string "POKéMON that I recieved from a good\l"
	.string "friend of mine.\p"
	.string "I'd like to give one of them to you,\n"
	.string "{PLAYER}!\p"
	.string "I was about your age when I recieved my\n"
	.string "first POKéMON, so I think it's about\l"
	.string "time you met your own POKéMON partner.\p"
	.string "Go ahead, pick one!$"

LushClearing_EventScript_PreventLeavingNorth_Text_0:
# 126 "data/maps/LushClearing/scripts.pory"
	.string "DAD: Huh?\p"
	.string "Don't you want to meet your first\n"
	.string "POKéMON?$"

LushClearing_EventScript_Dad_Text_0:
# 153 "data/maps/LushClearing/scripts.pory"
	.string "Go ahead, {PLAYER}.\n"
	.string "Pick whichever one you want.$"

LushClearing_EventScript_Dad_Text_1:
# 158 "data/maps/LushClearing/scripts.pory"
	.string "The nearest gym lies to the east in\n"
	.string "NEWHOPE CITY.\p"
	.string "Make sure you tell MOM before you head\n"
	.string "off.$"

LushClearing_EventScript_DadDefeated_Text_0:
# 179 "data/maps/LushClearing/scripts.pory"
	.string "DAD: Now that you have a POKéMON, the\n"
	.string "world is your oyster!\p"
	.string "You should try taking on the eight gyms\n"
	.string "across TANSO. Who knows? You may even\l"
	.string "become the CHAMPION!\p"
	.string "The nearest gym lies to the east in\n"
	.string "NEWHOPE CITY.\p"
	.string "Make sure you tell MOM before you head\n"
	.string "off.$"

Route101_Text_WantToSeeCave::
# 58 "data/maps/LushClearing/scripts.pory"
	.string "I want to see what's inside that cave\n"
	.string "up there, but the trees are blocking\l"
	.string "the way.$"

LushClearing_Text_BeforeDadBattle::
# 166 "data/maps/LushClearing/scripts.pory"
	.string "A fine choice!\p"
	.string "Now I will show you what the life of a\n"
	.string "POKéMON TRAINER is all about!$"

LushClearing_Text_DadDefeated::
# 170 "data/maps/LushClearing/scripts.pory"
	.string "Amazing! You're a natural!$"

LushClearing_Text_LoseToDad::
# 174 "data/maps/LushClearing/scripts.pory"
	.string "No hard feelings, {PLAYER}, I am a\n"
	.string "seasoned TRAINER, after all.\p"
	.string "Still, I see great potential in you.$"
