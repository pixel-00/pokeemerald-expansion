# 1 "data/maps/TinybudTown_BrendansHouse_2F/scripts.pory"

# 2 "data/maps/TinybudTown_BrendansHouse_2F/scripts.pory"
.set LOCALID_RIVAL, 1
# 3 "data/maps/TinybudTown_BrendansHouse_2F/scripts.pory"

# 4 "data/maps/TinybudTown_BrendansHouse_2F/scripts.pory"
TinybudTown_BrendansHouse_2F_OnTransition:
# 5 "data/maps/TinybudTown_BrendansHouse_2F/scripts.pory"
    call_if_eq VAR_INTRO_STATE, 1, PlayersHouse_2F_EventScript_BlockStairsUntilClockIsSet
# 6 "data/maps/TinybudTown_BrendansHouse_2F/scripts.pory"
	call SecretBase_EventScript_SetDecorationFlags
# 7 "data/maps/TinybudTown_BrendansHouse_2F/scripts.pory"
	setvar VAR_SECRET_BASE_INITIALIZED, 0
# 8 "data/maps/TinybudTown_BrendansHouse_2F/scripts.pory"
	end
# 9 "data/maps/TinybudTown_BrendansHouse_2F/scripts.pory"

# 10 "data/maps/TinybudTown_BrendansHouse_2F/scripts.pory"
TinybudTown_BrendansHouse_2F_EventScript_CheckInitDecor::
# 11 "data/maps/TinybudTown_BrendansHouse_2F/scripts.pory"
	checkplayergender
# 12 "data/maps/TinybudTown_BrendansHouse_2F/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, SecretBase_EventScript_InitDecorations
# 13 "data/maps/TinybudTown_BrendansHouse_2F/scripts.pory"
	end
# 14 "data/maps/TinybudTown_BrendansHouse_2F/scripts.pory"

# 15 "data/maps/TinybudTown_BrendansHouse_2F/scripts.pory"
TinybudTown_BrendansHouse_2F_EventScript_CheckPlayersPC::
# 16 "data/maps/TinybudTown_BrendansHouse_2F/scripts.pory"
	setvar VAR_0x8004, PC_LOCATION_BRENDANS_HOUSE
# 17 "data/maps/TinybudTown_BrendansHouse_2F/scripts.pory"
	playse SE_PC_ON
# 18 "data/maps/TinybudTown_BrendansHouse_2F/scripts.pory"
	msgbox gText_PlayerHouseBootPC, MSGBOX_DEFAULT
# 19 "data/maps/TinybudTown_BrendansHouse_2F/scripts.pory"
	special BedroomPC
# 20 "data/maps/TinybudTown_BrendansHouse_2F/scripts.pory"
	waitstate
# 21 "data/maps/TinybudTown_BrendansHouse_2F/scripts.pory"
	releaseall
# 22 "data/maps/TinybudTown_BrendansHouse_2F/scripts.pory"
	end
# 23 "data/maps/TinybudTown_BrendansHouse_2F/scripts.pory"

# 24 "data/maps/TinybudTown_BrendansHouse_2F/scripts.pory"
TinybudTown_BrendansHouse_2F_EventScript_TurnOffPlayerPC::
# 25 "data/maps/TinybudTown_BrendansHouse_2F/scripts.pory"
	setvar VAR_0x8004, PC_LOCATION_BRENDANS_HOUSE
# 26 "data/maps/TinybudTown_BrendansHouse_2F/scripts.pory"
	playse SE_PC_OFF
# 27 "data/maps/TinybudTown_BrendansHouse_2F/scripts.pory"
	special DoPCTurnOffEffect
# 28 "data/maps/TinybudTown_BrendansHouse_2F/scripts.pory"
	releaseall
# 29 "data/maps/TinybudTown_BrendansHouse_2F/scripts.pory"
	end
# 30 "data/maps/TinybudTown_BrendansHouse_2F/scripts.pory"

# 31 "data/maps/TinybudTown_BrendansHouse_2F/scripts.pory"
TinybudTown_BrendansHouse_2F_EventScript_CheckRivalsPC::
# 32 "data/maps/TinybudTown_BrendansHouse_2F/scripts.pory"
	msgbox gText_PokemonTrainerSchoolEmail, MSGBOX_DEFAULT
# 33 "data/maps/TinybudTown_BrendansHouse_2F/scripts.pory"
	releaseall
# 34 "data/maps/TinybudTown_BrendansHouse_2F/scripts.pory"
	end
# 35 "data/maps/TinybudTown_BrendansHouse_2F/scripts.pory"

# 36 "data/maps/TinybudTown_BrendansHouse_2F/scripts.pory"
PlayersHouse_2F_EventScript_Notebook::
# 37 "data/maps/TinybudTown_BrendansHouse_2F/scripts.pory"
	msgbox PlayersHouse_2F_Text_Notebook, MSGBOX_SIGN
# 38 "data/maps/TinybudTown_BrendansHouse_2F/scripts.pory"
	end
# 39 "data/maps/TinybudTown_BrendansHouse_2F/scripts.pory"

# 40 "data/maps/TinybudTown_BrendansHouse_2F/scripts.pory"
PlayersHouse_2F_Text_ClockIsStopped:
# 41 "data/maps/TinybudTown_BrendansHouse_2F/scripts.pory"
	.string "The clock is stopped…\p"
# 42 "data/maps/TinybudTown_BrendansHouse_2F/scripts.pory"
	.string "Better set it and start it!$"
# 43 "data/maps/TinybudTown_BrendansHouse_2F/scripts.pory"

# 44 "data/maps/TinybudTown_BrendansHouse_2F/scripts.pory"
PlayersHouse_2F_Text_Notebook:
# 45 "data/maps/TinybudTown_BrendansHouse_2F/scripts.pory"
	.string "{PLAYER} flipped open the notebook.\p"
# 46 "data/maps/TinybudTown_BrendansHouse_2F/scripts.pory"
	.string "ADVENTURE RULE NO. 1\n"
# 47 "data/maps/TinybudTown_BrendansHouse_2F/scripts.pory"
	.string "Open the MENU with START.\p"
# 48 "data/maps/TinybudTown_BrendansHouse_2F/scripts.pory"
	.string "ADVENTURE RULE NO. 2\n"
# 49 "data/maps/TinybudTown_BrendansHouse_2F/scripts.pory"
	.string "Record your progress with SAVE.\p"
# 50 "data/maps/TinybudTown_BrendansHouse_2F/scripts.pory"
	.string "The remaining pages are blank…$"
# 51 "data/maps/TinybudTown_BrendansHouse_2F/scripts.pory"

# 52 "data/maps/TinybudTown_BrendansHouse_2F/scripts.pory"
Common_Text_LookCloserAtMap:
# 53 "data/maps/TinybudTown_BrendansHouse_2F/scripts.pory"
	.string "{PLAYER} took a closer look at the\n"
# 54 "data/maps/TinybudTown_BrendansHouse_2F/scripts.pory"
	.string "HOENN region map.$"

TinybudTown_BrendansHouse_2F_MapScripts::
# 58 "data/maps/TinybudTown_BrendansHouse_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, TinybudTown_BrendansHouse_2F_OnTransition
# 59 "data/maps/TinybudTown_BrendansHouse_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, TinybudTown_BrendansHouse_2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 62 "data/maps/TinybudTown_BrendansHouse_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, TinybudTown_BrendansHouse_2F_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	.byte 0

TinybudTown_BrendansHouse_2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 60 "data/maps/TinybudTown_BrendansHouse_2F/scripts.pory"
	map_script_2 VAR_INTRO_STATE, 0, TinybudTown_BrendansHouse_2F_OnFrame_0
	.2byte 0

TinybudTown_BrendansHouse_2F_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 63 "data/maps/TinybudTown_BrendansHouse_2F/scripts.pory"
	map_script_2 VAR_SECRET_BASE_INITIALIZED, 0, TinybudTown_BrendansHouse_2F_EventScript_CheckInitDecor
	.2byte 0


TinybudTown_BrendansHouse_2F_OnFrame_0::
# 68 "data/maps/TinybudTown_BrendansHouse_2F/scripts.pory"
	lockall
# 69 "data/maps/TinybudTown_BrendansHouse_2F/scripts.pory"
	setrespawn HEAL_LOCATION_TINYBUD_TOWN_BRENDANS_HOUSE_2F
# 70 "data/maps/TinybudTown_BrendansHouse_2F/scripts.pory"
	setvar VAR_INTRO_STATE, 1
# 71 "data/maps/TinybudTown_BrendansHouse_2F/scripts.pory"
	setflag FLAG_HIDE_TINYBUD_TOWN_MAYS_HOUSE_MOM
# 72 "data/maps/TinybudTown_BrendansHouse_2F/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BOY
# 73 "data/maps/TinybudTown_BrendansHouse_2F/scripts.pory"
	setflag FLAG_HIDE_STARTERS_BAG
# 74 "data/maps/TinybudTown_BrendansHouse_2F/scripts.pory"
	setvar VAR_TINYBUD_HOUSES_STATE_BRENDAN, 1
# 75 "data/maps/TinybudTown_BrendansHouse_2F/scripts.pory"
	setdynamicwarp MAP_TINYBUD_TOWN, 3, 10
# 76 "data/maps/TinybudTown_BrendansHouse_2F/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 77 "data/maps/TinybudTown_BrendansHouse_2F/scripts.pory"
	releaseall
	end


PlayersHouse_2F_EventScript_TogepiDoll::
# 82 "data/maps/TinybudTown_BrendansHouse_2F/scripts.pory"
	lockall
# 83 "data/maps/TinybudTown_BrendansHouse_2F/scripts.pory"
	msgbox PlayersHouse_2F_EventScript_TogepiDoll_Text_0, MSGBOX_SIGN
# 84 "data/maps/TinybudTown_BrendansHouse_2F/scripts.pory"
	releaseall
	end


PlayersHouse_2F_EventScript_Bookcase1::
# 89 "data/maps/TinybudTown_BrendansHouse_2F/scripts.pory"
	msgbox PlayersHouse_2F_EventScript_Bookcase1_Text_0, MSGBOX_SIGN
	end


PlayersHouse_2F_EventScript_Bookcase2::
# 94 "data/maps/TinybudTown_BrendansHouse_2F/scripts.pory"
	msgbox PlayersHouse_2F_EventScript_Bookcase2_Text_0, MSGBOX_SIGN
	end


PlayersHouse_2F_EventScript_TogepiDoll_Text_0:
# 83 "data/maps/TinybudTown_BrendansHouse_2F/scripts.pory"
	.string "It's a cute Togepi plush.$"

PlayersHouse_2F_EventScript_Bookcase1_Text_0:
# 89 "data/maps/TinybudTown_BrendansHouse_2F/scripts.pory"
	.string "This book is titled ‘ABSTRACT ALGEBRA’\n"
	.string "by DAVID S. DUMMIT and RICHARD M.\l"
	.string "FOOTE.\p"
	.string "… … … … … …\p"
	.string "“Corollary 3. Any finite integral domain\n"
	.string "is a field.\p"
	.string "Proof. Let R be a finite integral domain\n"
	.string "and let {MATH_A} be a nonzero element of R.\p"
	.string "By the cancellation law the map x {MAPSTO} {MATH_A}x\n"
	.string "is an injective function. Since R is\l"
	.string "finite this map is also surjective.\l"
	.string "In particular, there is some b in R such\l"
	.string "that {MATH_A}b = 1, i.e., {MATH_A} is a unit in R.\p"
	.string "Since {MATH_A} was an arbitrary nonzero\n"
	.string "element, R is a field.”$"

PlayersHouse_2F_EventScript_Bookcase2_Text_0:
# 94 "data/maps/TinybudTown_BrendansHouse_2F/scripts.pory"
	.string "This book is titled ‘PRINCIPLES OF\n"
	.string "MATHEMATICAL ANALYSIS’ by WALTER\l"
	.string "RUDIN.\p"
	.string "… … … … … …\p"
	.string "CHAPTER 4, EXERCISE 13: “Let E be a\n"
	.string "dense subset of a metric space X, and\l"
	.string "let {MATH_F} be a uniformly continuous real\l"
	.string "function defined on E.\p"
	.string "Prove that {MATH_F} has a continuous\n"
	.string "extension from E to X.”$"
