class MSF_Marksman_N : MSF_Marksman
{
	editorSubcategory = "MSF_EdSubcat_Inf_Night";
	weapons[] = {
		"MSF_MXM_B","Rangefinder","hgun_Pistol_heavy_01_F", "Throw", "Put"
	};
	respawnWeapons[] = {
		"MSF_MXM_B","Rangefinder","hgun_Pistol_heavy_01_F", "Throw", "Put"
	};
	linkedItems[] = {
		"V_PlateCarrier2_blk", "H_HelmetB_black", "G_Balaclava_TI_tna_F", "ItemMap", "ItemRadio", "ItemCompass", "ACE_Altimeter", "ItemGPS", "JAS_GPNVG18_blk"
	};
	respawnLinkedItems[] = {
		"V_PlateCarrier2_blk", "H_HelmetB_black", "G_Balaclava_TI_tna_F", "ItemMap", "ItemRadio", "ItemCompass", "ACE_Altimeter", "ItemGPS", "JAS_GPNVG18_blk"			
	};
	uniformClass = "MSF_BLUFOR_Clothing_MCB";
	backpack = "MSF_blk_MarksmanBackpack";
};