class MSF_Sniper_T : MSF_Sniper
{
	editorSubcategory = "MSF_EdSubcat_Inf_Trop";
	linkedItems[] = {
		"V_PlateCarrier1_rgr", "H_Shemag_olive_hs", "G_Balaclava_TI_tna_F", "JAS_GPNVG18_blk_TI",
		#include "../../base/Base_Linked.inc"
	};
	respawnLinkedItems[] = {
		"V_PlateCarrier1_rgr", "H_Shemag_olive_hs", "G_Balaclava_TI_tna_F", "JAS_GPNVG18_blk_TI",
		#include "../../base/Base_Linked.inc"
	};
	uniformClass = "U_B_T_Sniper_F";
	backpack = "MSF_trop_SniperBackpack";
};