class MSF_UAV_T :  MSF_UAV
{
	editorSubcategory = "MSF_EdSubcat_Inf_Trop";
    #include "mx.inc"
    linkedItems[] = {
        "V_PlateCarrier2_tna_F", "H_HelmetB_Enh_tna_F", "G_Lowprofile", "ItemMap", "ItemRadio", "ItemCompass", "ACE_Altimeter", "B_UavTerminal", 
		"JAS_GPNVG18_blk"
    };	
	respawnLinkedItems[] = {
        "V_PlateCarrier2_tna_F", "H_HelmetB_Enh_tna_F", "G_Lowprofile", "ItemMap", "ItemRadio", "ItemCompass", "ACE_Altimeter", "B_UavTerminal", 
		"JAS_GPNVG18_blk"
	};
    uniformClass = "U_B_T_Soldier_SL_F";
    backpack = "B_UAV_01_backpack_F";
};
