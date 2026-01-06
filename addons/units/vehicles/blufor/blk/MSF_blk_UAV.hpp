class MSF_UAV_N :  MSF_UAV
{
	editorSubcategory = "MSF_EdSubcat_Inf_Night";
    editorPreview = "z\msf\addons\units\ui\icon\blufor\blk\men\MSF_UAV_N.jpg";
    weapons[] = {
        "MSF_MX_B",
        #include "../../base/Base_Weap_HgunBino.inc"
    };
    respawnWeapons[] = {
		"MSF_MX_B",
        #include "../../base/Base_Weap_HgunBino.inc"
	};
    linkedItems[] = {
        "V_PlateCarrier2_blk", "H_HelmetSpecB_blk", "G_Combat", "ItemMap", "ItemRadio", "ItemCompass", "ACE_Altimeter", "B_UavTerminal", 
		"JAS_GPNVG18_blk"
    };	
	respawnLinkedItems[] = {
        "V_PlateCarrier2_blk", "H_HelmetSpecB_blk", "G_Combat", "ItemMap", "ItemRadio", "ItemCompass", "ACE_Altimeter", "B_UavTerminal", 
		"JAS_GPNVG18_blk"
	};
    items[] = {
        #include "../../base/Base_Items.inc"
        #include "../../base/Items_No_BackPack.inc"
        #include "../../base/Base_Items_Night.inc"
    };
	RespawnItems[] = {
        #include "../../base/Base_Items.inc"
        #include "../../base/Items_No_BackPack.inc"
        #include "../../base/Base_Items_Night.inc"
	};
    uniformClass = "MSF_BLUFOR_Clothing_MCB";
    backpack = "MSF_UAV_01_Backpack_blk";
};
