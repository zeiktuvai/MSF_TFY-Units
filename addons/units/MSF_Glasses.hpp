class CfgGlasses
{
	class G_Balaclava_blk;
	class G_Balaclava_TI_blk_F;
	class G_Balaclava_TI_G_blk_F;
	class G_Combat;
	class MSF_Balaclava_White : G_Balaclava_blk
	{
		author = "Zeik_Tuvai";
		displayname = "Balaclava (White)";
		model = "\A3\Characters_F_Bootcamp\Guerrilla\g_balaclava_clean.p3d";
		picture = "\A3\Characters_F_Bootcamp\Data\UI\icon_G_Balaclava_clean_ca.paa";
        hiddenSelectionsTextures[] = {"\z\msf\addons\units\data\nato_w\MSF_balaclava_white.paa"};
        identityTypes[] = {
            "NoGlasses", 0, "G_RUS_SF", 25
        };
		mass = 4;
	};
    class MSF_Balaclava_Alpine : G_Balaclava_blk
	{
		author = "Zeik_Tuvai";
		displayname = "Balaclava (Alpine)";
		model = "\A3\Characters_F_Bootcamp\Guerrilla\g_balaclava_clean.p3d";
		picture = "\A3\Characters_F_Bootcamp\Data\UI\icon_G_Balaclava_clean_ca.paa";
        hiddenSelectionsTextures[] = {"\z\msf\addons\units\data\nato_w\MSF_balaclava_alpine.paa"};
        identityTypes[] = {
            "NoGlasses", 0, "G_RUS_SF", 25
        };
		mass = 4;
	};
	class MSF_Balaclava_TI_Alpine : G_Balaclava_TI_blk_F
	{
		author = "Zeik_Tuvai";
		displayname = "Stealth Balaclava (Alpine)";
		model = "\A3\Characters_F_Exp\BLUFOR\G_Balaclava_TI_F.p3d";
		picture = "\A3\Characters_F_Exp\BLUFOR\Data\UI\icon_G_Balaclava_TI_blk_F_ca.paa";
        hiddenSelectionsTextures[] = {"\z\msf\addons\units\data\nato_w\MSF_Balaclava_TI_Alpine.paa"};
        identityTypes[] = {};
		mass = 4;
	};
	class MSF_Balaclava_TI_G_Alpine : G_Balaclava_TI_G_blk_F
	{
		author = "Zeik_Tuvai";
		displayname = "Stealth Balaclava (Alpine, Goggles)";
		model = "\A3\Characters_F_Exp\BLUFOR\G_Balaclava_TI_G_F.p3d";
		picture = "\A3\Characters_F_Exp\BLUFOR\Data\UI\icon_G_Balaclava_TI_G_blk_F_ca.paa";
		hiddenSelections[] = {"camo1","camo2"};
        hiddenSelectionsTextures[] = {"\z\msf\addons\units\data\nato_w\MSF_Balaclava_TI_Alpine.paa","\z\msf\addons\units\data\nato_w\MSF_g_combat_alpine.paa"};
        identityTypes[] = {};
		mass = 4;
	};
	class MSF_G_Combat_White : G_Combat
	{
		author = "Zeik_Tuvai";
		displayname = "Combat Goggles (White)";
		model = "\A3\characters_f_beta\heads\glasses\g_combat";
		picture = "\A3\Characters_F\data\ui\icon_g_combat_CA.paa";
        hiddenSelectionsTextures[] = {"\z\msf\addons\units\data\nato_w\MSF_g_combat_alpine.paa"};
	};
};