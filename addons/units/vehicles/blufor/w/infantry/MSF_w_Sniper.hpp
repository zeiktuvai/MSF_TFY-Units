class MSF_Sniper_W : MSF_Sniper
{
	editorSubcategory = "MSF_EdSubcat_Inf_Winter";
	editorPreview = "z\msf\addons\units\ui\icon\blufor\w\men\MSF_Sniper_W.jpg";
	model = "\A3\Characters_F_Mark\BLUFOR\b_fullghillie_f.p3d";
	hiddenSelectionsTextures[] = {"\z\msf\addons\units\data\blufor\w\uniform\MSF_NATO_Ghillie_Coverall_Alpine.paa","\z\msf\addons\units\data\blufor\w\uniform\MSF_ghillie_threads_alpine.paa","\z\msf\addons\units\data\blufor\w\uniform\MSF_ghillie_threads_5LOD_alpine.paa"};
	hiddenSelections[] = {"camo","camo3","camo4"};
	weapons[] = {
		"MSF_Sniper_W","Rangefinder","hgun_P07_F", "Throw", "Put"
	};
	magazines[] = {
        "SmokeShellPurple", "ACE_10Rnd_338_300gr_HPBT_Mag", "ACE_10Rnd_338_300gr_HPBT_Mag",	"ACE_10Rnd_338_300gr_HPBT_Mag",
		"ACE_10Rnd_338_300gr_HPBT_Mag", "ACE_10Rnd_338_API526_Mag", "ACE_10Rnd_338_API526_Mag", "ACE_10Rnd_338_API526_Mag", "30Rnd_9x21_Mag",
		#include "\z\msf\addons\units\u\vehicles\base\Base_Mags.inc"
		#include "\z\msf\addons\units\u\vehicles\base\Base_Mags_Hgun.inc"
	};
	linkedItems[] = {
		"MSF_NATO_W_TACVEST", "H_Shemag_olive_hs", "ItemMap", "ItemRadio", "ItemCompass", "ACE_Altimeter", "ItemGPS", "JAS_GPNVG18_blk_TI"
	};
	respawnWeapons[] = {
		"MSF_Sniper_W","Rangefinder","hgun_P07_F", "Throw", "Put"
	};
	respawnMagazines[] = {
        "SmokeShellPurple", "ACE_10Rnd_338_300gr_HPBT_Mag", "ACE_10Rnd_338_300gr_HPBT_Mag",	"ACE_10Rnd_338_300gr_HPBT_Mag",
		"ACE_10Rnd_338_300gr_HPBT_Mag", "ACE_10Rnd_338_API526_Mag", "ACE_10Rnd_338_API526_Mag", "ACE_10Rnd_338_API526_Mag", "30Rnd_9x21_Mag",
		#include "\z\msf\addons\units\u\vehicles\base\Base_Mags.inc"
		#include "\z\msf\addons\units\u\vehicles\base\Base_Mags_Hgun.inc"
	};
	respawnLinkedItems[] = {
		"MSF_NATO_W_TACVEST", "H_Shemag_olive_hs", "ItemMap", "ItemRadio", "ItemCompass", "ACE_Altimeter", "ItemGPS", "JAS_GPNVG18_blk_TI"		
	};
	uniformClass = "MSF_BLUFOR_FullGhillie_Alpine";
	backpack = "MSF_w_SniperBackpack";
};
