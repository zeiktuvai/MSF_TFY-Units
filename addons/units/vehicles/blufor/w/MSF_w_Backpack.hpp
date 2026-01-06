class MSF_Alpine_Backpack : B_Kitbag_rgr
{
	scope = 2;
    displayName = "Kitbag (Alpine)";
    picture = "\A3\Weapons_F\ammoboxes\bags\data\ui\icon_B_C_Kitbag_rgr.paa";
    hiddenSelectionsTextures[] = {"\z\msf\addons\units\data\blufor\w\equipment\backpack_fast_alpine.paa"};
};

class MSF_UAV_01_Backpack_w : B_UAV_01_backpack_F
{
	scope = 2;
    displayName = "UAV Bag Alpine (AR-2) [NATO]";
    picture = "\A3\Drones_F\Weapons_F_Gamma\Ammoboxes\Bags\Data\UI\icon_B_C_UAV_rgr_ca";
    hiddenSelectionsTextures[] = {"\z\msf\addons\units\data\blufor\w\equipment\UAV_06_NATO_w.paa"};
};

class MSF_w_BaseBackpack : MSF_Alpine_Backpack
{
	displayName = "Standard Kitbag (Alpine)";
	scope = 2;	
	class TransportItems {
		#include "..\..\base\Base_BackPack_Items.hpp"
	};
	class TransportMagazines {
		#include "..\..\base\Base_BackPack_Grenades.hpp"
		#include "..\..\base\Base_BackPack_Mags.inc"
	};
};

class MSF_w_PMAGBackpack : MSF_w_BaseBackpack
{
	scope = 0;	
};

class MSF_w_PMAGSupplyBackpack : MSF_w_BaseBackpack
{
	scope = 0;
};

class MSF_w_SniperBackpack : MSF_w_BaseBackpack
{
	displayName = "Sniper Kitbag (Alpine)";
	class TransportMagazines {
		#include "..\..\base\Base_BackPack_Grenades.hpp"
		class _xx_10rnd_50 { magazine = "ACE_10Rnd_338_300gr_HPBT_Mag"; count = 3; };
	};
};

class MSF_w_ATBackpack : MSF_w_BaseBackpack
{
	displayName = "Anti-Tank Kitbag (Alpine)";
	class TransportMagazines {
		#include "..\..\base\Base_BackPack_Grenades.hpp"
		class _xx_maaws_het { magazine = "MRAWS_HEAT_F"; count = 2; };
		class _xx_maaws_hedp { magazine = "MRAWS_HEAT55_F"; count = 1; };
	};
};

class MSF_w_AABackpack : MSF_w_BaseBackpack
{
	displayName = "Anti-Air Kitbag (Alpine)";
	class TransportMagazines {
		#include "..\..\base\Base_BackPack_Grenades.hpp"
		class _xx_titan_aa { magazine = "Titan_AA";	count = 2; };
	};
};

class MSF_w_SAWBackpack : MSF_w_BaseBackpack
{
	displayName = "Support Kitbag (Alpine)";
	class TransportMagazines {
		#include "..\..\base\Base_BackPack_Grenades.hpp"
		class _xx_130_338 {	magazine = "130Rnd_338_Mag"; count = 3;	};
	};
};

class MSF_w_MedicBackpack : MSF_w_BaseBackpack
{
	displayName = "Medic Kitbag (Alpine)";
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

class MSF_w_EngBackpack : MSF_w_BaseBackpack
{
	displayName = "Engineer Kitbag (Alpine)";
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

class MSF_w_MineBackpack : MSF_w_BaseBackpack
{
	displayName = "Mine Spec. Kitbag (Alpine)";
	class TransportMagazines {
		#include "..\..\base\Base_BackPack_Grenades.hpp"
		class _xx_persmine { magazine = "APERSMine_Range_Mag"; count = 5; };
		class _xx_atmine { magazine = "ATMine_Range_Mag"; count = 2; };
		class _xx_boundmine { magazine = "APERSBoundingMine_Range_Mag"; count = 1; };
	};
};
