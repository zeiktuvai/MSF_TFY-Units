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
        "SmokeShellPurple", "ACE_10Rnd_338_300gr_HPBT_Mag", "ACE_10Rnd_338_300gr_HPBT_Mag",	"ACE_10Rnd_338_300gr_HPBT_Mag",
		"ACE_10Rnd_338_300gr_HPBT_Mag", "ACE_10Rnd_338_API526_Mag", "ACE_10Rnd_338_API526_Mag", "ACE_10Rnd_338_API526_Mag", "30Rnd_9x21_Mag",
		#include "../../base/Base_Mags.inc"
		#include "../../base/Base_Mags_Hgun.inc"
	};
	items[] = {
		"ACE_PlottingBoard", "ACE_bodyBag",
		#include "../../base/Base_Items.inc"
	};
	linkedItems[] = {
		"V_PlateCarrierSpec_rgr", "H_Shemag_olive_hs", "G_Balaclava_TI_tna_F", "JAS_GPNVG18_blk",
		#include "../../base/Base_Linked.inc"
	};
	respawnWeapons[] = {
		"MSF_MAR10","Rangefinder","hgun_P07_F", "Throw", "Put"
	};
	respawnMagazines[] = {
        "SmokeShellPurple", "ACE_10Rnd_338_300gr_HPBT_Mag", "ACE_10Rnd_338_300gr_HPBT_Mag",	"ACE_10Rnd_338_300gr_HPBT_Mag",
		"ACE_10Rnd_338_300gr_HPBT_Mag", "ACE_10Rnd_338_API526_Mag", "ACE_10Rnd_338_API526_Mag", "ACE_10Rnd_338_API526_Mag", "30Rnd_9x21_Mag",
		#include "../../base/Base_Mags.inc"
		#include "../../base/Base_Mags_Hgun.inc"
	};
	RespawnItems[] = {
		"ACE_PlottingBoard", "ACE_bodyBag",
		#include "../../base/Base_Items.inc"
	};
	respawnLinkedItems[] = {
		"V_PlateCarrierSpec_rgr", "H_Shemag_olive_hs", "G_Balaclava_TI_tna_F", "JAS_GPNVG18_blk"		,
		#include "../../base/Base_Linked.inc"
	};
	uniformClass = "U_B_GhillieSuit";
	backpack = "MSF_mc_SniperBackpack";
};