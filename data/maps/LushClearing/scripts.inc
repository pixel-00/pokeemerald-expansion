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
	msgbox Route101_Text_WildPokemonInTallGrass, MSGBOX_NPC
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
	lock
# 33 "data/maps/LushClearing/scripts.pory"
    faceplayer
# 34 "data/maps/LushClearing/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 35 "data/maps/LushClearing/scripts.pory"
	fadescreen FADE_TO_BLACK
# 36 "data/maps/LushClearing/scripts.pory"
    setobjectxy LOCALID_DAD, 10, 24
# 37 "data/maps/LushClearing/scripts.pory"
    applymovement LOCALID_DAD, Common_Movement_FaceDown
# 38 "data/maps/LushClearing/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 39 "data/maps/LushClearing/scripts.pory"
    removeobject LOCALID_BAG
# 40 "data/maps/LushClearing/scripts.pory"
    waitmovement 0
# 41 "data/maps/LushClearing/scripts.pory"
	special ChooseStarter
# 42 "data/maps/LushClearing/scripts.pory"
    waitstate
# 43 "data/maps/LushClearing/scripts.pory"
    trainerbattle_single TRAINER_DAD_1, LushClearing_Text_BeforeDadBattle, LushClearing_Text_DadDefeated, LushClearing_EventScript_DadDefeated, NO_MUSIC
# 44 "data/maps/LushClearing/scripts.pory"
	end
# 45 "data/maps/LushClearing/scripts.pory"

# 46 "data/maps/LushClearing/scripts.pory"
Route101_Text_TakeTiredPokemonToPokeCenter:
# 47 "data/maps/LushClearing/scripts.pory"
	.string "If POKéMON get tired, take them to\n"
# 48 "data/maps/LushClearing/scripts.pory"
	.string "a POKéMON CENTER.\p"
# 49 "data/maps/LushClearing/scripts.pory"
	.string "There's a POKéMON CENTER in OLDALE\n"
# 50 "data/maps/LushClearing/scripts.pory"
	.string "TOWN right close by.$"
# 51 "data/maps/LushClearing/scripts.pory"

# 52 "data/maps/LushClearing/scripts.pory"
Route101_Text_WildPokemonInTallGrass:
# 53 "data/maps/LushClearing/scripts.pory"
	.string "Wild POKéMON will jump out at you in\n"
# 54 "data/maps/LushClearing/scripts.pory"
	.string "tall grass.\p"
# 55 "data/maps/LushClearing/scripts.pory"
	.string "If you want to catch POKéMON, you have\n"
# 56 "data/maps/LushClearing/scripts.pory"
	.string "to go into the tall grass and search.$"
# 57 "data/maps/LushClearing/scripts.pory"

# 58 "data/maps/LushClearing/scripts.pory"
Route101_Text_RouteSign:
# 59 "data/maps/LushClearing/scripts.pory"
	.string "LUSH CLEARING\n"
# 60 "data/maps/LushClearing/scripts.pory"
	.string "{UP_ARROW} CHILLED GROTTO$"

LushClearing_EventScript_TriggerGetStarterMoveUp1::
# 64 "data/maps/LushClearing/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
	return


LushClearing_EventScript_TriggerGetStarterMoveUp2::
# 68 "data/maps/LushClearing/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp2
	return


LushClearing_EventScript_TriggerGetStarter2::
# 72 "data/maps/LushClearing/scripts.pory"
	lockall
# 73 "data/maps/LushClearing/scripts.pory"
	msgbox LushClearing_EventScript_TriggerGetStarter2_Text_0
# 74 "data/maps/LushClearing/scripts.pory"
	closemessage
# 75 "data/maps/LushClearing/scripts.pory"
	applymovement LOCALID_DAD, LushClearing_Movement_DadApproachPlayer
# 76 "data/maps/LushClearing/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LushClearing_Movement_TriggerGetStarter2
# 77 "data/maps/LushClearing/scripts.pory"
	waitmovement 0
# 78 "data/maps/LushClearing/scripts.pory"
	goto LushClearing_EventScript_TriggerGetStarter
	return


LushClearing_EventScript_TriggerGetStarter1::
# 82 "data/maps/LushClearing/scripts.pory"
	lockall
# 83 "data/maps/LushClearing/scripts.pory"
	msgbox LushClearing_EventScript_TriggerGetStarter2_Text_0
# 84 "data/maps/LushClearing/scripts.pory"
	closemessage
# 85 "data/maps/LushClearing/scripts.pory"
	applymovement LOCALID_DAD, LushClearing_Movement_DadApproachPlayer
# 86 "data/maps/LushClearing/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LushClearing_Movement_TriggerGetStarter1
# 87 "data/maps/LushClearing/scripts.pory"
	waitmovement 0
# 88 "data/maps/LushClearing/scripts.pory"
	goto LushClearing_EventScript_TriggerGetStarter
	return


# 91 "data/maps/LushClearing/scripts.pory"
LushClearing_Movement_TriggerGetStarter2:
# 92 "data/maps/LushClearing/scripts.pory"
	walk_left
# 92 "data/maps/LushClearing/scripts.pory"
	walk_left
# 93 "data/maps/LushClearing/scripts.pory"
	walk_up
# 93 "data/maps/LushClearing/scripts.pory"
	walk_up
# 94 "data/maps/LushClearing/scripts.pory"
	walk_left
	step_end

# 97 "data/maps/LushClearing/scripts.pory"
LushClearing_Movement_TriggerGetStarter1:
# 98 "data/maps/LushClearing/scripts.pory"
	walk_left
# 98 "data/maps/LushClearing/scripts.pory"
	walk_left
# 99 "data/maps/LushClearing/scripts.pory"
	walk_up
# 100 "data/maps/LushClearing/scripts.pory"
	walk_left
	step_end

# 103 "data/maps/LushClearing/scripts.pory"
LushClearing_Movement_DadApproachPlayer:
# 104 "data/maps/LushClearing/scripts.pory"
	walk_fast_down
# 104 "data/maps/LushClearing/scripts.pory"
	walk_fast_down
# 104 "data/maps/LushClearing/scripts.pory"
	walk_fast_down
# 105 "data/maps/LushClearing/scripts.pory"
	walk_down
# 105 "data/maps/LushClearing/scripts.pory"
	walk_down
# 106 "data/maps/LushClearing/scripts.pory"
	walk_right
	step_end

LushClearing_EventScript_TriggerGetStarter::
# 110 "data/maps/LushClearing/scripts.pory"
	msgbox LushClearing_EventScript_TriggerGetStarter_Text_0
# 111 "data/maps/LushClearing/scripts.pory"
	closemessage
# 112 "data/maps/LushClearing/scripts.pory"
	applymovement LOCALID_DAD, Common_Movement_FaceDown
# 113 "data/maps/LushClearing/scripts.pory"
	waitmovement 0
# 114 "data/maps/LushClearing/scripts.pory"
	delay 20
# 115 "data/maps/LushClearing/scripts.pory"
	addobject LOCALID_BAG
# 116 "data/maps/LushClearing/scripts.pory"
	delay 20
# 117 "data/maps/LushClearing/scripts.pory"
	applymovement LOCALID_DAD, Common_Movement_FaceRight
# 118 "data/maps/LushClearing/scripts.pory"
	waitmovement 0
# 119 "data/maps/LushClearing/scripts.pory"
	msgbox LushClearing_EventScript_TriggerGetStarter_Text_1
# 120 "data/maps/LushClearing/scripts.pory"
	setvar VAR_INTRO_STATE, 5
# 121 "data/maps/LushClearing/scripts.pory"
	releaseall
	end


LushClearing_EventScript_PreventLeavingNorth::
# 126 "data/maps/LushClearing/scripts.pory"
	lockall
# 127 "data/maps/LushClearing/scripts.pory"
	msgbox LushClearing_EventScript_PreventLeavingNorth_Text_0
# 128 "data/maps/LushClearing/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 129 "data/maps/LushClearing/scripts.pory"
	waitmovement 0
# 130 "data/maps/LushClearing/scripts.pory"
	releaseall
	end


LushClearing_EventScript_PreventLeavingEast::
# 135 "data/maps/LushClearing/scripts.pory"
	lockall
# 136 "data/maps/LushClearing/scripts.pory"
	msgbox LushClearing_EventScript_PreventLeavingNorth_Text_0
# 137 "data/maps/LushClearing/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
# 138 "data/maps/LushClearing/scripts.pory"
	waitmovement 0
# 139 "data/maps/LushClearing/scripts.pory"
	releaseall
	end


LushClearing_EventScript_PreventLeavingSouth::
# 144 "data/maps/LushClearing/scripts.pory"
	lockall
# 145 "data/maps/LushClearing/scripts.pory"
	msgbox LushClearing_EventScript_PreventLeavingNorth_Text_0
# 146 "data/maps/LushClearing/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 147 "data/maps/LushClearing/scripts.pory"
	waitmovement 0
# 148 "data/maps/LushClearing/scripts.pory"
	releaseall
	end


LushClearing_EventScript_Dad::
# 153 "data/maps/LushClearing/scripts.pory"
	compare VAR_INTRO_STATE, 5
	goto_if_eq LushClearing_EventScript_Dad_2
# 158 "data/maps/LushClearing/scripts.pory"
	compare VAR_INTRO_STATE, 6
	goto_if_eq LushClearing_EventScript_Dad_3
# 163 "data/maps/LushClearing/scripts.pory"
	releaseall
	end

LushClearing_EventScript_Dad_2:
# 154 "data/maps/LushClearing/scripts.pory"
	msgbox LushClearing_EventScript_Dad_Text_0, MSGBOX_NPC
# 155 "data/maps/LushClearing/scripts.pory"
	closemessage
	end

LushClearing_EventScript_Dad_3:
# 159 "data/maps/LushClearing/scripts.pory"
	msgbox LushClearing_EventScript_Dad_Text_1, MSGBOX_NPC
# 160 "data/maps/LushClearing/scripts.pory"
	closemessage
	end


LushClearing_EventScript_DadDefeated::
# 176 "data/maps/LushClearing/scripts.pory"
	msgbox LushClearing_EventScript_DadDefeated_Text_0
# 177 "data/maps/LushClearing/scripts.pory"
	closemessage
# 178 "data/maps/LushClearing/scripts.pory"
	special HealPlayerParty
# 179 "data/maps/LushClearing/scripts.pory"
	setflag FLAG_HIDE_STARTERS_BAG
# 180 "data/maps/LushClearing/scripts.pory"
	setflag FLAG_HIDE_LUSH_CLEARING_DAD
# 181 "data/maps/LushClearing/scripts.pory"
	setvar VAR_INTRO_STATE, 6
# 182 "data/maps/LushClearing/scripts.pory"
	releaseall
	end


LushClearing_OnLoad::
# 187 "data/maps/LushClearing/scripts.pory"
	compare VAR_INTRO_STATE, 6
	goto_if_ge LushClearing_OnLoad_1
	return

LushClearing_OnLoad_1:
# 188 "data/maps/LushClearing/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_101_BOY
	return


LushClearing_EventScript_TriggerGetStarter2_Text_0:
# 73 "data/maps/LushClearing/scripts.pory"
	.string "{PLAYER}!$"

LushClearing_EventScript_TriggerGetStarter_Text_0:
# 110 "data/maps/LushClearing/scripts.pory"
	.string "DAD: There you are.\p"
	.string "You must be wondering why I asked you\n"
	.string "to come out here.$"

LushClearing_EventScript_TriggerGetStarter_Text_1:
# 119 "data/maps/LushClearing/scripts.pory"
	.string "DAD: Inside this bag are three rare\n"
	.string "Pokémon that I recieved from a good\l"
	.string "friend of mine.\p"
	.string "I'd like to give one of them to you,\n"
	.string "{PLAYER}!\p"
	.string "I was about your age when I recieved my\n"
	.string "first Pokémon, so I think it's about\l"
	.string "time you met your own Pokémon partner.\p"
	.string "Go ahead, pick one!$"

LushClearing_EventScript_PreventLeavingNorth_Text_0:
# 127 "data/maps/LushClearing/scripts.pory"
	.string "DAD: Huh? Don't you want to meet your\n"
	.string "first POKéMON?$"

LushClearing_EventScript_Dad_Text_0:
# 154 "data/maps/LushClearing/scripts.pory"
	.string "Go ahead, {PLAYER}.\n"
	.string "Pick whichever one you want.$"

LushClearing_EventScript_Dad_Text_1:
# 159 "data/maps/LushClearing/scripts.pory"
	.string "The nearest gym lies east of here in\n"
	.string "Newhope City.\p"
	.string "Make sure you tell Mom before you head\n"
	.string "off.$"

LushClearing_EventScript_DadDefeated_Text_0:
# 176 "data/maps/LushClearing/scripts.pory"
	.string "Now that you have a Pokémon, the world\n"
	.string "is your oyster!\p"
	.string "You should try taking on the eight gyms\n"
	.string "across Tanso. Who knows? You may even\l"
	.string "become the champion!\p"
	.string "The nearest gym lies east of here in\n"
	.string "Newhope City.\p"
	.string "Make sure you tell Mom before you head\n"
	.string "off.$"

LushClearing_Text_BeforeDadBattle::
# 167 "data/maps/LushClearing/scripts.pory"
	.string "A fine choice! Now I will show you what\n"
	.string "the life of a POKéMON trainer is all\l"
	.string "about!$"

LushClearing_Text_DadDefeated::
# 171 "data/maps/LushClearing/scripts.pory"
	.string "Amazing! You're a natural!$"
