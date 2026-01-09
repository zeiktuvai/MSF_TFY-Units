class MSF_MXGL_B : arifle_MX_GL_Black_F
{
	scope = 1;
	displayName = "MSF MX 3GL (Black)";
	hiddenSelections[] = {"camo1","camo2"};
    hiddenSelectionsTextures[] = {"\A3\Weapons_F_EPB\Rifles\MX_Black\Data\XMX_Base_Black_co.paa","\A3\Weapons_F_EPB\Rifles\MX_Black\Data\GLX_Black_CO.paa"};
	class LinkedItems {
		#include "..\base\MSF_MX_ItemsBase.hpp"
		class LinkedItemsMuzzle {
			slot = "MuzzleSlot";
			item = "muzzle_snds_H";
		};
	};
};
