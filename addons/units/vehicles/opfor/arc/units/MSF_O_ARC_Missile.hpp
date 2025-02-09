class MSF_O_ARC_ATRifleman : MSF_O_ARC_Soldier_Base
{
    displayName = "AT Specialist";
	role = "MSFSpecial";
	icon = "iconManAT";
    scope = 2;
    scopeCurator = 2;
    weapons[] = {
        "MSF_ARC_SPAR", "Binocular", "launch_MRAWS_green_F", "Throw", "Put"
    };
	magazines[] = {
		"acex_intelitems_notepad", "ACE_painkillers", "ACE_20Rnd_762x51_Mag_Tracer", "ACE_20Rnd_762x51_Mag_Tracer", "ACE_20Rnd_762x51_Mag_Tracer",
		"ACE_20Rnd_762x51_Mag_Tracer", "ACE_20Rnd_762x51_Mag_Tracer", "ACE_20Rnd_762x51_M993_AP_Mag", "ACE_20Rnd_762x51_M993_AP_Mag", "SmokeShellGreen",
		"SmokeShellRed", "HandGrenade", "HandGrenade", "MRAWS_HEAT_F", "20Rnd_762x51_Mag"
	};
    respawnWeapons[] = {
		"MSF_ARC_SPAR", "Binocular", "launch_MRAWS_green_F", "Throw", "Put"
	};
	respawnMagazines[] = {
		"acex_intelitems_notepad", "ACE_painkillers", "ACE_20Rnd_762x51_Mag_Tracer", "ACE_20Rnd_762x51_Mag_Tracer", "ACE_20Rnd_762x51_Mag_Tracer",
		"ACE_20Rnd_762x51_Mag_Tracer", "ACE_20Rnd_762x51_Mag_Tracer", "ACE_20Rnd_762x51_M993_AP_Mag", "ACE_20Rnd_762x51_M993_AP_Mag", "SmokeShellGreen",
		"SmokeShellRed", "HandGrenade", "HandGrenade", "MRAWS_HEAT_F", "20Rnd_762x51_Mag"
	};
    backpack = "MSF_O_ARC_ATBackpack";
};



class MSF_O_ARC_AARifleman : MSF_O_ARC_Soldier_Base
{
    displayName = "AA Specialist";
	role = "MSFSpecial";
	icon = "iconManAT";
    scope = 2;
    scopeCurator = 2;
    weapons[] = {
        "MSF_ARC_SPAR", "Binocular", "launch_I_Titan_F", "Throw", "Put"
    };
	magazines[] = {
		"acex_intelitems_notepad", "ACE_painkillers", "ACE_20Rnd_762x51_Mag_Tracer", "ACE_20Rnd_762x51_Mag_Tracer", "ACE_20Rnd_762x51_Mag_Tracer",
		"ACE_20Rnd_762x51_Mag_Tracer", "ACE_20Rnd_762x51_Mag_Tracer", "ACE_20Rnd_762x51_M993_AP_Mag", "ACE_20Rnd_762x51_M993_AP_Mag", "SmokeShellGreen",
		"SmokeShellRed", "HandGrenade", "HandGrenade", "Titan_AA", "20Rnd_762x51_Mag"
	};
    respawnWeapons[] = {
		"MSF_ARC_SPAR", "Binocular", "launch_I_Titan_F", "Throw", "Put"
	};
	respawnMagazines[] = {
		"acex_intelitems_notepad", "ACE_painkillers", "ACE_20Rnd_762x51_Mag_Tracer", "ACE_20Rnd_762x51_Mag_Tracer", "ACE_20Rnd_762x51_Mag_Tracer",
		"ACE_20Rnd_762x51_Mag_Tracer", "ACE_20Rnd_762x51_Mag_Tracer", "ACE_20Rnd_762x51_M993_AP_Mag", "ACE_20Rnd_762x51_M993_AP_Mag", "SmokeShellGreen",
		"SmokeShellRed", "HandGrenade", "HandGrenade", "Titan_AA", "20Rnd_762x51_Mag"
	};
    backpack = "MSF_O_ARC_AABackpack";
};