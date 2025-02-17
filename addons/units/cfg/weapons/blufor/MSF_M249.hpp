class LMG_03_F;
class MSF_M249 : LMG_03_F
{
	scope = 1;
	displayName = "MSF M249";
	class LinkedItems {
		#include "..\base\MSF_MX_ItemsBase.hpp"
		class LinkedItemsMuzzle {
			slot = "MuzzleSlot";
			item = "ACE_muzzle_mzls_B";
		};
	};
};