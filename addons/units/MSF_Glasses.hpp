class CfgGlasses
{
	class G_Balaclava_blk;
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
};