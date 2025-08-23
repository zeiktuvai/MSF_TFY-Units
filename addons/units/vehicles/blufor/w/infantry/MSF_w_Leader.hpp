class MSF_Leader_W :  MSF_Leader
{
	editorSubcategory = "MSF_EdSubcat_Inf_Winter";
	#include "mx_gren.inc"
    linkedItems[] = {
        "MSF_NATO_W_CARRIER_GL", "MSF_NATO_HelmetSpec_w", "MSF_Balaclava_TI_Alpine", "JAS_GPNVG18_Tan_TI",		
		#include "\z\msf\addons\units\u\vehicles\base\Base_Linked.inc"
    };	
	respawnLinkedItems[] = {
        "MSF_NATO_W_CARRIER_GL", "MSF_NATO_HelmetSpec_w", "MSF_Balaclava_TI_Alpine", "JAS_GPNVG18_Tan_TI",		
		#include "\z\msf\addons\units\u\vehicles\base\Base_Linked.inc"
	};
    uniformClass = "MSF_NATO_Uniform_Alpine";
    backpack = "MSF_w_BaseBackpack";
};
