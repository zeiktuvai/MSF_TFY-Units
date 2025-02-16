class MSF_ATRifleman_N :  MSF_ATRifleman
{
	editorSubcategory = "MSF_EdSubcat_Inf_Night";
    weapons[] = {
        "MSF_MX_B", "Rangefinder", "launch_MRAWS_green_F", "Throw", "Put"
    };
    respawnWeapons[] = {
        "MSF_MX_B", "Rangefinder", "launch_MRAWS_green_F", "Throw", "Put"
    };
	linkedItems[] = {
        "V_PlateCarrier2_blk", "H_HelmetSpecB_blk", "G_Combat", "ItemMap", "ItemRadio", "ItemCompass", "ACE_Altimeter", "ItemGPS", 
		"JAS_GPNVG18_blk"
    };	
	respawnLinkedItems[] = {
        "V_PlateCarrier2_blk", "H_HelmetSpecB_blk", "G_Combat", "ItemMap", "ItemRadio", "ItemCompass", "ACE_Altimeter", "ItemGPS", 
		"JAS_GPNVG18_blk"
	};
    uniformClass = "MSF_BLUFOR_Clothing_MCB";
    backpack = "MSF_blk_ATBackpack";
};

class MSF_AARifleman_N :  MSF_AARifleman
{
	editorSubcategory = "MSF_EdSubcat_Inf_Night";
    weapons[] = {
        "MSF_MX_B", "Rangefinder", "launch_I_Titan_F", "Throw", "Put"
    };
    respawnWeapons[] = {
        "MSF_MX_B", "Rangefinder", "launch_I_Titan_F", "Throw", "Put"
    };
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