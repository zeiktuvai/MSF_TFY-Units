class MSF_Sniper_W : MSF_Sniper
{
	editorSubcategory = "MSF_EdSubcat_Inf_Winter";
	weapons[] = {
		"srifle_DMR_02_Winter_F","Rangefinder","hgun_P07_F", "Throw", "Put"
	};
	linkedItems[] = {
		"NATO_WINTER_V_PLATECARRIER1", "H_Shemag_olive_hs", "ItemMap", "ItemRadio", "ItemCompass", "ACE_Altimeter", "ItemGPS", "JAS_GPNVG18_blk_TI"
	};
	respawnWeapons[] = {
		"srifle_DMR_02_Winter_F","Rangefinder","hgun_P07_F", "Throw", "Put"
	};
	respawnLinkedItems[] = {
		"NATO_WINTER_V_PLATECARRIER1", "H_Shemag_olive_hs", "ItemMap", "ItemRadio", "ItemCompass", "ACE_Altimeter", "ItemGPS", "JAS_GPNVG18_blk_TI"		
	};
	uniformClass = "NATO_WINTER_UNIFORM_GHILLIE";
	backpack = "MSF_w_SniperBackpack";
};