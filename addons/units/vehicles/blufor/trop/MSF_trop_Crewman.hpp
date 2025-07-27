class MSF_Crewman_T :  MSF_Crewman
{	
	editorSubcategory = "MSF_EdSubcat_Inf_Trop";
	linkedItems[] = {
        "V_PlateCarrier2_rgr", "H_HelmetCrew_B", "G_Tactical_Clear", "JAS_GPNVG18_blk_TI",
		#include "../../base/Base_Linked.inc"
    };	
	respawnLinkedItems[] = {
        "V_PlateCarrier2_rgr", "H_HelmetCrew_B", "G_Tactical_Clear", "JAS_GPNVG18_blk_TI",
		#include "../../base/Base_Linked.inc"
	};
    backpack = "MSF_trop_BaseBackpack";
};
