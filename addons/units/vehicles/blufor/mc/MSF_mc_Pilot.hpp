class MSF_Pilot :  MSF_Soldier_Base
{
	displayName = "Pilot";
	role = "MSFCrew";	
	editorSubcategory = "MSF_EdSubcat_Inf";
	icon = "iconManEngineer";
	scope = 2;
	scopeCurator = 2;
	weapons[] = {
        "MSF_MXC",
		#include "../../base/Base_Weap_HgunBino.inc"
    };
    magazines[] = {
        "SmokeShellGreen", "SmokeShellGreen", "SmokeShellRed",
		#include "../../base/Base_Mags.inc"
		#include "../../base/Base_Mags_MX.inc"
		#include "../../base/Base_Mags_Hgun.inc"
    };
    items[] = {		
		#include "../../base/Base_Items.inc"
		#include "../../base/Items_No_BackPack.inc"
    };
    linkedItems[] = {
        "V_Chestrig_oli", "H_PilotHelmetHeli_B", "G_Tactical_Clear", "JAS_GPNVG18_blk_TI",
		#include "../../base/Base_Linked.inc"
    };	
	respawnWeapons[] = {
		"MSF_MXC",
		#include "../../base/Base_Weap_HgunBino.inc"
	};
	respawnMagazines[] = {
        "SmokeShellGreen", "SmokeShellGreen", "SmokeShellRed",
		#include "../../base/Base_Mags.inc"
		#include "../../base/Base_Mags_MX.inc"
		#include "../../base/Base_Mags_Hgun.inc"
	};
	RespawnItems[] = {
		#include "../../base/Base_Items.inc"
		#include "../../base/Items_No_BackPack.inc"
	};
	respawnLinkedItems[] = {
        "V_Chestrig_oli", "H_PilotHelmetHeli_B", "G_Tactical_Clear", "JAS_GPNVG18_blk_TI",
		#include "../../base/Base_Linked.inc"
	};
    uniformClass = "U_B_HeliPilotCoveralls";
    backpack = "B_Parachute";
};

