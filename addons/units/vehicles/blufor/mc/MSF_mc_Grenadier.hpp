class MSF_Grenadier :  MSF_Soldier_Base
{
	displayName = "Grenadier";
	role = "MSFAssault";	
	editorSubcategory = "MSF_EdSubcat_Inf";
	scope = 2;
	scopeCurator = 2;
	weapons[] = {
        "MSF_MX_3GL", "Rangefinder", "Throw", "Put"
    };
    magazines[] = {
        "acex_intelitems_notepad", "30Rnd_65x39_caseless_mag_Tracer", "30Rnd_65x39_caseless_mag_Tracer",
		"30Rnd_65x39_caseless_mag_Tracer", "30Rnd_65x39_caseless_mag_Tracer", "30Rnd_65x39_caseless_mag_Tracer",
		"1Rnd_SmokeGreen_Grenade_shell", "1Rnd_SmokeGreen_Grenade_shell", "1Rnd_SmokeGreen_Grenade_shell",
		"1Rnd_SmokeGreen_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell",
		"UGL_FlareGreen_F", "UGL_FlareGreen_F", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", 
		"1Rnd_HE_Grenade_shell", "ACE_HuntIR_M203", "ACE_HuntIR_M203", "ACE_HuntIR_M203", "ACE_HuntIR_M203", "ACE_HuntIR_M203",
		"1Rnd_HE_Grenade_shell"
    };
    items[] = {
		"ACE_Banana"      
    };
    linkedItems[] = {
        "V_PlateCarrierGL_mtp", "H_HelmetB_grass", "G_Combat", "ItemMap", "ItemRadio", "ItemCompass", "ACE_Altimeter", 
        "ItemGPS", "JAS_GPNVG18_Tan_TI"
    };	
	respawnWeapons[] = {
		"MSF_MX_3GL", "Rangefinder", "Throw", "Put"
	};
	respawnMagazines[] = {
        "acex_intelitems_notepad", "30Rnd_65x39_caseless_mag_Tracer", "30Rnd_65x39_caseless_mag_Tracer",
		"30Rnd_65x39_caseless_mag_Tracer", "30Rnd_65x39_caseless_mag_Tracer", "30Rnd_65x39_caseless_mag_Tracer",
		"1Rnd_SmokeGreen_Grenade_shell", "1Rnd_SmokeGreen_Grenade_shell", "1Rnd_SmokeGreen_Grenade_shell",
		"1Rnd_SmokeGreen_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell",
		"UGL_FlareGreen_F", "UGL_FlareGreen_F", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", 
		"1Rnd_HE_Grenade_shell", "ACE_HuntIR_M203", "ACE_HuntIR_M203", "ACE_HuntIR_M203", "ACE_HuntIR_M203", "ACE_HuntIR_M203",
		"1Rnd_HE_Grenade_shell"
	};
	RespawnItems[] = {
		"ACE_Banana"
	};
	respawnLinkedItems[] = {
        "V_PlateCarrierGL_mtp", "H_HelmetB_grass", "G_Combat", "ItemMap", "ItemRadio", "ItemCompass", "ACE_Altimeter", 
        "ItemGPS", "JAS_GPNVG18_Tan_TI"	
	};
    uniformClass = "U_B_CombatUniform_mcam";
    backpack = "MSF_mc_PMAGBackpack";
};