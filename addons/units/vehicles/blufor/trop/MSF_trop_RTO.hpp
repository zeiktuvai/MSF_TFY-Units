class MSF_RTO_T :  MSF_RTO
{
	editorSubcategory = "MSF_EdSubcat_Inf_Trop";
    editorPreview = "z\msf\addons\units\ui\icon\blufor\trop\men\MSF_RTO_T.jpg";
    #include "mx.inc"
    linkedItems[] = {
        "V_PlateCarrier2_tna_F", "H_HelmetB_Enh_tna_F", "JAS_GPNVG18_blk",
        #include "../../base/Base_Linked.inc"
    };	
	respawnLinkedItems[] = {
        "V_PlateCarrier2_tna_F", "H_HelmetB_Enh_tna_F", "JAS_GPNVG18_blk",
        #include "../../base/Base_Linked.inc"
	};
    uniformClass = "U_B_T_Soldier_SL_F";
    backpack = "MSF_trop_RTOBackPack";
};
