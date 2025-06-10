class MSF_Pilot_W :  MSF_Pilot
{
	editorSubcategory = "MSF_EdSubcat_Inf_Winter";
	#include "mx_carbine.inc"
    linkedItems[] = {
        "MSF_NATO_W_CHESTRIG", "H_PilotHelmetHeli_B", "G_Tactical_Clear", "ItemMap", "ItemRadio", "ItemCompass", "ACE_Altimeter", "ItemGPS", 
		"JAS_GPNVG18_blk_TI",
    };
	respawnLinkedItems[] = {
        "MSF_NATO_W_CHESTRIG", "H_PilotHelmetHeli_B", "G_Tactical_Clear", "ItemMap", "ItemRadio", "ItemCompass", "ACE_Altimeter", "ItemGPS", 
		"JAS_GPNVG18_blk_TI",
	};
    uniformClass = "MSF_BLUFOR_Coveralls_Alpine";
    backpack = "B_Parachute";
	model = "\A3\Characters_F\Common\coveralls.p3d";
	hiddenSelectionsTextures[] = {"z\msf\addons\units\data\blufor\w\uniform\MSF_NATO_Coveralls_Alpine.paa"};
};
