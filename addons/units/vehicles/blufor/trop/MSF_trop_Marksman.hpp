class MSF_Marksman_T : MSF_Marksman
{
	editorSubcategory = "MSF_EdSubcat_Inf_Trop";
	linkedItems[] = {
		"V_PlateCarrier2_rgr", "H_HelmetB_camo", "G_Balaclava_TI_tna_F", "JAS_GPNVG18_blk",
		#include "../../base/Base_Linked.inc"
	};
	respawnLinkedItems[] = {
		"V_PlateCarrier2_rgr", "H_HelmetB_camo", "G_Balaclava_TI_tna_F", "JAS_GPNVG18_blk",
		#include "../../base/Base_Linked.inc"
	};
	uniformClass = "U_B_T_Soldier_SL_F";
	backpack = "MSF_trop_BaseBackpack";
};
