class MSF_Engineer_N :  MSF_Engineer
{
	editorSubcategory = "MSF_EdSubcat_Inf_Night";
    weapons[] = {
        "MSF_MX_B",
        #include "../../base/Base_Weap_HgunBino.inc"
    };
    respawnWeapons[] = {
		"MSF_MX_B",
        #include "../../base/Base_Weap_HgunBino.inc"
	};
    linkedItems[] = {
        "V_PlateCarrier2_blk", "H_HelmetB_light_black", "G_Tactical_Clear", "JAS_GPNVG18_blk",
        "ItemMap", "ItemRadio", "ItemCompass", "ACE_Altimeter", "MSF_LogisticsTerminal"
    };	
	respawnLinkedItems[] = {
        "V_PlateCarrier2_blk", "H_HelmetB_light_black", "G_Tactical_Clear", "JAS_GPNVG18_blk",
        "ItemMap", "ItemRadio", "ItemCompass", "ACE_Altimeter", "MSF_LogisticsTerminal"
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
    backpack = "MSF_blk_EngBackpack";
};
