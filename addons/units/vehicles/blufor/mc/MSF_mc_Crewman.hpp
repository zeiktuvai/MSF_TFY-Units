class MSF_Crewman :  MSF_Soldier_Base
{
	displayName = "Vehicle Crewman";
	role = "MSFCrew";	
	editorSubcategory = "MSF_EdSubcat_Inf";
	icon = "iconManEngineer";
	scope = 2;
	engineer = 1;
	scopeCurator = 2;
	hiddenSelections[] = {"Camo","Insignia"}; 
	hiddenSelectionsTextures[] = {"z\msf\addons\units\data\blufor\MSF_BLUFOR_Tanker_mc.paa"};
    model = "\A3\Characters_F_Tank\Uniforms\U_Tank_crew_F.p3d";
	weapons[] = {
        "MSF_MXC",
		#include "../../base/Base_Weap_HgunBino.inc"
    };
    magazines[] = {
		#include "../../base/Base_Mags.inc"
		#include "../../base/Base_Mags_MX.inc"
		#include "../../base/Base_Mags_Hgun.inc"
    };
    items[] = {
		"ToolKit",
		#include "../../base/Base_Items.inc"
    };
    linkedItems[] = {
        "V_Chestrig_rgr", "H_HelmetCrew_B", "G_Tactical_Clear", "JAS_GPNVG18_blk_TI",
		#include "../../base/Base_Linked.inc"
    };	
	respawnWeapons[] = {
		"MSF_MXC",
		#include "../../base/Base_Weap_HgunBino.inc"
	};
	respawnMagazines[] = {
		#include "../../base/Base_Mags.inc"
		#include "../../base/Base_Mags_MX.inc"
		#include "../../base/Base_Mags_Hgun.inc"
	};
	RespawnItems[] = {
		"ToolKit",
		#include "../../base/Base_Items.inc"
	};
	respawnLinkedItems[] = {
        "V_Chestrig_rgr", "H_HelmetCrew_B", "G_Tactical_Clear", "JAS_GPNVG18_blk_TI",
		#include "../../base/Base_Linked.inc"
	};
    uniformClass = "MSF_BLUFOR_Tanker_MC";
    backpack = "MSF_mc_BaseBackpack";
};
