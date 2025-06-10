class MSF_Marksman_W : MSF_Marksman
{
	editorSubcategory = "MSF_EdSubcat_Inf_Winter";
	model = "A3\Characters_F\BLUFOR\b_sniper.p3d";
	hiddenSelections[] = {"camo", "camo3"};
	hiddenSelectionsTextures[] = {"z\msf\addons\units\data\blufor\w\uniform\MSF_NATO_Uniform_Alpine.paa", "z\msf\addons\units\data\blufor\w\uniform\MSF_NATO_Ghillie_Alp.paa"};
	linkedItems[] = {
		"MSF_NATO_W_CHESTRIG", "MSF_NATO_Helmet_w", "JAS_GPNVG18_blk_TI",
		#include "../../base/Base_Linked.inc"
	};
	respawnLinkedItems[] = {		
		"MSF_NATO_W_CHESTRIG", "MSF_NATO_Helmet_w", "JAS_GPNVG18_blk_TI",
		#include "../../base/Base_Linked.inc"
	};
	uniformClass = "MSF_BLUFOR_Ghillie_Alpine";
	backpack = "MSF_w_BaseBackpack";
};