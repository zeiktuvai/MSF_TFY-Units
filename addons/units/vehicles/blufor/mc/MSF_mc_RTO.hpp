class MSF_RTO :  MSF_Soldier_Base
{
	displayName = "Radio Operator (RTO)[TFAR]";
	role = "MSFAssault";	
	editorSubcategory = "MSF_EdSubcat_Inf";
	scope = 2;
	scopeCurator = 2;
	weapons[] = {
        "MSF_MX", "Binocular", "Throw", "Put"
    };
    magazines[] = {
        "acex_intelitems_notepad",  "SmokeShellGreen", "SmokeShellGreen", "SmokeShellGreen", "SmokeShellGreen",
		"30Rnd_65x39_caseless_mag_Tracer", "30Rnd_65x39_caseless_mag_Tracer", "30Rnd_65x39_caseless_mag_Tracer", 
		"30Rnd_65x39_caseless_mag_Tracer", "30Rnd_65x39_caseless_mag_Tracer", "30Rnd_65x39_caseless_mag_Tracer",
    };
    items[] = {
		"MineDetector", "ACE_Banana", "ACE_RangeCard"
    };
    linkedItems[] = {
        "V_PlateCarrier2_rgr", "H_HelmetSpecB", "ItemMap", "ItemRadio", "ItemCompass", "ACE_Altimeter", "ItemGPS", 
		"JAS_GPNVG18_Tan_TI"
    };	
	respawnWeapons[] = {
		"MSF_MX", "Binocular", "Throw", "Put"
	};
	respawnMagazines[] = {
        "acex_intelitems_notepad",  "SmokeShellGreen", "SmokeShellGreen", "SmokeShellGreen", "SmokeShellGreen",
		"30Rnd_65x39_caseless_mag_Tracer", "30Rnd_65x39_caseless_mag_Tracer", "30Rnd_65x39_caseless_mag_Tracer", 
		"30Rnd_65x39_caseless_mag_Tracer", "30Rnd_65x39_caseless_mag_Tracer", "30Rnd_65x39_caseless_mag_Tracer",
	};
	RespawnItems[] = {
		"MineDetector", "ACE_Banana", "ACE_RangeCard"
	};
	respawnLinkedItems[] = {
        "V_PlateCarrier2_rgr", "H_HelmetSpecB", "ItemMap", "ItemRadio", "ItemCompass", "ACE_Altimeter", "ItemGPS", 
		"JAS_GPNVG18_Tan_TI"
	};
    uniformClass = "U_B_CombatUniform_mcam";
    backpack = "MSF_mc_RTOBackPack";
};