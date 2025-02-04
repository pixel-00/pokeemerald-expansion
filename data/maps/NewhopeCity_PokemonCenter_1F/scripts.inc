.set LOCALID_NURSE, 1

NewhopeCity_PokemonCenter_1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, NewhopeCity_PokemonCenter_1F_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

NewhopeCity_PokemonCenter_1F_OnTransition:
	setrespawn HEAL_LOCATION_NEWHOPE_CITY
	call Common_EventScript_UpdateBrineyLocation
	end

NewhopeCity_PokemonCenter_1F_EventScript_Nurse::
	setvar VAR_0x800B, LOCALID_NURSE
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end

NewhopeCity_PokemonCenter_1F_EventScript_Man::
	msgbox NewhopeCity_PokemonCenter_1F_Text_PokemonHavePersonalities, MSGBOX_NPC
	end

NewhopeCity_PokemonCenter_1F_EventScript_Boy::
	msgbox NewhopeCity_PokemonCenter_1F_Text_MaleAndFemalePokemon, MSGBOX_NPC
	end

NewhopeCity_PokemonCenter_1F_EventScript_Girl::
	msgbox NewhopeCity_PokemonCenter_1F_Text_HMCutNextDoor, MSGBOX_NPC
	end

NewhopeCity_PokemonCenter_1F_Text_PokemonHavePersonalities:
	.string "My POKéMON has a NAIVE nature, and my\n"
	.string "friend's has a JOLLY nature.\p"
	.string "It's fascinating how POKéMON have\n"
	.string "personalities!$"

NewhopeCity_PokemonCenter_1F_Text_MaleAndFemalePokemon:
	.string "Just like people, there are male and\n"
	.string "female POKéMON.\p"
	.string "But no one seems to have any idea how\n"
	.string "they're different.$"

NewhopeCity_PokemonCenter_1F_Text_HMCutNextDoor:
	.string "The man next door gave me an HM!\p"
	.string "I used it to teach my POKéMON how to\n"
	.string "CUT down skinny trees.$"

