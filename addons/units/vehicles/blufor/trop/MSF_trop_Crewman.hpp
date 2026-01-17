class MSF_Crewman_T :  MSF_Crewman
{	
	editorSubcategory = "MSF_EdSubcat_Inf_Trop";
	hiddenSelections[] = {"Camo","Insignia"};
	hiddenSelectionsTextures[] = {"z\msf\addons\units\data\blufor\trop\uniform\MSF_NATO_Tanker_Trop.paa"};
    model = "\A3\Characters_F_Tank\Uniforms\U_Tank_crew_F.p3d";
	editorPreview = "z\msf\addons\units\ui\icon\blufor\trop\men\MSF_Crewman_T.jpg";
	#include "mxc.inc"
	linkedItems[] = {
        "V_PlateCarrier2_rgr", "H_HelmetCrew_B", "G_Tactical_Clear", "JAS_GPNVG18_blk_TI",
		#include "../../base/Base_Linked.inc"
    };	
	respawnLinkedItems[] = {
        "V_PlateCarrier2_rgr", "H_HelmetCrew_B", "G_Tactical_Clear", "JAS_GPNVG18_blk_TI",
		#include "../../base/Base_Linked.inc"
	};
	uniformClass = "MSF_NATO_Tanker_Trop";
    backpack = "MSF_trop_BaseBackpack";
};
