class MSF_Gunner :  MSF_Soldier_Base
{
	displayName = "Support Gunner";
	icon = "iconManMG";
	role = "MSFAssault";	
	editorSubcategory = "MSF_EdSubcat_Inf";
	scope = 2;
	scopeCurator = 2;
	weapons[] = {
        "MSF_M249",
		#include "../../base/Base_Weap_HgunBino.inc"
	};
    magazines[] = {
        #include "../../base/Base_Mags.inc"
		#include "../../base/Base_Mags_Hgun.inc"
		"200Rnd_556x45_Box_Tracer_Red_F", "200Rnd_556x45_Box_Tracer_Red_F", "200Rnd_556x45_Box_Tracer_Red_F",
		"200Rnd_556x45_Box_Tracer_Red_F"
    };
    items[] = {
		#include "../../base/Base_Items.inc"
    };
    linkedItems[] = {
        "V_PlateCarrier1_rgr", "H_HelmetB_grass", "G_Combat", "JAS_GPNVG18_Tan_TI",
		#include "../../base/Base_Linked.inc"
    };	
	respawnWeapons[] = {
		"MSF_M249",
		#include "../../base/Base_Weap_HgunBino.inc"
	};
	respawnMagazines[] = {
        #include "../../base/Base_Mags.inc"
		#include "../../base/Base_Mags_Hgun.inc"
		"200Rnd_556x45_Box_Tracer_Red_F", "200Rnd_556x45_Box_Tracer_Red_F", "200Rnd_556x45_Box_Tracer_Red_F",
		"200Rnd_556x45_Box_Tracer_Red_F"
	};
	RespawnItems[] = {
		#include "../../base/Base_Items.inc"
	};
	respawnLinkedItems[] = {
        "V_PlateCarrier1_rgr", "H_HelmetB_grass", "G_Combat", "JAS_GPNVG18_Tan_TI",
		#include "../../base/Base_Linked.inc"
	};
    uniformClass = "U_B_CombatUniform_mcam";
    backpack = "MSF_mc_BaseBackpack";
};
