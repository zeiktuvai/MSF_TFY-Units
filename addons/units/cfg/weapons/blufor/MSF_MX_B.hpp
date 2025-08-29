class MSF_MX_B : arifle_MX_Black_F
{
	scope = 1;
	displayName = "MSF MX (Black)";
    hiddenSelections[] = {"camo1","camo2"};
    hiddenSelectionsTextures[] = {"\A3\Weapons_F_EPB\Rifles\MX_Black\Data\XMX_Base_Black_co.paa","\A3\Weapons_F_EPB\Rifles\MX_Black\Data\XMX_short_Black_co.paa"};

	class LinkedItems {
		#include "..\base\MSF_MX_ItemsBase.hpp"
		class LinkedItemsMuzzle {
			slot = "MuzzleSlot";
			item = "muzzle_snds_H";
		};
	};
};
