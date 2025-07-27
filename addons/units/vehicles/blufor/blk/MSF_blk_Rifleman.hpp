class MSF_Rifleman_N : MSF_Rifleman
{
    editorSubcategory = "MSF_EdSubcat_Inf_Night";
    hiddenSelections[] = {"Camo","Insignia"}; 
    hiddenSelectionsTextures[] = {"z\msf\addons\units\data\blufor\MSF_BLUFOR_Clothing_MCB.paa"};
    weapons[] = {
        "MSF_MX_B",
        #include "../../base/Base_Weap_HgunBino.inc"
    };
    respawnWeapons[] = {
        "MSF_MX_B",
        #include "../../base/Base_Weap_HgunBino.inc"
    };
    linkedItems[] = {
        "V_PlateCarrier2_blk", "H_HelmetSpecB_blk", "G_Combat", "JAS_GPNVG18_blk",
        #include "../../base/Base_Linked.inc"
    };
    respawnLinkedItems[] = {
        "V_PlateCarrier2_blk", "H_HelmetSpecB_blk", "G_Combat", "JAS_GPNVG18_blk",
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
    backpack = "MSF_blk_BaseBackpack";
};
