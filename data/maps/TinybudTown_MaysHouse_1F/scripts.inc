TinybudTown_MaysHouse_1F_MapScripts::
	.byte 0


TinybudTown_House1_EventScript_OldLady::
# 4 "data/maps/TinybudTown_MaysHouse_1F/scripts.pory"
	msgbox TinybudTown_House1_EventScript_OldLady_Text_0, MSGBOX_NPC
	return


TinybudTown_House1_EventScript_Girl::
# 8 "data/maps/TinybudTown_MaysHouse_1F/scripts.pory"
	compare VAR_INTRO_STATE, 6
	goto_if_lt TinybudTown_House1_EventScript_Girl_1
# 12 "data/maps/TinybudTown_MaysHouse_1F/scripts.pory"
	msgbox TinybudTown_House1_EventScript_Girl_Text_1, MSGBOX_NPC
	return

TinybudTown_House1_EventScript_Girl_1:
# 9 "data/maps/TinybudTown_MaysHouse_1F/scripts.pory"
	msgbox TinybudTown_House1_EventScript_Girl_Text_0, MSGBOX_NPC
	return


TinybudTown_House1_EventScript_Buneary::
# 17 "data/maps/TinybudTown_MaysHouse_1F/scripts.pory"
	lock
# 18 "data/maps/TinybudTown_MaysHouse_1F/scripts.pory"
	faceplayer
# 19 "data/maps/TinybudTown_MaysHouse_1F/scripts.pory"
	playmoncry SPECIES_BUNEARY, CRY_MODE_NORMAL
# 20 "data/maps/TinybudTown_MaysHouse_1F/scripts.pory"
	msgbox TinybudTown_House1_EventScript_Buneary_Text_0
# 21 "data/maps/TinybudTown_MaysHouse_1F/scripts.pory"
	waitmoncry
# 22 "data/maps/TinybudTown_MaysHouse_1F/scripts.pory"
	closemessage
# 23 "data/maps/TinybudTown_MaysHouse_1F/scripts.pory"
	release
	end


TinybudTown_House1_EventScript_OldLady_Text_0:
# 4 "data/maps/TinybudTown_MaysHouse_1F/scripts.pory"
	.string "{PLAYER}, be careful if you leave\n"
	.string "TINYBUD.\p"
	.string "I've been hearing stories of a new\n"
	.string "group causing trouble across TANSO.$"

TinybudTown_House1_EventScript_Girl_Text_0:
# 9 "data/maps/TinybudTown_MaysHouse_1F/scripts.pory"
	.string "{PLAYER}, {PLAYER}!\p"
	.string "Is it true that you're gonna get your\n"
	.string "own POKéMON?$"

TinybudTown_House1_EventScript_Girl_Text_1:
# 12 "data/maps/TinybudTown_MaysHouse_1F/scripts.pory"
	.string "{PLAYER}, {PLAYER}!\p"
	.string "Is it true that you got your own\n"
	.string "POKéMON?$"

TinybudTown_House1_EventScript_Buneary_Text_0:
# 20 "data/maps/TinybudTown_MaysHouse_1F/scripts.pory"
	.string "BUNEARY: Gyaaaah!$"
