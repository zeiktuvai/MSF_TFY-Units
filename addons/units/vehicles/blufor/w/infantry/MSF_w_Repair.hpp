class MSF_Repair_W :  MSF_Repair
{
	editorSubcategory = "MSF_EdSubcat_Inf_Winter";
    editorPreview = "z\msf\addons\units\ui\icon\blufor\w\men\MSF_Repair_W.jpg";
    #include "mx_std.inc"
    linkedItems[] = {
        "MSF_NATO_WINTER_V_PLATECARRIER2", "MSF_NATO_Booniehat_w", "MSF_Balaclava_Alpine", "ItemMap", "ItemRadio", "ItemCompass", "ACE_Altimeter", "MSF_LogisticsTerminal", "JAS_GPNVG18_blk_TI"
    };
	respawnLinkedItems[] = {
        "MSF_NATO_WINTER_V_PLATECARRIER2", "MSF_NATO_Booniehat_w", "MSF_Balaclava_Alpine", "ItemMap", "ItemRadio", "ItemCompass", "ACE_Altimeter", "MSF_LogisticsTerminal", "JAS_GPNVG18_blk_TI"
	};
    uniformClass = "MSF_BLUFOR_Coveralls_Alpine";
    backpack = "MSF_w_BaseBackpack";
};
