class B_ViperLightHarness_base_F;
class MSF_mc_BaseBackpack : B_ViperLightHarness_base_F
{
	displayName = "Viper Light Standard Backpack";
	scope = 2;	
	hiddenSelectionsTextures[] = {"\A3\Supplies_F_Exp\Bags\Data\Backpack_ViperOp_khk_co.paa"};
	picture = "\A3\Supplies_F_Exp\Bags\Data\UI\icon_B_ViperLightHarness_khk_F_ca.paa";
	class TransportItems {
		#include "..\..\base\Base_BackPack_Items.hpp"
	};
	class TransportMagazines {
		#include "..\..\base\Base_BackPack_Grenades.hpp"
		#include "..\..\base\Base_BackPack_Mags.inc"
	};
};

class MSF_mc_SniperBackpack : MSF_mc_BaseBackpack
{
	displayName = "Viper Light Sniper Backpack";
	class TransportMagazines {
		#include "..\..\base\Base_BackPack_Grenades.hpp"
		class _xx_10rnd_50 { magazine = "ACE_10Rnd_338_300gr_HPBT_Mag"; count = 3; };
	};
};

class MSF_mc_ATBackpack : MSF_mc_BaseBackpack
{
	displayName = "Viper Light Anti-Tank Backpack";
	class TransportMagazines {
		#include "..\..\base\Base_BackPack_Grenades.hpp"
		class _xx_maaws_het { magazine = "MRAWS_HEAT_F"; count = 2; };
		class _xx_maaws_hedp { magazine = "MRAWS_HEAT55_F"; count = 1; };
	};
};

class MSF_mc_AABackpack : MSF_mc_BaseBackpack
{
	displayName = "Viper Light Anti-Air Backpack";
	class TransportMagazines {
		#include "..\..\base\Base_BackPack_Grenades.hpp"
		class _xx_titan_aa { magazine = "Titan_AA";	count = 2; };
	};
};

class MSF_mc_MedicBackpack : MSF_mc_BaseBackpack
{
	displayName = "Viper Light Medic Backpack";
	class TransportItems {
		#include "..\..\base\Base_BackPack_Items.hpp"
		class _add_quickclot { name = "ACE_quikclot"; count = 15; };
		class _add_packBandage { name = "ACE_packingBandage"; count = 20; };
		class _add_tourniquet { name = "ACE_tourniquet"; count = 10; };
		class _add_splint { name = "ACE_splint"; count = 10; };
		class _add_epi { name = "ACE_epinephrine"; count = 4; };
		class _add_aden { name = "ACE_adenosine"; count = 4; };
		class _add_morph { name = "ACE_morphine"; count = 11; };
		class _add_saline500 { name = "ACE_salineIV_500"; count = 3; };
		class _add_blood { name = "ACE_bloodIV"; count = 4; };
		class _xx_plasma { name = "ACE_plasmaIV"; count = 2; };
		class _xx_blood500 { name = "ACE_bloodIV_500"; count = 2; };
		class _xx_plas500 { name = "ACE_plasmaIV_500"; count = 2; };
		class _add_bodybag { name = "ACE_bodyBag"; count = 1; };
		class _add_earplug { name = "ACE_EarPlugs"; count = 3; };
		class _add_cabletie{ name = "ACE_CableTie"; count = 1; };
		class _add_waterbot { name = "ACE_WaterBottle"; count = 1; };
		class _xx_paid { name = "ACE_personalAidKit"; count = 1; };
	};
};

class MSF_mc_EngBackpack : MSF_mc_BaseBackpack
{
	displayName = "Viper Light Engineer Backpack";
	class TransportItems {
		#include "..\..\base\Base_BackPack_Items.hpp"
		class _xx_wirecut { name = "ACE_wirecutter"; count = 1; };
		class _xx_mined { name = "MineDetector"; count = 1; };
		class _xx_flash { name = "ACE_Flashlight_XL50"; count = 1; };
		class _add_m26 { name = "ACE_M26_Clacker"; count = 1; };
		class _xx_fortify { name = "ACE_Fortify"; count = 1; };
		class _xx_etool { name = "ACE_EntrenchingTool"; count = 1; };
		class _xx_defus { name = "ACE_DefusalKit"; count = 1; };
		class _xx_dmsw { name = "ACE_DeadManSwitch"; count = 1; };
		class _xx_tool { name = "ToolKit"; count = 1; };		
		class _add_earplug { name = "ACE_EarPlugs"; count = 1; };
	};
};

class MSF_mc_MineBackpack : MSF_mc_BaseBackpack
{
	displayName = "Viper Light Mine Spec. Backpack";
	class TransportMagazines {
		#include "..\..\base\Base_BackPack_Grenades.hpp"
		class _xx_persmine { magazine = "APERSMine_Range_Mag"; count = 5; };
		class _xx_atmine { magazine = "ATMine_Range_Mag"; count = 2; };
		class _xx_boundmine { magazine = "APERSBoundingMine_Range_Mag"; count = 1; };
	};
};

class TFAR_rt1523g_sage;
class MSF_mc_RTOBackPack : TFAR_rt1523g_sage
{
	displayName = "MSF ASIP Pack";
	scope = 2;	
	class TransportItems {
		#include "..\..\base\Base_BackPack_Items.hpp"
	};
	class TransportMagazines {
		#include "..\..\base\Base_BackPack_Grenades.hpp"
	};
};

