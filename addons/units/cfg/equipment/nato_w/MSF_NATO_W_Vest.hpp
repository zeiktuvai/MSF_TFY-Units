class MSF_NATO_WINTER_V_PLATECARRIER1 : V_PlateCarrier1_blk
{
	author = "Zeik_Tuvai";
	displayName = "Carrier Lite (Alpine)";
	// picture="\NATO_Winter_Data\UI\icon_v_platecarrier1.paa";
	model = "\A3\Characters_F\BLUFOR\equip_b_vest02.p3d";
	hiddenSelections[] = { "Camo" };
	hiddenSelectionsTextures[] = { "z\msf\addons\units\data\blufor\w\equipment\MSF_NATO_Vest_Alpine.paa" };
	class ItemInfo : VestItem
	{
		uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest02.p3d";		
		hiddenSelections[] = { "Camo" };
		containerClass = "Supply140";
		mass = 100;
	};
};
class MSF_NATO_WINTER_V_PLATECARRIER2 : V_PlateCarrier2_rgr
{
	author = "Zeik_Tuvai";	
	displayName = "Carrier Rig (Alpine)";
	//picture="\NATO_Winter_Data\UI\icon_v_platecarrier2.paa";
	model = "\A3\Characters_F\BLUFOR\equip_b_vest01.p3d";
	hiddenSelectionsTextures[] = { "z\msf\addons\units\data\blufor\w\equipment\MSF_NATO_Vest_Alpine.paa" };
	hiddenSelections[] = { "Camo" };
	class ItemInfo : VestItem
	{
		uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest01.p3d";
		hiddenSelections[] = { "Camo" };
		containerClass = "Supply140";
		mass = 100;
	};
};
class MSF_NATO_W_PLATECARRIERGL : V_PlateCarrierGL_rgr
{
	author="Zeik_Tuvai";
	displayName="Carrier GL Rig (Alpine)";
	//picture="\NATO_Winter_Data\UI\icon_v_carriergl_snow.paa";
	model="\A3\Characters_F\BLUFOR\equip_b_carrier_gl_rig.p3d";
	hiddenSelections[]=	{"Camo"};
	hiddenSelectionsTextures[] = {"z\msf\addons\units\data\blufor\w\equipment\MSF_BLUFOR_carrier_gl.paa"};
	class ItemInfo: VestItem
	{
		uniformModel="\A3\Characters_F\BLUFOR\equip_b_carrier_gl_rig.p3d";
		hiddenSelections[] = { "Camo" };
		containerClass="Supply140";
		mass=100;
	};
};

class MSF_NATO_W_CARRIER_GL : V_PlateCarrierSpec_rgr
{
	author="Zeik_Tuvai";	
	displayName="Carrier Special Rig (Alpine)";
	//picture="\NATO_Winter_Data\UI\icon_v_carrierspec";
	model="\A3\Characters_F\BLUFOR\equip_b_carrier_spec_rig.p3d";
	hiddenSelections[] = { "Camo" };
	hiddenSelectionsTextures[] = {"z\msf\addons\units\data\blufor\w\equipment\MSF_BLUFOR_carrier_gl.paa"};
	class ItemInfo : VestItem
	{
		uniformModel="\A3\Characters_F\BLUFOR\equip_b_carrier_spec_rig.p3d";
		hiddenSelections[] = { "Camo" };
		containerClass="Supply140";
		mass=100;
	};
};

class MSF_NATO_W_TACVEST : V_TacVest_oli
{
	author="Zeik_Tuvai";	
	displayName="Tactical Vest (Alpine)";
	//picture="\NATO_Winter_Data\UI\icon_V_TacVest_snow.paa";
	model="\A3\Characters_F\Common\equip_tacticalvest.p3d";
	hiddenSelections[]= {"Camo"};
	hiddenSelectionsTextures[]=	{"z\msf\addons\units\data\blufor\w\equipment\MSF_TacticalVest_Alpine.paa"};
	class ItemInfo: VestItem
	{
		uniformModel="\A3\Characters_F\Common\equip_tacticalvest.p3d";
		hiddenSelections[] = { "Camo" };
		containerClass="Supply100";
		mass=40;
	};
};

	// class MSF_NATO_W_BANDOLLIER : Vest_Camo_Base
	// {
	// 	author = "Zeik_Tuvai";	
	// 	displayName = "Slash Bandolier (Snow)";
	// 	picture = "\NATO_Winter_Data\UI\icon_v_bandolier.paa";
	// 	model = "\A3\Characters_F\BLUFOR\equip_b_bandolier";
	// 	hiddenSelectionsTextures[] = { "\NATO_Winter_Units\Data\Vests\NATO_Winter_vest.paa" };
	// 	class ItemInfo : ItemInfo
	// 	{
	// 		uniformModel = "\A3\Characters_F\BLUFOR\equip_b_bandolier";
	// 		containerClass = "Supply80";
	// 		mass = 10;
	// 	};
	// };

	// class MSF_NATO_W_CHESTRIG: Vest_Camo_Base
	// {
	// 	author="Zeik_Tuvai";
	// 	descriptionShort = "No Armor";
	// 	displayName = "Chest Rig (Snow)";
	// 	picture = "\NATO_Winter_Data\UI\icon_v_chestrig.paa";
	// 	model = "\A3\Characters_F\Common\equip_chestrig";
	// 	hiddenSelections[] = {"Camo1", "Camo2" };
	// 	hiddenSelectionsTextures[] = { "\NATO_Winter_Units\Data\Vests\NATO_Winter_equip_chestrig.paa", "\NATO_Winter_Units\Data\Vests\NATO_Winter_vest.paa" };
	// 	class ItemInfo: ItemInfo
	// 	{
	// 		uniformModel="\A3\Characters_F\Common\equip_chestrig.p3d";
	// 		containerClass="Supply140";
	// 		mass=20;
	// 		hiddenSelections[] = {"camo1", "camo2" };
	// 	};
	// };