.set LOCALID_STAIR_GUARD, 2

NewhopeCity_DevonCorp_1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, NewhopeCity_DevonCorp_1F_OnTransition
	.byte 0

NewhopeCity_DevonCorp_1F_OnTransition:
	call_if_unset FLAG_RETURNED_DEVON_GOODS, NewhopeCity_DevonCorp_1F_EventScript_BlockStairs
	end

NewhopeCity_DevonCorp_1F_EventScript_BlockStairs::
	setobjectxyperm LOCALID_STAIR_GUARD, 14, 2
	setobjectmovementtype LOCALID_STAIR_GUARD, MOVEMENT_TYPE_FACE_DOWN
	return

NewhopeCity_DevonCorp_1F_EventScript_Employee::
	lock
	faceplayer
	goto_if_set FLAG_RETURNED_DEVON_GOODS, NewhopeCity_DevonCorp_1F_EventScript_GoodsRecovered
	goto_if_set FLAG_DEVON_GOODS_STOLEN, NewhopeCity_DevonCorp_1F_EventScript_RobberWasntBright
	msgbox NewhopeCity_DevonCorp_1F_Text_ThoseShoesAreOurProduct, MSGBOX_DEFAULT
	release
	end

NewhopeCity_DevonCorp_1F_EventScript_RobberWasntBright::
	msgbox NewhopeCity_DevonCorp_1F_Text_RobberWasntVeryBright, MSGBOX_DEFAULT
	release
	end

NewhopeCity_DevonCorp_1F_EventScript_GoodsRecovered::
	msgbox NewhopeCity_DevonCorp_1F_Text_SoundsLikeStolenGoodsRecovered, MSGBOX_DEFAULT
	release
	end

NewhopeCity_DevonCorp_1F_EventScript_StairGuard::
	lock
	faceplayer
	goto_if_set FLAG_RETURNED_DEVON_GOODS, NewhopeCity_DevonCorp_1F_EventScript_AlwaysWelcome
	goto_if_set FLAG_RECOVERED_DEVON_GOODS, NewhopeCity_DevonCorp_1F_EventScript_GotRobbed
	goto_if_set FLAG_DEVON_GOODS_STOLEN, NewhopeCity_DevonCorp_1F_EventScript_GotRobbed
	msgbox NewhopeCity_DevonCorp_1F_Text_OnlyAuthorizedPeopleEnter, MSGBOX_DEFAULT
	release
	end

NewhopeCity_DevonCorp_1F_EventScript_AlwaysWelcome::
	msgbox NewhopeCity_DevonCorp_1F_Text_YoureAlwaysWelcomeHere, MSGBOX_DEFAULT
	release
	end

NewhopeCity_DevonCorp_1F_EventScript_GotRobbed::
	msgbox NewhopeCity_DevonCorp_1F_Text_HowCouldWeGetRobbed, MSGBOX_DEFAULT
	release
	end

NewhopeCity_DevonCorp_1F_EventScript_Greeter::
	lock
	faceplayer
	goto_if_set FLAG_RETURNED_DEVON_GOODS, NewhopeCity_DevonCorp_1F_EventScript_WelcomeToDevonCorp
	goto_if_set FLAG_RECOVERED_DEVON_GOODS, NewhopeCity_DevonCorp_1F_EventScript_StaffGotRobbed
	goto_if_set FLAG_DEVON_GOODS_STOLEN, NewhopeCity_DevonCorp_1F_EventScript_StaffGotRobbed
	msgbox NewhopeCity_DevonCorp_1F_Text_WelcomeToDevonCorp, MSGBOX_DEFAULT
	release
	end

NewhopeCity_DevonCorp_1F_EventScript_WelcomeToDevonCorp::
	msgbox NewhopeCity_DevonCorp_1F_Text_WelcomeToDevonCorp, MSGBOX_DEFAULT
	release
	end

NewhopeCity_DevonCorp_1F_EventScript_StaffGotRobbed::
	msgbox NewhopeCity_DevonCorp_1F_Text_StaffGotRobbed, MSGBOX_DEFAULT
	release
	end

NewhopeCity_DevonCorp_1F_EventScript_RocksMetalDisplay::
	msgbox NewhopeCity_DevonCorp_1F_Text_RocksMetalDisplay, MSGBOX_SIGN
	end

NewhopeCity_DevonCorp_1F_EventScript_ProductsDisplay::
	msgbox NewhopeCity_DevonCorp_1F_Text_ProductDisplay, MSGBOX_SIGN
	end

NewhopeCity_DevonCorp_1F_Text_WelcomeToDevonCorp:
	.string "Hello and welcome to the DEVON\n"
	.string "CORPORATION.\p"
	.string "We're proud producers of items and\n"
	.string "medicine that enhance your life.$"

NewhopeCity_DevonCorp_1F_Text_StaffGotRobbed:
	.string "One of our research staff stupidly\n"
	.string "got robbed of an important parcel.$"

NewhopeCity_DevonCorp_1F_Text_ThoseShoesAreOurProduct:
	.string "Hey, those RUNNING SHOES!\n"
	.string "They're one of our products!\p"
	.string "It makes me happy when I see someone\n"
	.string "using something we made.$"

NewhopeCity_DevonCorp_1F_Text_RobberWasntVeryBright:
	.string "That stolen parcel…\p"
	.string "Well, sure it's important, but it's not\n"
	.string "anything that anyone can use.\p"
	.string "In my estimation, that robber must not\n"
	.string "have been very bright.$"

NewhopeCity_DevonCorp_1F_Text_SoundsLikeStolenGoodsRecovered:
	.string "It sounds like they've recovered\n"
	.string "the ripped-off DEVON GOODS.$"

NewhopeCity_DevonCorp_1F_Text_OnlyAuthorizedPeopleEnter:
	.string "I'm sorry, only authorized people\n"
	.string "are allowed to enter here.$"

NewhopeCity_DevonCorp_1F_Text_HowCouldWeGetRobbed:
	.string "It's beyond stupid.\n"
	.string "How could we get robbed?$"

NewhopeCity_DevonCorp_1F_Text_YoureAlwaysWelcomeHere:
	.string "Hi, there!\n"
	.string "You're always welcome here!$"

NewhopeCity_DevonCorp_1F_Text_RocksMetalDisplay:
	.string "Samples of rocks and metal are\n"
	.string "displayed in the glass case.\p"
	.string "There's a panel with some writing\n"
	.string "on it…\p"
	.string "“DEVON CORPORATION got its start as\n"
	.string "a producer of stones from quarries.\p"
	.string "“The company also produced iron from\n"
	.string "filings in the sand.\p"
	.string "“From that humble start as a producer\n"
	.string "of raw materials, DEVON developed.\p"
	.string "“DEVON is now a manufacturer of a wide\n"
	.string "range of industrial products.”$"

NewhopeCity_DevonCorp_1F_Text_ProductDisplay:
	.string "Prototypes and test products fill\n"
	.string "the glass display case.\p"
	.string "There's a panel with a description…\p"
	.string "“In addition to industrial products,\n"
	.string "DEVON now markets sundries and\l"
	.string "pharmaceuticals for better lifestyles.\p"
	.string "“Recently, DEVON has begun marketing\n"
	.string "tools for POKéMON TRAINERS, including\l"
	.string "POKé BALLS and POKéNAV systems.”$"

