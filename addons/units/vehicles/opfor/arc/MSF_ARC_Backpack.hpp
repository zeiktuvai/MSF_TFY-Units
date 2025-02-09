class MSF_O_ARC_Backpack : B_Kitbag_rgr
{
    scope = 2;
    displayName = "Kitbag (ARC)";
    picture = "\A3\Weapons_F\ammoboxes\bags\data\ui\icon_B_C_Kitbag_rgr.paa";
    hiddenSelectionsTextures[] = {"z\msf\addons\units\data\arc\MSF_O_ARC_Backpack.paa"};

    class TransportItems {
		#include "..\..\base\Base_BackPack_Items.hpp"
	};
	class TransportMagazines {
		#include "..\..\base\Base_BackPack_Grenades.hpp"
	};
};

class MSF_O_ARC_MedicBackpack : MSF_O_ARC_Backpack
{
	displayName = "Kitbag Medic (ARC)";
	scope = 2;
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
		class _add_plasma { name = "ACE_plasmaIV"; count = 2; };
		class _add_blood500 { name = "ACE_bloodIV_500"; count = 2; };
		class _add_plas500 { name = "ACE_plasmaIV_500"; count = 2; };
		class _add_bodybag { name = "ACE_bodyBag"; count = 1; };
		class _add_earplug { name = "ACE_EarPlugs"; count = 3; };
		class _add_cabletie{ name = "ACE_CableTie"; count = 1; };
		class _add_waterbot { name = "ACE_WaterBottle"; count = 1; };
		class _add_paid { name = "ACE_personalAidKit"; count = 1; };
	};
};

class MSF_O_ARC_ATBackpack : MSF_O_ARC_Backpack
{
	displayName = "Kitbag AT (ARC)";
	class TransportMagazines {
		#include "..\..\base\Base_BackPack_Grenades.hpp"
		class _xx_maaws_het { magazine = "MRAWS_HEAT_F"; count = 2; };
		class _xx_maaws_hedp { magazine = "MRAWS_HEAT55_F"; count = 1; };
	};
};

class MSF_O_ARC_AABackpack : MSF_O_ARC_Backpack
{
	displayName = "Kitbag AA (ARC)";
	class TransportMagazines {
		#include "..\..\base\Base_BackPack_Grenades.hpp"
		class _xx_titan_aa { magazine = "Titan_AA";	count = 2; };
	};
};

class MSF_O_ARC_EngBackpack : MSF_O_ARC_Backpack
{
	displayName = "Kitbag Engineer (ARC)";
	class TransportItems {
		#include "..\..\base\Base_BackPack_Items.hpp"		
		class _xx_wirecut {
			name = "ACE_wirecutter";
			count = 1;
		};
		class _xx_mined {
			name = "MineDetector";
			count = 1;
		};
		class _xx_flash {
			name = "ACE_Flashlight_XL50";
			count = 1;
		};
		class _add_m26 {
			name = "ACE_M26_Clacker";
			count = 1;
		};
		class _xx_fortify {
			name = "ACE_Fortify";
			count = 1;
		};
		class _xx_etool {
			name = "ACE_EntrenchingTool";
			count = 1;
		};
		class _xx_defus {
			name = "ACE_DefusalKit";
			count = 1;
		};
		class _xx_dmsw {
			name = "ACE_DeadManSwitch";
			count = 1;
		};
		class _xx_tool {
			name = "ToolKit";
			count = 1;
		};		
		class _add_earplug {
			name = "ACE_EarPlugs";
			count = 1;
		};
	};
};
