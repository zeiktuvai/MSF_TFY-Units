class MSF_Mine_W :  MSF_Mine
{
	editorSubcategory = "MSF_EdSubcat_Inf_Winter";
	#include "mx_std.inc"
    items[] = {
		"ACE_DefusalKit", "MineDetector", "ACE_Banana" 
    };
    linkedItems[] = {
        "MSF_EOD_W", "H_HelmetHBK_chops_F", "ItemMap", "ItemRadio", "ItemCompass", "ACE_Altimeter", "ItemGPS", "JAS_GPNVG18_blk_TI"
    };	
	RespawnItems[] = {
		"ACE_DefusalKit", "MineDetector", "ACE_Banana"
	};
	respawnLinkedItems[] = {
        "MSF_EOD_W", "H_HelmetHBK_chops_F", "ItemMap", "ItemRadio", "ItemCompass", "ACE_Altimeter", "ItemGPS", "JAS_GPNVG18_blk_TI"
	};
    uniformClass = "MSF_NATO_Uniform_Alpine";
    backpack = "MSF_w_MineBackpack";
};
