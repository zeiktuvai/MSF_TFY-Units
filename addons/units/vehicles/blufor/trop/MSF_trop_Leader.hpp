class MSF_Leader_T :  MSF_Leader
{
	editorSubcategory = "MSF_EdSubcat_Inf_Trop";
    editorPreview = "z\msf\addons\units\ui\icon\blufor\trop\men\MSF_Leader_T.jpg";
    #include "mxgl.inc"
    linkedItems[] = {
        "V_PlateCarrier2_tna_F", "H_HelmetB_Enh_tna_F", "G_Lowprofile", "JAS_GPNVG18_blk",
        #include "../../base/Base_Linked.inc"
    };	
	respawnLinkedItems[] = {
        "V_PlateCarrier2_tna_F", "H_HelmetB_Enh_tna_F", "G_Lowprofile", "JAS_GPNVG18_blk",
        #include "../../base/Base_Linked.inc"
	};
    uniformClass = "U_B_T_Soldier_SL_F";
    backpack = "MSF_trop_BaseBackpack";
};
