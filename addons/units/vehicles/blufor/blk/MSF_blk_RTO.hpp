class MSF_RTO_N : MSF_RTO
{
	editorSubcategory = "MSF_EdSubcat_Inf_Night";
  weapons[] = {
    "MSF_MX_B", "Binocular", "Throw", "Put"
  };
  respawnWeapons[] = {
		"MSF_MX_B", "Binocular", "Throw", "Put"
	};
	linkedItems[] = {
        "V_PlateCarrier2_blk", "H_HelmetSpecB_blk", "ItemMap", "ItemRadio", "ItemCompass", "ACE_Altimeter",
		"ItemGPS", "JAS_GPNVG18_blk"        
    };
	respawnLinkedItems[] = {
        "V_PlateCarrier2_blk", "H_HelmetSpecB_blk", "ItemMap", "ItemRadio", "ItemCompass", "ACE_Altimeter",
		"ItemGPS", "JAS_GPNVG18_blk"        
    };
    uniformClass = "MSF_BLUFOR_Clothing_MCB";
    backpack = "MSF_blk_RTOBackPack";
};