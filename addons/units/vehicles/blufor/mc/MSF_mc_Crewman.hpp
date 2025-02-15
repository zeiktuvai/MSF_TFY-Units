class MSF_Crewman :  MSF_Soldier_Base
{
	displayName = "Vehicle Crewman";
	role = "MSFCrew";	
	editorSubcategory = "MSF_EdSubcat_Inf";
	icon = "iconManEngineer";
	scope = 2;
	engineer = 1;
	scopeCurator = 2;
	hiddenSelections[] = {"Camo","Insignia"}; 
	hiddenSelectionsTextures[] = {"z\msf\addons\units\data\blufor\MSF_BLUFOR_Tanker_mc.paa"};
    model = "\A3\Characters_F_Tank\Uniforms\U_Tank_crew_F.p3d";
	weapons[] = {
        "MSF_MXC", "Binocular", "hgun_P07_F", "Throw", "Put"
    };
    magazines[] = {
        "acex_intelitems_notepad", "SmokeShellGreen", "SmokeShellRed", "30Rnd_9x21_Mag", "30Rnd_9x21_Mag", "30Rnd_9x21_Mag", "30Rnd_65x39_caseless_mag_Tracer",
		"30Rnd_65x39_caseless_mag_Tracer", "30Rnd_65x39_caseless_mag_Tracer", "30Rnd_65x39_caseless_mag_Tracer", "30Rnd_65x39_caseless_mag_Tracer",
		"30Rnd_65x39_caseless_mag_Tracer"
    };
    items[] = {
		"ACE_ATragMX", "ACE_RangeCard", "ACE_Banana", "ToolKit"
    };
    linkedItems[] = {
        "V_Chestrig_rgr", "H_HelmetCrew_B", "G_Tactical_Clear", "ItemMap", "ItemRadio", "ItemCompass", "ACE_Altimeter", "ItemGPS",
		"JAS_GPNVG18_blk_TI"
    };	
	respawnWeapons[] = {
		"MSF_MXC", "Binocular", "hgun_P07_F", "Throw", "Put"
	};
	respawnMagazines[] = {
        "acex_intelitems_notepad", "SmokeShellGreen", "SmokeShellRed", "30Rnd_9x21_Mag", "30Rnd_9x21_Mag", "30Rnd_9x21_Mag", "30Rnd_65x39_caseless_mag_Tracer",
		"30Rnd_65x39_caseless_mag_Tracer", "30Rnd_65x39_caseless_mag_Tracer", "30Rnd_65x39_caseless_mag_Tracer", "30Rnd_65x39_caseless_mag_Tracer",
		"30Rnd_65x39_caseless_mag_Tracer"
	};
	RespawnItems[] = {
		 "ACE_ATragMX", "ACE_RangeCard", "ACE_Banana", "ToolKit"
	};
	respawnLinkedItems[] = {
        "V_Chestrig_rgr", "H_HelmetCrew_B", "G_Tactical_Clear", "ItemMap", "ItemRadio", "ItemCompass", "ACE_Altimeter", "ItemGPS", 
		"JAS_GPNVG18_blk_TI"
	};
    uniformClass = "MSF_BLUFOR_Tanker_MC";
    backpack = "MSF_mc_PMAGBackpack";
};