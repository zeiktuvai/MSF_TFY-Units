class MSF_MXGL_White : arifle_MX_GL_Black_F
{
	scope = 2;
    author = "Zeik Tuvai";
	displayName = "MX 3GL (White)";
	hiddenSelections[] = {"camo1","camo2"};
	hiddenSelectionsTextures[] = {"z\msf\addons\units\data\blufor\w\weapons\XMX_base_w.paa","z\msf\addons\units\data\blufor\w\weapons\GLX.paa"};
	picture = "z\msf\addons\units\ui\icon\blufor\w\weapons\gear_mx_rifle_w.paa";
	class LinkedItems {
		#include "..\base\MSF_MX_ItemsBase.hpp"		
		class LinkedItemsMuzzle {
			slot = "MuzzleSlot";
			item = "muzzle_snds_65_TI_blk_F";
		};
		class LinkedItemsUnder {
			slot = "UnderBarrelSlot";
			item = "bipod_01_F_blk";
		};
	};
};
