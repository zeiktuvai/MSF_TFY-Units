class MSF_Crewman_W :  MSF_Crewman
{
	editorSubcategory = "MSF_EdSubcat_Inf_Winter";
	hiddenSelections[] = {"Camo","Insignia"};
	hiddenSelectionsTextures[] = {"z\msf\addons\units\data\blufor\w\MSF_BLUFOR_Tanker_Alpine.paa"};
    model = "\A3\Characters_F_Tank\Uniforms\U_Tank_crew_F.p3d";
	weapons[] = {
        "MSF_MXC_W",
        #include "../../base/Base_Weap_HgunBino.inc"
    };
    items[] = {
		#include "../../base/Base_Items.inc"		
    };
    linkedItems[] = {
        "NATO_WINTER_V_PLATECARRIER1", "NATO_WINTER_H_HELMETCREW", "MSF_Balaclava_TI_Alpine", "JAS_GPNVG18_blk_TI",
        #include "../../base/Base_Linked.inc"
    };	
	respawnWeapons[] = {
		"MSF_MXC_W",
        #include "../../base/Base_Weap_HgunBino.inc"
	};
	RespawnItems[] = {
		#include "../../base/Base_Items.inc"
		 "ACE_ATragMX", "ACE_RangeCard", "ACE_Banana", "ToolKit"
	};
	respawnLinkedItems[] = {
        "NATO_WINTER_V_PLATECARRIER1", "NATO_WINTER_H_HELMETCREW", "MSF_Balaclava_TI_Alpine", "JAS_GPNVG18_blk_TI",
        #include "../../base/Base_Linked.inc"
	};
       

    uniformClass = "MSF_BLUFOR_Tanker_Alpine";
    backpack = "MSF_w_PMAGBackpack";
};