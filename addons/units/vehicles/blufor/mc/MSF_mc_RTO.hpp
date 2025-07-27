class MSF_RTO :  MSF_Soldier_Base
{
	displayName = "Radio Operator (RTO)[TFAR]";
	role = "MSFAssault";	
	editorSubcategory = "MSF_EdSubcat_Inf";
	scope = 2;
	scopeCurator = 2;
	weapons[] = {
        "MSF_MX",
		#include "../../base/Base_Weap_HgunBino.inc"
    };
    magazines[] = {
        "SmokeShellGreen", "SmokeShellGreen",
		#include "../../base/Base_Mags.inc"
		#include "../../base/Base_Mags_MX.inc"
		#include "../../base/Base_Mags_Hgun.inc" 
    };
    items[] = {
		#include "../../base/Base_Items.inc"
    };
    linkedItems[] = {
        "V_PlateCarrier2_rgr", "H_HelmetSpecB", "JAS_GPNVG18_Tan_TI",
		#include "../../base/Base_Linked.inc"
    };	
	respawnWeapons[] = {
		"MSF_MX",
		#include "../../base/Base_Weap_HgunBino.inc"
	};
	respawnMagazines[] = {
        "SmokeShellGreen", "SmokeShellGreen",
		#include "../../base/Base_Mags.inc"
		#include "../../base/Base_Mags_MX.inc"
		#include "../../base/Base_Mags_Hgun.inc" 
	};
	RespawnItems[] = {
		#include "../../base/Base_Items.inc"
	};
	respawnLinkedItems[] = {
        "V_PlateCarrier2_rgr", "H_HelmetSpecB", "JAS_GPNVG18_Tan_TI",
		#include "../../base/Base_Linked.inc"
	};
    uniformClass = "U_B_CombatUniform_mcam";
    backpack = "MSF_mc_RTOBackPack";
};
