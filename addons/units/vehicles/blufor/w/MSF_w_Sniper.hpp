class MSF_Sniper_W : MSF_Sniper
{
	editorSubcategory = "MSF_EdSubcat_Inf_Winter";
	model = "\A3\Characters_F_Mark\BLUFOR\b_fullghillie_f.p3d";
	hiddenSelectionsTextures[] = {"\z\msf\addons\units\data\blufor\w\uniform\MSF_NATO_Ghillie_Coverall_Alpine.paa","\z\msf\addons\units\data\blufor\w\uniform\MSF_ghillie_threads_alpine.paa","\z\msf\addons\units\data\blufor\w\uniform\MSF_ghillie_threads_5LOD_alpine.paa"};
	hiddenSelections[] = {"camo","camo3","camo4"};
	weapons[] = {
		"srifle_DMR_02_Winter_F","Rangefinder","hgun_P07_F", "Throw", "Put"
	};
	linkedItems[] = {
		"MSF_NATO_W_TACVEST", "H_Shemag_olive_hs", "ItemMap", "ItemRadio", "ItemCompass", "ACE_Altimeter", "ItemGPS", "JAS_GPNVG18_blk_TI"
	};
	respawnWeapons[] = {
		"srifle_DMR_02_Winter_F","Rangefinder","hgun_P07_F", "Throw", "Put"
	};
	respawnLinkedItems[] = {
		"MSF_NATO_W_TACVEST", "H_Shemag_olive_hs", "ItemMap", "ItemRadio", "ItemCompass", "ACE_Altimeter", "ItemGPS", "JAS_GPNVG18_blk_TI"		
	};
	uniformClass = "MSF_BLUFOR_Ghillie_Alpine";
	backpack = "MSF_w_SniperBackpack";
};