class MSF_NATO_WINTER_V_PLATECARRIER1 : V_PlateCarrier1_blk
{
	author = "Zeik_Tuvai";
	displayName = "Carrier Lite (Alpine)";
	// picture="\NATO_Winter_Data\UI\icon_v_platecarrier1.paa";
	model = "\A3\Characters_F\BLUFOR\equip_b_vest02.p3d";
	hiddenSelections[] = { "Camo" };
	hiddenSelectionsTextures[] = { "z\msf\addons\units\data\nato_w\MSF_NATO_Vest_Alpine.paa" };
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
	hiddenSelectionsTextures[] = { "z\msf\addons\units\data\nato_w\MSF_NATO_Vest_Alpine.paa" };
	hiddenSelections[] = { "Camo" };
	class ItemInfo : VestItem
	{
		uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest01.p3d";		
		hiddenSelections[] = { "Camo" };
		containerClass = "Supply140";
		mass = 100;
	};
};
	// class NATO_WINTER_V_TACVEST: Vest_Camo_Base
	// {
	// 	author="MALLINGA";
	// 	_generalMacro="NATO_WINTER_V_TACVEST";
	// 	scope=2;
	// 	scopeCurator=2;
	// 	scopeArsenal=2;
	// 	descriptionShort = "Armor Level I";
	// 	displayName="Tactical Vest (Snow)";
	// 	picture="\NATO_Winter_Data\UI\icon_V_TacVest_snow.paa";
	// 	model="\A3\Characters_F\Common\equip_tacticalvest.p3d";
	// 	hiddenSelectionsTextures[]=
	// 	{
	// 		"\NATO_Winter_Units\Data\Vests\NATO_Winter_tacticalvest_snow.paa"
	// 	};
	// 	hiddenSelections[]=
	// 	{
	// 		"Camo"
	// 	};
	// 	class ItemInfo: VestItem
	// 	{
	// 		uniformModel="\A3\Characters_F\Common\equip_tacticalvest.p3d";
	// 		hiddenSelectionsTextures[]=
	// 		{
	// 			"\NATO_Winter_Units\Data\Vests\NATO_Winter_tacticalvest_snow.paa"
	// 		};
	// 		hiddenSelections[]=
	// 		{
	// 			"Camo"
	// 		};
	// 		containerClass="Supply100";
	// 		mass=40;
	// 		class HitpointsProtectionInfo
	// 		{
	// 			class Chest
	// 			{
	// 				HitpointName="HitChest";
	// 				armor=8;
	// 				PassThrough=0.40000001;
	// 			};
	// 			class Diaphragm
	// 			{
	// 				HitpointName="HitDiaphragm";
	// 				armor=8;
	// 				PassThrough=0.40000001;
	// 			};
	// 			class Abdomen
	// 			{
	// 				hitpointName="HitAbdomen";
	// 				armor=8;
	// 				passThrough=0.40000001;
	// 			};
	// 			class Body
	// 			{
	// 				hitpointName="HitBody";
	// 				passThrough=0.40000001;
	// 			};
	// 		};
	// 	};
	// };
	// class NATO_WINTER_V_PLATECARRIERGL: Vest_NoCamo_Base
	// {
	// 	author="MALLINGA";
	// 	_generalMacro="NATO_WINTER_V_PLATECARRIERGL";
	// 	scope=2;
	// 	scopeCurator=2;
	// 	scopeArsenal=2;
	// 	descriptionShort = "Explosive Resistant";
	// 	displayName="Carrier GL Rig (Snow)";
	// 	picture="\NATO_Winter_Data\UI\icon_v_carriergl_snow.paa";
	// 	model="\A3\Characters_F\BLUFOR\equip_b_carrier_gl_rig.p3d";
	// 	hiddenSelectionsTextures[]=
	// 	{
	// 		"\NATO_Winter_Units\Data\Vests\NATO_Winter_carrier_gl.paa"
	// 	};
	// 	hiddenSelections[]=
	// 	{
	// 		"Camo"
	// 	};
	// 	class ItemInfo: VestItem
	// 	{
	// 		uniformModel="\A3\Characters_F\BLUFOR\equip_b_carrier_gl_rig.p3d";
	// 		hiddenSelectionsTextures[]=
	// 		{
	// 			"\NATO_Winter_Units\Data\Vests\NATO_Winter_carrier_gl.paa"
	// 		};
	// 		hiddenSelections[]=
	// 		{
	// 			"Camo"
	// 		};
	// 		containerClass="Supply140";
	// 		mass=100;
	// 		class HitpointsProtectionInfo
	// 		{
	// 			class Neck
	// 			{
	// 				hitpointName="HitNeck";
	// 				armor=8;
	// 				passThrough=0.5;
	// 			};
	// 			class Arms
	// 			{
	// 				hitpointName="HitArms";
	// 				armor=8;
	// 				passThrough=0.5;
	// 			};
	// 			class Chest
	// 			{
	// 				hitpointName="HitChest";
	// 				armor=78;
	// 				passThrough=0.60000002;
	// 			};
	// 			class Diaphragm
	// 			{
	// 				hitpointName="HitDiaphragm";
	// 				armor=78;
	// 				passThrough=0.60000002;
	// 			};
	// 			class Abdomen
	// 			{
	// 				hitpointName="HitAbdomen";
	// 				armor=16;
	// 				passThrough=0.30000001;
	// 			};
	// 			class Pelvis
	// 			{
	// 				hitpointName="HitPelvis";
	// 				armor=16;
	// 				passThrough=0.30000001;
	// 			};
	// 			class Body
	// 			{
	// 				hitpointName="HitBody";
	// 				passThrough=0.60000002;
	// 			};
	// 		};
	// 	};
	// };
	// class NATO_WINTER_V_PLATECARRIERSPEC: Vest_NoCamo_Base
	// {
	// 	author="MALLINGA";
	// 	_generalMacro="NATO_WINTER_V_PLATECARRIERSPEC";
	// 	scope=2;
	// 	scopeCurator=2;
	// 	scopeArsenal=2;
	// 	descriptionShort = "Armor Level V";
	// 	displayName="Carrier Special Rig (Snow)";
	// 	picture="\NATO_Winter_Data\UI\icon_v_carrierspec";
	// 	model="\A3\Characters_F\BLUFOR\equip_b_carrier_spec_rig.p3d";
	// 	hiddenSelectionsTextures[]=
	// 	{
	// 		"\NATO_Winter_Units\Data\Vests\NATO_Winter_carrier_gl.paa"
	// 	};
	// 	hiddenSelections[]=
	// 	{
	// 		"Camo"
	// 	};
	// 	class ItemInfo: VestItem
	// 	{
	// 		uniformModel="\A3\Characters_F\BLUFOR\equip_b_carrier_spec_rig.p3d";
	// 		hiddenSelectionsTextures[]=
	// 		{
	// 			"\NATO_Winter_Units\Data\Vests\NATO_Winter_carrier_gl.paa"
	// 		};
	// 		hiddenSelections[]=
	// 		{
	// 			"Camo"
	// 		};
	// 		containerClass="Supply100";
	// 		mass=120;
	// 		class HitpointsProtectionInfo
	// 		{
	// 			class Neck
	// 			{
	// 				hitpointName="HitNeck";
	// 				armor=8;
	// 				passThrough=0.5;
	// 			};
	// 			class Arms
	// 			{
	// 				hitpointName="HitArms";
	// 				armor=8;
	// 				passThrough=0.5;
	// 			};
	// 			class Chest
	// 			{
	// 				hitpointName="HitChest";
	// 				armor=24;
	// 				passThrough=0.1;
	// 			};
	// 			class Diaphragm
	// 			{
	// 				hitpointName="HitDiaphragm";
	// 				armor=24;
	// 				passThrough=0.1;
	// 			};
	// 			class Abdomen
	// 			{
	// 				hitpointName="HitAbdomen";
	// 				armor=24;
	// 				passThrough=0.1;
	// 			};
	// 			class Body
	// 			{
	// 				hitpointName="HitBody";
	// 				passThrough=0.1;
	// 			};
	// 		};
	// 	};
	// };
	// class NATO_WINTER_V_BANDOLLIER: Vest_Camo_Base
	// {
	// 	author="MALLINGA";
	// 	_generalMacro="NATO_WINTER_V_BANDOLLIER";
	// 	scope=2;
	// 	scopeCurator=2;
	// 	scopeArsenal=2;
	// 	weaponPoolAvailable=1;
	// 	descriptionShort = "No Armor";
	// 	displayName="Slash Bandolier (Snow)";
	// 	picture="\NATO_Winter_Data\UI\icon_v_bandolier.paa";
	// 	model="\A3\Characters_F\BLUFOR\equip_b_bandolier";
	// 	hiddenSelectionsTextures[]=
	// 	{
	// 		"\NATO_Winter_Units\Data\Vests\NATO_Winter_vest.paa"
	// 	};
	// 	class ItemInfo: ItemInfo
	// 	{
	// 		uniformModel="\A3\Characters_F\BLUFOR\equip_b_bandolier";
	// 		containerClass="Supply80";
	// 		mass=10;
	// 	};
	// };
	// class NATO_WINTER_V_CHESTRIG: Vest_Camo_Base
	// {
	// 	author="MALLINGA";
	// 	_generalMacro="NATO_WINTER_V_CHESTRIG";
	// 	scope=2;
	// 	scopeCurator=2;
	// 	scopeArsenal=2;
	// 	descriptionShort = "No Armor";
	// 	displayName="Chest Rig (Snow)";
	// 	picture="\NATO_Winter_Data\UI\icon_v_chestrig.paa";
	// 	model="\A3\Characters_F\Common\equip_chestrig";
	// 	hiddenSelections[]=
	// 	{
	// 		"Camo1",
	// 		"Camo2"
	// 	};
	// 	hiddenSelectionsTextures[]=
	// 	{
	// 		"\NATO_Winter_Units\Data\Vests\NATO_Winter_equip_chestrig.paa",
	// 		"\NATO_Winter_Units\Data\Vests\NATO_Winter_vest.paa"
	// 	};
	// 	class ItemInfo: ItemInfo
	// 	{
	// 		uniformModel="\A3\Characters_F\Common\equip_chestrig.p3d";
	// 		containerClass="Supply140";
	// 		mass=20;
	// 		hiddenSelections[]=
	// 		{
	// 			"camo1",
	// 			"camo2"
	// 		};
	// 	};
	// };