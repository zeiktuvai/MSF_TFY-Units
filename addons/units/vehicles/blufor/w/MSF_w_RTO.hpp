class MSF_RTO_W :  MSF_RTO
{
	editorSubcategory = "MSF_EdSubcat_Inf_Winter";
	weapons[] = {
        "MSF_MXSW_W", "Binocular", "rhs_weap_M320", "Throw", "Put"
    };
    magazines[] = {
		"acex_intelitems_notepad",  "SmokeShellGreen", "SmokeShellGreen", "SmokeShellGreen", "SmokeShellGreen",
		"30Rnd_65x39_caseless_black_mag_Tracer", "30Rnd_65x39_caseless_black_mag_Tracer", "30Rnd_65x39_caseless_black_mag_Tracer",
		"30Rnd_65x39_caseless_black_mag_Tracer", "30Rnd_65x39_caseless_black_mag_Tracer", "30Rnd_65x39_caseless_black_mag_Tracer"
    };
    linkedItems[] = {
        "NATO_WINTER_H_HELMETPLAIN", "NATO_WINTER_V_PLATECARRIERSPEC", "MSF_Balaclava_TI_G_Alpine", "ItemMap", "ItemRadio", "ItemCompass", 
		"ACE_Altimeter", "ItemGPS", "JAS_GPNVG18_blk_TI"
    };	
	respawnWeapons[] = {
		"MSF_MXSW_W", "Binocular", "rhs_weap_M320", "Throw", "Put"
	};
	respawnMagazines[] = {
		"acex_intelitems_notepad",  "SmokeShellGreen", "SmokeShellGreen", "SmokeShellGreen", "SmokeShellGreen",
		"30Rnd_65x39_caseless_black_mag_Tracer", "30Rnd_65x39_caseless_black_mag_Tracer", "30Rnd_65x39_caseless_black_mag_Tracer",
		"30Rnd_65x39_caseless_black_mag_Tracer", "30Rnd_65x39_caseless_black_mag_Tracer", "30Rnd_65x39_caseless_black_mag_Tracer"
    };
	respawnLinkedItems[] = {
        "NATO_WINTER_H_HELMETPLAIN", "NATO_WINTER_V_PLATECARRIERSPEC", "MSF_Balaclava_TI_G_Alpine", "ItemMap", "ItemRadio", "ItemCompass", 
		"ACE_Altimeter", "ItemGPS", "JAS_GPNVG18_blk_TI"
	};
    uniformClass = "MSF_NATO_Uniform_Alpine";
    backpack = "MSF_trop_RTOBackPack";
};