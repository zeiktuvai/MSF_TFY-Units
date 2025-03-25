class MSF_Marksman_W : MSF_Marksman
{
	editorSubcategory = "MSF_EdSubcat_Inf_Winter";
	weapons[] = {
		"MSF_MXM_W","Rangefinder","hgun_Pistol_heavy_01_F", "Throw", "Put"
	};
	linkedItems[] = {
		"NATO_WINTER_V_CHESTRIG", "NATO_WINTER_H_HELMETPLAIN", "ItemMap", "ItemRadio", "ItemCompass", "ACE_Altimeter", "ItemGPS", "JAS_GPNVG18_blk_TI"
	};
	respawnWeapons[] = {
		"MSF_MXM_W","Rangefinder","hgun_Pistol_heavy_01_F", "Throw", "Put"
	};
	respawnLinkedItems[] = {
		"NATO_WINTER_V_CHESTRIG", "NATO_WINTER_H_HELMETPLAIN", "ItemMap", "ItemRadio", "ItemCompass", "ACE_Altimeter", "ItemGPS", "JAS_GPNVG18_blk_TI"			
	};
	uniformClass = "NATO_WINTER_UNIFORM_GHILLIE";
	backpack = "MSF_w_BaseBackpack";
};