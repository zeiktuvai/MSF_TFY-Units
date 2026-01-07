class MSF_Grenadier :  MSF_Soldier_Base
{
	displayName = "Grenadier";
	role = "MSFAssault";	
	editorSubcategory = "MSF_EdSubcat_Inf";
	editorPreview = "z\msf\addons\units\ui\icon\blufor\mc\men\MSF_Grenadier.jpg";
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
		"1Rnd_SmokeGreen_Grenade_shell", "1Rnd_SmokeGreen_Grenade_shell", "1Rnd_SmokeGreen_Grenade_shell",
		"1Rnd_SmokeGreen_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell",
		"UGL_FlareGreen_F", "UGL_FlareGreen_F", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", 
		"1Rnd_HE_Grenade_shell", "ACE_HuntIR_M203", "ACE_HuntIR_M203", "ACE_HuntIR_M203", "ACE_HuntIR_M203", "ACE_HuntIR_M203"
    };
    items[] = {
		#include "../../base/Base_Items.inc"   
    };
    linkedItems[] = {
        "V_PlateCarrierGL_mtp", "H_HelmetB_grass", "G_Combat", "JAS_GPNVG18_Tan_TI",
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
		"1Rnd_SmokeGreen_Grenade_shell", "1Rnd_SmokeGreen_Grenade_shell", "1Rnd_SmokeGreen_Grenade_shell",
		"1Rnd_SmokeGreen_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell",
		"UGL_FlareGreen_F", "UGL_FlareGreen_F", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", 
		"1Rnd_HE_Grenade_shell", "ACE_HuntIR_M203", "ACE_HuntIR_M203", "ACE_HuntIR_M203", "ACE_HuntIR_M203", "ACE_HuntIR_M203"
	};
	RespawnItems[] = {
		#include "../../base/Base_Items.inc"
	};
	respawnLinkedItems[] = {
        "V_PlateCarrierGL_mtp", "H_HelmetB_grass", "G_Combat", "JAS_GPNVG18_Tan_TI",
		#include "../../base/Base_Linked.inc"
	};
    uniformClass = "U_B_CombatUniform_mcam";
    backpack = "MSF_mc_BaseBackpack";
};
