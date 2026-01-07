class MSF_UAV :  MSF_Soldier_Base
{
	displayName = "Drone Operator";
	role = "MSFRecon";	
	editorSubcategory = "MSF_EdSubcat_Inf";
	editorPreview = "z\msf\addons\units\ui\icon\blufor\mc\men\MSF_UAV.jpg";
	scope = 2;
	scopeCurator = 2;
    uavHacker = 1;
	weapons[] = {
        "MSF_MX",
        #include "../../base/Base_Weap_HgunBino.inc"
    };
    magazines[] = {
 		"SmokeShellPurple", "SmokeShellPurple",
        #include "../../base/Base_Mags.inc"
		#include "../../base/Base_Mags_MX.inc"
		#include "../../base/Base_Mags_Hgun.inc"
    };
    items[] = {
        #include "../../base/Base_Items.inc"
        #include "../../base/Items_No_BackPack.inc"
    };
    linkedItems[] = {
        "V_PlateCarrier1_rgr", "H_HelmetB_grass", "G_Combat", "ItemMap", "ItemRadio", "ItemCompass", "ACE_Altimeter", "B_UavTerminal", 
		"JAS_GPNVG18_blk"
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
        #include "../../base/Items_No_BackPack.inc"
	};
	respawnLinkedItems[] = {
        "V_PlateCarrier1_rgr", "H_HelmetB_grass", "G_Combat", "ItemMap", "ItemRadio", "ItemCompass", "ACE_Altimeter", "B_UavTerminal", 
		"JAS_GPNVG18_blk"
	};
    uniformClass = "U_B_CombatUniform_mcam";
    backpack = "B_UAV_01_backpack_F";
};
