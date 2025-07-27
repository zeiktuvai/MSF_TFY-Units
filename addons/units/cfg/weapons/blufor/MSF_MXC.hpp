class arifle_MXC_F;
class MSF_MXC : arifle_MXC_F
{
	scope = 1;
	displayName = "MSF MXC";
	class LinkedItems {
		#include "..\base\MSF_MX_ItemsBase.hpp"
		class LinkedItemsMuzzle {
			slot = "MuzzleSlot";
			item = "ACE_muzzle_mzls_H";
		};
	};
};
