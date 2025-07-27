class MSF_RTO_N : MSF_RTO
{
    editorSubcategory = "MSF_EdSubcat_Inf_Night";
    weapons[] = {
        "MSF_MX_B",
        #include "../../base/Base_Weap_HgunBino.inc"
    };
    respawnWeapons[] = {
        "MSF_MX_B",
        #include "../../base/Base_Weap_HgunBino.inc"
    };
    linkedItems[] = {
        "V_PlateCarrier2_blk", "H_HelmetSpecB_blk", "JAS_GPNVG18_blk",
        #include "../../base/Base_Linked.inc"
    };
    respawnLinkedItems[] = {
        "V_PlateCarrier2_blk", "H_HelmetSpecB_blk", "JAS_GPNVG18_blk",
        #include "../../base/Base_Linked.inc"
    };
    items[] = {
        #include "../../base/Base_Items.inc"
        #include "../../base/Base_Items_Night.inc"
    };
    RespawnItems[] = {
        #include "../../base/Base_Items.inc"
        #include "../../base/Base_Items_Night.inc"
    };
    uniformClass = "MSF_BLUFOR_Clothing_MCB";
    backpack = "MSF_blk_RTOBackPack";
};
