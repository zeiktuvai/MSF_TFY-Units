    class MSF_O_ARC_Helicrew : MSF_O_ARC_Soldier_Base
    {
        author = "Zeik_Tuvai";
        displayName = "Pilot";
        scope = 2;
        scopeCurator = 2;
       	role = "MSFCrew";
	    icon = "iconMan";
        editorPreview = "z\msf\addons\units\data\ui\MSF_O_ARC_Soldier_F.jpg";
        model = "\A3\Characters_F\Common\coveralls.p3d";
        hiddenSelectionsTextures[] = {"z\msf\addons\units\data\arc\MSF_O_ARC_Coveralls.paa"};
        uniformClass = "MSF_O_ARC_Coveralls";
        backpack = "B_Parachute";
        linkedItems[] = {
		    "V_TacVest_oli", "H_CrewHelmetHeli_B", "G_Tactical_Clear", "ItemMap", "ItemCompass", "ACE_Altimeter", "ItemRadio", "ItemGPS"
	    };
        respawnLinkedItems[] = {
		    "V_TacVest_oli", "H_CrewHelmetHeli_B", "G_Tactical_Clear", "ItemMap", "ItemCompass", "ACE_Altimeter", "ItemRadio", "ItemGPS"
	    };
    };