class MSF_Engineer_W :  MSF_w_Soldier_Base
{
	displayName = "Engineer";
	role = "MSFSupport";	
	scope = 2;
	scopeCurator = 2;
	canDeactivateMines = 1;
	engineer = 1;
	icon = "iconManEngineer";
	editorSubcategory = "MSF_EdSubcat_Inf_Winter";
	model = "\A3\characters_F\BLUFOR\b_soldier_03.p3d";
 	#include "mx_std.inc"
    items[] = {
		#include "\z\msf\addons\units\u\vehicles\base\Base_Items.inc"
    };
    linkedItems[] = {
        "MSF_NATO_WINTER_V_PLATECARRIER2", "MSF_NATO_HelmetLite_w", "MSF_Balaclava_TI_G_Alpine", "ItemMap", "ItemRadio", "ItemCompass", "ACE_Altimeter", "MSF_LogisticsTerminal"
    };
	RespawnItems[] = {
		#include "\z\msf\addons\units\u\vehicles\base\Base_Items.inc"
	};
	respawnLinkedItems[] = {
        "MSF_NATO_WINTER_V_PLATECARRIER2", "MSF_NATO_HelmetLite_w", "MSF_Balaclava_TI_G_Alpine", "ItemMap", "ItemRadio", "ItemCompass", "ACE_Altimeter", "MSF_LogisticsTerminal"
	};
    uniformClass = "MSF_NATO_Uniform_Alpine_Recon";
    backpack = "MSF_w_EngBackpack";
};
