class MSF_ATRifleman_T :  MSF_ATRifleman
{
	editorSubcategory = "MSF_EdSubcat_Inf_Trop";
    editorPreview = "z\msf\addons\units\ui\icon\blufor\trop\men\MSF_ATRifleman_T.jpg";
    weapons[] = {
        "MSF_MX_T", "launch_MRAWS_green_F",
		#include "../../base/Base_Weap_HgunBino.inc"
    };
    respawnWeapons[] = {
        "MSF_MX_T", "launch_MRAWS_green_F",
		#include "../../base/Base_Weap_HgunBino.inc"
    };
	linkedItems[] = {
        "V_PlateCarrier2_tna_F", "H_HelmetB_Enh_tna_F", "G_Lowprofile", "JAS_GPNVG18_blk",
        #include "../../base/Base_Linked.inc"
    };	
	respawnLinkedItems[] = {
        "V_PlateCarrier2_tna_F", "H_HelmetB_Enh_tna_F", "G_Lowprofile", "JAS_GPNVG18_blk",
        #include "../../base/Base_Linked.inc"
	};
    uniformClass = "U_B_T_Soldier_SL_F";
    backpack = "MSF_trop_ATBackpack";
};

class MSF_AARifleman_T :  MSF_AARifleman
{
	editorSubcategory = "MSF_EdSubcat_Inf_Trop";
    editorPreview = "z\msf\addons\units\ui\icon\blufor\trop\men\MSF_AARifleman_T.jpg";
    weapons[] = {
        "MSF_MX_T", "launch_B_Titan_tna_F",
		#include "../../base/Base_Weap_HgunBino.inc"
    };
    respawnWeapons[] = {
        "MSF_MX_T", "launch_B_Titan_tna_F",
		#include "../../base/Base_Weap_HgunBino.inc"
    };
    linkedItems[] = {
        "V_PlateCarrier2_tna_F", "H_HelmetB_Enh_tna_F", "G_Lowprofile", "JAS_GPNVG18_blk",
        #include "../../base/Base_Linked.inc"
    };	
	respawnLinkedItems[] = {
        "V_PlateCarrier2_tna_F", "H_HelmetB_Enh_tna_F", "G_Lowprofile", "JAS_GPNVG18_blk",
        #include "../../base/Base_Linked.inc"
	};
    uniformClass = "U_B_T_Soldier_SL_F";
    backpack = "MSF_trop_AABackpack";
};
