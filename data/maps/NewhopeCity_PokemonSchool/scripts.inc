NewhopeCity_PokemonSchool_MapScripts::
	.byte 0

NewhopeCity_PokemonSchool_EventScript_Blackboard::
	lockall
	msgbox NewhopeCity_PokemonSchool_Text_BlackboardListsStatusChanges, MSGBOX_DEFAULT
	goto NewhopeCity_PokemonSchool_EventScript_ChooseBlackboardTopic
	end

NewhopeCity_PokemonSchool_EventScript_ChooseBlackboardTopic::
	message NewhopeCity_PokemonSchool_Text_ReadWhichTopic
	waitmessage
	multichoicegrid 8, 1, MULTI_STATUS_INFO, 3, FALSE
	switch VAR_RESULT
	case 0, NewhopeCity_PokemonSchool_EventScript_Poison
	case 1, NewhopeCity_PokemonSchool_EventScript_Paralysis
	case 2, NewhopeCity_PokemonSchool_EventScript_Sleep
	case 3, NewhopeCity_PokemonSchool_EventScript_Burn
	case 4, NewhopeCity_PokemonSchool_EventScript_Freeze
	case 5, NewhopeCity_PokemonSchool_EventScript_ExitTopicSelect
	case MULTI_B_PRESSED, NewhopeCity_PokemonSchool_EventScript_ExitTopicSelect
	end

NewhopeCity_PokemonSchool_EventScript_Poison::
	msgbox NewhopeCity_PokemonSchool_Text_ExplainPoison, MSGBOX_DEFAULT
	goto NewhopeCity_PokemonSchool_EventScript_ChooseBlackboardTopic
	end

NewhopeCity_PokemonSchool_EventScript_Paralysis::
	msgbox NewhopeCity_PokemonSchool_Text_ExplainParalysis, MSGBOX_DEFAULT
	goto NewhopeCity_PokemonSchool_EventScript_ChooseBlackboardTopic
	end

NewhopeCity_PokemonSchool_EventScript_Sleep::
	msgbox NewhopeCity_PokemonSchool_Text_ExplainSleep, MSGBOX_DEFAULT
	goto NewhopeCity_PokemonSchool_EventScript_ChooseBlackboardTopic
	end

NewhopeCity_PokemonSchool_EventScript_Burn::
	msgbox NewhopeCity_PokemonSchool_Text_ExplainBurn, MSGBOX_DEFAULT
	goto NewhopeCity_PokemonSchool_EventScript_ChooseBlackboardTopic
	end

NewhopeCity_PokemonSchool_EventScript_Freeze::
	msgbox NewhopeCity_PokemonSchool_Text_ExplainFreeze, MSGBOX_DEFAULT
	goto NewhopeCity_PokemonSchool_EventScript_ChooseBlackboardTopic
	end

NewhopeCity_PokemonSchool_EventScript_ExitTopicSelect::
	releaseall
	end

NewhopeCity_PokemonSchool_EventScript_GameboyKid1::
	msgbox NewhopeCity_PokemonSchool_Text_TradingRightNow, MSGBOX_NPC
	end

NewhopeCity_PokemonSchool_EventScript_GameboyKid2::
	msgbox NewhopeCity_PokemonSchool_Text_AlwaysWantedSeedot, MSGBOX_NPC
	end

NewhopeCity_PokemonSchool_EventScript_RichBoy::
	msgbox NewhopeCity_PokemonSchool_Text_PokemontCantUseManMadeItems, MSGBOX_NPC
	end

NewhopeCity_PokemonSchool_EventScript_Lass::
	msgbox NewhopeCity_PokemonSchool_Text_ConfusedPokemonAttacksItself, MSGBOX_NPC
	end

NewhopeCity_PokemonSchool_EventScript_SchoolKidM::
	msgbox NewhopeCity_PokemonSchool_Text_PokemonHealItselfWithBerry, MSGBOX_NPC
	end

NewhopeCity_PokemonSchool_EventScript_StudentNotebook::
	msgbox NewhopeCity_PokemonSchool_Text_StudentsNotes, MSGBOX_SIGN
	end

NewhopeCity_PokemonSchool_EventScript_Teacher::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_QUICK_CLAW, NewhopeCity_PokemonSchool_EventScript_GaveQuickClaw
	call_if_eq VAR_FACING, DIR_EAST, NewhopeCity_PokemonSchool_EventScript_TeacherCheckOnStudentsEast
	call_if_eq VAR_FACING, DIR_WEST, NewhopeCity_PokemonSchool_EventScript_TeacherCheckOnStudentsWest
	msgbox NewhopeCity_PokemonSchool_Text_StudentsWhoDontStudyGetQuickClaw, MSGBOX_DEFAULT
	giveitem ITEM_QUICK_CLAW
	goto_if_eq VAR_RESULT, 0, Common_EventScript_ShowBagIsFull
	closemessage
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	setflag FLAG_RECEIVED_QUICK_CLAW
	release
	end

NewhopeCity_PokemonSchool_EventScript_TeacherCheckOnStudentsEast::
	applymovement VAR_LAST_TALKED, NewhopeCity_PokemonSchool_Movement_TeacherCheckOnStudentsEast
	waitmovement 0
	return

NewhopeCity_PokemonSchool_EventScript_TeacherCheckOnStudentsWest::
	applymovement VAR_LAST_TALKED, NewhopeCity_PokemonSchool_Movement_TeacherCheckOnStudentsWest
	waitmovement 0
	return

NewhopeCity_PokemonSchool_EventScript_GaveQuickClaw::
	msgbox NewhopeCity_PokemonSchool_Text_ExplainQuickClaw, MSGBOX_DEFAULT
	closemessage
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	release
	end

NewhopeCity_PokemonSchool_Movement_TeacherCheckOnStudentsWest:
	walk_left
	walk_down
	walk_down
	walk_right
	walk_in_place_faster_down
	delay_16
	delay_16
	delay_16
	walk_down
	walk_in_place_faster_left
	delay_16
	delay_16
	walk_right
	delay_16
	delay_16
	delay_8
	walk_up
	walk_left
	walk_left
	walk_up
	walk_up
	walk_right
	step_end

NewhopeCity_PokemonSchool_Movement_TeacherCheckOnStudentsEast:
	walk_right
	walk_right
	walk_down
	walk_down
	walk_left
	walk_left
	walk_in_place_faster_down
	delay_16
	delay_16
	delay_16
	walk_down
	walk_in_place_faster_left
	delay_16
	delay_16
	walk_right
	delay_16
	delay_16
	delay_8
	walk_up
	walk_right
	walk_up
	walk_up
	walk_left
	walk_left
	step_end

NewhopeCity_PokemonSchool_EventScript_Scott::
	lock
	faceplayer
	goto_if_set FLAG_MET_SCOTT_AFTER_OBTAINING_STONE_BADGE, NewhopeCity_PokemonSchool_EventScript_ScottWatchStudents
	goto_if_set FLAG_MET_SCOTT_NEWHOPE, NewhopeCity_PokemonSchool_EventScript_ScottSpokeAlready
	goto_if_set FLAG_BADGE01_GET, NewhopeCity_PokemonSchool_EventScript_ScottGreetHasBadge
	msgbox NewhopeCity_PokemonSchool_Text_ScottMetAlreadyCut, MSGBOX_DEFAULT
	addvar VAR_SCOTT_STATE, 1
	setflag FLAG_MET_SCOTT_NEWHOPE
	release
	end

NewhopeCity_PokemonSchool_EventScript_ScottSpokeAlready::
	goto_if_set FLAG_BADGE01_GET, NewhopeCity_PokemonSchool_EventScript_ScottNoticeBadge
	msgbox NewhopeCity_PokemonSchool_Text_StudentTalentLevelUnknown, MSGBOX_DEFAULT
	release
	end

NewhopeCity_PokemonSchool_EventScript_ScottGreetHasBadge::
	msgbox NewhopeCity_PokemonSchool_Text_ScottMetAlreadyStoneBadge, MSGBOX_DEFAULT
	goto NewhopeCity_PokemonSchool_EventScript_MetScottAfterBadge
	end

NewhopeCity_PokemonSchool_EventScript_ScottNoticeBadge::
	msgbox NewhopeCity_PokemonSchool_Text_ScottStoneBadge, MSGBOX_DEFAULT
	goto NewhopeCity_PokemonSchool_EventScript_MetScottAfterBadge
	end

NewhopeCity_PokemonSchool_EventScript_MetScottAfterBadge::
	addvar VAR_SCOTT_STATE, 1
	setflag FLAG_MET_SCOTT_AFTER_OBTAINING_STONE_BADGE
	release
	end

NewhopeCity_PokemonSchool_EventScript_ScottWatchStudents::
	msgbox NewhopeCity_PokemonSchool_Text_StudentTalentLevelUnknown, MSGBOX_DEFAULT
	release
	end

NewhopeCity_PokemonSchool_Text_BlackboardListsStatusChanges:
	.string "The blackboard lists status changes\n"
	.string "that may affect POKéMON in battle.$"

NewhopeCity_PokemonSchool_Text_ReadWhichTopic:
	.string "Which topic do you want to read?$"

NewhopeCity_PokemonSchool_Text_ExplainPoison:
	.string "If a POKéMON is poisoned, it will\n"
	.string "steadily lose HP.\p"
	.string "The effects of poison remain after\n"
	.string "a battle.\p"
	.string "A poisoned POKéMON's HP will drop\n"
	.string "while it is traveling.\p"
	.string "Heal a poisoning using an ANTIDOTE.$"

NewhopeCity_PokemonSchool_Text_ExplainParalysis:
	.string "If a POKéMON becomes paralyzed,\n"
	.string "its SPEED drops.\p"
	.string "It may also not be able to move while\n"
	.string "it is in battle.\p"
	.string "Paralysis remains after battle.\n"
	.string "Cure it using a PARLYZ HEAL.$"

NewhopeCity_PokemonSchool_Text_ExplainSleep:
	.string "If a POKéMON falls asleep, it will be\n"
	.string "unable to attack.\p"
	.string "A POKéMON may wake up on its own,\n"
	.string "but if a battle ends while it is\l"
	.string "sleeping, it will stay asleep.\p"
	.string "Wake it up using an AWAKENING.$"

NewhopeCity_PokemonSchool_Text_ExplainBurn:
	.string "A burn reduces ATTACK power, and it\n"
	.string "steadily reduces the victim's HP.\p"
	.string "A burn lingers after battle.\n"
	.string "Cure a burn using a BURN HEAL.$"

NewhopeCity_PokemonSchool_Text_ExplainFreeze:
	.string "If a POKéMON is frozen, it becomes\n"
	.string "completely helpless.\p"
	.string "It will remain frozen after battle.\n"
	.string "Thaw it out using an ICE HEAL.$"

NewhopeCity_PokemonSchool_Text_StudentsWhoDontStudyGetQuickClaw:
	.string "Students who don't study get a little\n"
	.string "taste of my QUICK CLAW.\p"
	.string "Whether or not you are a good student \n"
	.string "will be evident from the way you use\l"
	.string "this item.$"

NewhopeCity_PokemonSchool_Text_ExplainQuickClaw:
	.string "A POKéMON holding the QUICK CLAW will\n"
	.string "occasionally speed up and get to move\l"
	.string "before its opponent.\p"
	.string "There are many other items that are\n"
	.string "meant to be held by POKéMON.\p"
	.string "Just those alone will give you many\n"
	.string "topics to study!$"

NewhopeCity_PokemonSchool_Text_TradingRightNow:
	.string "I'm trading POKéMON with my friend\n"
	.string "right now.$"

NewhopeCity_PokemonSchool_Text_AlwaysWantedSeedot:
	.string "I always wanted a SEEDOT, and\n"
	.string "I'm finally getting one!$"

NewhopeCity_PokemonSchool_Text_PokemontCantUseManMadeItems:
	.string "POKéMON can hold items, but they\n"
	.string "don't know what to do with man-made\l"
	.string "items like POTION and ANTIDOTE.$"

NewhopeCity_PokemonSchool_Text_ConfusedPokemonAttacksItself:
	.string "You know how some POKéMON moves can\n"
	.string "confuse a POKéMON?\p"
	.string "A confused POKéMON will sometimes\n"
	.string "attack itself without meaning to.\p"
	.string "But once it leaves battle, it will\n"
	.string "return to normal.$"

NewhopeCity_PokemonSchool_Text_PokemonHealItselfWithBerry:
	.string "A POKéMON holding a BERRY will heal\n"
	.string "itself…\p"
	.string "There are many kinds of items that\n"
	.string "POKéMON can hold…\p"
	.string "Boy, it sure is hard taking notes\n"
	.string "down…$"

NewhopeCity_PokemonSchool_Text_StudentsNotes:
	.string "It's this student's notebook…\p"
	.string "POKéMON are to be caught using\n"
	.string "POKé BALLS.\p"
	.string "Up to six POKéMON can accompany\n"
	.string "a TRAINER.\p"
	.string "A TRAINER is someone who catches\n"
	.string "POKéMON, raises them, and battles\l"
	.string "with them.\p"
	.string "A TRAINER's mission is to defeat\n"
	.string "the strong TRAINERS who await\l"
	.string "challengers in POKéMON GYMS.$"

NewhopeCity_PokemonSchool_Text_ScottMetAlreadyCut:
	.string "Hello? Didn't we meet before?\n"
	.string "I think back in PETALBURG CITY.\p"
	.string "Let me introduce myself.\n"
	.string "My name's SCOTT.\p"
	.string "I've been traveling everywhere in\n"
	.string "search of outstanding TRAINERS.\p"
	.string "More specifically, I'm looking for\n"
	.string "POKéMON battle experts.\p"
	.string "So, what brings you to this SCHOOL?\n"
	.string "Are you a TRAINER, too?\p"
	.string "The first thing you should do is to\n"
	.string "have a POKéMON learn the move CUT.\p"
	.string "If I remember correctly, someone in\n"
	.string "this town has CUT.$"

NewhopeCity_PokemonSchool_Text_StudentTalentLevelUnknown:
	.string "SCOTT: Hmm…\p"
	.string "The talent levels of the students here\n"
	.string "are unknown. The potential's there.$"

NewhopeCity_PokemonSchool_Text_ScottStoneBadge:
	.string "SCOTT: Oh, what's that?\p"
	.string "It's a STONE BADGE, isn't it?\n"
	.string "That's pretty impressive, I'd say.\p"
	.string "But, you know, I would've loved to see\n"
	.string "you in battle.\p"
	.string "It's hard to tell what you're like as\n"
	.string "a TRAINER from a LEAGUE BADGE.$"

NewhopeCity_PokemonSchool_Text_ScottMetAlreadyStoneBadge:
	.string "Hello? Didn't we meet before?\n"
	.string "I think back in PETALBURG CITY.\p"
	.string "Let me introduce myself.\n"
	.string "My name's SCOTT.\p"
	.string "I've been traveling everywhere in\n"
	.string "search of outstanding TRAINERS.\p"
	.string "More specifically, I'm looking for\n"
	.string "POKéMON battle experts.\p"
	.string "Oh, what's that?\n"
	.string "It's a STONE BADGE, isn't it?\p"
	.string "That's pretty impressive, I'd say, for\n"
	.string "a starting TRAINER like yourself.\p"
	.string "But, you know, I would've loved to see\n"
	.string "you in battle.\p"
	.string "It's hard to tell what you're like as\n"
	.string "a TRAINER from a LEAGUE BADGE.$"

