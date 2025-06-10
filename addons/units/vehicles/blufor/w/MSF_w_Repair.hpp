class MSF_Repair_W :  MSF_Repair
{
	editorSubcategory = "MSF_EdSubcat_Inf_Winter";
	weapons[] = {
        "MSF_MXSW_W", "Binocular", "hgun_P07_F", "Throw", "Put"
    };
    linkedItems[] = {
        "MSF_NATO_WINTER_V_PLATECARRIER2", "NATO_WINTER_H_BOONIEHAT", "MSF_Balaclava_Alpine", "ItemMap", "ItemRadio", "ItemCompass", "ACE_Altimeter", "ItemGPS", "JAS_GPNVG18_Tan_TI"
    };	
	respawnWeapons[] = {
		"MSF_MXSW_W", "Binocular", "hgun_P07_F", "Throw", "Put"
	};
	respawnLinkedItems[] = {
        "MSF_NATO_WINTER_V_PLATECARRIER2", "NATO_WINTER_H_BOONIEHAT", "MSF_Balaclava_Alpine", "ItemMap", "ItemRadio", "ItemCompass", "ACE_Altimeter", "ItemGPS", "JAS_GPNVG18_Tan_TI"
	};
    uniformClass = "MSF_BLUFOR_Coveralls_Alpine";
    backpack = "MSF_w_BaseBackpack";
};