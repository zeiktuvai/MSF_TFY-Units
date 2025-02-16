class MSF_Rifleman_N : MSF_Rifleman
{
	editorSubcategory = "MSF_EdSubcat_Inf_Night";
  hiddenSelections[] = {"Camo","Insignia"}; 
	hiddenSelectionsTextures[] = {"z\msf\addons\units\data\blufor\MSF_BLUFOR_Clothing_MCB.paa"};
  weapons[] = {
    "MSF_MX_B", "Binocular", "Throw", "Put"
  };
  respawnWeapons[] = {
		"MSF_MX_B", "Binocular", "Throw", "Put"
	};
	linkedItems[] = {
        "V_PlateCarrier2_blk", "H_HelmetSpecB_blk", "G_Combat", "ItemMap", "ItemRadio", "ItemCompass", "ACE_Altimeter",
		"ItemGPS", "JAS_GPNVG18_blk"        
    };
	respawnLinkedItems[] = {
        "V_PlateCarrier2_blk", "H_HelmetSpecB_blk", "G_Combat", "ItemMap", "ItemRadio", "ItemCompass", "ACE_Altimeter",
		"ItemGPS", "JAS_GPNVG18_blk"        
    };
    uniformClass = "MSF_BLUFOR_Clothing_MCB";
    backpack = "MSF_blk_PMAGSupplyBackpack";
};