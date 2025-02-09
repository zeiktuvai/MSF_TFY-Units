class MSF_Gunner :  MSF_Soldier_Base
{
	displayName = "Support Gunner";
	icon = "iconManMG";
	role = "MSFAssault";	
	editorSubcategory = "MSF_EdSubcat_Inf";
	scope = 2;
	scopeCurator = 2;
	weapons[] = {
        "MSF_M249", "hgun_P07_F", "Binocular", "Throw", "Put"
    };
    magazines[] = {
        "acex_intelitems_notepad", "SmokeShellGreen", "SmokeShellGreen", "200Rnd_556x45_Box_Tracer_Red_F", 
		"200Rnd_556x45_Box_Tracer_Red_F", "200Rnd_556x45_Box_Tracer_Red_F", "200Rnd_556x45_Box_Tracer_Red_F",
		"30Rnd_9x21_Mag", "30Rnd_9x21_Mag", "30Rnd_9x21_Mag"
    };
    items[] = {
		"ACE_Banana", "ACE_WaterBottle", "ACE_RangeCard"
    };
    linkedItems[] = {
        "V_PlateCarrier1_rgr", "H_HelmetB_grass", "G_Combat", "ItemMap", "ItemRadio", "ItemCompass", "ACE_Altimeter", "ItemGPS", 
        "JAS_GPNVG18_Tan_TI"
    };	
	respawnWeapons[] = {
		"MSF_M249", "hgun_P07_F", "Binocular", "Throw", "Put"
	};
	respawnMagazines[] = {
        "acex_intelitems_notepad", "SmokeShellGreen", "SmokeShellGreen", "200Rnd_556x45_Box_Tracer_Red_F", 
		"200Rnd_556x45_Box_Tracer_Red_F", "200Rnd_556x45_Box_Tracer_Red_F", "200Rnd_556x45_Box_Tracer_Red_F",
		"30Rnd_9x21_Mag", "30Rnd_9x21_Mag", "30Rnd_9x21_Mag"
	};
	RespawnItems[] = {
		"ACE_Banana", "ACE_WaterBottle", "ACE_RangeCard"
	};
	respawnLinkedItems[] = {
        "V_PlateCarrier1_rgr", "H_HelmetB_grass", "G_Combat", "ItemMap", "ItemRadio", "ItemCompass", "ACE_Altimeter", "ItemGPS", 
        "JAS_GPNVG18_Tan_TI"	
	};
    uniformClass = "U_B_CombatUniform_mcam";
    backpack = "MSF_mc_BaseBackpack";
};