class arifle_MXM_Black_F;
class MSF_MXM_B : arifle_MXM_Black_F
{
	scope = 1;
	displayName = "MSF MXM (Black)";
    hiddenSelections[] = {"camo1"};
    hiddenSelectionsTextures[] = {"\A3\Weapons_F_EPB\Rifles\MX_Black\Data\XMX_long_Black_co.paa"};
	class LinkedItems {
		class LinkedItemsOptic {
			slot = "CowsSlot";
			item = "optic_DMS";
		};
		class LinkedItemsAcc {
			slot = "PointerSlot";
			item = "ACE_DBAL_A3_Green";
		};
		class LinkedItemsMuzzle {
			slot = "MuzzleSlot";
			item = "muzzle_snds_H";
		};
	};
};
