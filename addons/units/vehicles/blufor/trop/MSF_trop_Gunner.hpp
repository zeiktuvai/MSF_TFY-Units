class MSF_Gunner_T :  MSF_Gunner
{
	editorSubcategory = "MSF_EdSubcat_Inf_Trop";
	linkedItems[] = {
        "V_PlateCarrier1_tna_F", "H_HelmetB_Enh_tna_F", "G_Lowprofile", "JAS_GPNVG18_blk",
        #include "../../base/Base_Linked.inc"
    };	
	respawnLinkedItems[] = {
        "V_PlateCarrier1_tna_F", "H_HelmetB_Enh_tna_F", "G_Lowprofile", "JAS_GPNVG18_blk",
        #include "../../base/Base_Linked.inc"
	};
    uniformClass = "U_B_T_Soldier_SL_F";
    backpack = "MSF_trop_BaseBackpack";
};