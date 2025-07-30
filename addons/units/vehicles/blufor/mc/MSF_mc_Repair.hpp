class MSF_Repair :  MSF_Soldier_Base
{
	displayName = "Mechanic";
	role = "MSFSupport";	
	editorSubcategory = "MSF_EdSubcat_Inf";
	scope = 2;
	scopeCurator = 2;	
	engineer = 1;
	icon = "iconManEngineer";
	weapons[] = {
        "MSF_MX",
		#include "../../base/Base_Weap_HgunBino.inc"
    };
    magazines[] = {
        #include "../../base/Base_Mags.inc"
		#include "../../base/Base_Mags_MX.inc"
		#include "../../base/Base_Mags_Hgun.inc"    
    };
    items[] = {
		"ACE_Flashlight_XL50", "ToolKit",
		#include "../../base/Base_Items.inc"
    };
    linkedItems[] = {
        "V_PlateCarrier2_rgr", "H_Booniehat_mcamo", "G_Tactical_Clear", "JAS_GPNVG18_Tan_TI",
		"ItemMap", "ItemRadio", "ItemCompass", "ACE_Altimeter", "MSF_LogisticsTerminal"
    };	
	respawnWeapons[] = {
		"MSF_MX",
		#include "../../base/Base_Weap_HgunBino.inc"
	};
	respawnMagazines[] = {
		#include "../../base/Base_Mags.inc"
		#include "../../base/Base_Mags_MX.inc"
		#include "../../base/Base_Mags_Hgun.inc"        
	};
	RespawnItems[] = {
		"ACE_Flashlight_XL50", "ToolKit",
		#include "../../base/Base_Items.inc"
	};
	respawnLinkedItems[] = {
        "V_PlateCarrier2_rgr", "H_Booniehat_mcamo", "G_Tactical_Clear", "JAS_GPNVG18_Tan_TI",
		"ItemMap", "ItemRadio", "ItemCompass", "ACE_Altimeter", "MSF_LogisticsTerminal"
	};
    uniformClass = "U_B_CombatUniform_mcam_vest";
    backpack = "MSF_mc_BaseBackpack";
};
