class MSF_ATRifleman :  MSF_Soldier_Base
{
	displayName = "AT Specialist";
	role = "MSFSpecial";
	icon = "iconManAT";
	editorSubcategory = "MSF_EdSubcat_Inf";
	editorPreview = "z\msf\addons\units\ui\icon\blufor\mc\men\MSF_ATRifleman.jpg";
	scope = 2;
	scopeCurator = 2;
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
        "V_PlateCarrier1_rgr", "H_HelmetB_grass", "G_Combat", "JAS_GPNVG18_blk",
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
        "V_PlateCarrier1_rgr", "H_HelmetB_grass", "G_Combat", "JAS_GPNVG18_blk",
		#include "../../base/Base_Linked.inc"
	};
    uniformClass = "U_B_CombatUniform_mcam";
    backpack = "MSF_mc_ATBackpack";
};

class MSF_AARifleman :  MSF_Soldier_Base
{
	displayName = "AA Specialist";
	role = "MSFSpecial";
	icon = "iconManAT";
	editorSubcategory = "MSF_EdSubcat_Inf";
	editorPreview = "z\msf\addons\units\ui\icon\blufor\mc\men\MSF_AARifleman.jpg";
	scope = 2;
	scopeCurator = 2;
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
        "V_PlateCarrier1_rgr", "H_HelmetB_grass", "G_Combat", "JAS_GPNVG18_blk",
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
        "V_PlateCarrier1_rgr", "H_HelmetB_grass", "G_Combat", "JAS_GPNVG18_blk",
		#include "../../base/Base_Linked.inc"
	};
    uniformClass = "U_B_CombatUniform_mcam";
    backpack = "MSF_mc_AABackpack";
};
