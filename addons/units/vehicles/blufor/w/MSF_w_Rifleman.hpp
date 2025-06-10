class MSF_Rifleman_W :  MSF_w_Soldier_Base
{
	displayName = "Rifleman";
	role = "MSFAssault";	
	scope = 2;
	scopeCurator = 2;	
 	#include "mx_std.inc"
    linkedItems[] = {
        "MSF_NATO_HelmetSpec_w", "MSF_NATO_W_CARRIER_GL", "MSF_Balaclava_TI_G_Alpine", "ItemMap", "ItemRadio", "ItemCompass", 
		"ACE_Altimeter", "ItemGPS", "JAS_GPNVG18_blk_TI"
    };	
	respawnLinkedItems[] = {
        "MSF_NATO_HelmetSpec_w", "MSF_NATO_W_CARRIER_GL", "MSF_Balaclava_TI_G_Alpine", "ItemMap", "ItemRadio", "ItemCompass", 
		"ACE_Altimeter", "ItemGPS", "JAS_GPNVG18_blk_TI"
	};
    uniformClass = "MSF_NATO_Uniform_Alpine";
    backpack = "MSF_w_BaseBackpack";
};