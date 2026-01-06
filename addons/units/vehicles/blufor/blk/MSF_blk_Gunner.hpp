class MSF_Gunner_N :  MSF_Gunner
{
	editorSubcategory = "MSF_EdSubcat_Inf_Night";
    editorPreview = "z\msf\addons\units\ui\icon\blufor\blk\men\MSF_Gunner_N.jpg";
	linkedItems[] = {
        "V_PlateCarrier1_blk", "H_HelmetB_black", "G_Combat", "JAS_GPNVG18_blk",
        #include "../../base/Base_Linked.inc"
    };	
	respawnLinkedItems[] = {
        "V_PlateCarrier1_blk", "H_HelmetB_black", "G_Combat", "JAS_GPNVG18_blk",
        #include "../../base/Base_Linked.inc"
	};
    items[] = {
		#include "../../base/Base_Items.inc"
        #include "../../base/Base_Items_Night.inc"
    };
    RespawnItems[] = {
		#include "../../base/Base_Items.inc"
        #include "../../base/Base_Items_Night.inc"
	};
    uniformClass = "MSF_BLUFOR_Clothing_MCB";
    backpack = "MSF_blk_BaseBackpack";
};
