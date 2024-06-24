# 1 "data/scripts/players_house.pory"

# 2 "data/scripts/players_house.pory"
@ Local IDs are the same for both players houses
# 3 "data/scripts/players_house.pory"
.set LOCALID_MOM, 1
# 4 "data/scripts/players_house.pory"
.set LOCALID_DAD, 5
# 5 "data/scripts/players_house.pory"
.set LOCALID_MOM_2F, 14
# 6 "data/scripts/players_house.pory"

# 7 "data/scripts/players_house.pory"
PlayersHouse_2F_EventScript_BlockStairsUntilClockIsSet::
# 8 "data/scripts/players_house.pory"
	setvar VAR_INTRO_STATE, 2
# 9 "data/scripts/players_house.pory"
	return
# 10 "data/scripts/players_house.pory"

# 11 "data/scripts/players_house.pory"
TinybudTown_BrendansHouse_2F_EventScript_WallClock::
# 12 "data/scripts/players_house.pory"
	lockall
# 13 "data/scripts/players_house.pory"
	setvar VAR_0x8004, MALE
# 14 "data/scripts/players_house.pory"
	goto PlayersHouse_2F_EventScript_WallClock
# 15 "data/scripts/players_house.pory"
	end
# 16 "data/scripts/players_house.pory"

# 17 "data/scripts/players_house.pory"
PlayersHouse_2F_EventScript_WallClock::
# 18 "data/scripts/players_house.pory"
	lockall
# 19 "data/scripts/players_house.pory"
	goto_if_set FLAG_SET_WALL_CLOCK, PlayersHouse_2F_EventScript_CheckWallClock
# 20 "data/scripts/players_house.pory"
	msgbox PlayersHouse_2F_Text_ClockIsStopped, MSGBOX_DEFAULT
# 21 "data/scripts/players_house.pory"
	call PlayersHouse_2F_EventScript_SetWallClock
# 22 "data/scripts/players_house.pory"
	delay 30
# 23 "data/scripts/players_house.pory"
	setvar VAR_INTRO_STATE, 3
# 24 "data/scripts/players_house.pory"
	setflag FLAG_SET_WALL_CLOCK
# 25 "data/scripts/players_house.pory"
	releaseall
# 26 "data/scripts/players_house.pory"
	end
# 27 "data/scripts/players_house.pory"

# 28 "data/scripts/players_house.pory"
PlayersHouse_2F_EventScript_CheckWallClock::
# 29 "data/scripts/players_house.pory"
	incrementgamestat GAME_STAT_CHECKED_CLOCK
# 30 "data/scripts/players_house.pory"
	fadescreen FADE_TO_BLACK
# 31 "data/scripts/players_house.pory"
	special Special_ViewWallClock
# 32 "data/scripts/players_house.pory"
	waitstate
# 33 "data/scripts/players_house.pory"
	releaseall
# 34 "data/scripts/players_house.pory"
	end
# 35 "data/scripts/players_house.pory"

# 36 "data/scripts/players_house.pory"
PlayersHouse_2F_EventScript_SetWallClock::
# 37 "data/scripts/players_house.pory"
	fadescreen FADE_TO_BLACK
# 38 "data/scripts/players_house.pory"
	special StartWallClock
# 39 "data/scripts/players_house.pory"
	waitstate
# 40 "data/scripts/players_house.pory"
	return
# 41 "data/scripts/players_house.pory"

# 42 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_Mom::
# 43 "data/scripts/players_house.pory"
	lock
# 44 "data/scripts/players_house.pory"
	faceplayer
# 45 "data/scripts/players_house.pory"
	call_if_eq VAR_INTRO_STATE, 3, PlayersHouse_1F_EventScript_MomBeforeStarter
# 46 "data/scripts/players_house.pory"
	call_if_eq VAR_INTRO_STATE, 4, PlayersHouse_1F_EventScript_MomAreYouMeetingDad
# 47 "data/scripts/players_house.pory"
	call_if_eq VAR_INTRO_STATE 6, PlayersHouse_1F_EventScript_MomSendoff
# 48 "data/scripts/players_house.pory"
	call_if_eq VAR_INTRO_STATE 7, PlayersHouse_1F_EventScript_MomHealsParty
# 49 "data/scripts/players_house.pory"
	release
# 50 "data/scripts/players_house.pory"
	end
# 51 "data/scripts/players_house.pory"

# 52 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_MomHealsParty::
# 53 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_YouShouldRestABit, MSGBOX_DEFAULT
# 54 "data/scripts/players_house.pory"
	goto PlayersHouse_1F_EventScript_HealParty
# 55 "data/scripts/players_house.pory"
	end
# 56 "data/scripts/players_house.pory"

# 57 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_HealParty::
# 58 "data/scripts/players_house.pory"
	closemessage
# 59 "data/scripts/players_house.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 60 "data/scripts/players_house.pory"
	incrementgamestat GAME_STAT_RESTED_AT_HOME
# 61 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_TakeCareHoney, MSGBOX_DEFAULT
# 62 "data/scripts/players_house.pory"
	release
# 63 "data/scripts/players_house.pory"
	end
# 64 "data/scripts/players_house.pory"

# 65 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_MovePlayerAwayFromDoor:
# 66 "data/scripts/players_house.pory"
	walk_up
# 67 "data/scripts/players_house.pory"
	step_end
# 68 "data/scripts/players_house.pory"

# 69 "data/scripts/players_house.pory"

# 70 "data/scripts/players_house.pory"
EventScript_RunningShoesManual::
# 71 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_RunningShoesManual, MSGBOX_SIGN
# 72 "data/scripts/players_house.pory"
	end

PlayersHouse_1F_EventScript_MomBeforeStarter::
# 79 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_EventScript_MomBeforeStarter_Text_0
# 80 "data/scripts/players_house.pory"
	closemessage
# 81 "data/scripts/players_house.pory"
	applymovement LOCALID_MOM, Common_Movement_FaceRight
# 82 "data/scripts/players_house.pory"
	waitmovement 0
	return


PlayersHouse_1F_EventScript_MomAreYouMeetingDad::
# 87 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_EventScript_MomAreYouMeetingDad_Text_0
# 88 "data/scripts/players_house.pory"
	closemessage
# 89 "data/scripts/players_house.pory"
	applymovement LOCALID_MOM, Common_Movement_FaceRight
# 90 "data/scripts/players_house.pory"
	waitmovement 0
	return


PlayersHouse_1F_EventScript_MomSendoff::
# 95 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_EventScript_MomSendoff_Text_0, MSGBOX_YESNO
# 96 "data/scripts/players_house.pory"
	compare VAR_RESULT, YES
	goto_if_eq PlayersHouse_1F_EventScript_MomSendoff_2
PlayersHouse_1F_EventScript_MomSendoff_1:
# 100 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_EventScript_MomSendoff_Text_1
# 101 "data/scripts/players_house.pory"
	closemessage
# 102 "data/scripts/players_house.pory"
	giveitem ITEM_EXP_SHARE, 1
# 103 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_EventScript_MomSendoff_Text_2
# 104 "data/scripts/players_house.pory"
	closemessage
# 105 "data/scripts/players_house.pory"
	giveitem ITEM_ORAN_BERRY, 10
# 106 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_EventScript_MomSendoff_Text_3
# 107 "data/scripts/players_house.pory"
	setvar VAR_INTRO_STATE, 7
# 108 "data/scripts/players_house.pory"
	releaseall
	end

PlayersHouse_1F_EventScript_MomSendoff_2:
# 97 "data/scripts/players_house.pory"
	setvar VAR_0x8004, 0
# 98 "data/scripts/players_house.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto PlayersHouse_1F_EventScript_MomSendoff_1


PlayersHouse_1F_EventScript_MomBeforeStarter_Text_0:
# 79 "data/scripts/players_house.pory"
	.string "MOM: Make sure you have everything you\n"
	.string "need from your desk, hon.$"

PlayersHouse_1F_EventScript_MomAreYouMeetingDad_Text_0:
# 87 "data/scripts/players_house.pory"
	.string "MOM: Are you going to head to the LUSH\n"
	.string "CLEARING to meet DAD?$"

PlayersHouse_1F_EventScript_MomSendoff_Text_0:
# 95 "data/scripts/players_house.pory"
	.string "Mom: What is it, hon?\p"
	.string "… … … … … … … … … … … … … … … …\p"
	.string "… … … … … … … … … … … … … … … …\p"
	.string "Mom: This is incredible! Let me see your\n"
	.string "POKéMON.\p"
	.string "How precious! Did you give it a\n"
	.string "nickname?$"

PlayersHouse_1F_EventScript_MomSendoff_Text_1:
# 100 "data/scripts/players_house.pory"
	.string "You know, I used to be a trainer back in\n"
	.string "my day.\p"
	.string "Take this, it's sure to be a help on your\n"
	.string "journey.$"

PlayersHouse_1F_EventScript_MomSendoff_Text_2:
# 103 "data/scripts/players_house.pory"
	.string "If you let a POKéMON hold that item, it\n"
	.string "will gain experience even if it doesn't\l"
	.string "participate in battle!\p"
	.string "You should give these to your POKéMON\n"
	.string "too.$"

PlayersHouse_1F_EventScript_MomSendoff_Text_3:
# 106 "data/scripts/players_house.pory"
	.string "Those will heal up your POKéMON in a\n"
	.string "pinch.\p"
	.string "Don't work yourself too hard,\n"
	.string "{PLAYER}, and come home from time to\l"
	.string "time. Good luck on your adventure!$"

PlayersHouse_1F_Text_TakeCareHoney::
# 74 "data/scripts/players_house.pory"
	.string "Take care honey!$"
