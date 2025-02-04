NewhopeCity_Flat1_1F_MapScripts::
	.byte 0

NewhopeCity_Flat1_1F_EventScript_Man::
	msgbox NewhopeCity_Flat1_1F_Text_EveryPokemonHasAbility, MSGBOX_NPC
	end

NewhopeCity_Flat1_1F_EventScript_Woman::
	msgbox NewhopeCity_Flat1_1F_Text_PokemonStrange, MSGBOX_NPC
	end

NewhopeCity_Flat1_1F_Text_EveryPokemonHasAbility:
	.string "Every POKéMON has a special ability\n"
	.string "that it can use.$"

NewhopeCity_Flat1_1F_Text_PokemonStrange:
	.string "POKéMON are such strange creatures.$"

