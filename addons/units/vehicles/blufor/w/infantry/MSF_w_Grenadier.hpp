class MSF_Grenadier_W :  MSF_Grenadier
{
	editorSubcategory = "MSF_EdSubcat_Inf_Winter";
    editorPreview = "z\msf\addons\units\ui\icon\blufor\w\men\MSF_Grenadier_W.jpg";
    #include "mx_gren.inc"
    linkedItems[] = {
        "MSF_NATO_HelmetSpec_w", "MSF_NATO_W_PLATECARRIERGL", "MSF_Balaclava_TI_G_Alpine", "ItemMap", "ItemRadio", "ItemCompass", "ACE_Altimeter", 
        "ItemGPS", "JAS_GPNVG18_blk_TI"
    };
	respawnLinkedItems[] = {
        "MSF_NATO_HelmetSpec_w", "MSF_NATO_W_PLATECARRIERGL", "MSF_Balaclava_TI_G_Alpine", "ItemMap", "ItemRadio", "ItemCompass", "ACE_Altimeter", 
        "ItemGPS", "JAS_GPNVG18_blk_TI"	
	};
    uniformClass = "MSF_NATO_Uniform_Alpine";
    backpack = "MSF_w_BaseBackpack";
};
