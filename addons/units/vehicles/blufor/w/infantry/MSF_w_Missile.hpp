class MSF_ATRifleman_W :  MSF_ATRifleman
{
	editorSubcategory = "MSF_EdSubcat_Inf_Winter";
	weapons[] = {
        "MSF_MX_W", "launch_MRAWS_green_F",
		#include "\z\msf\addons\units\u\vehicles\base\Base_Weap_HgunBino.inc"
    };
    magazines[] = {
		"MRAWS_HEAT_F",
		#include "\z\msf\addons\units\u\vehicles\base\Base_Mags.inc"
		#include "\z\msf\addons\units\u\vehicles\base\Base_Mags_MX.inc"
		#include "\z\msf\addons\units\u\vehicles\base\Base_Mags_Hgun.inc"
    };
    items[] = {
		#include "\z\msf\addons\units\u\vehicles\base\Base_Items.inc"
    };
    linkedItems[] = {
        "MSF_NATO_W_CARRIER_GL", "MSF_NATO_HelmetSpec_w", "MSF_Balaclava_TI_G_Alpine", "JAS_GPNVG18_blk_TI",
		#include "\z\msf\addons\units\u\vehicles\base\Base_Linked.inc"
    };
	respawnWeapons[] = {
		"MSF_MX_W", "launch_MRAWS_green_F",
		#include "\z\msf\addons\units\u\vehicles\base\Base_Weap_HgunBino.inc"
	};
	respawnMagazines[] = {
		"MRAWS_HEAT_F",
		#include "\z\msf\addons\units\u\vehicles\base\Base_Mags.inc"
		#include "\z\msf\addons\units\u\vehicles\base\Base_Mags_MX.inc"
		#include "\z\msf\addons\units\u\vehicles\base\Base_Mags_Hgun.inc"
	};
	RespawnItems[] = {
		#include "\z\msf\addons\units\u\vehicles\base\Base_Items.inc"
	};	
	respawnLinkedItems[] = {
        "MSF_NATO_W_CARRIER_GL", "MSF_NATO_HelmetSpec_w", "MSF_Balaclava_TI_G_Alpine", "JAS_GPNVG18_blk_TI",
		#include "\z\msf\addons\units\u\vehicles\base\Base_Linked.inc"
	};
    uniformClass = "MSF_NATO_Uniform_Alpine";
    backpack = "MSF_w_ATBackpack";
};

class MSF_AARifleman_W :  MSF_AARifleman
{
	editorSubcategory = "MSF_EdSubcat_Inf_Winter";
	weapons[] = {
        "MSF_MX_W", "MSF_launch_B_Titan",
		#include "\z\msf\addons\units\u\vehicles\base\Base_Weap_HgunBino.inc"
    };
    magazines[] = {
        "Titan_AA",
		#include "\z\msf\addons\units\u\vehicles\base\Base_Mags.inc"
		#include "\z\msf\addons\units\u\vehicles\base\Base_Mags_MX.inc"
		#include "\z\msf\addons\units\u\vehicles\base\Base_Mags_Hgun.inc"
    };
    items[] = {
		#include "\z\msf\addons\units\u\vehicles\base\Base_Items.inc"
    };
    linkedItems[] = {
        "MSF_NATO_W_CARRIER_GL", "MSF_NATO_HelmetSpec_w", "MSF_Balaclava_TI_G_Alpine", "JAS_GPNVG18_blk_TI",
		#include "\z\msf\addons\units\u\vehicles\base\Base_Linked.inc"
    };
	respawnWeapons[] = {
		"MSF_MX_W", "MSF_launch_B_Titan",
		#include "\z\msf\addons\units\u\vehicles\base\Base_Weap_HgunBino.inc"
	};
	respawnMagazines[] = {
        "Titan_AA",
		#include "\z\msf\addons\units\u\vehicles\base\Base_Mags.inc"
		#include "\z\msf\addons\units\u\vehicles\base\Base_Mags_MX.inc"
		#include "\z\msf\addons\units\u\vehicles\base\Base_Mags_Hgun.inc"
	};
	RespawnItems[] = {
		#include "\z\msf\addons\units\u\vehicles\base\Base_Items.inc"
	};
	respawnLinkedItems[] = {
        "MSF_NATO_W_CARRIER_GL", "MSF_NATO_HelmetSpec_w", "MSF_Balaclava_TI_G_Alpine", "JAS_GPNVG18_blk_TI",
		#include "\z\msf\addons\units\u\vehicles\base\Base_Linked.inc"
	};
    uniformClass = "MSF_NATO_Uniform_Alpine";
    backpack = "MSF_w_AABackpack";
};
