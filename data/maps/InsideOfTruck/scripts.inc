InsideOfTruck_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, InsideOfTruck_OnLoad
	map_script MAP_SCRIPT_ON_RESUME, InsideOfTruck_OnResume
	.byte 0

InsideOfTruck_OnLoad:
	setmetatile 4, 1, METATILE_InsideOfTruck_ExitLight_Top, FALSE
	setmetatile 4, 2, METATILE_InsideOfTruck_ExitLight_Mid, FALSE
	setmetatile 4, 3, METATILE_InsideOfTruck_ExitLight_Bottom, FALSE
	end

InsideOfTruck_OnResume:
	setstepcallback STEP_CB_TRUCK
	end

InsideOfTruck_EventScript_SetIntroFlagsMale::
	setrespawn HEAL_LOCATION_TINYBUD_TOWN_BRENDANS_HOUSE_2F
	setvar VAR_INTRO_STATE, 1
	setflag FLAG_HIDE_TINYBUD_TOWN_MAYS_HOUSE_MOM
	setvar VAR_TINYBUD_HOUSES_STATE_BRENDAN, 1
	setdynamicwarp MAP_TINYBUD_TOWN, 3, 10
	releaseall
	end
