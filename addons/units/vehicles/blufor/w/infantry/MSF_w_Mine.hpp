class MSF_Mine_W :  MSF_Mine
{
	editorSubcategory = "MSF_EdSubcat_Inf_Winter";
    editorPreview = "z\msf\addons\units\ui\icon\blufor\w\men\MSF_Mine_W.jpg";
	#include "mx_std.inc"
    items[] = {
		"ACE_DefusalKit", "MineDetector", "ACE_Banana" 
    };
    linkedItems[] = {
        "MSF_EOD_W", "MSF_NATO_HelmetB_w", "ItemMap", "ItemRadio", "ItemCompass", "ACE_Altimeter", "ItemGPS", "JAS_GPNVG18_blk_TI",
        "MSF_G_Combat_White"
    };	
	RespawnItems[] = {
		"ACE_DefusalKit", "MineDetector", "ACE_Banana"
	};
	respawnLinkedItems[] = {
        "MSF_EOD_W", "MSF_NATO_HelmetB_w", "ItemMap", "ItemRadio", "ItemCompass", "ACE_Altimeter", "ItemGPS", "JAS_GPNVG18_blk_TI",
        "MSF_G_Combat_White"
	};
    uniformClass = "MSF_NATO_Uniform_Alpine";
    backpack = "MSF_w_MineBackpack";
};
