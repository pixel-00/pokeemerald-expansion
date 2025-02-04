NewhopeCity_Flat2_3F_MapScripts::
	.byte 0

NewhopeCity_Flat2_3F_EventScript_DevonEmployee::
	msgbox NewhopeCity_Flat2_3F_Text_PresidentCollectsRareStones, MSGBOX_NPC
	end

NewhopeCity_Flat2_3F_EventScript_Woman::
	msgbox NewhopeCity_Flat2_3F_Text_PresidentsSonAlsoCollectsRareStones, MSGBOX_NPC
	end

NewhopeCity_Flat2_3F_Text_PresidentCollectsRareStones:
	.string "DEVON's PRESIDENT likes to collect\n"
	.string "rare stones.$"

NewhopeCity_Flat2_3F_Text_PresidentsSonAlsoCollectsRareStones:
	.string "I think the PRESIDENT's son also\n"
	.string "collects rare stones.$"

