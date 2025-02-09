class MSF_Leader :  MSF_Soldier_Base
{
	displayName = "Leader";
	icon = "iconManLeader";
	role = "MSFCommand";	
	editorSubcategory = "MSF_EdSubcat_Inf";
	scope = 2;
	scopeCurator = 2;
	weapons[] = {
        "MSF_MX_3GL", "Binocular", "Throw", "Put"
    };
    magazines[] = {
		"acex_intelitems_notepad", "SmokeShellGreen", "SmokeShellGreen", "SmokeShellGreen", "SmokeShellGreen", "1Rnd_HE_Grenade_shell",
		"ACE_HandFlare_Green", "30Rnd_65x39_caseless_mag_Tracer", "30Rnd_65x39_caseless_mag_Tracer", "30Rnd_65x39_caseless_mag_Tracer",
		"30Rnd_65x39_caseless_mag_Tracer", "30Rnd_65x39_caseless_mag_Tracer", "30Rnd_65x39_caseless_mag_Tracer",
		"ACE_HandFlare_Green", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "UGL_FlareGreen_F", "UGL_FlareGreen_F",
		"1Rnd_HE_Grenade_shell", "ACE_HuntIR_M203", "ACE_HuntIR_M203", "ACE_HuntIR_M203"
    };
    items[] = {
		"ACE_Banana", "ACE_DefusalKit", "ACE_M26_Clacker", "ACE_wirecutter", "ACE_WaterBottle", "ACE_epinephrine", "ACE_splint", "ACE_splint", "ACE_adenosine"       
    };
    linkedItems[] = {
        "V_PlateCarrier2_rgr", "H_HelmetB_grass", "G_Combat", "ItemMap", "ItemRadio", "ItemCompass", "ACE_Altimeter", 
        "ItemGPS", "JAS_GPNVG18_Tan"
    };	
	respawnWeapons[] = {
		"MSF_MX_3GL", "Binocular", "Throw", "Put"
	};
	respawnMagazines[] = {
		"acex_intelitems_notepad", "SmokeShellGreen", "SmokeShellGreen", "SmokeShellGreen", "SmokeShellGreen", "1Rnd_HE_Grenade_shell",
		"ACE_HandFlare_Green", "30Rnd_65x39_caseless_mag_Tracer", "30Rnd_65x39_caseless_mag_Tracer", "30Rnd_65x39_caseless_mag_Tracer",
		"30Rnd_65x39_caseless_mag_Tracer", "30Rnd_65x39_caseless_mag_Tracer", "30Rnd_65x39_caseless_mag_Tracer",
		"ACE_HandFlare_Green", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "UGL_FlareGreen_F", "UGL_FlareGreen_F",
		"1Rnd_HE_Grenade_shell", "ACE_HuntIR_M203", "ACE_HuntIR_M203", "ACE_HuntIR_M203"
	};
	RespawnItems[] = {
		"ACE_Banana", "ACE_DefusalKit", "ACE_M26_Clacker", "ACE_wirecutter", "ACE_WaterBottle", "ACE_epinephrine", "ACE_splint", "ACE_splint", "ACE_adenosine"
	};
	respawnLinkedItems[] = {
        "V_PlateCarrier2_rgr", "H_HelmetB_grass", "G_Combat", "ItemMap", "ItemRadio", "ItemCompass", "ACE_Altimeter", 
        "ItemGPS", "JAS_GPNVG18_Tan"		
	};
    uniformClass = "U_B_CombatUniform_mcam";
    backpack = "MSF_mc_PMAGSupplyBackpack";
};