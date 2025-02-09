class MSF_Medic_N :  MSF_Medic
{
	editorSubcategory = "MSF_EdSubcat_Inf_Night";
    linkedItems[] = {
        "V_TacVestIR_blk", "H_HelmetB_light_black", "G_Combat", "ItemMap", "ItemRadio", "ItemCompass", "ACE_Altimeter", "B_UavTerminal", 
		"JAS_GPNVG18_blk"
    };	
	respawnLinkedItems[] = {
        "V_TacVestIR_blk", "H_HelmetB_light_black", "G_Combat", "ItemMap", "ItemRadio", "ItemCompass", "ACE_Altimeter", "B_UavTerminal", 
		"JAS_GPNVG18_blk"
	};
    uniformClass = "U_B_CombatUniform_mcam";
    backpack = "MSF_blk_MedicBackpack";
};
