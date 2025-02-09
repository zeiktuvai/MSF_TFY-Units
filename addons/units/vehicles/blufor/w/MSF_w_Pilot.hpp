class MSF_Pilot_W :  MSF_Pilot
{
	editorSubcategory = "MSF_EdSubcat_Inf_Winter";
	weapons[] = {
        "MSF_MXC_W", "Binocular", "hgun_P07_F", "Throw", "Put"
    };
    linkedItems[] = {
        "NATO_WINTER_V_CHESTRIG", "H_PilotHelmetHeli_B", "G_Tactical_Clear", "ItemMap", "ItemRadio", "ItemCompass", "ACE_Altimeter", "ItemGPS", 
		"JAS_GPNVG18_blk_TI",
    };	
	respawnWeapons[] = {
		"MSF_MXC_W", "Binocular", "hgun_P07_F", "Throw", "Put"
	};
	respawnLinkedItems[] = {
        "NATO_WINTER_V_CHESTRIG", "H_PilotHelmetHeli_B", "G_Tactical_Clear", "ItemMap", "ItemRadio", "ItemCompass", "ACE_Altimeter", "ItemGPS", 
		"JAS_GPNVG18_blk_TI",
	};
    uniformClass = "NATO_WINTER_HELIPILOT_COVERALLS";
    backpack = "B_Parachute";
};
