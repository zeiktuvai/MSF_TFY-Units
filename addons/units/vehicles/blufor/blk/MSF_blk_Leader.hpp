class MSF_Leader_N :  MSF_Leader
{
	editorSubcategory = "MSF_EdSubcat_Inf_Night";
    weapons[] = {
        "MSF_MXGL_B", "Binocular", "Throw", "Put"
    };
    respawnWeapons[] = {
		"MSF_MXGL_B", "Binocular", "Throw", "Put"
	};
    linkedItems[] = {
        "V_PlateCarrier1_blk", "H_HelmetB_black", "G_Combat", "ItemMap", "ItemRadio", "ItemCompass", "ACE_Altimeter", 
        "ItemGPS", "JAS_GPNVG18_blk"
    };	
	respawnLinkedItems[] = {
        "V_PlateCarrier1_blk", "H_HelmetB_black", "G_Combat", "ItemMap", "ItemRadio", "ItemCompass", "ACE_Altimeter", 
        "ItemGPS", "JAS_GPNVG18_blk"		
	};
    uniformClass = "MSF_BLUFOR_Clothing_MCB";
    backpack = "MSF_blk_PMAGBackpack";
};