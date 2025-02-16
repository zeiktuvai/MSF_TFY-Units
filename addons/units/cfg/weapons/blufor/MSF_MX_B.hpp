class MSF_MX_B : MSF_MX
{
	scope = 1;
	displayName = "MSF MX (Black)";
    hiddenSelections[] = {"camo1","camo2"};
    hiddenSelectionsTextures[] = {"\A3\Weapons_F_EPB\Rifles\MX_Black\Data\XMX_Base_Black_co.paa","\A3\Weapons_F_EPB\Rifles\MX_Black\Data\XMX_short_Black_co.paa"};

	class LinkedItems {
		class LinkedItemsMuzzle {
			slot = "MuzzleSlot";
			item = "muzzle_snds_H";
		};
	};
};