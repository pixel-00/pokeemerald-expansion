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
PlayersHouse_2F_EventScript_MomComesUpstairsFemale::
# 29 "data/scripts/players_house.pory"
	setvar VAR_0x8008, LOCALID_MOM_2F
# 30 "data/scripts/players_house.pory"
	addobject VAR_0x8008
# 31 "data/scripts/players_house.pory"
	applymovement VAR_0x8008, PlayersHouse_2F_Movement_MomEntersFemale
# 32 "data/scripts/players_house.pory"
	waitmovement 0
# 33 "data/scripts/players_house.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 34 "data/scripts/players_house.pory"
	waitmovement 0
# 35 "data/scripts/players_house.pory"
	closemessage
# 36 "data/scripts/players_house.pory"
	applymovement VAR_0x8008, PlayersHouse_2F_Movement_MomExitsFemale
# 37 "data/scripts/players_house.pory"
	waitmovement 0
# 38 "data/scripts/players_house.pory"
	return
# 39 "data/scripts/players_house.pory"

# 40 "data/scripts/players_house.pory"
PlayersHouse_2F_EventScript_CheckWallClock::
# 41 "data/scripts/players_house.pory"
	incrementgamestat GAME_STAT_CHECKED_CLOCK
# 42 "data/scripts/players_house.pory"
	fadescreen FADE_TO_BLACK
# 43 "data/scripts/players_house.pory"
	special Special_ViewWallClock
# 44 "data/scripts/players_house.pory"
	waitstate
# 45 "data/scripts/players_house.pory"
	releaseall
# 46 "data/scripts/players_house.pory"
	end
# 47 "data/scripts/players_house.pory"

# 48 "data/scripts/players_house.pory"
PlayersHouse_2F_EventScript_SetWallClock::
# 49 "data/scripts/players_house.pory"
	fadescreen FADE_TO_BLACK
# 50 "data/scripts/players_house.pory"
	special StartWallClock
# 51 "data/scripts/players_house.pory"
	waitstate
# 52 "data/scripts/players_house.pory"
	return
# 53 "data/scripts/players_house.pory"

# 54 "data/scripts/players_house.pory"
PlayersHouse_2F_Movement_MomEntersFemale:
# 55 "data/scripts/players_house.pory"
	delay_8
# 56 "data/scripts/players_house.pory"
	walk_down
# 57 "data/scripts/players_house.pory"
	walk_in_place_faster_right
# 58 "data/scripts/players_house.pory"
	delay_16
# 59 "data/scripts/players_house.pory"
	delay_8
# 60 "data/scripts/players_house.pory"
	walk_right
# 61 "data/scripts/players_house.pory"
	step_end
# 62 "data/scripts/players_house.pory"

# 63 "data/scripts/players_house.pory"
PlayersHouse_2F_Movement_MomExitsFemale:
# 64 "data/scripts/players_house.pory"
	walk_left
# 65 "data/scripts/players_house.pory"
	walk_up
# 66 "data/scripts/players_house.pory"
	delay_8
# 67 "data/scripts/players_house.pory"
	step_end
# 68 "data/scripts/players_house.pory"

# 69 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_SetWatchedBroadcast::
# 70 "data/scripts/players_house.pory"
	setvar VAR_INTRO_STATE, 7
# 71 "data/scripts/players_house.pory"
	releaseall
# 72 "data/scripts/players_house.pory"
	end
# 73 "data/scripts/players_house.pory"

# 74 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_PetalburgGymReportMale::
# 75 "data/scripts/players_house.pory"
	applymovement VAR_0x8005, Common_Movement_WalkInPlaceFasterRight
# 76 "data/scripts/players_house.pory"
	waitmovement 0
# 77 "data/scripts/players_house.pory"
	call PlayersHouse_1F_EventScript_MomNoticeGymBroadcast
# 78 "data/scripts/players_house.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayersHouse_1F_Movement_PlayerApproachTVForGymMale
# 79 "data/scripts/players_house.pory"
	waitmovement 0
# 80 "data/scripts/players_house.pory"
	playbgm MUS_ENCOUNTER_INTERVIEWER, FALSE
# 81 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_MaybeDadWillBeOn, MSGBOX_DEFAULT
# 82 "data/scripts/players_house.pory"
	closemessage
# 83 "data/scripts/players_house.pory"
	applymovement VAR_0x8005, PlayersHouse_1F_Movement_MomMakeRoomToSeeTVMale
# 84 "data/scripts/players_house.pory"
	waitmovement 0
# 85 "data/scripts/players_house.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayersHouse_1F_Movement_PlayerMoveToTVMale
# 86 "data/scripts/players_house.pory"
	waitmovement 0
# 87 "data/scripts/players_house.pory"
	call PlayersHouse_1F_EventScript_WatchGymBroadcast
# 88 "data/scripts/players_house.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 89 "data/scripts/players_house.pory"
	waitmovement 0
# 90 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_ItsOverWeMissedHim, MSGBOX_DEFAULT
# 91 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_GoIntroduceYourselfNextDoor, MSGBOX_DEFAULT
# 92 "data/scripts/players_house.pory"
	closemessage
# 93 "data/scripts/players_house.pory"
	setvar VAR_TEMP_1, 1
# 94 "data/scripts/players_house.pory"
	applymovement VAR_0x8005, PlayersHouse_1F_Movement_MomReturnToSeatMale
# 95 "data/scripts/players_house.pory"
	waitmovement 0
# 96 "data/scripts/players_house.pory"
	goto PlayersHouse_1F_EventScript_SetWatchedBroadcast
# 97 "data/scripts/players_house.pory"
	end
# 98 "data/scripts/players_house.pory"

# 99 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_PetalburgGymReportFemale::
# 100 "data/scripts/players_house.pory"
	applymovement VAR_0x8005, Common_Movement_WalkInPlaceFasterLeft
# 101 "data/scripts/players_house.pory"
	waitmovement 0
# 102 "data/scripts/players_house.pory"
	call PlayersHouse_1F_EventScript_MomNoticeGymBroadcast
# 103 "data/scripts/players_house.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayersHouse_1F_Movement_PlayerApproachTVForGymFemale
# 104 "data/scripts/players_house.pory"
	waitmovement 0
# 105 "data/scripts/players_house.pory"
	playbgm MUS_ENCOUNTER_INTERVIEWER, FALSE
# 106 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_MaybeDadWillBeOn, MSGBOX_DEFAULT
# 107 "data/scripts/players_house.pory"
	closemessage
# 108 "data/scripts/players_house.pory"
	applymovement VAR_0x8005, PlayersHouse_1F_Movement_MomMakeRoomToSeeTVFemale
# 109 "data/scripts/players_house.pory"
	waitmovement 0
# 110 "data/scripts/players_house.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayersHouse_1F_Movement_PlayerMoveToTVFemale
# 111 "data/scripts/players_house.pory"
	waitmovement 0
# 112 "data/scripts/players_house.pory"
	call PlayersHouse_1F_EventScript_WatchGymBroadcast
# 113 "data/scripts/players_house.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 114 "data/scripts/players_house.pory"
	waitmovement 0
# 115 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_ItsOverWeMissedHim, MSGBOX_DEFAULT
# 116 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_GoIntroduceYourselfNextDoor, MSGBOX_DEFAULT
# 117 "data/scripts/players_house.pory"
	closemessage
# 118 "data/scripts/players_house.pory"
	setvar VAR_TEMP_1, 1
# 119 "data/scripts/players_house.pory"
	applymovement VAR_0x8005, PlayersHouse_1F_Movement_MomReturnToSeatFemale
# 120 "data/scripts/players_house.pory"
	waitmovement 0
# 121 "data/scripts/players_house.pory"
	goto PlayersHouse_1F_EventScript_SetWatchedBroadcast
# 122 "data/scripts/players_house.pory"
	end
# 123 "data/scripts/players_house.pory"

# 124 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_MomNoticeGymBroadcast::
# 125 "data/scripts/players_house.pory"
	playse SE_PIN
# 126 "data/scripts/players_house.pory"
	applymovement VAR_0x8005, Common_Movement_ExclamationMark
# 127 "data/scripts/players_house.pory"
	waitmovement 0
# 128 "data/scripts/players_house.pory"
	applymovement VAR_0x8005, Common_Movement_Delay48
# 129 "data/scripts/players_house.pory"
	waitmovement 0
# 130 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_OhComeQuickly, MSGBOX_DEFAULT
# 131 "data/scripts/players_house.pory"
	closemessage
# 132 "data/scripts/players_house.pory"
	return
# 133 "data/scripts/players_house.pory"

# 134 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_WatchGymBroadcast::
# 135 "data/scripts/players_house.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 136 "data/scripts/players_house.pory"
	waitmovement 0
# 137 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_ReportFromPetalburgGym, MSGBOX_DEFAULT
# 138 "data/scripts/players_house.pory"
	fadedefaultbgm
# 139 "data/scripts/players_house.pory"
	special TurnOffTVScreen
# 140 "data/scripts/players_house.pory"
	setflag FLAG_SYS_TV_HOME
# 141 "data/scripts/players_house.pory"
	delay 35
# 142 "data/scripts/players_house.pory"
	return
# 143 "data/scripts/players_house.pory"

# 144 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_MomApproachDadMale:
# 145 "data/scripts/players_house.pory"
	walk_up
# 146 "data/scripts/players_house.pory"
	walk_right
# 147 "data/scripts/players_house.pory"
	walk_right
# 148 "data/scripts/players_house.pory"
	walk_right
# 149 "data/scripts/players_house.pory"
	walk_right
# 150 "data/scripts/players_house.pory"
	walk_down
# 151 "data/scripts/players_house.pory"
	walk_in_place_faster_right
# 152 "data/scripts/players_house.pory"
	step_end
# 153 "data/scripts/players_house.pory"

# 154 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_MomApproachDadFemale:
# 155 "data/scripts/players_house.pory"
	walk_up
# 156 "data/scripts/players_house.pory"
	walk_left
# 157 "data/scripts/players_house.pory"
	walk_left
# 158 "data/scripts/players_house.pory"
	walk_left
# 159 "data/scripts/players_house.pory"
	walk_left
# 160 "data/scripts/players_house.pory"
	walk_down
# 161 "data/scripts/players_house.pory"
	walk_in_place_faster_left
# 162 "data/scripts/players_house.pory"
	step_end
# 163 "data/scripts/players_house.pory"

# 164 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_MomApproachPlayerMale:
# 165 "data/scripts/players_house.pory"
	walk_right
# 166 "data/scripts/players_house.pory"
	step_end
# 167 "data/scripts/players_house.pory"

# 168 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_MomApproachPlayerFemale:
# 169 "data/scripts/players_house.pory"
	walk_left
# 170 "data/scripts/players_house.pory"
	step_end
# 171 "data/scripts/players_house.pory"

# 172 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_MomNoticesLatiBroadcastMale:
# 173 "data/scripts/players_house.pory"
	walk_in_place_faster_left
# 174 "data/scripts/players_house.pory"
	delay_16
# 175 "data/scripts/players_house.pory"
	delay_16
# 176 "data/scripts/players_house.pory"
	delay_16
# 177 "data/scripts/players_house.pory"
	delay_16
# 178 "data/scripts/players_house.pory"
	walk_in_place_faster_right
# 179 "data/scripts/players_house.pory"
	delay_16
# 180 "data/scripts/players_house.pory"
	delay_16
# 181 "data/scripts/players_house.pory"
	step_end
# 182 "data/scripts/players_house.pory"

# 183 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_MomNoticesLatiBroadcastFemale:
# 184 "data/scripts/players_house.pory"
	walk_in_place_faster_right
# 185 "data/scripts/players_house.pory"
	delay_16
# 186 "data/scripts/players_house.pory"
	delay_16
# 187 "data/scripts/players_house.pory"
	delay_16
# 188 "data/scripts/players_house.pory"
	delay_16
# 189 "data/scripts/players_house.pory"
	walk_in_place_faster_left
# 190 "data/scripts/players_house.pory"
	delay_16
# 191 "data/scripts/players_house.pory"
	delay_16
# 192 "data/scripts/players_house.pory"
	step_end
# 193 "data/scripts/players_house.pory"

# 194 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_MomApproachPlayerAfterTVMale:
# 195 "data/scripts/players_house.pory"
	walk_up
# 196 "data/scripts/players_house.pory"
	walk_left
# 197 "data/scripts/players_house.pory"
	walk_left
# 198 "data/scripts/players_house.pory"
	step_end
# 199 "data/scripts/players_house.pory"

# 200 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_MomApproachPlayerAfterTVFemale:
# 201 "data/scripts/players_house.pory"
	walk_up
# 202 "data/scripts/players_house.pory"
	walk_right
# 203 "data/scripts/players_house.pory"
	walk_right
# 204 "data/scripts/players_house.pory"
	step_end
# 205 "data/scripts/players_house.pory"

# 206 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_MomMakeRoomToSeeTVMale:
# 207 "data/scripts/players_house.pory"
	walk_left
# 208 "data/scripts/players_house.pory"
	walk_in_place_faster_right
# 209 "data/scripts/players_house.pory"
	step_end
# 210 "data/scripts/players_house.pory"

# 211 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_MomMakeRoomToSeeTVFemale:
# 212 "data/scripts/players_house.pory"
	walk_right
# 213 "data/scripts/players_house.pory"
	walk_in_place_faster_left
# 214 "data/scripts/players_house.pory"
	step_end
# 215 "data/scripts/players_house.pory"

# 216 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_MomReturnToSeatMale:
# 217 "data/scripts/players_house.pory"
	walk_left
# 218 "data/scripts/players_house.pory"
	walk_down
# 219 "data/scripts/players_house.pory"
	walk_in_place_faster_right
# 220 "data/scripts/players_house.pory"
	step_end
# 221 "data/scripts/players_house.pory"

# 222 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_MomReturnToSeatFemale:
# 223 "data/scripts/players_house.pory"
	walk_right
# 224 "data/scripts/players_house.pory"
	walk_down
# 225 "data/scripts/players_house.pory"
	walk_in_place_faster_left
# 226 "data/scripts/players_house.pory"
	step_end
# 227 "data/scripts/players_house.pory"

# 228 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_Mom::
# 229 "data/scripts/players_house.pory"
	lock
# 230 "data/scripts/players_house.pory"
	faceplayer
# 231 "data/scripts/players_house.pory"
	call_if_eq VAR_INTRO_STATE, 3, PlayersHouse_1F_EventScript_MomBeforeStarter
# 232 "data/scripts/players_house.pory"
	call_if_eq VAR_INTRO_STATE, 4, PlayersHouse_1F_EventScript_MomAreYouMeetingDad
# 233 "data/scripts/players_house.pory"
	goto_if_eq VAR_TINYBUD_HOUSES_STATE_MAY, 4, PlayersHouse_1F_EventScript_DontPushYourselfTooHard
# 234 "data/scripts/players_house.pory"
	goto_if_eq VAR_TINYBUD_HOUSES_STATE_BRENDAN, 4, PlayersHouse_1F_EventScript_DontPushYourselfTooHard
# 235 "data/scripts/players_house.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, PlayersHouse_1F_EventScript_TryRegisterMom
# 236 "data/scripts/players_house.pory"
	goto_if_set FLAG_RESCUED_BIRCH, PlayersHouse_1F_EventScript_MomHealsParty
# 237 "data/scripts/players_house.pory"
	goto_if_eq VAR_TEMP_1, 1, PlayersHouse_1F_EventScript_SeeYouHoney
# 238 "data/scripts/players_house.pory"
	goto_if_eq VAR_INTRO_STATE, 7, PlayersHouse_1F_EventScript_DidYouMeetProfBirch
# 239 "data/scripts/players_house.pory"
	release
# 240 "data/scripts/players_house.pory"
	end
# 241 "data/scripts/players_house.pory"

# 242 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_DontPushYourselfTooHard::
# 243 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_DontPushYourselfTooHard, MSGBOX_DEFAULT
# 244 "data/scripts/players_house.pory"
	release
# 245 "data/scripts/players_house.pory"
	end
# 246 "data/scripts/players_house.pory"

# 247 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_TryRegisterMom::
# 248 "data/scripts/players_house.pory"
	goto_if_set FLAG_ENABLE_MOM_MATCH_CALL, PlayersHouse_1F_EventScript_CheckGiveAmuletCoin
# 249 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_IsThatAPokenav, MSGBOX_DEFAULT
# 250 "data/scripts/players_house.pory"
	closemessage
# 251 "data/scripts/players_house.pory"
	delay 30
# 252 "data/scripts/players_house.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 253 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_RegisteredMom, MSGBOX_DEFAULT
# 254 "data/scripts/players_house.pory"
	waitfanfare
# 255 "data/scripts/players_house.pory"
	closemessage
# 256 "data/scripts/players_house.pory"
	delay 30
# 257 "data/scripts/players_house.pory"
	setflag FLAG_ENABLE_MOM_MATCH_CALL
# 258 "data/scripts/players_house.pory"
	release
# 259 "data/scripts/players_house.pory"
	end
# 260 "data/scripts/players_house.pory"

# 261 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_CheckGiveAmuletCoin::
# 262 "data/scripts/players_house.pory"
	goto_if_set FLAG_BADGE05_GET, PlayersHouse_1F_EventScript_TryGiveAmuletCoin
# 263 "data/scripts/players_house.pory"
	goto PlayersHouse_1F_EventScript_MomHealsParty
# 264 "data/scripts/players_house.pory"

# 265 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_TryGiveAmuletCoin::
# 266 "data/scripts/players_house.pory"
	goto_if_set FLAG_RECEIVED_AMULET_COIN, PlayersHouse_1F_EventScript_MomHealsParty
# 267 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_GotDadsBadgeHeresSomethingFromMom, MSGBOX_DEFAULT
# 268 "data/scripts/players_house.pory"
	giveitem ITEM_AMULET_COIN
# 269 "data/scripts/players_house.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 270 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_DontPushYourselfTooHard, MSGBOX_DEFAULT
# 271 "data/scripts/players_house.pory"
	setflag FLAG_RECEIVED_AMULET_COIN
# 272 "data/scripts/players_house.pory"
	release
# 273 "data/scripts/players_house.pory"
	end
# 274 "data/scripts/players_house.pory"

# 275 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_MomHealsParty::
# 276 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_YouShouldRestABit, MSGBOX_DEFAULT
# 277 "data/scripts/players_house.pory"
	goto PlayersHouse_1F_EventScript_HealParty
# 278 "data/scripts/players_house.pory"
	end
# 279 "data/scripts/players_house.pory"

# 280 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_SeeYouHoney::
# 281 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_SeeYouHoney, MSGBOX_DEFAULT
# 282 "data/scripts/players_house.pory"
	release
# 283 "data/scripts/players_house.pory"
	end
# 284 "data/scripts/players_house.pory"

# 285 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_HealParty::
# 286 "data/scripts/players_house.pory"
	closemessage
# 287 "data/scripts/players_house.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 288 "data/scripts/players_house.pory"
	incrementgamestat GAME_STAT_RESTED_AT_HOME
# 289 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_TakeCareHoney, MSGBOX_DEFAULT
# 290 "data/scripts/players_house.pory"
	release
# 291 "data/scripts/players_house.pory"
	end
# 292 "data/scripts/players_house.pory"

# 293 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_DidYouMeetProfBirch::
# 294 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_DidYouMeetProfBirch, MSGBOX_DEFAULT
# 295 "data/scripts/players_house.pory"
	release
# 296 "data/scripts/players_house.pory"
	end
# 297 "data/scripts/players_house.pory"

# 298 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_PlayerApproachTVForGymMale:
# 299 "data/scripts/players_house.pory"
	walk_down
# 300 "data/scripts/players_house.pory"
	walk_down
# 301 "data/scripts/players_house.pory"
	walk_left
# 302 "data/scripts/players_house.pory"
	walk_left
# 303 "data/scripts/players_house.pory"
	walk_left
# 304 "data/scripts/players_house.pory"
	step_end
# 305 "data/scripts/players_house.pory"

# 306 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_PlayerMoveToTVMale:
# 307 "data/scripts/players_house.pory"
	walk_left
# 308 "data/scripts/players_house.pory"
	step_end
# 309 "data/scripts/players_house.pory"

# 310 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_PlayerApproachTVForGymFemale:
# 311 "data/scripts/players_house.pory"
	walk_down
# 312 "data/scripts/players_house.pory"
	walk_down
# 313 "data/scripts/players_house.pory"
	walk_right
# 314 "data/scripts/players_house.pory"
	walk_right
# 315 "data/scripts/players_house.pory"
	walk_right
# 316 "data/scripts/players_house.pory"
	step_end
# 317 "data/scripts/players_house.pory"

# 318 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_PlayerMoveToTVFemale:
# 319 "data/scripts/players_house.pory"
	walk_right
# 320 "data/scripts/players_house.pory"
	step_end
# 321 "data/scripts/players_house.pory"

# 322 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_MovePlayerAwayFromDoor:
# 323 "data/scripts/players_house.pory"
	walk_up
# 324 "data/scripts/players_house.pory"
	step_end
# 325 "data/scripts/players_house.pory"

# 326 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_GetSSTicketAndSeeLatiTV::
# 327 "data/scripts/players_house.pory"
	lockall
# 328 "data/scripts/players_house.pory"
	checkplayergender
# 329 "data/scripts/players_house.pory"
	call_if_eq VAR_RESULT, MALE, PlayersHouse_1F_EventScript_SetUpObjectEventVarsMale
# 330 "data/scripts/players_house.pory"
	call_if_eq VAR_RESULT, FEMALE, PlayersHouse_1F_EventScript_SetUpObjectEventVarsFemale
# 331 "data/scripts/players_house.pory"
	call_if_eq VAR_0x8008, MALE, PlayersHouse_1F_EventScript_PlayerEnterRoomMale
# 332 "data/scripts/players_house.pory"
	call_if_eq VAR_0x8008, FEMALE, PlayersHouse_1F_EventScript_PlayerEnterRoomFemale
# 333 "data/scripts/players_house.pory"
	applymovement VAR_0x8009, Common_Movement_FacePlayer
# 334 "data/scripts/players_house.pory"
	waitmovement 0
# 335 "data/scripts/players_house.pory"
	playse SE_PIN
# 336 "data/scripts/players_house.pory"
	applymovement VAR_0x8009, Common_Movement_ExclamationMark
# 337 "data/scripts/players_house.pory"
	waitmovement 0
# 338 "data/scripts/players_house.pory"
	applymovement VAR_0x8009, Common_Movement_Delay48
# 339 "data/scripts/players_house.pory"
	waitmovement 0
# 340 "data/scripts/players_house.pory"
	delay 20
# 341 "data/scripts/players_house.pory"
	call_if_eq VAR_0x8008, MALE, PlayersHouse_1F_EventScript_DadApproachPlayerMale
# 342 "data/scripts/players_house.pory"
	call_if_eq VAR_0x8008, FEMALE, PlayersHouse_1F_EventScript_DadApproachPlayerFemale
# 343 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_TicketFromBrineyCameForYou, MSGBOX_DEFAULT
# 344 "data/scripts/players_house.pory"
	giveitem ITEM_SS_TICKET
# 345 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_PortsInSlateportLilycove, MSGBOX_DEFAULT
# 346 "data/scripts/players_house.pory"
	closemessage
# 347 "data/scripts/players_house.pory"
	delay 20
# 348 "data/scripts/players_house.pory"
	call_if_eq VAR_0x8008, MALE, PlayersHouse_1F_EventScript_MomApproachDadMale
# 349 "data/scripts/players_house.pory"
	call_if_eq VAR_0x8008, FEMALE, PlayersHouse_1F_EventScript_MomApproachDadFemale
# 350 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_BetterGetBackToGym, MSGBOX_DEFAULT
# 351 "data/scripts/players_house.pory"
	closemessage
# 352 "data/scripts/players_house.pory"
	call_if_eq VAR_0x8008, MALE, PlayersHouse_1F_EventScript_DadExitsMale
# 353 "data/scripts/players_house.pory"
	call_if_eq VAR_0x8008, FEMALE, PlayersHouse_1F_EventScript_DadExitsFemale
# 354 "data/scripts/players_house.pory"
	playse SE_DOOR
# 355 "data/scripts/players_house.pory"
	removeobject VAR_0x8009
# 356 "data/scripts/players_house.pory"
	setflag FLAG_RECEIVED_SS_TICKET
# 357 "data/scripts/players_house.pory"
	delay 30
# 358 "data/scripts/players_house.pory"
	call_if_eq VAR_0x8008, MALE, PlayersHouse_1F_EventScript_MomApproachPlayerMale
# 359 "data/scripts/players_house.pory"
	call_if_eq VAR_0x8008, FEMALE, PlayersHouse_1F_EventScript_MomApproachPlayerFemale
# 360 "data/scripts/players_house.pory"
	delay 20
# 361 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_DadShouldStayLonger, MSGBOX_DEFAULT
# 362 "data/scripts/players_house.pory"
	closemessage
# 363 "data/scripts/players_house.pory"
	setflag FLAG_SYS_TV_LATIAS_LATIOS
# 364 "data/scripts/players_house.pory"
	special TurnOnTVScreen
# 365 "data/scripts/players_house.pory"
	delay 60
# 366 "data/scripts/players_house.pory"
	call_if_eq VAR_0x8008, MALE, PlayersHouse_1F_EventScript_MomNoticesLatiBroadcastMale
# 367 "data/scripts/players_house.pory"
	call_if_eq VAR_0x8008, FEMALE, PlayersHouse_1F_EventScript_MomNoticesLatiBroadcastFemale
# 368 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_IsThatABreakingStory, MSGBOX_DEFAULT
# 369 "data/scripts/players_house.pory"
	closemessage
# 370 "data/scripts/players_house.pory"
	call_if_eq VAR_0x8008, MALE, PlayersHouse_1F_EventScript_PlayerApproachTVForLatiMale
# 371 "data/scripts/players_house.pory"
	call_if_eq VAR_0x8008, FEMALE, PlayersHouse_1F_EventScript_PlayerApproachTVForLatiFemale
# 372 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_LatiEmergencyNewsFlash, MSGBOX_DEFAULT
# 373 "data/scripts/players_house.pory"
	closemessage
# 374 "data/scripts/players_house.pory"
	clearflag FLAG_SYS_TV_LATIAS_LATIOS
# 375 "data/scripts/players_house.pory"
	setflag FLAG_LATIOS_OR_LATIAS_ROAMING
# 376 "data/scripts/players_house.pory"
	special TurnOffTVScreen
# 377 "data/scripts/players_house.pory"
	call_if_eq VAR_0x8008, MALE, PlayersHouse_1F_EventScript_MomApproachPlayerAfterTVMale
# 378 "data/scripts/players_house.pory"
	call_if_eq VAR_0x8008, FEMALE, PlayersHouse_1F_EventScript_MomApproachPlayerAfterTVFemale
# 379 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_WhatColorDidTheySay, MSGBOX_DEFAULT
# 380 "data/scripts/players_house.pory"
	multichoice 22, 8, MULTI_TV_LATI, TRUE
# 381 "data/scripts/players_house.pory"
	copyvar VAR_0x8004, VAR_RESULT
# 382 "data/scripts/players_house.pory"
	special InitRoamer
# 383 "data/scripts/players_house.pory"
	copyvar VAR_ROAMER_POKEMON, VAR_RESULT
# 384 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_StillUnknownPokemon, MSGBOX_DEFAULT
# 385 "data/scripts/players_house.pory"
	closemessage
# 386 "data/scripts/players_house.pory"
	setvar VAR_TINYBUD_HOUSES_STATE_MAY, 4
# 387 "data/scripts/players_house.pory"
	setvar VAR_TINYBUD_HOUSES_STATE_BRENDAN, 4
# 388 "data/scripts/players_house.pory"
	releaseall
# 389 "data/scripts/players_house.pory"
	end
# 390 "data/scripts/players_house.pory"

# 391 "data/scripts/players_house.pory"
@ Never called.
# 392 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_AirLatiBroadcast::
# 393 "data/scripts/players_house.pory"
	setflag FLAG_SYS_TV_LATIAS_LATIOS
# 394 "data/scripts/players_house.pory"
	return
# 395 "data/scripts/players_house.pory"

# 396 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_SetUpObjectEventVarsMale::
# 397 "data/scripts/players_house.pory"
	setvar VAR_0x8008, MALE
# 398 "data/scripts/players_house.pory"
	setvar VAR_0x8009, LOCALID_DAD
# 399 "data/scripts/players_house.pory"
	setvar VAR_0x800A, LOCALID_MOM
# 400 "data/scripts/players_house.pory"
	return
# 401 "data/scripts/players_house.pory"

# 402 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_SetUpObjectEventVarsFemale::
# 403 "data/scripts/players_house.pory"
	setvar VAR_0x8008, FEMALE
# 404 "data/scripts/players_house.pory"
	setvar VAR_0x8009, LOCALID_DAD
# 405 "data/scripts/players_house.pory"
	setvar VAR_0x800A, LOCALID_MOM
# 406 "data/scripts/players_house.pory"
	return
# 407 "data/scripts/players_house.pory"

# 408 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_DadApproachPlayerMale::
# 409 "data/scripts/players_house.pory"
	applymovement VAR_0x8009, PlayersHouse_1F_Movement_DadApproachPlayerMale
# 410 "data/scripts/players_house.pory"
	waitmovement 0
# 411 "data/scripts/players_house.pory"
	return
# 412 "data/scripts/players_house.pory"

# 413 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_DadApproachPlayerFemale::
# 414 "data/scripts/players_house.pory"
	applymovement VAR_0x8009, PlayersHouse_1F_Movement_DadApproachPlayerFemale
# 415 "data/scripts/players_house.pory"
	waitmovement 0
# 416 "data/scripts/players_house.pory"
	return
# 417 "data/scripts/players_house.pory"

# 418 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_MomApproachDadMale::
# 419 "data/scripts/players_house.pory"
	applymovement VAR_0x800A, PlayersHouse_1F_Movement_MomApproachDadMale
# 420 "data/scripts/players_house.pory"
	waitmovement 0
# 421 "data/scripts/players_house.pory"
	applymovement VAR_0x8009, PlayersHouse_1F_Movement_DadFaceMomMale
# 422 "data/scripts/players_house.pory"
	waitmovement 0
# 423 "data/scripts/players_house.pory"
	return
# 424 "data/scripts/players_house.pory"

# 425 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_MomApproachDadFemale::
# 426 "data/scripts/players_house.pory"
	applymovement VAR_0x800A, PlayersHouse_1F_Movement_MomApproachDadFemale
# 427 "data/scripts/players_house.pory"
	waitmovement 0
# 428 "data/scripts/players_house.pory"
	applymovement VAR_0x8009, PlayersHouse_1F_Movement_DadFaceMomFemale
# 429 "data/scripts/players_house.pory"
	waitmovement 0
# 430 "data/scripts/players_house.pory"
	return
# 431 "data/scripts/players_house.pory"

# 432 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_DadExitsMale::
# 433 "data/scripts/players_house.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayersHouse_1F_Movement_MomAndPlayerWatchDadExit
# 434 "data/scripts/players_house.pory"
	applymovement VAR_0x800A, PlayersHouse_1F_Movement_MomAndPlayerWatchDadExit
# 435 "data/scripts/players_house.pory"
	applymovement VAR_0x8009, PlayersHouse_1F_Movement_DadExitsMale
# 436 "data/scripts/players_house.pory"
	waitmovement 0
# 437 "data/scripts/players_house.pory"
	return
# 438 "data/scripts/players_house.pory"

# 439 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_DadExitsFemale::
# 440 "data/scripts/players_house.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayersHouse_1F_Movement_MomAndPlayerWatchDadExit
# 441 "data/scripts/players_house.pory"
	applymovement VAR_0x800A, PlayersHouse_1F_Movement_MomAndPlayerWatchDadExit
# 442 "data/scripts/players_house.pory"
	applymovement VAR_0x8009, PlayersHouse_1F_Movement_DadExitsFemale
# 443 "data/scripts/players_house.pory"
	waitmovement 0
# 444 "data/scripts/players_house.pory"
	return
# 445 "data/scripts/players_house.pory"

# 446 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_PlayerEnterRoomMale::
# 447 "data/scripts/players_house.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayersHouse_1F_Movement_PlayerEnterRoomMale
# 448 "data/scripts/players_house.pory"
	waitmovement 0
# 449 "data/scripts/players_house.pory"
	return
# 450 "data/scripts/players_house.pory"

# 451 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_PlayerEnterRoomFemale::
# 452 "data/scripts/players_house.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayersHouse_1F_Movement_PlayerEnterRoomFemale
# 453 "data/scripts/players_house.pory"
	waitmovement 0
# 454 "data/scripts/players_house.pory"
	return
# 455 "data/scripts/players_house.pory"

# 456 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_PlayerApproachTVForLatiMale::
# 457 "data/scripts/players_house.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayersHouse_1F_Movement_PlayerApproachTVForLatiMale
# 458 "data/scripts/players_house.pory"
	waitmovement 0
# 459 "data/scripts/players_house.pory"
	applymovement VAR_0x800A, Common_Movement_WalkInPlaceFasterLeft
# 460 "data/scripts/players_house.pory"
	waitmovement 0
# 461 "data/scripts/players_house.pory"
	return
# 462 "data/scripts/players_house.pory"

# 463 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_PlayerApproachTVForLatiFemale::
# 464 "data/scripts/players_house.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayersHouse_1F_Movement_PlayerApproachTVForLatiFemale
# 465 "data/scripts/players_house.pory"
	waitmovement 0
# 466 "data/scripts/players_house.pory"
	applymovement VAR_0x800A, Common_Movement_WalkInPlaceFasterRight
# 467 "data/scripts/players_house.pory"
	waitmovement 0
# 468 "data/scripts/players_house.pory"
	return
# 469 "data/scripts/players_house.pory"

# 470 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_MomApproachPlayerMale::
# 471 "data/scripts/players_house.pory"
	applymovement VAR_0x800A, PlayersHouse_1F_Movement_MomApproachPlayerMale
# 472 "data/scripts/players_house.pory"
	waitmovement 0
# 473 "data/scripts/players_house.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 474 "data/scripts/players_house.pory"
	waitmovement 0
# 475 "data/scripts/players_house.pory"
	return
# 476 "data/scripts/players_house.pory"

# 477 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_MomApproachPlayerFemale::
# 478 "data/scripts/players_house.pory"
	applymovement VAR_0x800A, PlayersHouse_1F_Movement_MomApproachPlayerFemale
# 479 "data/scripts/players_house.pory"
	waitmovement 0
# 480 "data/scripts/players_house.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 481 "data/scripts/players_house.pory"
	waitmovement 0
# 482 "data/scripts/players_house.pory"
	return
# 483 "data/scripts/players_house.pory"

# 484 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_MomNoticesLatiBroadcastMale::
# 485 "data/scripts/players_house.pory"
	applymovement VAR_0x800A, PlayersHouse_1F_Movement_MomNoticesLatiBroadcastMale
# 486 "data/scripts/players_house.pory"
	waitmovement 0
# 487 "data/scripts/players_house.pory"
	return
# 488 "data/scripts/players_house.pory"

# 489 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_MomNoticesLatiBroadcastFemale::
# 490 "data/scripts/players_house.pory"
	applymovement VAR_0x800A, PlayersHouse_1F_Movement_MomNoticesLatiBroadcastFemale
# 491 "data/scripts/players_house.pory"
	waitmovement 0
# 492 "data/scripts/players_house.pory"
	return
# 493 "data/scripts/players_house.pory"

# 494 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_MomApproachPlayerAfterTVMale::
# 495 "data/scripts/players_house.pory"
	applymovement VAR_0x800A, PlayersHouse_1F_Movement_MomApproachPlayerAfterTVMale
# 496 "data/scripts/players_house.pory"
	waitmovement 0
# 497 "data/scripts/players_house.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 498 "data/scripts/players_house.pory"
	waitmovement 0
# 499 "data/scripts/players_house.pory"
	return
# 500 "data/scripts/players_house.pory"

# 501 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_MomApproachPlayerAfterTVFemale::
# 502 "data/scripts/players_house.pory"
	applymovement VAR_0x800A, PlayersHouse_1F_Movement_MomApproachPlayerAfterTVFemale
# 503 "data/scripts/players_house.pory"
	waitmovement 0
# 504 "data/scripts/players_house.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 505 "data/scripts/players_house.pory"
	waitmovement 0
# 506 "data/scripts/players_house.pory"
	return
# 507 "data/scripts/players_house.pory"

# 508 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_DadApproachPlayerMale:
# 509 "data/scripts/players_house.pory"
	walk_right
# 510 "data/scripts/players_house.pory"
	walk_right
# 511 "data/scripts/players_house.pory"
	step_end
# 512 "data/scripts/players_house.pory"

# 513 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_DadApproachPlayerFemale:
# 514 "data/scripts/players_house.pory"
	walk_left
# 515 "data/scripts/players_house.pory"
	walk_left
# 516 "data/scripts/players_house.pory"
	step_end
# 517 "data/scripts/players_house.pory"

# 518 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_DadFaceMomMale:
# 519 "data/scripts/players_house.pory"
	face_left
# 520 "data/scripts/players_house.pory"
	step_end
# 521 "data/scripts/players_house.pory"

# 522 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_DadFaceMomFemale:
# 523 "data/scripts/players_house.pory"
	face_right
# 524 "data/scripts/players_house.pory"
	step_end
# 525 "data/scripts/players_house.pory"

# 526 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_DadExitsMale:
# 527 "data/scripts/players_house.pory"
	walk_down
# 528 "data/scripts/players_house.pory"
	walk_right
# 529 "data/scripts/players_house.pory"
	walk_down
# 530 "data/scripts/players_house.pory"
	delay_8
# 531 "data/scripts/players_house.pory"
	step_end
# 532 "data/scripts/players_house.pory"

# 533 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_DadExitsFemale:
# 534 "data/scripts/players_house.pory"
	walk_down
# 535 "data/scripts/players_house.pory"
	walk_left
# 536 "data/scripts/players_house.pory"
	walk_down
# 537 "data/scripts/players_house.pory"
	delay_8
# 538 "data/scripts/players_house.pory"
	step_end
# 539 "data/scripts/players_house.pory"

# 540 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_PlayerEnterRoomMale:
# 541 "data/scripts/players_house.pory"
	delay_16
# 542 "data/scripts/players_house.pory"
	walk_down
# 543 "data/scripts/players_house.pory"
	walk_down
# 544 "data/scripts/players_house.pory"
	walk_down
# 545 "data/scripts/players_house.pory"
	walk_in_place_faster_left
# 546 "data/scripts/players_house.pory"
	step_end
# 547 "data/scripts/players_house.pory"

# 548 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_MomAndPlayerWatchDadExit:
# 549 "data/scripts/players_house.pory"
	delay_8
# 550 "data/scripts/players_house.pory"
	delay_16
# 551 "data/scripts/players_house.pory"
	delay_16
# 552 "data/scripts/players_house.pory"
	walk_in_place_faster_down
# 553 "data/scripts/players_house.pory"
	step_end
# 554 "data/scripts/players_house.pory"

# 555 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_PlayerEnterRoomFemale:
# 556 "data/scripts/players_house.pory"
	delay_16
# 557 "data/scripts/players_house.pory"
	walk_down
# 558 "data/scripts/players_house.pory"
	walk_down
# 559 "data/scripts/players_house.pory"
	walk_down
# 560 "data/scripts/players_house.pory"
	walk_in_place_faster_right
# 561 "data/scripts/players_house.pory"
	step_end
# 562 "data/scripts/players_house.pory"

# 563 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_PlayerApproachTVForLatiMale:
# 564 "data/scripts/players_house.pory"
	walk_up
# 565 "data/scripts/players_house.pory"
	walk_left
# 566 "data/scripts/players_house.pory"
	walk_left
# 567 "data/scripts/players_house.pory"
	walk_left
# 568 "data/scripts/players_house.pory"
	walk_left
# 569 "data/scripts/players_house.pory"
	walk_in_place_faster_up
# 570 "data/scripts/players_house.pory"
	step_end
# 571 "data/scripts/players_house.pory"

# 572 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_PlayerApproachTVForLatiFemale:
# 573 "data/scripts/players_house.pory"
	walk_up
# 574 "data/scripts/players_house.pory"
	walk_right
# 575 "data/scripts/players_house.pory"
	walk_right
# 576 "data/scripts/players_house.pory"
	walk_right
# 577 "data/scripts/players_house.pory"
	walk_right
# 578 "data/scripts/players_house.pory"
	walk_in_place_faster_up
# 579 "data/scripts/players_house.pory"
	step_end
# 580 "data/scripts/players_house.pory"

# 581 "data/scripts/players_house.pory"
EventScript_RunningShoesManual::
# 582 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_RunningShoesManual, MSGBOX_SIGN
# 583 "data/scripts/players_house.pory"
	end

PlayersHouse_1F_EventScript_MomBeforeStarter::
# 586 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_EventScript_MomBeforeStarter_Text_0
# 587 "data/scripts/players_house.pory"
	closemessage
# 588 "data/scripts/players_house.pory"
	applymovement LOCALID_MOM, PlayersHouse_1F_Movement_MomFaceRight
# 589 "data/scripts/players_house.pory"
	waitmovement 0
	return


PlayersHouse_1F_EventScript_MomAreYouMeetingDad::
# 594 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_EventScript_MomAreYouMeetingDad_Text_0
# 595 "data/scripts/players_house.pory"
	closemessage
# 596 "data/scripts/players_house.pory"
	applymovement LOCALID_MOM, PlayersHouse_1F_Movement_MomFaceRight
# 597 "data/scripts/players_house.pory"
	waitmovement 0
	return


# 601 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_MomFaceRight:
# 602 "data/scripts/players_house.pory"
	face_right
	step_end

PlayersHouse_1F_EventScript_MomBeforeStarter_Text_0:
# 586 "data/scripts/players_house.pory"
	.string "MOM: Make sure you have everything you\n"
	.string "need from your desk, hon.$"

PlayersHouse_1F_EventScript_MomAreYouMeetingDad_Text_0:
# 594 "data/scripts/players_house.pory"
	.string "MOM: Are you going to head to Route 12\n"
	.string "to meet DAD?$"
