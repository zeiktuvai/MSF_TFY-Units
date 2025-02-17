class arifle_MXC_Black_F;
class MSF_MXC_B : arifle_MXC_Black_F
{
	scope = 1;
	displayName = "MSF MXC (Black)";
    hiddenSelections[] = {"camo1"};
    hiddenSelectionsTextures[] = {"\A3\Weapons_F_EPB\Rifles\MX_Black\Data\XMX_short_Black_co.paa"};

	class LinkedItems {
		#include "..\base\MSF_MX_ItemsBase.hpp"
		class LinkedItemsMuzzle {
			slot = "MuzzleSlot";
			item = "muzzle_snds_H";
		};
	};
};