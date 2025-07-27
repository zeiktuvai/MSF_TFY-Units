    class MSF_Helicrew_w : MSF_Soldier_Base
    {
        author = "Zeik_Tuvai";
        displayName = "Heli Crew";
        scope = 2;
        scopeCurator = 2;
       	role = "MSFCrew";
	    icon = "iconMan";
        editorSubcategory = "MSF_EdSubcat_Inf_Winter";
        //editorPreview = "z\msf\addons\units\data\ui\MSF_O_ARC_Soldier_F.jpg";
        uniformClass = "MSF_BLUFOR_Coveralls_Alpine";
        backpack = "B_Parachute";
        weapons[] = {
            "MSF_MXC",
		    #include "../../base/Base_Weap_HgunBino.inc"
        };
        magazines[] = {
            "SmokeShellGreen", "SmokeShellGreen", "SmokeShellRed",
            #include "../../base/Base_Mags.inc"
            #include "../../base/Base_Mags_MX.inc"
            #include "../../base/Base_Mags_Hgun.inc"
        };
        items[] = {		
            #include "../../base/Base_Items.inc"
            #include "../../base/Items_No_BackPack.inc"
        };
        linkedItems[] = {
            "MSF_NATO_W_CHESTRIG", "H_PilotHelmetHeli_B", "G_Tactical_Clear", "JAS_GPNVG18_blk_TI",
            #include "../../base/Base_Linked.inc"
        };
        respawnWeapons[] = {
		    "MSF_MXC",
		    #include "../../base/Base_Weap_HgunBino.inc"
	    };
        respawnMagazines[] = {
            "SmokeShellGreen", "SmokeShellGreen", "SmokeShellRed",
            #include "../../base/Base_Mags.inc"
            #include "../../base/Base_Mags_MX.inc"
            #include "../../base/Base_Mags_Hgun.inc"
        };
        RespawnItems[] = {
            #include "../../base/Base_Items.inc"
            #include "../../base/Items_No_BackPack.inc"
        };
        respawnLinkedItems[] = {
            "MSF_NATO_W_CHESTRIG", "H_PilotHelmetHeli_B", "G_Tactical_Clear", "JAS_GPNVG18_blk_TI",
            #include "../../base/Base_Linked.inc"
        };
    };
