class MSF_Marksman_N : MSF_Marksman
{
	editorSubcategory = "MSF_EdSubcat_Inf_Night";
	weapons[] = {
		"MSF_MXM_B","Rangefinder","hgun_Pistol_heavy_01_F", "Throw", "Put"
	};
	respawnWeapons[] = {
		"MSF_MXM_B","Rangefinder","hgun_Pistol_heavy_01_F", "Throw", "Put"
	};
	linkedItems[] = {
		"V_PlateCarrier2_blk", "H_HelmetB_black", "G_Balaclava_TI_tna_F", "JAS_GPNVG18_blk",
		#include "../../base/Base_Linked.inc"
	};
	respawnLinkedItems[] = {
		"V_PlateCarrier2_blk", "H_HelmetB_black", "G_Balaclava_TI_tna_F", "JAS_GPNVG18_blk",
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
