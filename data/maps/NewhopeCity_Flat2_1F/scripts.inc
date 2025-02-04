NewhopeCity_Flat2_1F_MapScripts::
	.byte 0

NewhopeCity_Flat2_1F_EventScript_OldWoman::
	msgbox NewhopeCity_Flat2_1F_Text_DevonWorkersLiveHere, MSGBOX_NPC
	end

NewhopeCity_Flat2_1F_EventScript_Skitty::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_SKITTY, CRY_MODE_NORMAL
	msgbox NewhopeCity_Flat2_1F_Text_Skitty, MSGBOX_DEFAULT
	waitmoncry
	release
	end

NewhopeCity_Flat2_1F_Text_DevonWorkersLiveHere:
	.string "DEVON CORPORATION's workers live in\n"
	.string "this building.$"

NewhopeCity_Flat2_1F_Text_Skitty:
	.string "SKITTY: Gyaaaah!$"

