class MSF_ATRifleman_W :  MSF_ATRifleman
{
	editorSubcategory = "MSF_EdSubcat_Inf_Winter";
	weapons[] = {
        "MSF_MX", "launch_MRAWS_green_F",
		#include "../../base/Base_Weap_HgunBino.inc"
    };
    magazines[] = {
		"MRAWS_HEAT_F",
		#include "../../base/Base_Mags.inc"
		#include "../../base/Base_Mags_MX.inc"
		#include "../../base/Base_Mags_Hgun.inc"
    };
    items[] = {
		#include "../../base/Base_Items.inc"
    };
    linkedItems[] = {
        "MSF_NATO_W_CARRIER_GL", "MSF_NATO_HelmetSpec_w", "MSF_Balaclava_TI_G_Alpine", "JAS_GPNVG18_blk_TI",
		#include "../../base/Base_Linked.inc"
    };
	respawnWeapons[] = {
		"MSF_MX", "launch_MRAWS_green_F",
		#include "../../base/Base_Weap_HgunBino.inc"
	};
	respawnMagazines[] = {
		"MRAWS_HEAT_F",
		#include "../../base/Base_Mags.inc"
		#include "../../base/Base_Mags_MX.inc"
		#include "../../base/Base_Mags_Hgun.inc"
	};
	RespawnItems[] = {
		#include "../../base/Base_Items.inc"
	};	
	respawnLinkedItems[] = {
        "MSF_NATO_W_CARRIER_GL", "MSF_NATO_HelmetSpec_w", "MSF_Balaclava_TI_G_Alpine", "JAS_GPNVG18_blk_TI",
		#include "../../base/Base_Linked.inc"
	};
    uniformClass = "MSF_NATO_Uniform_Alpine";
    backpack = "MSF_w_ATBackpack";
};

class MSF_AARifleman_W :  MSF_AARifleman
{
	editorSubcategory = "MSF_EdSubcat_Inf_Winter";
	weapons[] = {
        "MSF_MX", "launch_I_Titan_F",
		#include "../../base/Base_Weap_HgunBino.inc"
    };
    magazines[] = {
        "Titan_AA",
		#include "../../base/Base_Mags.inc"
		#include "../../base/Base_Mags_MX.inc"
		#include "../../base/Base_Mags_Hgun.inc"
    };
    items[] = {
		#include "../../base/Base_Items.inc"
    };
    linkedItems[] = {
        "MSF_NATO_W_CARRIER_GL", "MSF_NATO_HelmetSpec_w", "MSF_Balaclava_TI_G_Alpine", "JAS_GPNVG18_blk_TI",
		#include "../../base/Base_Linked.inc"
    };
	respawnWeapons[] = {
		"MSF_MX", "launch_I_Titan_F",
		#include "../../base/Base_Weap_HgunBino.inc"
	};
	respawnMagazines[] = {
        "Titan_AA",
		#include "../../base/Base_Mags.inc"
		#include "../../base/Base_Mags_MX.inc"
		#include "../../base/Base_Mags_Hgun.inc"
	};
	RespawnItems[] = {
		#include "../../base/Base_Items.inc"
	};
	respawnLinkedItems[] = {
        "MSF_NATO_W_CARRIER_GL", "MSF_NATO_HelmetSpec_w", "MSF_Balaclava_TI_G_Alpine", "JAS_GPNVG18_blk_TI",
		#include "../../base/Base_Linked.inc"
	};
    uniformClass = "MSF_NATO_Uniform_Alpine";
    backpack = "MSF_w_AABackpack";
};
