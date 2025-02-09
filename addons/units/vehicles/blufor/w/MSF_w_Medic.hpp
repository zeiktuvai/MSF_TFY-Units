class MSF_Medic_W :  MSF_Medic
{
	editorSubcategory = "MSF_EdSubcat_Inf_Winter";
	weapons[] = {
        "MSF_MXSW_W", "Binocular", "Throw", "Put"
    };
    magazines[] = {
        "acex_intelitems_notepad", "SmokeShellGreen", "SmokeShellOrange", "SmokeShellPurple", 
        "30Rnd_65x39_caseless_black_mag_Tracer", "30Rnd_65x39_caseless_black_mag_Tracer", "30Rnd_65x39_caseless_black_mag_Tracer", 
        "30Rnd_65x39_caseless_black_mag_Tracer", "30Rnd_65x39_caseless_black_mag_Tracer", "30Rnd_65x39_caseless_black_mag_Tracer", 
        "30Rnd_65x39_caseless_black_mag_Tracer"
    };
    items[] = {
		"ACE_Banana"  
    };
    linkedItems[] = {
        "NATO_WINTER_V_TACVEST", "NATO_WINTER_H_HELMETPLAIN", "MSF_Balaclava_TI_G_Alpine", "ItemMap", "ItemRadio", "ItemCompass", "ACE_Altimeter",
        "B_UavTerminal", "JAS_GPNVG18_blk_TI"
    };	
	respawnWeapons[] = {
		"MSF_MXSW_W", "Binocular", "Throw", "Put"
	};
	respawnMagazines[] = {
        "acex_intelitems_notepad", "SmokeShellGreen", "SmokeShellOrange", "SmokeShellPurple", 
        "30Rnd_65x39_caseless_black_mag_Tracer", "30Rnd_65x39_caseless_black_mag_Tracer", "30Rnd_65x39_caseless_black_mag_Tracer", 
        "30Rnd_65x39_caseless_black_mag_Tracer", "30Rnd_65x39_caseless_black_mag_Tracer", "30Rnd_65x39_caseless_black_mag_Tracer", 
        "30Rnd_65x39_caseless_black_mag_Tracer"
	};
	RespawnItems[] = {
		"ACE_Banana"
	};
	respawnLinkedItems[] = {
        "NATO_WINTER_V_TACVEST", "NATO_WINTER_H_HELMETPLAIN", "MSF_Balaclava_TI_G_Alpine", "ItemMap", "ItemRadio", "ItemCompass", "ACE_Altimeter",
        "B_UavTerminal", "JAS_GPNVG18_blk_TI"
	};
    uniformClass = "MSF_NATO_Uniform_Alpine";
    backpack = "MSF_w_MedicBackpack";
};