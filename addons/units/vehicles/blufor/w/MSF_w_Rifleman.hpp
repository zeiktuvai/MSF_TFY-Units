class MSF_Rifleman_W :  MSF_w_Soldier_Base
{
	displayName = "Rifleman";
	role = "MSFAssault";	
	scope = 2;
	scopeCurator = 2;	
	weapons[] = {
        "MSF_MXSW_W", "Binocular", "Throw", "Put"
    };
    linkedItems[] = {
        "NATO_WINTER_H_HELMETPLAIN", "NATO_WINTER_V_PLATECARRIERSPEC", "MSF_Balaclava_TI_G_Alpine", "ItemMap", "ItemRadio", "ItemCompass", 
		"ACE_Altimeter", "ItemGPS", "JAS_GPNVG18_blk_TI"
    };	
	respawnWeapons[] = {
		"MSF_MXSW_W", "Binocular", "Throw", "Put"
	};
	respawnLinkedItems[] = {
        "NATO_WINTER_H_HELMETPLAIN", "NATO_WINTER_V_PLATECARRIERSPEC", "MSF_Balaclava_TI_G_Alpine", "ItemMap", "ItemRadio", "ItemCompass", 
		"ACE_Altimeter", "ItemGPS", "JAS_GPNVG18_blk_TI"
	};
    uniformClass = "MSF_NATO_Uniform_Alpine";
    backpack = "MSF_w_BaseBackpack";
};