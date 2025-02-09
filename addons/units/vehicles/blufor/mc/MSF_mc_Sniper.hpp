class MSF_Sniper : MSF_Sniper_Base
{
	displayName = "Sniper";
	role = "MSFRecon";
	editorSubcategory = "MSF_EdSubcat_Inf";
	scope = 2;
	scopeCurator = 2;
	weapons[] = {
		"MSF_MAR10","Rangefinder","hgun_P07_F", "Throw", "Put"
	};
	magazines[] = {
        "acex_intelitems_notepad", "SmokeShellGreen", "SmokeShellRed", "SmokeShellPurple", "ACE_10Rnd_338_300gr_HPBT_Mag", 
		"ACE_10Rnd_338_300gr_HPBT_Mag",	"ACE_10Rnd_338_300gr_HPBT_Mag", "ACE_10Rnd_338_300gr_HPBT_Mag", "ACE_10Rnd_338_API526_Mag",
		"ACE_10Rnd_338_API526_Mag", "ACE_10Rnd_338_API526_Mag", "30Rnd_9x21_Mag", "30Rnd_9x21_Mag", "30Rnd_9x21_Mag", "30Rnd_9x21_Mag"
	};
	items[] = {
		"ACE_Banana", "ACE_RangeCard", "ACE_PlottingBoard", "ACE_ATragMX", "ACE_bodyBag"
	};
	linkedItems[] = {
		"V_PlateCarrierSpec_rgr", "H_Shemag_olive_hs", "G_Balaclava_TI_tna_F", "ItemMap", "ItemRadio", "ItemCompass", "ACE_Altimeter", "ItemGPS", "JAS_GPNVG18_blk"
	};
	respawnWeapons[] = {
		"MSF_MAR10","Rangefinder","hgun_P07_F", "Throw", "Put"
	};
	respawnMagazines[] = {
        "acex_intelitems_notepad", "SmokeShellGreen", "SmokeShellRed", "SmokeShellPurple", "ACE_10Rnd_338_300gr_HPBT_Mag", 
		"ACE_10Rnd_338_300gr_HPBT_Mag",	"ACE_10Rnd_338_300gr_HPBT_Mag", "ACE_10Rnd_338_300gr_HPBT_Mag", "ACE_10Rnd_338_API526_Mag",
		"ACE_10Rnd_338_API526_Mag", "ACE_10Rnd_338_API526_Mag", "30Rnd_9x21_Mag", "30Rnd_9x21_Mag", "30Rnd_9x21_Mag", "30Rnd_9x21_Mag"
	};
	RespawnItems[] = {
		"ACE_Banana", "ACE_RangeCard", "ACE_PlottingBoard", "ACE_ATragMX", "ACE_bodyBag"
	};
	respawnLinkedItems[] = {
		"V_PlateCarrierSpec_rgr", "H_Shemag_olive_hs", "G_Balaclava_TI_tna_F", "ItemMap", "ItemRadio", "ItemCompass", "ACE_Altimeter", "ItemGPS", "JAS_GPNVG18_blk"		
	};
	uniformClass = "U_B_GhillieSuit";
	backpack = "MSF_mc_SniperBackpack";
};