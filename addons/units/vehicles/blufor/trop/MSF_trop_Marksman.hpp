class MSF_Marksman_T : MSF_Marksman
{
	editorSubcategory = "MSF_EdSubcat_Inf_Trop";
	editorPreview = "z\msf\addons\units\ui\icon\blufor\trop\men\MSF_Marksman_T.jpg";
	weapons[] = {
		"MSF_MXM_T","Rangefinder","hgun_Pistol_heavy_01_F", "Throw", "Put"
	};
	respawnWeapons[] = {
		"MSF_MXM_T","Rangefinder","hgun_Pistol_heavy_01_F", "Throw", "Put"
	};
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
