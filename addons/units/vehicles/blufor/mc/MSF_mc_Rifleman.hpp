class MSF_Rifleman :  MSF_Soldier_Base
{
	displayName = "Rifleman";
	role = "MSFAssault";	
	editorSubcategory = "MSF_EdSubcat_Inf";
	editorPreview = "z\msf\addons\units\ui\icon\blufor\mc\men\MSF_Rifleman.jpg";
	scope = 2;
	scopeCurator = 2;
	weapons[] = {
        "MSF_MX",
		#include "../../base/Base_Weap_HgunBino.inc"
    };
    magazines[] = {
		"SmokeShellGreen", "SmokeShellGreen", "ACE_CTS9", "ACE_CTS9",
		#include "../../base/Base_Mags.inc"
		#include "../../base/Base_Mags_MX.inc"
		#include "../../base/Base_Mags_Hgun.inc" 
    };
    items[] = {
		"MineDetector",
		#include "../../base/Base_Items.inc"
    };
    linkedItems[] = {
        "V_PlateCarrier2_rgr", "H_HelmetB_grass", "JAS_GPNVG18_Tan_TI",
		#include "../../base/Base_Linked.inc"
    };	
	respawnWeapons[] = {
		"MSF_MX",
		#include "../../base/Base_Weap_HgunBino.inc"
	};
	respawnMagazines[] = {
		"SmokeShellGreen", "SmokeShellGreen", "ACE_CTS9", "ACE_CTS9",
		#include "../../base/Base_Mags.inc"
		#include "../../base/Base_Mags_MX.inc"
		#include "../../base/Base_Mags_Hgun.inc" 
	};
	RespawnItems[] = {
		"MineDetector",
		#include "../../base/Base_Items.inc"
	};
	respawnLinkedItems[] = {
        "V_PlateCarrier2_rgr", "H_HelmetB_grass", "JAS_GPNVG18_Tan_TI",
		#include "../../base/Base_Linked.inc"
	};
    uniformClass = "U_B_CombatUniform_mcam";
    backpack = "MSF_mc_BaseBackpack";
};
