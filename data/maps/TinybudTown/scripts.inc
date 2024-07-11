# 1 "data/maps/TinybudTown/scripts.pory"

# 2 "data/maps/TinybudTown/scripts.pory"
.set LOCALID_TWIN, 1
# 3 "data/maps/TinybudTown/scripts.pory"
.set LOCALID_MOM, 4
# 4 "data/maps/TinybudTown/scripts.pory"
.set LOCALID_RIVAL, 7
# 5 "data/maps/TinybudTown/scripts.pory"
.set LOCALID_BIRCH, 8
# 6 "data/maps/TinybudTown/scripts.pory"

# 7 "data/maps/TinybudTown/scripts.pory"
TinybudTown_MapScripts::
# 8 "data/maps/TinybudTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, TinybudTown_OnTransition
# 9 "data/maps/TinybudTown/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, TinybudTown_OnFrame
# 10 "data/maps/TinybudTown/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, TinybudTown_OnWarp
# 11 "data/maps/TinybudTown/scripts.pory"
	.byte 0
# 12 "data/maps/TinybudTown/scripts.pory"

# 13 "data/maps/TinybudTown/scripts.pory"
	@ State descriptions for VAR_TINYBUD_TOWN_STATE
# 14 "data/maps/TinybudTown/scripts.pory"
	@ 1: Met Rival
# 15 "data/maps/TinybudTown/scripts.pory"
	@ 2: Saving Birch
# 16 "data/maps/TinybudTown/scripts.pory"
	@ 3: Received Pokedex
# 17 "data/maps/TinybudTown/scripts.pory"
	@ 4: Received Running Shoes
# 18 "data/maps/TinybudTown/scripts.pory"

# 19 "data/maps/TinybudTown/scripts.pory"
	@ State descriptions for VAR_INTRO_STATE
# 20 "data/maps/TinybudTown/scripts.pory"
	@ 1: In truck male
# 21 "data/maps/TinybudTown/scripts.pory"
	@ 2: In truck female
# 22 "data/maps/TinybudTown/scripts.pory"
	@ 3: Entered house
# 23 "data/maps/TinybudTown/scripts.pory"
	@ 4: Told to go set clock
# 24 "data/maps/TinybudTown/scripts.pory"
	@ 5: Entered 2F to set clock
# 25 "data/maps/TinybudTown/scripts.pory"
	@ 6: Set clock
# 26 "data/maps/TinybudTown/scripts.pory"
	@ 7: Told to go meet rival
# 27 "data/maps/TinybudTown/scripts.pory"

# 28 "data/maps/TinybudTown/scripts.pory"
	@ State descriptions for VAR_TINYBUD_HOUSES_STATE_MAY
# 29 "data/maps/TinybudTown/scripts.pory"
	@                    and VAR_TINYBUD_HOUSES_STATE_BRENDAN
# 30 "data/maps/TinybudTown/scripts.pory"
	@ 1: On Truck (and is corresponding gender)
# 31 "data/maps/TinybudTown/scripts.pory"
	@ 2: Met Rival's Mom (and is corresponding gender)
# 32 "data/maps/TinybudTown/scripts.pory"
	@ 3: Entered Hall of Fame
# 33 "data/maps/TinybudTown/scripts.pory"
	@ 4: Completed Lati TV / SS Ticket event
# 34 "data/maps/TinybudTown/scripts.pory"
	@ 5: Exited house after above event
# 35 "data/maps/TinybudTown/scripts.pory"

# 36 "data/maps/TinybudTown/scripts.pory"
	@ State descriptions for VAR_TINYBUD_RIVAL_STATE
# 37 "data/maps/TinybudTown/scripts.pory"
	@ 1: Never occurs
# 38 "data/maps/TinybudTown/scripts.pory"
	@ 2: Entered Rival's bedroom
# 39 "data/maps/TinybudTown/scripts.pory"
	@ 3: Met Rival
# 40 "data/maps/TinybudTown/scripts.pory"
	@ 4: Received Pokedex
# 41 "data/maps/TinybudTown/scripts.pory"

# 42 "data/maps/TinybudTown/scripts.pory"

# 43 "data/maps/TinybudTown/scripts.pory"
TinybudTown_OnTransition:
# 44 "data/maps/TinybudTown/scripts.pory"
	setflag FLAG_VISITED_TINYBUD_TOWN
# 45 "data/maps/TinybudTown/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 46 "data/maps/TinybudTown/scripts.pory"
	call_if_eq VAR_INTRO_STATE, 2, TinybudTown_EventScript_MoveMomToMaysDoor
# 47 "data/maps/TinybudTown/scripts.pory"
	call_if_eq VAR_TINYBUD_TOWN_STATE, 3, TinybudTown_EventScript_SetMomStandingInFrontOfDoorPos
# 48 "data/maps/TinybudTown/scripts.pory"
	call_if_eq VAR_TINYBUD_HOUSES_STATE_MAY, 4, TinybudTown_EventScript_SetExitedHouseAfterLatiSSTicketEvent
# 49 "data/maps/TinybudTown/scripts.pory"
	call_if_eq VAR_TINYBUD_HOUSES_STATE_BRENDAN, 4, TinybudTown_EventScript_SetExitedHouseAfterLatiSSTicketEvent
# 50 "data/maps/TinybudTown/scripts.pory"
	call_if_eq VAR_GREENGLADE_RIVAL_STATE, 1, TinybudTown_EventScript_MoveRivalFromGreenglade
# 51 "data/maps/TinybudTown/scripts.pory"
	call_if_eq VAR_TINYBUD_RIVAL_STATE, 3, TinybudTown_EventScript_SetRivalLeftForRoute103
# 52 "data/maps/TinybudTown/scripts.pory"
	call_if_eq VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 1, TinybudTown_EventScript_HideMapNamePopup
# 53 "data/maps/TinybudTown/scripts.pory"
	call_if_eq VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 2, TinybudTown_EventScript_LeftLabAfterDexUpgrade
# 54 "data/maps/TinybudTown/scripts.pory"
	end
# 55 "data/maps/TinybudTown/scripts.pory"

# 56 "data/maps/TinybudTown/scripts.pory"
TinybudTown_EventScript_LeftLabAfterDexUpgrade::
# 57 "data/maps/TinybudTown/scripts.pory"
	setvar VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 3
# 58 "data/maps/TinybudTown/scripts.pory"
	return
# 59 "data/maps/TinybudTown/scripts.pory"

# 60 "data/maps/TinybudTown/scripts.pory"
TinybudTown_EventScript_HideMapNamePopup::
# 61 "data/maps/TinybudTown/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 62 "data/maps/TinybudTown/scripts.pory"
	return
# 63 "data/maps/TinybudTown/scripts.pory"

# 64 "data/maps/TinybudTown/scripts.pory"
TinybudTown_EventScript_SetRivalLeftForRoute103::
# 65 "data/maps/TinybudTown/scripts.pory"
	setflag FLAG_RIVAL_LEFT_FOR_ROUTE103
# 66 "data/maps/TinybudTown/scripts.pory"
	return
# 67 "data/maps/TinybudTown/scripts.pory"

# 68 "data/maps/TinybudTown/scripts.pory"
TinybudTown_EventScript_MoveRivalFromGreenglade::
# 69 "data/maps/TinybudTown/scripts.pory"
	setvar VAR_GREENGLADE_RIVAL_STATE, 2
# 70 "data/maps/TinybudTown/scripts.pory"
	setflag FLAG_HIDE_GREENGLADE_TOWN_RIVAL
# 71 "data/maps/TinybudTown/scripts.pory"
	return
# 72 "data/maps/TinybudTown/scripts.pory"

# 73 "data/maps/TinybudTown/scripts.pory"
TinybudTown_EventScript_SetExitedHouseAfterLatiSSTicketEvent::
# 74 "data/maps/TinybudTown/scripts.pory"
	setvar VAR_TINYBUD_HOUSES_STATE_MAY, 5
# 75 "data/maps/TinybudTown/scripts.pory"
	setvar VAR_TINYBUD_HOUSES_STATE_BRENDAN, 5
# 76 "data/maps/TinybudTown/scripts.pory"
	return
# 77 "data/maps/TinybudTown/scripts.pory"

# 78 "data/maps/TinybudTown/scripts.pory"
TinybudTown_EventScript_MoveMomToMaysDoor::
# 79 "data/maps/TinybudTown/scripts.pory"
	setobjectxyperm LOCALID_MOM, 14, 8
# 80 "data/maps/TinybudTown/scripts.pory"
	return
# 81 "data/maps/TinybudTown/scripts.pory"

# 82 "data/maps/TinybudTown/scripts.pory"
TinybudTown_EventScript_SetMomStandingInFrontOfDoorPos::
# 83 "data/maps/TinybudTown/scripts.pory"
	setobjectmovementtype LOCALID_MOM, MOVEMENT_TYPE_FACE_DOWN
# 84 "data/maps/TinybudTown/scripts.pory"
	checkplayergender
# 85 "data/maps/TinybudTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, TinybudTown_EventScript_SetMomInFrontOfDoorMale
# 86 "data/maps/TinybudTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, TinybudTown_EventScript_SetMomInFrontOfDoorFemale
# 87 "data/maps/TinybudTown/scripts.pory"
	return
# 88 "data/maps/TinybudTown/scripts.pory"

# 89 "data/maps/TinybudTown/scripts.pory"
TinybudTown_EventScript_SetMomInFrontOfDoorMale::
# 90 "data/maps/TinybudTown/scripts.pory"
	setobjectxyperm LOCALID_MOM, 5, 9
# 91 "data/maps/TinybudTown/scripts.pory"
	return
# 92 "data/maps/TinybudTown/scripts.pory"

# 93 "data/maps/TinybudTown/scripts.pory"
TinybudTown_EventScript_SetMomInFrontOfDoorFemale::
# 94 "data/maps/TinybudTown/scripts.pory"
	setobjectxyperm LOCALID_MOM, 14, 9
# 95 "data/maps/TinybudTown/scripts.pory"
	return
# 96 "data/maps/TinybudTown/scripts.pory"

# 97 "data/maps/TinybudTown/scripts.pory"
TinybudTown_OnFrame:
# 98 "data/maps/TinybudTown/scripts.pory"
	.2byte 0
# 99 "data/maps/TinybudTown/scripts.pory"

# 100 "data/maps/TinybudTown/scripts.pory"
TinybudTown_OnWarp:
# 101 "data/maps/TinybudTown/scripts.pory"
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 1, TinybudTown_EventScript_SetRivalBirchPosForDexUpgrade
# 102 "data/maps/TinybudTown/scripts.pory"
	.2byte 0
# 103 "data/maps/TinybudTown/scripts.pory"

# 104 "data/maps/TinybudTown/scripts.pory"
TinybudTown_EventScript_SetRivalBirchPosForDexUpgrade::
# 105 "data/maps/TinybudTown/scripts.pory"
	addobject LOCALID_BIRCH
# 106 "data/maps/TinybudTown/scripts.pory"
	addobject LOCALID_RIVAL
# 107 "data/maps/TinybudTown/scripts.pory"
	checkplayergender
# 108 "data/maps/TinybudTown/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, TinybudTown_EventScript_SetRivalBirchPosForDexUpgradeMale
# 109 "data/maps/TinybudTown/scripts.pory"
	goto TinybudTown_EventScript_SetRivalBirchPosForDexUpgradeFemale
# 110 "data/maps/TinybudTown/scripts.pory"
	end
# 111 "data/maps/TinybudTown/scripts.pory"

# 112 "data/maps/TinybudTown/scripts.pory"
TinybudTown_EventScript_SetRivalBirchPosForDexUpgradeMale::
# 113 "data/maps/TinybudTown/scripts.pory"
	setobjectxy LOCALID_RIVAL, 6, 10
# 114 "data/maps/TinybudTown/scripts.pory"
	setobjectxy LOCALID_BIRCH, 5, 10
# 115 "data/maps/TinybudTown/scripts.pory"
	end
# 116 "data/maps/TinybudTown/scripts.pory"

# 117 "data/maps/TinybudTown/scripts.pory"
TinybudTown_EventScript_SetRivalBirchPosForDexUpgradeFemale::
# 118 "data/maps/TinybudTown/scripts.pory"
	setobjectxy LOCALID_RIVAL, 13, 10
# 119 "data/maps/TinybudTown/scripts.pory"
	setobjectxy LOCALID_BIRCH, 14, 10
# 120 "data/maps/TinybudTown/scripts.pory"
	end
# 121 "data/maps/TinybudTown/scripts.pory"

# 122 "data/maps/TinybudTown/scripts.pory"
TinybudTown_EventScript_FatMan::
# 123 "data/maps/TinybudTown/scripts.pory"
	msgbox TinybudTown_Text_CanUsePCToStoreItems, MSGBOX_NPC
# 124 "data/maps/TinybudTown/scripts.pory"
	end
# 125 "data/maps/TinybudTown/scripts.pory"

# 126 "data/maps/TinybudTown/scripts.pory"
TinybudTown_EventScript_TownSign::
# 127 "data/maps/TinybudTown/scripts.pory"
	msgbox TinybudTown_Text_TownSign, MSGBOX_SIGN
# 128 "data/maps/TinybudTown/scripts.pory"
	end
# 129 "data/maps/TinybudTown/scripts.pory"

# 130 "data/maps/TinybudTown/scripts.pory"
TinybudTown_EventScript_PlayersHouseSign::
# 131 "data/maps/TinybudTown/scripts.pory"
	lockall
# 132 "data/maps/TinybudTown/scripts.pory"
	msgbox TinybudTown_Text_PlayersHouse, MSGBOX_DEFAULT
# 133 "data/maps/TinybudTown/scripts.pory"
	releaseall
# 134 "data/maps/TinybudTown/scripts.pory"
	end
# 135 "data/maps/TinybudTown/scripts.pory"

# 136 "data/maps/TinybudTown/scripts.pory"
TinybudTown_Text_CanUsePCToStoreItems:
# 137 "data/maps/TinybudTown/scripts.pory"
	.string "If you use a PC, you can store items\n"
# 138 "data/maps/TinybudTown/scripts.pory"
	.string "and POKéMON.\p"
# 139 "data/maps/TinybudTown/scripts.pory"
	.string "The power of science is staggering!$"
# 140 "data/maps/TinybudTown/scripts.pory"

# 141 "data/maps/TinybudTown/scripts.pory"
TinybudTown_Text_TownSign:
# 142 "data/maps/TinybudTown/scripts.pory"
	.string "TINYBUD TOWN\n"
# 143 "data/maps/TinybudTown/scripts.pory"
	.string "“A town of budding greatness.”$"
# 144 "data/maps/TinybudTown/scripts.pory"

# 145 "data/maps/TinybudTown/scripts.pory"
TinybudTown_Text_PlayersHouse:
# 146 "data/maps/TinybudTown/scripts.pory"
	.string "{PLAYER}'s HOUSE$"

TinybudTown_EventScript_BlockExitBeforeStarter::
# 150 "data/maps/TinybudTown/scripts.pory"
	lock
# 151 "data/maps/TinybudTown/scripts.pory"
	msgbox TinybudTown_EventScript_BlockExitBeforeStarter_Text_0
# 152 "data/maps/TinybudTown/scripts.pory"
	closemessage
# 153 "data/maps/TinybudTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
# 154 "data/maps/TinybudTown/scripts.pory"
	waitmovement 0
# 155 "data/maps/TinybudTown/scripts.pory"
	release
	end


TinybudTown_EventScript_BlockExitBeforeTalkToMom::
# 160 "data/maps/TinybudTown/scripts.pory"
	lock
# 161 "data/maps/TinybudTown/scripts.pory"
	msgbox TinybudTown_EventScript_BlockExitBeforeTalkToMom_Text_0
# 162 "data/maps/TinybudTown/scripts.pory"
	closemessage
# 163 "data/maps/TinybudTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
# 164 "data/maps/TinybudTown/scripts.pory"
	waitmovement 0
# 165 "data/maps/TinybudTown/scripts.pory"
	release
	end


TinybudTown_EventScript_Boy::
# 170 "data/maps/TinybudTown/scripts.pory"
	msgbox TinybudTown_EventScript_Boy_Text_0, MSGBOX_NPC
	end


TinybudTown_EventScript_Girl::
# 175 "data/maps/TinybudTown/scripts.pory"
	lock
# 176 "data/maps/TinybudTown/scripts.pory"
	faceplayer
# 177 "data/maps/TinybudTown/scripts.pory"
	msgbox TinybudTown_EventScript_Girl_Text_0
# 178 "data/maps/TinybudTown/scripts.pory"
	release
	end


TinybudTown_EventScript_Budew::
# 183 "data/maps/TinybudTown/scripts.pory"
	lock
# 184 "data/maps/TinybudTown/scripts.pory"
	faceplayer
# 185 "data/maps/TinybudTown/scripts.pory"
	playmoncry SPECIES_BUDEW, CRY_MODE_NORMAL
# 186 "data/maps/TinybudTown/scripts.pory"
	msgbox TinybudTown_EventScript_Budew_Text_0, MSGBOX_DEFAULT
# 187 "data/maps/TinybudTown/scripts.pory"
	waitmoncry
# 188 "data/maps/TinybudTown/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 189 "data/maps/TinybudTown/scripts.pory"
	compare VAR_RESULT, DIR_NORTH
	goto_if_eq TinybudTown_EventScript_Budew_2
# 197 "data/maps/TinybudTown/scripts.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_eq TinybudTown_EventScript_Budew_3
# 205 "data/maps/TinybudTown/scripts.pory"
	compare VAR_RESULT, DIR_SOUTH
	goto_if_eq TinybudTown_EventScript_Budew_4
# 213 "data/maps/TinybudTown/scripts.pory"
	compare VAR_RESULT, DIR_WEST
	goto_if_eq TinybudTown_EventScript_Budew_5
TinybudTown_EventScript_Budew_1:
# 221 "data/maps/TinybudTown/scripts.pory"
	release
	end

TinybudTown_EventScript_Budew_2:
# 190 "data/maps/TinybudTown/scripts.pory"
	applymovement 4, TinybudTown_Movement_BudewHopN
# 191 "data/maps/TinybudTown/scripts.pory"
	playse SE_LEDGE
# 192 "data/maps/TinybudTown/scripts.pory"
	waitmovement 0
# 193 "data/maps/TinybudTown/scripts.pory"
	applymovement 4, TinybudTown_Movement_BudewHopN
# 194 "data/maps/TinybudTown/scripts.pory"
	playse SE_LEDGE
# 195 "data/maps/TinybudTown/scripts.pory"
	waitmovement 0
	goto TinybudTown_EventScript_Budew_1

TinybudTown_EventScript_Budew_3:
# 198 "data/maps/TinybudTown/scripts.pory"
	applymovement 4, TinybudTown_Movement_BudewHopE
# 199 "data/maps/TinybudTown/scripts.pory"
	playse SE_LEDGE
# 200 "data/maps/TinybudTown/scripts.pory"
	waitmovement 0
# 201 "data/maps/TinybudTown/scripts.pory"
	applymovement 4, TinybudTown_Movement_BudewHopE
# 202 "data/maps/TinybudTown/scripts.pory"
	playse SE_LEDGE
# 203 "data/maps/TinybudTown/scripts.pory"
	waitmovement 0
	goto TinybudTown_EventScript_Budew_1

TinybudTown_EventScript_Budew_4:
# 206 "data/maps/TinybudTown/scripts.pory"
	applymovement 4, TinybudTown_Movement_BudewHopS
# 207 "data/maps/TinybudTown/scripts.pory"
	playse SE_LEDGE
# 208 "data/maps/TinybudTown/scripts.pory"
	waitmovement 0
# 209 "data/maps/TinybudTown/scripts.pory"
	applymovement 4, TinybudTown_Movement_BudewHopS
# 210 "data/maps/TinybudTown/scripts.pory"
	playse SE_LEDGE
# 211 "data/maps/TinybudTown/scripts.pory"
	waitmovement 0
	goto TinybudTown_EventScript_Budew_1

TinybudTown_EventScript_Budew_5:
# 214 "data/maps/TinybudTown/scripts.pory"
	applymovement 4, TinybudTown_Movement_BudewHopW
# 215 "data/maps/TinybudTown/scripts.pory"
	playse SE_LEDGE
# 216 "data/maps/TinybudTown/scripts.pory"
	waitmovement 0
# 217 "data/maps/TinybudTown/scripts.pory"
	applymovement 4, TinybudTown_Movement_BudewHopW
# 218 "data/maps/TinybudTown/scripts.pory"
	playse SE_LEDGE
# 219 "data/maps/TinybudTown/scripts.pory"
	waitmovement 0
	goto TinybudTown_EventScript_Budew_1


# 225 "data/maps/TinybudTown/scripts.pory"
TinybudTown_Movement_BudewHopN:
# 226 "data/maps/TinybudTown/scripts.pory"
	disable_jump_landing_ground_effect
# 227 "data/maps/TinybudTown/scripts.pory"
	jump_in_place_down
	step_end

# 230 "data/maps/TinybudTown/scripts.pory"
TinybudTown_Movement_BudewHopE:
# 231 "data/maps/TinybudTown/scripts.pory"
	disable_jump_landing_ground_effect
# 232 "data/maps/TinybudTown/scripts.pory"
	jump_in_place_left
	step_end

# 235 "data/maps/TinybudTown/scripts.pory"
TinybudTown_Movement_BudewHopS:
# 236 "data/maps/TinybudTown/scripts.pory"
	disable_jump_landing_ground_effect
# 237 "data/maps/TinybudTown/scripts.pory"
	jump_in_place_up
	step_end

# 240 "data/maps/TinybudTown/scripts.pory"
TinybudTown_Movement_BudewHopW:
# 241 "data/maps/TinybudTown/scripts.pory"
	disable_jump_landing_ground_effect
# 242 "data/maps/TinybudTown/scripts.pory"
	jump_in_place_right
	step_end

TinybudTown_EventScript_BlockExitBeforeStarter_Text_0:
# 151 "data/maps/TinybudTown/scripts.pory"
	.string "I should go meet DAD at the LUSH\n"
	.string "CLEARING.$"

TinybudTown_EventScript_BlockExitBeforeTalkToMom_Text_0:
# 161 "data/maps/TinybudTown/scripts.pory"
	.string "I need to go tell MOM before I leave.$"

TinybudTown_EventScript_Boy_Text_0:
# 170 "data/maps/TinybudTown/scripts.pory"
	.string "I need to head to GREENGLADE TOWN to\n"
	.string "buy more POKé BALLS soon.\p"
	.string "The path there is full of wild POKéMON\n"
	.string "though!$"

TinybudTown_EventScript_Girl_Text_0:
# 177 "data/maps/TinybudTown/scripts.pory"
	.string "BUDEW is the town's mascot!\p"
	.string "Isn't he a cutie?$"

TinybudTown_EventScript_Budew_Text_0:
# 186 "data/maps/TinybudTown/scripts.pory"
	.string "BUDEW: Dew dew!$"
