class MSF_Rifleman_T :  MSF_Rifleman
{
	editorSubcategory = "MSF_EdSubcat_Inf_Trop";
    #include "mx.inc"
    linkedItems[] = {
        "V_PlateCarrier2_tna_F", "H_HelmetB_Enh_tna_F", "JAS_GPNVG18_blk",
        #include "../../base/Base_Linked.inc"
    };	
	respawnLinkedItems[] = {
        "V_PlateCarrier2_tna_F", "H_HelmetB_Enh_tna_F", "JAS_GPNVG18_blk",
        #include "../../base/Base_Linked.inc"
	};
    uniformClass = "U_B_T_Soldier_SL_F";
    backpack = "MSF_trop_BaseBackpack";
};
