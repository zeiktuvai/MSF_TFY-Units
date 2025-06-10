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
            "MSF_MXC_W", "Binocular", "hgun_P07_F", "Throw", "Put"
        };
        linkedItems[] = {
            "MSF_NATO_W_CHESTRIG", "H_PilotHelmetHeli_B", "G_Tactical_Clear", "ItemMap", "ItemRadio", "ItemCompass", "ACE_Altimeter", "ItemGPS", 
            "JAS_GPNVG18_blk_TI",
        };	
        respawnWeapons[] = {
            "MSF_MXC_W", "Binocular", "hgun_P07_F", "Throw", "Put"
        };
        respawnLinkedItems[] = {
            "MSF_NATO_W_CHESTRIG", "H_PilotHelmetHeli_B", "G_Tactical_Clear", "ItemMap", "ItemRadio", "ItemCompass", "ACE_Altimeter", "ItemGPS", 
            "JAS_GPNVG18_blk_TI",
        };
    };