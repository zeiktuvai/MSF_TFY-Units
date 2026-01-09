class MSF_Sniper_W : MSF_Sniper
{
	scope = 2;
	displayName = "Noreen ""Bad News"" ULR (White)";
	hiddenSelectionsTextures[] = {"\A3\Weapons_F_Mark\LongRangeRifles\DMR_02\Data\DMR_02_01_tan_CO.paa","\A3\Weapons_F_Mark\LongRangeRifles\DMR_02\Data\DMR_02_02_tan_CO.paa"};
	hiddenSelections[] = {"Camo1","Camo2"};
	class LinkedItems {
		class LinkedItemsOptic {
			slot = "CowsSlot";
			item = "optic_KHS_tan";
		};
		class LinkedItemsAcc {
			slot = "PointerSlot";
			item = "ACE_DBAL_A3_Green";
		};
		class LinkedItemsMuzzle {
			slot = "MuzzleSlot";
			item = "muzzle_snds_338_sand";
		};
	};
};
