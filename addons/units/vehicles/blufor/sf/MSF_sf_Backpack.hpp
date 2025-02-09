class B_FieldPack_blk;
class MSF_sf_BaseBackpack : B_FieldPack_blk
{
	displayName = "SF Assault Pack";
	scope = 2;
	class TransportItems {
		#include "..\..\base\Base_BackPack_Items.hpp"		
		class _add_saline500 { name = "ACE_salineIV_500"; count = 3; };
		class _add_bodybag { name = "ACE_bodyBag"; count = 1; };
		class _xx_mined { name = "MineDetector"; count = 1; };
	};
	class TransportMagazines {
		#include "..\..\base\Base_BackPack_Grenades.hpp"
		class _add_smokered { magazine = "SmokeShellRed"; count = 1; };
		class _add_smokegreen { magazine = "SmokeShellGreen"; count = 1; };
	};
};

class MSF_sf_ExpBackpack : MSF_sf_BaseBackpack
{
	displayName = "SF Exp Assault Pack";
	scope = 2;
	class TransportMagazines {
		#include "..\..\base\Base_BackPack_Grenades.hpp"
		class _xx_remchg { magazine = "DemoCharge_Remote_Mag"; count = 2; };
		class _xx_m112 { magazine = "DemoCharge_Remote_Mag"; count = 2; };		
	};
};



