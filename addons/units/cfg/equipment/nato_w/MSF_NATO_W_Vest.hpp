class MSF_NATO_WINTER_V_PLATECARRIER1 : V_PlateCarrier1_blk
{
	author = "Zeik_Tuvai";
	displayName = "Carrier Lite (Alpine)";
	model = "\A3\Characters_F\BLUFOR\equip_b_vest02.p3d";
	hiddenSelections[] = { "Camo" };
	hiddenSelectionsTextures[] = { "z\msf\addons\units\data\blufor\w\equipment\MSF_NATO_Vest_Alpine.paa" };
};
class MSF_NATO_WINTER_V_PLATECARRIER2 : V_PlateCarrier2_blk
{
	author = "Zeik_Tuvai";	
	displayName = "Carrier Rig (Alpine)";
	model = "A3\Characters_F\BLUFOR\equip_b_Vest01.p3d"; 
	hiddenSelectionsTextures[] = { "z\msf\addons\units\data\blufor\w\equipment\MSF_NATO_Vest_Alpine.paa" };
	hiddenSelections[] = { "Camo" };
};
class MSF_NATO_W_PLATECARRIERGL : V_PlateCarrierGL_rgr
{
	author="Zeik_Tuvai";
	displayName="Carrier GL Rig (Alpine)";
	model="\A3\Characters_F\BLUFOR\equip_b_carrier_gl_rig.p3d";
	hiddenSelections[]=	{"Camo"};
	hiddenSelectionsTextures[] = {"z\msf\addons\units\data\blufor\w\equipment\MSF_BLUFOR_carrier_gl.paa"};
};

class MSF_NATO_W_CARRIER_GL : V_PlateCarrierSpec_rgr
{
	author="Zeik_Tuvai";	
	displayName="Carrier Special Rig (Alpine)";
	model="\A3\Characters_F\BLUFOR\equip_b_carrier_spec_rig.p3d";
	hiddenSelections[] = { "Camo" };
	hiddenSelectionsTextures[] = {"z\msf\addons\units\data\blufor\w\equipment\MSF_BLUFOR_carrier_gl.paa"};
};

class MSF_NATO_W_TACVEST : V_TacVest_oli
{
	author = "Zeik_Tuvai";	
	displayName = "Tactical Vest (Alpine)";
	model = "\A3\Characters_F\Common\equip_tacticalvest.p3d";
	hiddenSelections[] = {"Camo"};
	hiddenSelectionsTextures[] = {"z\msf\addons\units\data\blufor\w\equipment\MSF_TacticalVest_Alpine.paa"};
};

class MSF_NATO_W_BANDOLLIER : V_BandollierB_blk
{
	author = "Zeik_Tuvai";	
	displayName = "Slash Bandolier (Alpine)";
	model = "\A3\Characters_F\BLUFOR\equip_b_bandolier";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"z\msf\addons\units\data\blufor\w\equipment\MSF_NATO_Vest_Alpine.paa"};
};

class MSF_NATO_W_CHESTRIG : V_Chestrig_rgr
{
	author = "Zeik_Tuvai";
	displayName = "Chest Rig (Alpine)";
	model = "\A3\Characters_F\Common\equip_chestrig";
	hiddenSelections[] = {"Camo1", "Camo2" };
	hiddenSelectionsTextures[] = {"z\msf\addons\units\data\blufor\w\equipment\MSF_NATO_chestrig_Alpine.paa", "z\msf\addons\units\data\blufor\w\equipment\MSF_TacticalVest_Alpine.paa" };
};