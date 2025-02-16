class MSF_Repair_N :  MSF_Repair
{
	editorSubcategory = "MSF_EdSubcat_Inf_Night";
    weapons[] = {
        "MSF_MX_B", "Binocular", "hgun_P07_F", "Throw", "Put"
    };
    respawnWeapons[] = {
		"MSF_MX_B", "Binocular", "hgun_P07_F", "Throw", "Put"
	};
    linkedItems[] = {
        "V_PlateCarrier2_blk", "H_Booniehat_mgrn", "G_Tactical_Clear", "ItemMap", "ItemRadio", "ItemCompass", "ACE_Altimeter", "ItemGPS", "JAS_GPNVG18_blk"
    };
	respawnLinkedItems[] = {
        "V_PlateCarrier2_blk", "H_Booniehat_mgrn", "G_Tactical_Clear", "ItemMap", "ItemRadio", "ItemCompass", "ACE_Altimeter", "ItemGPS", "JAS_GPNVG18_blk"
	};
    uniformClass = "MSF_BLUFOR_Clothing_MCB";
    backpack = "MSF_blk_PMAGBackpack";
};