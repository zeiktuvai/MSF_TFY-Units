class MSF_Marksman : MSF_Soldier_Base
{
	displayName = "Designated Marksman";
	role = "MSFRecon";
	editorSubcategory = "MSF_EdSubcat_Inf";
	scope = 2;
	scopeCurator = 2;
	weapons[] = {
		"MSF_MXM","Rangefinder","hgun_Pistol_heavy_01_F", "Throw", "Put"
	};
	magazines[] = {
		"acex_intelitems_notepad", "ACE_30Rnd_65_Creedmor_mag", "ACE_30Rnd_65_Creedmor_mag", "ACE_30Rnd_65_Creedmor_mag", "ACE_30Rnd_65_Creedmor_mag",
		"ACE_30Rnd_65_Creedmor_mag", "ACE_30Rnd_65_Creedmor_mag", "ACE_30Rnd_65_Creedmor_mag", "ACE_30Rnd_65_Creedmor_mag", "ACE_30Rnd_65_Creedmor_mag",
		"11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag"
	};
	items[] = {
		"ACE_Banana", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", 
		"ACE_elasticBandage", "ACE_epinephrine", "ACE_morphine", "ACE_adenosine"
	};
	linkedItems[] = {
		"V_PlateCarrier2_rgr", "H_HelmetB_camo", "G_Bandanna_khk", "ItemMap", "ItemRadio", "ItemCompass", "ACE_Altimeter", "ItemGPS", "JAS_GPNVG18_Tan_TI"
	};
	respawnWeapons[] = {
		"MSF_MXM","Rangefinder","hgun_Pistol_heavy_01_F", "Throw", "Put"
	};
	respawnMagazines[] = {
		"acex_intelitems_notepad", "ACE_30Rnd_65_Creedmor_mag", "ACE_30Rnd_65_Creedmor_mag", "ACE_30Rnd_65_Creedmor_mag", "ACE_30Rnd_65_Creedmor_mag",
		"ACE_30Rnd_65_Creedmor_mag", "ACE_30Rnd_65_Creedmor_mag", "ACE_30Rnd_65_Creedmor_mag", "ACE_30Rnd_65_Creedmor_mag", "ACE_30Rnd_65_Creedmor_mag",
		"11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag"
	};
	RespawnItems[] = {
		"ACE_Banana", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", 
		"ACE_elasticBandage", "ACE_epinephrine", "ACE_morphine", "ACE_adenosine"
	};
	respawnLinkedItems[] = {
		"V_PlateCarrier2_rgr", "H_HelmetB_camo", "G_Bandanna_khk", "ItemMap", "ItemRadio", "ItemCompass", "ACE_Altimeter", "ItemGPS", "JAS_GPNVG18_Tan_TI"			
	};
	uniformClass = "U_B_CombatUniform_mcam_vest";
	backpack = "MSF_mc_PMAGBackpack";
};