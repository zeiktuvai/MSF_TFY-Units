class MSF_Crewman_W :  MSF_Crewman
{
	editorSubcategory = "MSF_EdSubcat_Inf_Winter";
	hiddenSelections[] = {"Camo","Insignia"};
	hiddenSelectionsTextures[] = {"z\msf\addons\units\data\blufor\w\MSF_BLUFOR_Tanker_Alpine.paa"};
    model = "\A3\Characters_F_Tank\Uniforms\U_Tank_crew_F.p3d";
	weapons[] = {
        "MSF_MXSW_W", "Binocular", "hgun_P07_F", "Throw", "Put"
    };
    magazines[] = {
        "acex_intelitems_notepad", "SmokeShellGreen", "SmokeShellRed", "30Rnd_65x39_caseless_black_mag_Tracer",
        "30Rnd_65x39_caseless_black_mag_Tracer", "30Rnd_65x39_caseless_black_mag_Tracer", "30Rnd_65x39_caseless_black_mag_Tracer",
		"30Rnd_65x39_caseless_black_mag_Tracer", "30Rnd_9x21_Mag", "30Rnd_9x21_Mag", "30Rnd_9x21_Mag",
    };
    items[] = {
		"ACE_ATragMX", "ACE_RangeCard", "ACE_Banana", "ToolKit"
    };
    linkedItems[] = {
        "NATO_WINTER_V_PLATECARRIER1", "NATO_WINTER_H_HELMETCREW", "MSF_Balaclava_TI_Alpine", "ItemMap", "ItemRadio", "ItemCompass", "ACE_Altimeter",
		"ItemGPS", "JAS_GPNVG18_blk_TI"
    };	
	respawnWeapons[] = {
		"MSF_MXSW_W", "Binocular", "hgun_P07_F", "Throw", "Put"
	};
	respawnMagazines[] = {
        "acex_intelitems_notepad", "SmokeShellGreen", "SmokeShellRed", "30Rnd_65x39_caseless_black_mag_Tracer",
        "30Rnd_65x39_caseless_black_mag_Tracer", "30Rnd_65x39_caseless_black_mag_Tracer", "30Rnd_65x39_caseless_black_mag_Tracer",
		"30Rnd_65x39_caseless_black_mag_Tracer", "30Rnd_9x21_Mag", "30Rnd_9x21_Mag", "30Rnd_9x21_Mag"
	};
	RespawnItems[] = {
		 "ACE_ATragMX", "ACE_RangeCard", "ACE_Banana", "ToolKit"
	};
	respawnLinkedItems[] = {
        "NATO_WINTER_V_PLATECARRIER1", "NATO_WINTER_H_HELMETCREW", "MSF_Balaclava_TI_Alpine", "ItemMap", "ItemRadio", "ItemCompass", "ACE_Altimeter",
		"ItemGPS", "JAS_GPNVG18_blk_TI"
	};
    uniformClass = "MSF_BLUFOR_Tanker_Alpine";
    backpack = "MSF_w_PMAGBackpack";
};