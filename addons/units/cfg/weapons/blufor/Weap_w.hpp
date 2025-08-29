class MSF_MX_W : arifle_MX_Black_F
{
	scope = 2;
    author = "Zeik Tuvai";
	displayName = "MX (Winter)";
    baseWeapon = "MSF_MX_W";
    hiddenSelections[] = {"Camo1","Camo2"};
    hiddenSelectionsTextures[] = {"z\msf\addons\units\data\blufor\w\weapons\XMX_base_w.paa","z\msf\addons\units\data\blufor\w\weapons\XMX_short_w.paa"};
	picture = "z\msf\addons\units\ui\icon\blufor\w\weapons\gear_mx_rifle_w.paa";
};

class MSF_MX_W_u : MSF_MX_W
{
	scope = 1;
    author = "Zeik Tuvai";
	displayName = "MX (Winter)";
	class LinkedItems {
		class LinkedItemsOptic {
			slot = "CowsSlot";
			item = "ACE_optic_Hamr_2D";
		};
		class LinkedItemsAcc {
			slot = "PointerSlot";
			item = "ACE_DBAL_A3_Green";
		};
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
