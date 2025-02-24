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
		#include "../../base/Base_Mags.inc"
		"ACE_30Rnd_65_Creedmor_mag", "ACE_30Rnd_65_Creedmor_mag", "ACE_30Rnd_65_Creedmor_mag", "ACE_30Rnd_65_Creedmor_mag",
		"ACE_30Rnd_65_Creedmor_mag", "ACE_30Rnd_65_Creedmor_mag", "ACE_30Rnd_65_Creedmor_mag", "ACE_30Rnd_65_Creedmor_mag", "ACE_30Rnd_65_Creedmor_mag",
		"11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag"
	};
	items[] = {
		#include "../../base/Base_Items.inc"
	};
	linkedItems[] = {
		"V_PlateCarrier2_rgr", "H_HelmetB_camo", "G_Bandanna_khk", "JAS_GPNVG18_Tan_TI",
		#include "../../base/Base_Linked.inc"
	};
	respawnWeapons[] = {
		"MSF_MXM","Rangefinder","hgun_Pistol_heavy_01_F", "Throw", "Put"
	};
	respawnMagazines[] = {
		#include "../../base/Base_Mags.inc"
		"ACE_30Rnd_65_Creedmor_mag", "ACE_30Rnd_65_Creedmor_mag", "ACE_30Rnd_65_Creedmor_mag", "ACE_30Rnd_65_Creedmor_mag",
		"ACE_30Rnd_65_Creedmor_mag", "ACE_30Rnd_65_Creedmor_mag", "ACE_30Rnd_65_Creedmor_mag", "ACE_30Rnd_65_Creedmor_mag", "ACE_30Rnd_65_Creedmor_mag",
		"11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag"
	};
	RespawnItems[] = {
		#include "../../base/Base_Items.inc"
	};
	respawnLinkedItems[] = {
		"V_PlateCarrier2_rgr", "H_HelmetB_camo", "G_Bandanna_khk", "JAS_GPNVG18_Tan_TI",
		#include "../../base/Base_Linked.inc"		
	};
	uniformClass = "U_B_CombatUniform_mcam_vest";
	backpack = "MSF_mc_BaseBackpack";
};