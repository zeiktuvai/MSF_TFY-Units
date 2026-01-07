class MSF_Engineer :  MSF_Soldier_Base
{
	displayName = "Engineer";
	role = "MSFSupport";	
	editorSubcategory = "MSF_EdSubcat_Inf";
	editorPreview = "z\msf\addons\units\ui\icon\blufor\mc\men\MSF_Engineer.jpg";
	scope = 2;
	scopeCurator = 2;
	canDeactivateMines = 1;
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
		#include "../../base/Base_Items.inc"
    };
    linkedItems[] = {
		"ItemMap", "ItemRadio", "ItemCompass", "ACE_Altimeter", "MSF_LogisticsTerminal",
        "V_PlateCarrier1_rgr", "H_HelmetB_light_desert", "G_Tactical_Clear", "JAS_GPNVG18_blk"
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
		#include "../../base/Base_Items.inc"
	};
	respawnLinkedItems[] = {
		"ItemMap", "ItemRadio", "ItemCompass", "ACE_Altimeter", "MSF_LogisticsTerminal",
        "V_PlateCarrier1_rgr", "H_HelmetB_light_desert", "G_Tactical_Clear", "JAS_GPNVG18_blk"
	};
    uniformClass = "U_B_CombatUniform_mcam_tshirt";
    backpack = "MSF_mc_EngBackpack";
};
