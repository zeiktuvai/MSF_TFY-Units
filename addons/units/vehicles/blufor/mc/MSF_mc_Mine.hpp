class MSF_Mine :  MSF_Soldier_Base
{
	displayName = "Mine Specialist";
	role = "MSFSupport";	
	editorSubcategory = "MSF_EdSubcat_Inf";
	scope = 2;
	scopeCurator = 2;
	canDeactivateMines = 1;
	icon = "iconManExplosive";
	weapons[] = {
        "MSF_MX", "Binocular", "Throw", "Put"
    };
    magazines[] = {
        "acex_intelitems_notepad", "30Rnd_65x39_caseless_mag_Tracer", "30Rnd_65x39_caseless_mag_Tracer", "30Rnd_65x39_caseless_mag_Tracer",
		"30Rnd_65x39_caseless_mag_Tracer"
    };
    items[] = {
		"ACE_DefusalKit", "MineDetector", "ACE_Banana" 
    };
    linkedItems[] = {
        "V_EOD_olive_F", "H_HelmetHBK_chops_F", "ItemMap", "ItemRadio", "ItemCompass", "ACE_Altimeter", "ItemGPS", "JAS_GPNVG18_blk"
    };	
	respawnWeapons[] = {
		"MSF_MX", "Binocular", "Throw", "Put"
	};
	respawnMagazines[] = {
        "acex_intelitems_notepad", "30Rnd_65x39_caseless_mag_Tracer", "30Rnd_65x39_caseless_mag_Tracer", "30Rnd_65x39_caseless_mag_Tracer",
		"30Rnd_65x39_caseless_mag_Tracer"
	};
	RespawnItems[] = {
		"ACE_DefusalKit", "MineDetector", "ACE_Banana"
	};
	respawnLinkedItems[] = {
        "V_EOD_olive_F", "H_HelmetHBK_chops_F", "ItemMap", "ItemRadio", "ItemCompass", "ACE_Altimeter", "ItemGPS", "JAS_GPNVG18_blk"
	};
    uniformClass = "U_B_T_Soldier_SL_F";
    backpack = "MSF_mc_MineBackpack";
};
