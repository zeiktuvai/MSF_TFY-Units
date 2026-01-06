class MSF_Repair_N :  MSF_Repair
{
	editorSubcategory = "MSF_EdSubcat_Inf_Night";
    editorPreview = "z\msf\addons\units\ui\icon\blufor\blk\men\MSF_Repair_N.jpg";
    weapons[] = {
        "MSF_MX_B",
        #include "../../base/Base_Weap_HgunBino.inc"
    };
    respawnWeapons[] = {
		"MSF_MX_B",
        #include "../../base/Base_Weap_HgunBino.inc"
	};
    linkedItems[] = {
        "V_PlateCarrier2_blk", "H_Booniehat_mgrn", "G_Tactical_Clear", "JAS_GPNVG18_blk",
        "ItemMap", "ItemRadio", "ItemCompass", "ACE_Altimeter", "MSF_LogisticsTerminal"
    };
	respawnLinkedItems[] = {
        "V_PlateCarrier2_blk", "H_Booniehat_mgrn", "G_Tactical_Clear", "JAS_GPNVG18_blk",
        "ItemMap", "ItemRadio", "ItemCompass", "ACE_Altimeter", "MSF_LogisticsTerminal"
	};
    items[] = {
		"ToolKit",
		#include "../../base/Base_Items.inc"
        #include "../../base/Base_Items_Night.inc"
    };
    RespawnItems[] = {
		"ToolKit",
		#include "../../base/Base_Items.inc"
        #include "../../base/Base_Items_Night.inc"
	};
    uniformClass = "MSF_BLUFOR_Clothing_MCB";
    backpack = "MSF_blk_BaseBackpack";
};
