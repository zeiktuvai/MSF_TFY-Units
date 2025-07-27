class MSF_Medic :  MSF_Soldier_Base
{
	displayName = "Combat Medic";
	role = "MSFSupport";	
	editorSubcategory = "MSF_EdSubcat_Inf";
	scope = 2;
	scopeCurator = 2;
    attendant = 1;
    icon = "iconManMedic";
	weapons[] = {
        "MSF_MX",
		#include "../../base/Base_Weap_HgunBino.inc"
    };
    magazines[] = {
		#include "../../base/Base_Mags.inc"
		#include "../../base/Base_Mags_MX.inc"
		#include "../../base/Base_Mags_Hgun.inc"
        "SmokeShellOrange", "SmokeShellPurple"
    };
    items[] = {
		#include "../../base/Base_Items.inc"
    };
    linkedItems[] = {
        "V_PlateCarrier1_rgr", "H_HelmetB_light", "G_Lowprofile", "JAS_GPNVG18_blk_TI",
		#include "../../base/Base_Linked.inc"
    };	
	respawnWeapons[] = {
		"MSF_MX",
		#include "../../base/Base_Weap_HgunBino.inc"
	};
	respawnMagazines[] = {
		#include "../../base/Base_Mags.inc"
		#include "../../base/Base_Mags_MX.inc"
		#include "../../base/Base_Mags_Hgun.inc"
        "SmokeShellOrange", "SmokeShellPurple"
	};
	RespawnItems[] = {
		#include "../../base/Base_Items.inc"
	};
	respawnLinkedItems[] = {
        "V_PlateCarrier1_rgr", "H_HelmetB_light", "G_Lowprofile", "JAS_GPNVG18_blk_TI",
		#include "../../base/Base_Linked.inc"
	};
    uniformClass = "U_B_CombatUniform_mcam";
    backpack = "MSF_mc_MedicBackpack";
};
