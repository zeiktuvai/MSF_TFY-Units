class MSF_Engineer :  MSF_Soldier_Base
{
	displayName = "Engineer";
	role = "MSFSupport";	
	editorSubcategory = "MSF_EdSubcat_Inf";
	scope = 2;
	scopeCurator = 2;
	canDeactivateMines = 1;
	engineer = 1;
	icon = "iconManEngineer";
	weapons[] = {
        "MSF_MX", "Binocular", "hgun_P07_F", "Throw", "Put"
    };
    magazines[] = {
        "acex_intelitems_notepad", "SmokeShellGreen", "SmokeShellRed", "SmokeShellRed", "30Rnd_65x39_caseless_mag_Tracer",
		"30Rnd_65x39_caseless_mag_Tracer", "30Rnd_65x39_caseless_mag_Tracer", "30Rnd_65x39_caseless_mag_Tracer", 
		"30Rnd_65x39_caseless_mag_Tracer", "30Rnd_65x39_caseless_mag_Tracer", "30Rnd_9x21_Mag", "30Rnd_9x21_Mag", "30Rnd_9x21_Mag"
    };
    items[] = {
		"ACE_Banana", "ACE_RangeCard"
    };
    linkedItems[] = {
        "V_PlateCarrier1_rgr", "H_HelmetB_light_desert", "G_Tactical_Clear", "ItemMap", "ItemRadio", "ItemCompass", "ACE_Altimeter", "ItemGPS", "JAS_GPNVG18_blk"
    };	
	respawnWeapons[] = {
		"MSF_MX", "Binocular", "hgun_P07_F", "Throw", "Put"
	};
	respawnMagazines[] = {
        "acex_intelitems_notepad", "SmokeShellGreen", "SmokeShellRed", "SmokeShellRed", "30Rnd_65x39_caseless_mag_Tracer",
		"30Rnd_65x39_caseless_mag_Tracer", "30Rnd_65x39_caseless_mag_Tracer", "30Rnd_65x39_caseless_mag_Tracer", 
		"30Rnd_65x39_caseless_mag_Tracer", "30Rnd_65x39_caseless_mag_Tracer", "30Rnd_9x21_Mag", "30Rnd_9x21_Mag", "30Rnd_9x21_Mag"
	};
	RespawnItems[] = {
		"ACE_Banana", "ACE_RangeCard"
	};
	respawnLinkedItems[] = {
        "V_PlateCarrier1_rgr", "H_HelmetB_light_desert", "G_Tactical_Clear", "ItemMap", "ItemRadio", "ItemCompass", "ACE_Altimeter", "ItemGPS", "JAS_GPNVG18_blk"
	};
    uniformClass = "U_B_CombatUniform_mcam_tshirt";
    backpack = "MSF_mc_EngBackpack";
};