class MSF_UAV_W :  MSF_UAV
{
	displayName = "Drone Operator";
	editorSubcategory = "MSF_EdSubcat_Inf_Winter";
    editorPreview = "z\msf\addons\units\ui\icon\blufor\w\men\MSF_UAV_W.jpg";
    #include "mx_std.inc"
    items[] = {
        #include "\z\msf\addons\units\u\vehicles\base\Base_Items.inc"
        #include "\z\msf\addons\units\u\vehicles\base\Items_No_BackPack.inc"
    };
    linkedItems[] = {
        "MSF_NATO_WINTER_V_PLATECARRIER2", "MSF_NATO_Helmet_w", "MSF_Balaclava_TI_G_Alpine", "ItemMap", "ItemRadio", "ItemCompass", "ACE_Altimeter", "B_UavTerminal", 
		"JAS_GPNVG18_blk_TI"
    };	
	RespawnItems[] = {
        #include "\z\msf\addons\units\u\vehicles\base\Base_Items.inc"
        #include "\z\msf\addons\units\u\vehicles\base\Items_No_BackPack.inc"
	};
	respawnLinkedItems[] = {
        "MSF_NATO_WINTER_V_PLATECARRIER2", "MSF_NATO_Helmet_w", "MSF_Balaclava_TI_G_Alpine", "ItemMap", "ItemRadio", "ItemCompass", "ACE_Altimeter", "B_UavTerminal", 
		"JAS_GPNVG18_blk_TI"
	};
    uniformClass = "MSF_NATO_Uniform_Alpine";
    backpack = "MSF_UAV_01_Backpack_w";
};
