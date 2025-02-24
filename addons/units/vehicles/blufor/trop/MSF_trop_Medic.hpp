class MSF_Medic_T :  MSF_Medic
{
	editorSubcategory = "MSF_EdSubcat_Inf_Trop";
    linkedItems[] = {
        "V_TacVestIR_blk", "H_HelmetB_Light_tna_F", "G_Lowprofile", "JAS_GPNVG18_blk",
        #include "../../base/Base_Linked.inc"
    };	
	respawnLinkedItems[] = {
        "V_TacVestIR_blk", "H_HelmetB_Light_tna_F", "G_Lowprofile", "JAS_GPNVG18_blk",
        #include "../../base/Base_Linked.inc"
	};
    uniformClass = "U_B_T_Soldier_SL_F";
    backpack = "MSF_trop_MedicBackpack";
};
