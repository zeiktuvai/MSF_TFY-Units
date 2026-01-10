class MSF_Sniper_W : MSF_Sniper
{
	scope = 2;
	displayName = "Noreen ""Bad News"" ULR (White)";
	hiddenSelectionsTextures[] = {"z\msf\addons\units\data\blufor\w\weapons\Sniper_02.paa","z\msf\addons\units\data\blufor\w\weapons\Sniper_02_2.paa"};
	hiddenSelections[] = {"Camo1","Camo2"};
	class LinkedItems {
		class LinkedItemsOptic {
			slot = "CowsSlot";
			item = "optic_KHS_blk";
		};
		class LinkedItemsAcc {
			slot = "PointerSlot";
			item = "ACE_DBAL_A3_Green";
		};
		class LinkedItemsMuzzle {
			slot = "MuzzleSlot";
			item = "muzzle_snds_338_black";
		};
	};
};
