class MSF_O_ARC_Leader : MSF_O_ARC_Soldier_Base
{
    author = "Zeik_Tuvai";         
	displayName = "Leader";
	icon = "iconManLeader";
	role = "MSFCommand";	
    scope = 2;
    scopeCurator = 2;
    editorPreview = "z\msf\addons\units\ui\icon\opfor\arc\men\MSF_O_ARC_Leader.jpg";
    linkedItems[] = {
		"ARC_Vest_Lite", "ARC_Helmet", "G_Combat", "ItemMap", "ItemCompass", "ACE_Altimeter", "ItemRadio", "ItemGPS"
	};
	respawnLinkedItems[] = {
        "ARC_Vest_Lite", "ARC_Helmet", "G_Combat", "ItemMap", "ItemCompass", "ACE_Altimeter", "ItemRadio", "ItemGPS"	
	};
};
