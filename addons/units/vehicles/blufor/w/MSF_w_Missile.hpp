class MSF_ATRifleman_W :  MSF_ATRifleman
{
	editorSubcategory = "MSF_EdSubcat_Inf_Winter";
	weapons[] = {
        "MSF_MXSW_W", "Rangefinder", "NATO_WINTER_MAAWS", "Throw", "Put"
    };
    magazines[] = {
        "acex_intelitems_notepad", "30Rnd_65x39_caseless_black_mag_Tracer", "30Rnd_65x39_caseless_black_mag_Tracer",
		"30Rnd_65x39_caseless_black_mag_Tracer", "30Rnd_65x39_caseless_black_mag_Tracer",
		"30Rnd_65x39_caseless_black_mag_Tracer", "30Rnd_65x39_caseless_black_mag_Tracer", "MRAWS_HEAT_F",
		"30Rnd_65x39_caseless_black_mag_Tracer", "30Rnd_65x39_caseless_black_mag_Tracer"
    };
    items[] = {
		"ACE_Banana"  
    };
    linkedItems[] = {
        "MSF_NATO_W_CARRIER_GL", "MSF_NATO_HelmetSpec_w", "MSF_Balaclava_TI_G_Alpine", "ItemMap", "ItemRadio", "ItemCompass",
		"ACE_Altimeter", "ItemGPS", "JAS_GPNVG18_blk_TI"
    };	
	respawnWeapons[] = {
		"MSF_MXSW_W", "Rangefinder", "launch_MRAWS_green_F", "Throw", "Put"
	};
	respawnMagazines[] = {
        "acex_intelitems_notepad", "30Rnd_65x39_caseless_black_mag_Tracer", "30Rnd_65x39_caseless_black_mag_Tracer",
		"30Rnd_65x39_caseless_black_mag_Tracer", "30Rnd_65x39_caseless_black_mag_Tracer",
		"30Rnd_65x39_caseless_black_mag_Tracer", "30Rnd_65x39_caseless_black_mag_Tracer", "MRAWS_HEAT_F",
		"30Rnd_65x39_caseless_black_mag_Tracer", "30Rnd_65x39_caseless_black_mag_Tracer"
	};
	RespawnItems[] = {
		"ACE_Banana"
	};
	respawnLinkedItems[] = {
        "MSF_NATO_W_CARRIER_GL", "MSF_NATO_HelmetSpec_w", "MSF_Balaclava_TI_G_Alpine", "ItemMap", "ItemRadio", "ItemCompass",
		"ACE_Altimeter", "ItemGPS", "JAS_GPNVG18_blk_TI"
	};
    uniformClass = "MSF_NATO_Uniform_Alpine";
    backpack = "MSF_w_ATBackpack";
};

class MSF_AARifleman_W :  MSF_AARifleman
{
	editorSubcategory = "MSF_EdSubcat_Inf_Winter";
	weapons[] = {
        "MSF_MXSW_W", "Rangefinder", "NATO_WINTER_TITAN", "Throw", "Put"
    };
    magazines[] = {
        "acex_intelitems_notepad", "30Rnd_65x39_caseless_black_mag_Tracer", "30Rnd_65x39_caseless_black_mag_Tracer",
		"30Rnd_65x39_caseless_black_mag_Tracer", "30Rnd_65x39_caseless_black_mag_Tracer",
		"30Rnd_65x39_caseless_black_mag_Tracer", "30Rnd_65x39_caseless_black_mag_Tracer", "Titan_AA",
		"30Rnd_65x39_caseless_black_mag_Tracer", "30Rnd_65x39_caseless_black_mag_Tracer"
    };
    items[] = {
		"ACE_Banana"  
    };
    linkedItems[] = {
        "MSF_NATO_W_CARRIER_GL", "MSF_NATO_HelmetSpec_w", "MSF_Balaclava_TI_G_Alpine", "ItemMap", "ItemRadio", "ItemCompass",
		"ACE_Altimeter", "ItemGPS", "JAS_GPNVG18_blk_TI"
    };	
	respawnWeapons[] = {
		"MSF_MXSW_W", "Rangefinder", "launch_I_Titan_F", "Throw", "Put"
	};
	respawnMagazines[] = {
        "acex_intelitems_notepad", "30Rnd_65x39_caseless_black_mag_Tracer", "30Rnd_65x39_caseless_black_mag_Tracer",
		"30Rnd_65x39_caseless_black_mag_Tracer", "30Rnd_65x39_caseless_black_mag_Tracer",
		"30Rnd_65x39_caseless_black_mag_Tracer", "30Rnd_65x39_caseless_black_mag_Tracer", "Titan_AA",
		"30Rnd_65x39_caseless_black_mag_Tracer", "30Rnd_65x39_caseless_black_mag_Tracer"
	};
	RespawnItems[] = {
		"ACE_Banana"
	};
	respawnLinkedItems[] = {
        "MSF_NATO_W_CARRIER_GL", "MSF_NATO_HelmetSpec_w", "MSF_Balaclava_TI_G_Alpine", "ItemMap", "ItemRadio", "ItemCompass",
		"ACE_Altimeter", "ItemGPS", "JAS_GPNVG18_blk_TI"
	};
    uniformClass = "MSF_NATO_Uniform_Alpine";
    backpack = "MSF_w_AABackpack";
};