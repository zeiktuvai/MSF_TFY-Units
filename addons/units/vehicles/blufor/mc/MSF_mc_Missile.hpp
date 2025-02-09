class MSF_ATRifleman :  MSF_Soldier_Base
{
	displayName = "AT Specialist";
	role = "MSFSpecial";
	icon = "iconManAT";
	editorSubcategory = "MSF_EdSubcat_Inf";
	scope = 2;
	scopeCurator = 2;
	weapons[] = {
        "MSF_MX", "Rangefinder", "launch_MRAWS_green_F", "Throw", "Put"
    };
    magazines[] = {
        "acex_intelitems_notepad", "MRAWS_HEAT_F", "30Rnd_65x39_caseless_mag_Tracer", "30Rnd_65x39_caseless_mag_Tracer", 
		"30Rnd_65x39_caseless_mag_Tracer", "30Rnd_65x39_caseless_mag_Tracer", "30Rnd_65x39_caseless_mag_Tracer",
		"30Rnd_65x39_caseless_mag_Tracer", "30Rnd_65x39_caseless_mag_Tracer", "30Rnd_65x39_caseless_mag_Tracer"
    };
    items[] = {
		"ACE_Banana", "ACE_RangeCard"
    };
    linkedItems[] = {
        "V_PlateCarrier1_rgr", "H_HelmetB_grass", "G_Combat", "ItemMap", "ItemRadio", "ItemCompass", "ACE_Altimeter", "ItemGPS", 
		"JAS_GPNVG18_blk"
    };	
	respawnWeapons[] = {
		"MSF_MX", "Rangefinder", "launch_MRAWS_green_F", "Throw", "Put"
	};
	respawnMagazines[] = {
        "acex_intelitems_notepad", "MRAWS_HEAT_F", "30Rnd_65x39_caseless_mag_Tracer", "30Rnd_65x39_caseless_mag_Tracer", 
		"30Rnd_65x39_caseless_mag_Tracer", "30Rnd_65x39_caseless_mag_Tracer", "30Rnd_65x39_caseless_mag_Tracer",
		"30Rnd_65x39_caseless_mag_Tracer", "30Rnd_65x39_caseless_mag_Tracer", "30Rnd_65x39_caseless_mag_Tracer"
	};
	RespawnItems[] = {
		"ACE_Banana", "ACE_RangeCard"
	};
	respawnLinkedItems[] = {
        "V_PlateCarrier1_rgr", "H_HelmetB_grass", "G_Combat", "ItemMap", "ItemRadio", "ItemCompass", "ACE_Altimeter", "ItemGPS", 
		"JAS_GPNVG18_blk"
	};
    uniformClass = "U_B_CombatUniform_mcam";
    backpack = "MSF_mc_ATBackpack";
};

class MSF_AARifleman :  MSF_Soldier_Base
{
	displayName = "AA Specialist";
	role = "MSFSpecial";
	icon = "iconManAT";
	editorSubcategory = "MSF_EdSubcat_Inf";
	scope = 2;
	scopeCurator = 2;
	weapons[] = {
        "MSF_MX", "Rangefinder", "launch_I_Titan_F", "Throw", "Put"
    };
    magazines[] = {
        "acex_intelitems_notepad", "Titan_AA", "30Rnd_65x39_caseless_mag_Tracer", "30Rnd_65x39_caseless_mag_Tracer", 
		"30Rnd_65x39_caseless_mag_Tracer", "30Rnd_65x39_caseless_mag_Tracer", "30Rnd_65x39_caseless_mag_Tracer",
		"30Rnd_65x39_caseless_mag_Tracer", "30Rnd_65x39_caseless_mag_Tracer", "30Rnd_65x39_caseless_mag_Tracer"
    };
    items[] = {
		"ACE_Banana"  
    };
    linkedItems[] = {
        "V_PlateCarrier1_rgr", "H_HelmetB_grass", "G_Combat", "ItemMap", "ItemRadio", "ItemCompass", "ACE_Altimeter", "ItemGPS", 
		"JAS_GPNVG18_blk"
    };	
	respawnWeapons[] = {
		"MSF_MX", "Rangefinder", "launch_I_Titan_F", "Throw", "Put"
	};
	respawnMagazines[] = {
        "acex_intelitems_notepad", "Titan_AA", "30Rnd_65x39_caseless_mag_Tracer", "30Rnd_65x39_caseless_mag_Tracer", 
		"30Rnd_65x39_caseless_mag_Tracer", "30Rnd_65x39_caseless_mag_Tracer", "30Rnd_65x39_caseless_mag_Tracer",
		"30Rnd_65x39_caseless_mag_Tracer", "30Rnd_65x39_caseless_mag_Tracer", "30Rnd_65x39_caseless_mag_Tracer"
	};
	RespawnItems[] = {
		"ACE_Banana"
	};
	respawnLinkedItems[] = {
        "V_PlateCarrier1_rgr", "H_HelmetB_grass", "G_Combat", "ItemMap", "ItemRadio", "ItemCompass", "ACE_Altimeter", "ItemGPS", 
		"JAS_GPNVG18_blk"
	};
    uniformClass = "U_B_CombatUniform_mcam";
    backpack = "MSF_mc_AABackpack";
};