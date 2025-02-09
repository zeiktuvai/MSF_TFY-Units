class MSF_Repair :  MSF_Soldier_Base
{
	displayName = "Mechanic";
	role = "MSFSupport";	
	editorSubcategory = "MSF_EdSubcat_Inf";
	scope = 2;
	scopeCurator = 2;	
	engineer = 1;
	icon = "iconManEngineer";
	weapons[] = {
        "MSF_MX", "Binocular", "hgun_P07_F", "Throw", "Put"
    };
    magazines[] = {
        "acex_intelitems_notepad", "SmokeShellGreen", "SmokeShellGreen", "30Rnd_65x39_caseless_mag_Tracer", 
		"30Rnd_65x39_caseless_mag_Tracer", "30Rnd_65x39_caseless_mag_Tracer", "30Rnd_65x39_caseless_mag_Tracer",
        "30Rnd_65x39_caseless_mag_Tracer", "30Rnd_65x39_caseless_mag_Tracer", "30Rnd_9x21_Mag", "30Rnd_9x21_Mag", 
		"30Rnd_9x21_Mag"
    };
    items[] = {
		"ACE_Banana", "ACE_Flashlight_XL50", "ToolKit"
    };
    linkedItems[] = {
        "V_PlateCarrier2_rgr", "H_Booniehat_mcamo", "G_Tactical_Clear", "ItemMap", "ItemRadio", "ItemCompass", "ACE_Altimeter", "ItemGPS", "JAS_GPNVG18_Tan_TI"
    };	
	respawnWeapons[] = {
		"MSF_MX", "Binocular", "hgun_P07_F", "Throw", "Put"
	};
	respawnMagazines[] = {
        "acex_intelitems_notepad", "SmokeShellGreen", "SmokeShellGreen", "30Rnd_65x39_caseless_mag_Tracer", 
		"30Rnd_65x39_caseless_mag_Tracer", "30Rnd_65x39_caseless_mag_Tracer", "30Rnd_65x39_caseless_mag_Tracer",
        "30Rnd_65x39_caseless_mag_Tracer", "30Rnd_65x39_caseless_mag_Tracer", "30Rnd_9x21_Mag", "30Rnd_9x21_Mag", 
		"30Rnd_9x21_Mag"
	};
	RespawnItems[] = {
		"ACE_Banana", "ACE_Flashlight_XL50", "ToolKit"
	};
	respawnLinkedItems[] = {
        "V_PlateCarrier2_rgr", "H_Booniehat_mcamo", "G_Tactical_Clear", "ItemMap", "ItemRadio", "ItemCompass", "ACE_Altimeter", "ItemGPS", "JAS_GPNVG18_Tan_TI"
	};
    uniformClass = "U_B_CombatUniform_mcam_vest";
    backpack = "MSF_mc_PMAGBackpack";
};