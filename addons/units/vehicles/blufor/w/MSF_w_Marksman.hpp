class MSF_Marksman_W : MSF_Marksman
{
	editorSubcategory = "MSF_EdSubcat_Inf_Winter";
	weapons[] = {
		"MSF_MXM_W","Rangefinder","hgun_Pistol_heavy_01_F", "Throw", "Put"
	};
	linkedItems[] = {
		"MSF_NATO_W_CHESTRIG", "MSF_NATO_Helmet_w", "ItemMap", "ItemRadio", "ItemCompass", "ACE_Altimeter", "ItemGPS", "JAS_GPNVG18_blk_TI"
	};
	respawnWeapons[] = {
		"MSF_MXM_W","Rangefinder","hgun_Pistol_heavy_01_F", "Throw", "Put"
	};
	respawnLinkedItems[] = {
		"MSF_NATO_W_CHESTRIG", "MSF_NATO_Helmet_w", "ItemMap", "ItemRadio", "ItemCompass", "ACE_Altimeter", "ItemGPS", "JAS_GPNVG18_blk_TI"			
	};
	uniformClass = "NATO_WINTER_UNIFORM_GHILLIE";
	backpack = "MSF_w_BaseBackpack";
};