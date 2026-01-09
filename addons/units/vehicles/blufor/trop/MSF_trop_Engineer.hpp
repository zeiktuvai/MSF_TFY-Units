class MSF_Engineer_T :  MSF_Engineer
{

	editorSubcategory = "MSF_EdSubcat_Inf_Trop";
    #include "mx.inc"
    linkedItems[] = {
        "V_PlateCarrier2_rgr", "H_HelmetB_Light_tna_F", "G_Tactical_Clear", "JAS_GPNVG18_blk",
        "ItemMap", "ItemRadio", "ItemCompass", "ACE_Altimeter", "MSF_LogisticsTerminal"
    };	
	respawnLinkedItems[] = {
        "V_PlateCarrier2_rgr", "H_HelmetB_Light_tna_F", "G_Tactical_Clear", "JAS_GPNVG18_blk",
        "ItemMap", "ItemRadio", "ItemCompass", "ACE_Altimeter", "MSF_LogisticsTerminal"
	};
    uniformClass = "U_B_T_Soldier_AR_F";
    backpack = "MSF_trop_EngBackpack";
};
