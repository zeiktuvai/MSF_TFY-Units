class MSF_MXC_T : arifle_MXC_Black_F
{
	scope = 1;
	displayName = "MSF MXC (Green)";
    hiddenSelections[] = {"camo1"};
    hiddenSelectionsTextures[] = {"\A3\Weapons_F_Exp\Rifles\MX\Data\XMX_Short_khk_co.paa"};

	class LinkedItems {
		#include "..\base\MSF_MX_ItemsBase.hpp"
		class LinkedItemsMuzzle {
			slot = "MuzzleSlot";
			item = "muzzle_snds_H";
		};
	};
};
