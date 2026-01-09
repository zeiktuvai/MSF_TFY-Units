class MSF_Crewman_W :  MSF_Crewman
{
	editorSubcategory = "MSF_EdSubcat_Inf_Winter";
	hiddenSelections[] = {"Camo","Insignia"};
	hiddenSelectionsTextures[] = {"z\msf\addons\units\data\blufor\w\uniform\MSF_BLUFOR_Tanker_Alpine.paa"};
    model = "\A3\Characters_F_Tank\Uniforms\U_Tank_crew_F.p3d";
    editorPreview = "z\msf\addons\units\ui\icon\blufor\w\men\MSF_Crewman_W.jpg";
    #include "mx_carbine.inc"
    items[] = {
		#include "\z\msf\addons\units\u\vehicles\base\Base_Items.inc"		
    };
    linkedItems[] = {
        "MSF_NATO_WINTER_V_PLATECARRIER1", "MSF_NATO_HelmetCrew_w", "MSF_Balaclava_TI_Alpine", "JAS_GPNVG18_blk_TI",
        #include "\z\msf\addons\units\u\vehicles\base\Base_Linked.inc"
    };	
	RespawnItems[] = {
		#include "\z\msf\addons\units\u\vehicles\base\Base_Items.inc"
		 "ACE_ATragMX", "ACE_RangeCard", "ACE_Banana", "ToolKit"
	};
	respawnLinkedItems[] = {
        "MSF_NATO_WINTER_V_PLATECARRIER1", "MSF_NATO_HelmetCrew_w", "MSF_Balaclava_TI_Alpine", "JAS_GPNVG18_blk_TI",
        #include "\z\msf\addons\units\u\vehicles\base\Base_Linked.inc"
	};
    uniformClass = "MSF_BLUFOR_Tanker_Alpine";
    backpack = "MSF_w_BaseBackpack";
};
