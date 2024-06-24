TinybudTown_MaysHouse_2F_MapScripts::
	.byte 0


TinybudTown_House2_EventScript_Man::
# 4 "data/maps/TinybudTown_MaysHouse_2F/scripts.pory"
	lockall
# 5 "data/maps/TinybudTown_MaysHouse_2F/scripts.pory"
	faceplayer
# 6 "data/maps/TinybudTown_MaysHouse_2F/scripts.pory"
	checkitem ITEM_SHINY_CHARM, 1
# 7 "data/maps/TinybudTown_MaysHouse_2F/scripts.pory"
	goto_if_unset FLAG_SYS_POKEMON_GET, TinybudTown_House2_EventScript_Man_2
# 11 "data/maps/TinybudTown_MaysHouse_2F/scripts.pory"
	checktrainerflag TRAINER_SHINYHUNTER_1
	goto_if 0, TinybudTown_House2_EventScript_Man_3
# 16 "data/maps/TinybudTown_MaysHouse_2F/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq TinybudTown_House2_EventScript_Man_4
# 27 "data/maps/TinybudTown_MaysHouse_2F/scripts.pory"
	msgbox TinybudTown_House2_EventScript_Man_Text_5, MSGBOX_NPC
TinybudTown_House2_EventScript_Man_1:
# 29 "data/maps/TinybudTown_MaysHouse_2F/scripts.pory"
	releaseall
	end

TinybudTown_House2_EventScript_Man_2:
# 8 "data/maps/TinybudTown_MaysHouse_2F/scripts.pory"
	msgbox TinybudTown_House2_EventScript_Man_Text_0, MSGBOX_NPC
	end

TinybudTown_House2_EventScript_Man_3:
# 12 "data/maps/TinybudTown_MaysHouse_2F/scripts.pory"
	msgbox TinybudTown_House2_EventScript_Man_Text_1, MSGBOX_NPC
# 13 "data/maps/TinybudTown_MaysHouse_2F/scripts.pory"
	setflag FLAG_TALKED_TO_SHINYHUNTER_BROTHER
	end

TinybudTown_House2_EventScript_Man_4:
# 17 "data/maps/TinybudTown_MaysHouse_2F/scripts.pory"
	goto_if_set FLAG_TALKED_TO_SHINYHUNTER_BROTHER, TinybudTown_House2_EventScript_Man_10
# 21 "data/maps/TinybudTown_MaysHouse_2F/scripts.pory"
	msgbox TinybudTown_House2_EventScript_Man_Text_3, MSGBOX_NPC
TinybudTown_House2_EventScript_Man_9:
# 23 "data/maps/TinybudTown_MaysHouse_2F/scripts.pory"
	giveitem ITEM_SHINY_CHARM, 1
# 24 "data/maps/TinybudTown_MaysHouse_2F/scripts.pory"
	msgbox TinybudTown_House2_EventScript_Man_Text_4, MSGBOX_NPC
	goto TinybudTown_House2_EventScript_Man_1

TinybudTown_House2_EventScript_Man_10:
# 18 "data/maps/TinybudTown_MaysHouse_2F/scripts.pory"
	msgbox TinybudTown_House2_EventScript_Man_Text_2, MSGBOX_NPC
	goto TinybudTown_House2_EventScript_Man_9


TinybudTown_House2_EventScript_Boy::
# 34 "data/maps/TinybudTown_MaysHouse_2F/scripts.pory"
	lockall
# 35 "data/maps/TinybudTown_MaysHouse_2F/scripts.pory"
	faceplayer
# 36 "data/maps/TinybudTown_MaysHouse_2F/scripts.pory"
	goto_if_unset FLAG_SYS_POKEMON_GET, TinybudTown_House2_EventScript_Boy_2
# 39 "data/maps/TinybudTown_MaysHouse_2F/scripts.pory"
	checktrainerflag TRAINER_SHINYHUNTER_1
	goto_if 0, TinybudTown_House2_EventScript_Boy_3
# 49 "data/maps/TinybudTown_MaysHouse_2F/scripts.pory"
	msgbox TinybudTown_House2_EventScript_Boy_Text_3, MSGBOX_NPC
TinybudTown_House2_EventScript_Boy_1:
# 51 "data/maps/TinybudTown_MaysHouse_2F/scripts.pory"
	releaseall
	end

TinybudTown_House2_EventScript_Boy_2:
# 37 "data/maps/TinybudTown_MaysHouse_2F/scripts.pory"
	msgbox TinybudTown_House2_EventScript_Boy_Text_0, MSGBOX_NPC
	goto TinybudTown_House2_EventScript_Boy_1

TinybudTown_House2_EventScript_Boy_3:
# 40 "data/maps/TinybudTown_MaysHouse_2F/scripts.pory"
	msgbox TinybudTown_House2_EventScript_Boy_Text_1, MSGBOX_YESNO
# 41 "data/maps/TinybudTown_MaysHouse_2F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq TinybudTown_House2_EventScript_Boy_7
# 44 "data/maps/TinybudTown_MaysHouse_2F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq TinybudTown_House2_EventScript_Boy_8
	goto TinybudTown_House2_EventScript_Boy_1

TinybudTown_House2_EventScript_Boy_7:
# 42 "data/maps/TinybudTown_MaysHouse_2F/scripts.pory"
	trainerbattle_single TRAINER_SHINYHUNTER_1, TinybudTown_Text_ShinyHunterIntroText, TinybudTown_Text_ShinyHunterDefeatedText
	goto TinybudTown_House2_EventScript_Boy_1

TinybudTown_House2_EventScript_Boy_8:
# 45 "data/maps/TinybudTown_MaysHouse_2F/scripts.pory"
	msgbox TinybudTown_House2_EventScript_Boy_Text_2, MSGBOX_NPC
	goto TinybudTown_House2_EventScript_Boy_1


TinybudTown_House2_EventScript_Man_Text_0:
# 8 "data/maps/TinybudTown_MaysHouse_2F/scripts.pory"
	.string "Hello, {PLAYER}.\p"
	.string "Hm? You don't have any POKéMON…\p"
	.string "Come back once you do.$"

TinybudTown_House2_EventScript_Man_Text_1:
# 12 "data/maps/TinybudTown_MaysHouse_2F/scripts.pory"
	.string "My little brother likes to search for\n"
	.string "SHINY POKéMON. If you can beat him, I\l"
	.string "will let you in on his secret method for\l"
	.string "finding SHINY POKéMON in the wild.$"

TinybudTown_House2_EventScript_Man_Text_2:
# 18 "data/maps/TinybudTown_MaysHouse_2F/scripts.pory"
	.string "Hm? So you managed to defeat my\n"
	.string "brother!\p"
	.string "His secret to success is… he uses a\n"
	.string "SHINY CHARM. For some reason, SHINY\l"
	.string "POKéMON are attracted to it.\p"
	.string "Here, have one!$"

TinybudTown_House2_EventScript_Man_Text_3:
# 21 "data/maps/TinybudTown_MaysHouse_2F/scripts.pory"
	.string "My little brother likes to search for\n"
	.string "SHINY POKéMON. If you can beat him, I\l"
	.string "will let you in on his secret method for\l"
	.string "finding SHINY POKéMON in the wild.\p"
	.string "… … … … …\p"
	.string "Hm? So you managed to defeat my\n"
	.string "brother!\p"
	.string "His secret to success is… he uses a\n"
	.string "SHINY CHARM. For some reason, SHINY\l"
	.string "POKéMON are attracted to it.\p"
	.string "Here, have one!$"

TinybudTown_House2_EventScript_Man_Text_4:
# 24 "data/maps/TinybudTown_MaysHouse_2F/scripts.pory"
	.string "Don't be shy, we have plenty. In fact, I\n"
	.string "have an even more powerful item, the\l"
	.string "SHINY AMULET. But you must prove your\l"
	.string "dedication before I give it to you…\p"
	.string "If you can beat all five of my brother's\n"
	.string "SHINY HUNTER friends, it's yours. They\l"
	.string "live all across TANSO, so you'll have to\l"
	.string "work hard for it. Good luck!$"

TinybudTown_House2_EventScript_Man_Text_5:
# 27 "data/maps/TinybudTown_MaysHouse_2F/scripts.pory"
	.string "If you can defeat all five of my\n"
	.string "brother's SHINY HUNTER friends, I'll\l"
	.string "give you a SHINY AMULET, which will\l"
	.string "attract even more SHINY POKéMON. Good\l"
	.string "luck!$"

TinybudTown_House2_EventScript_Boy_Text_0:
# 37 "data/maps/TinybudTown_MaysHouse_2F/scripts.pory"
	.string "{PLAYER}! Will you battle with me?\p"
	.string "… … … …\p"
	.string "Aww, you don't have any POKéMON?$"

TinybudTown_House2_EventScript_Boy_Text_1:
# 40 "data/maps/TinybudTown_MaysHouse_2F/scripts.pory"
	.string "{PLAYER}! Will you battle with me?$"

TinybudTown_House2_EventScript_Boy_Text_2:
# 45 "data/maps/TinybudTown_MaysHouse_2F/scripts.pory"
	.string "Aww… alright then.$"

TinybudTown_House2_EventScript_Boy_Text_3:
# 49 "data/maps/TinybudTown_MaysHouse_2F/scripts.pory"
	.string "Aren't SHINY POKéMON just so cool?$"

TinybudTown_Text_ShinyHunterIntroText::
# 55 "data/maps/TinybudTown_MaysHouse_2F/scripts.pory"
	.string "Alright! Now I can finally show off my\n"
	.string "awesome SHINY POKéMON!$"

TinybudTown_Text_ShinyHunterDefeatedText::
# 59 "data/maps/TinybudTown_MaysHouse_2F/scripts.pory"
	.string "Weren't my POKéMON awesome?\n"
	.string "Now I need to focus on making them\l"
	.string "super strong!$"
