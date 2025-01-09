class MSF_Engineer_W :  MSF_w_Soldier_Base
{
	displayName = "Engineer";
	role = "MSFSupport";	
	scope = 2;
	scopeCurator = 2;
	canDeactivateMines = 1;
	engineer = 1;
	icon = "iconManEngineer";
	editorSubcategory = "MSF_EdSubcat_Inf_Winter";
	model = "\A3\characters_F\BLUFOR\b_soldier_03.p3d";
	weapons[] = {
        "MSF_MXSW_W", "Binocular", "rhsusf_weap_m1911a1", "Throw", "Put"
    };
    magazines[] = {
        "acex_intelitems_notepad", "SmokeShellGreen", "SmokeShellRed", "SmokeShellRed", "30Rnd_65x39_caseless_black_mag_Tracer",
		"30Rnd_65x39_caseless_black_mag_Tracer", "30Rnd_65x39_caseless_black_mag_Tracer", "30Rnd_65x39_caseless_black_mag_Tracer",
		"30Rnd_65x39_caseless_black_mag_Tracer", "30Rnd_65x39_caseless_black_mag_Tracer", "30Rnd_65x39_caseless_black_mag_Tracer", 
        "30Rnd_65x39_caseless_black_mag_Tracer", "30Rnd_65x39_caseless_black_mag_Tracer", "30Rnd_65x39_caseless_black_mag_Tracer", 
		"9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "rhsusf_mag_7x45acp_MHP"
    };
    items[] = {
		"ACE_Banana"
    };
    linkedItems[] = {
        "NATO_WINTER_V_PLATECARRIER2", "NATO_WINTER_H_HELMETLIGHT", "NATO_WINTER_BALACLAVA_STEALTH_G", "ItemMap", "ItemRadio", "ItemCompass", "ACE_Altimeter", "ItemGPS"
    };	
	respawnWeapons[] = {
		"MSF_MXSW_W", "Binocular", "rhsusf_weap_m1911a1", "Throw", "Put"
	};
	respawnMagazines[] = {
        "acex_intelitems_notepad", "SmokeShellGreen", "SmokeShellRed", "SmokeShellRed", "30Rnd_65x39_caseless_black_mag_Tracer",
		"30Rnd_65x39_caseless_black_mag_Tracer", "30Rnd_65x39_caseless_black_mag_Tracer", "30Rnd_65x39_caseless_black_mag_Tracer",
		"30Rnd_65x39_caseless_black_mag_Tracer", "30Rnd_65x39_caseless_black_mag_Tracer", "30Rnd_65x39_caseless_black_mag_Tracer", 
        "30Rnd_65x39_caseless_black_mag_Tracer", "30Rnd_65x39_caseless_black_mag_Tracer", "30Rnd_65x39_caseless_black_mag_Tracer",
		"9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "rhsusf_mag_7x45acp_MHP"
	};
	RespawnItems[] = {
		"ACE_Banana"
	};
	respawnLinkedItems[] = {
        "NATO_WINTER_V_PLATECARRIER2", "NATO_WINTER_H_HELMETLIGHT", "NATO_WINTER_BALACLAVA_STEALTH_G", "ItemMap", "ItemRadio", "ItemCompass", "ACE_Altimeter", "ItemGPS"
	};
    uniformClass = "MSF_NATO_Uniform_Alpine_Recon";
    backpack = "MSF_w_EngBackpack";
};