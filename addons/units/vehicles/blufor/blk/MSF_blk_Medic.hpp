class MSF_Medic_N :  MSF_Medic
{
	editorSubcategory = "MSF_EdSubcat_Inf_Night";
    editorPreview = "z\msf\addons\units\ui\icon\blufor\blk\men\MSF_Medic_N.jpg";
    weapons[] = {
        "MSF_MX_B",
        #include "../../base/Base_Weap_HgunBino.inc"
    };
    respawnWeapons[] = {
		"MSF_MX_B",
        #include "../../base/Base_Weap_HgunBino.inc"
	};
    linkedItems[] = {
        "V_TacVestIR_blk", "H_HelmetB_light_black", "G_Combat", "JAS_GPNVG18_blk",
        #include "../../base/Base_Linked.inc"
    };	
	respawnLinkedItems[] = {
        "V_TacVestIR_blk", "H_HelmetB_light_black", "G_Combat", "JAS_GPNVG18_blk",
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
    backpack = "MSF_blk_MedicBackpack";
};
