class MSF_Grenadier_N :  MSF_Grenadier
{
	editorSubcategory = "MSF_EdSubcat_Inf_Night";
    weapons[] = {
        "MSF_MXGL_B", "Binocular", "Throw", "Put"
    };
    respawnWeapons[] = {
		"MSF_MXGL_B", "Binocular", "Throw", "Put"
	};
    linkedItems[] = {
        "V_PlateCarrier2_blk", "H_HelmetB_black", "G_Combat", "ItemMap", "ItemRadio", "ItemCompass", "ACE_Altimeter", 
        "ItemGPS", "JAS_GPNVG18_blk"
    };	
	respawnLinkedItems[] = {
        "V_PlateCarrier2_blk", "H_HelmetB_black", "G_Combat", "ItemMap", "ItemRadio", "ItemCompass", "ACE_Altimeter", 
        "ItemGPS", "JAS_GPNVG18_blk"	
	};
    uniformClass = "MSF_BLUFOR_Clothing_MCB";
    backpack = "MSF_blk_PMAGBackpack";
};
