class MSF_Leader :  MSF_Soldier_Base
{
	displayName = "Leader";
	icon = "iconManLeader";
	role = "MSFCommand";	
	editorSubcategory = "MSF_EdSubcat_Inf";
	scope = 2;
	scopeCurator = 2;
	weapons[] = {
        "MSF_MX_3GL",
		#include "../../base/Base_Weap_HgunBino.inc"
    };
    magazines[] = {
		#include "../../base/Base_Mags.inc"
		#include "../../base/Base_Mags_MX.inc"
		#include "../../base/Base_Mags_Hgun.inc"
		"SmokeShellGreen", "SmokeShellGreen", "1Rnd_HE_Grenade_shell", "ACE_HandFlare_Green", "ACE_HandFlare_Green",
		"1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "UGL_FlareGreen_F", "UGL_FlareGreen_F", "1Rnd_HE_Grenade_shell",
		"ACE_HuntIR_M203", "ACE_HuntIR_M203", "ACE_HuntIR_M203"
    };
    items[] = {
		#include "../../base/Base_Items.inc"
    };
    linkedItems[] = {
        "V_PlateCarrier2_rgr", "H_HelmetB_grass", "G_Combat", "JAS_GPNVG18_Tan",
		#include "../../base/Base_Linked.inc"
    };	
	respawnWeapons[] = {
		"MSF_MX_3GL",
		#include "../../base/Base_Weap_HgunBino.inc"
	};
	respawnMagazines[] = {
		#include "../../base/Base_Mags.inc"
		#include "../../base/Base_Mags_MX.inc"
		#include "../../base/Base_Mags_Hgun.inc"
		"SmokeShellGreen", "SmokeShellGreen", "1Rnd_HE_Grenade_shell", "ACE_HandFlare_Green", "ACE_HandFlare_Green",
		"1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "UGL_FlareGreen_F", "UGL_FlareGreen_F", "1Rnd_HE_Grenade_shell",
		"ACE_HuntIR_M203", "ACE_HuntIR_M203", "ACE_HuntIR_M203"
	};
	RespawnItems[] = {
		#include "../../base/Base_Items.inc"
	};
	respawnLinkedItems[] = {
        "V_PlateCarrier2_rgr", "H_HelmetB_grass", "G_Combat", "JAS_GPNVG18_Tan",
		#include "../../base/Base_Linked.inc"
	};
    uniformClass = "U_B_CombatUniform_mcam";
    backpack = "MSF_mc_BaseBackpack";
};