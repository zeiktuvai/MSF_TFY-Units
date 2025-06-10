class MSF_Grenadier_W :  MSF_Grenadier
{
	editorSubcategory = "MSF_EdSubcat_Inf_Winter";
	weapons[] = {
        "MSF_MXGL_White","Rangefinder", "Throw", "Put"
    };
    linkedItems[] = {
        "MSF_NATO_HelmetSpec_w", "MSF_NATO_W_PLATECARRIERGL", "MSF_Balaclava_TI_G_Alpine", "ItemMap", "ItemRadio", "ItemCompass", "ACE_Altimeter", 
        "ItemGPS", "JAS_GPNVG18_blk_TI"
    };	
	respawnWeapons[] = {
		"MSF_MXGL_White","Rangefinder", "Throw", "Put"
	};
	respawnLinkedItems[] = {
        "MSF_NATO_HelmetSpec_w", "MSF_NATO_W_PLATECARRIERGL", "MSF_Balaclava_TI_G_Alpine", "ItemMap", "ItemRadio", "ItemCompass", "ACE_Altimeter", 
        "ItemGPS", "JAS_GPNVG18_blk_TI"	
	};
    uniformClass = "MSF_NATO_Uniform_Alpine";
    backpack = "MSF_w_BaseBackpack";
};