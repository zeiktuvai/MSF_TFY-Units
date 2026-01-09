class MSF_MXGL_T : arifle_MX_GL_Black_F
{
	scope = 1;
	displayName = "MSF MX 3GL (Tropic)";
	hiddenSelections[] = {"camo1","camo2"};
    hiddenSelectionsTextures[] = {"\A3\Weapons_F_Exp\Rifles\MX\Data\XMX_Base_khk_co.paa","\A3\Weapons_F_Exp\Rifles\MX\Data\glx_khk_co.paa"};
	class LinkedItems {
		#include "..\base\MSF_MX_ItemsBase.hpp"
		class LinkedItemsMuzzle {
			slot = "MuzzleSlot";
			item = "muzzle_snds_H";
		};
	};
};
