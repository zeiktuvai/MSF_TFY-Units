class MSF_ATRifleman_N :  MSF_ATRifleman
{
	editorSubcategory = "MSF_EdSubcat_Inf_Night";
	linkedItems[] = {
        "V_PlateCarrier2_blk", "H_HelmetSpecB_blk", "G_Combat", "ItemMap", "ItemRadio", "ItemCompass", "ACE_Altimeter", "ItemGPS", 
		"JAS_GPNVG18_blk"
    };	
	respawnLinkedItems[] = {
        "V_PlateCarrier2_blk", "H_HelmetSpecB_blk", "G_Combat", "ItemMap", "ItemRadio", "ItemCompass", "ACE_Altimeter", "ItemGPS", 
		"JAS_GPNVG18_blk"
	};
    uniformClass = "U_B_CombatUniform_mcam";
    backpack = "MSF_blk_ATBackpack";
};

class MSF_AARifleman_N :  MSF_AARifleman
{
	editorSubcategory = "MSF_EdSubcat_Inf_Night";
    linkedItems[] = {
        "V_PlateCarrier2_blk", "H_HelmetSpecB_blk", "G_Combat", "ItemMap", "ItemRadio", "ItemCompass", "ACE_Altimeter", "ItemGPS", 
		"JAS_GPNVG18_blk"
    };	
	respawnLinkedItems[] = {
        "V_PlateCarrier2_blk", "H_HelmetSpecB_blk", "G_Combat", "ItemMap", "ItemRadio", "ItemCompass", "ACE_Altimeter", "ItemGPS", 
		"JAS_GPNVG18_blk"
	};
    uniformClass = "MSF_BLUFOR_Clothing_MCB";
    backpack = "MSF_blk_AABackpack";
};