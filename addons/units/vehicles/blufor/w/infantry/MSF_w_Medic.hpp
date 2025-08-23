class MSF_Medic_W :  MSF_Medic
{
	editorSubcategory = "MSF_EdSubcat_Inf_Winter";
	#include "mx_std.inc"
    items[] = {
		#include "\z\msf\addons\units\u\vehicles\base\Base_Items.inc"
    };
    linkedItems[] = {
        "MSF_NATO_W_TACVEST", "MSF_NATO_Helmet_w", "MSF_Balaclava_TI_G_Alpine", "ItemMap", "ItemRadio", "ItemCompass", "ACE_Altimeter",
        "B_UavTerminal", "JAS_GPNVG18_blk_TI"
    };
	RespawnItems[] = {
		#include "\z\msf\addons\units\u\vehicles\base\Base_Items.inc"
	};
	respawnLinkedItems[] = {
        "MSF_NATO_W_TACVEST", "MSF_NATO_Helmet_w", "MSF_Balaclava_TI_G_Alpine", "ItemMap", "ItemRadio", "ItemCompass", "ACE_Altimeter",
        "B_UavTerminal", "JAS_GPNVG18_blk_TI"
	};
    uniformClass = "MSF_NATO_Uniform_Alpine";
    backpack = "MSF_w_MedicBackpack";
};
