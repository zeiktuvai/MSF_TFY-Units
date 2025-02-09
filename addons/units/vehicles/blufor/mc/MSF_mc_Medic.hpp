class MSF_Medic :  MSF_Soldier_Base
{
	displayName = "Combat Medic";
	role = "MSFSupport";	
	editorSubcategory = "MSF_EdSubcat_Inf";
	scope = 2;
	scopeCurator = 2;
    attendant = 1;
    icon = "iconManMedic";
	weapons[] = {
        "MSF_MX", "Binocular", "Throw", "Put"
    };
    magazines[] = {
        "acex_intelitems_notepad", "SmokeShellGreen", "SmokeShellOrange", "SmokeShellPurple", "30Rnd_65x39_caseless_mag_Tracer",
		"30Rnd_65x39_caseless_mag_Tracer", "30Rnd_65x39_caseless_mag_Tracer", "30Rnd_65x39_caseless_mag_Tracer", "30Rnd_65x39_caseless_mag_Tracer",
		"30Rnd_65x39_caseless_mag_Tracer"
    };
    items[] = {
		"ACE_Banana"
    };
    linkedItems[] = {
        "V_PlateCarrier1_rgr", "H_HelmetB_light", "G_Lowprofile", "ItemMap", "ItemRadio", "ItemCompass", "ACE_Altimeter", "B_UavTerminal", 
		"JAS_GPNVG18_blk_TI"
    };	
	respawnWeapons[] = {
		"MSF_MX", "Binocular", "Throw", "Put"
	};
	respawnMagazines[] = {
        "acex_intelitems_notepad", "SmokeShellGreen", "SmokeShellOrange", "SmokeShellPurple", "30Rnd_65x39_caseless_mag_Tracer",
		"30Rnd_65x39_caseless_mag_Tracer", "30Rnd_65x39_caseless_mag_Tracer", "30Rnd_65x39_caseless_mag_Tracer", "30Rnd_65x39_caseless_mag_Tracer",
		"30Rnd_65x39_caseless_mag_Tracer"
	};
	RespawnItems[] = {
		"ACE_Banana"
	};
	respawnLinkedItems[] = {
        "V_PlateCarrier1_rgr", "H_HelmetB_light", "G_Lowprofile", "ItemMap", "ItemRadio", "ItemCompass", "ACE_Altimeter", "B_UavTerminal", 
		"JAS_GPNVG18_blk_TI"
	};
    uniformClass = "U_B_CombatUniform_mcam";
    backpack = "MSF_mc_MedicBackpack";
};