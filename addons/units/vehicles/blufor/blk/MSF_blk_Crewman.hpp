class MSF_Crewman_N :  MSF_Crewman
{
	editorSubcategory = "MSF_EdSubcat_Inf_Night";
    hiddenSelections[] = {"Camo","Insignia"}; 
	hiddenSelectionsTextures[] = {"z\msf\addons\units\data\blufor\MSF_BLUFOR_Tanker_MCB.paa"};
    model = "\A3\Characters_F_Tank\Uniforms\U_Tank_crew_F.p3d";
    linkedItems[] = {
        "V_PlateCarrier2_blk", "H_HelmetCrew_B", "G_Tactical_Clear", "ItemMap", "ItemRadio", "ItemCompass", "ACE_Altimeter", "ItemGPS", "JAS_GPNVG18_blk"
    };	
	respawnLinkedItems[] = {
        "V_PlateCarrier2_blk", "H_HelmetCrew_B", "G_Tactical_Clear", "ItemMap", "ItemRadio", "ItemCompass", "ACE_Altimeter", "ItemGPS", "JAS_GPNVG18_blk"
	};
    uniformClass = "MSF_BLUFOR_Tanker_MCB";
    backpack = "MSF_blk_EngBackpack";
};