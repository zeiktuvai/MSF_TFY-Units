class MSF_Gunner_W :  MSF_Gunner
{	
	editorSubcategory = "MSF_EdSubcat_Inf_Winter";
	#include "mx_lmg.inc"
    items[] = {
		"ACE_Banana", "ACE_WaterBottle"        
    };
    linkedItems[] = {
        "MSF_NATO_W_CARRIER_GL", "MSF_NATO_HelmetSpec_w", "MSF_Balaclava_TI_G_Alpine", "ItemMap", "ItemRadio", "ItemCompass", 
		"ACE_Altimeter", "ItemGPS", "JAS_GPNVG18_blk_TI"
    };	
	RespawnItems[] = {
		"ACE_Banana", "ACE_WaterBottle" 
	};
	respawnLinkedItems[] = {
        "MSF_NATO_W_CARRIER_GL", "MSF_NATO_HelmetSpec_w", "MSF_Balaclava_TI_G_Alpine", "ItemMap", "ItemRadio", "ItemCompass",
		"ACE_Altimeter", "ItemGPS", "JAS_GPNVG18_blk_TI"	
	};
    uniformClass = "MSF_NATO_Uniform_Alpine";
    backpack = "MSF_w_SAWBackpack";
};