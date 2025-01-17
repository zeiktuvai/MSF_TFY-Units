class UniformItem;    

class Uniform_Base : ItemCore
{
    class ItemInfo;
};

class ARC_Uniform : Uniform_Base
{
    author="Zeik_Tuvai";
    scope = 2;
    displayName = "ARC Uniform";
    picture = "\z\msf\addons\units\data\ui\icon_ARC_Uniform.paa";
    model = "\A3\characters_f_beta\INDEP\ia_soldier_01.p3d"; 
    class ItemInfo : UniformItem { 
        uniformClass = "MSF_O_ARC_Rifleman"; 
        containerClass = "Supply50"; 
        mass = 50; 
    }; 
};

class MSF_NATO_Alpine_Base : Uniform_Base
{
    scope = 1;
    hiddenSelections[] =
    {
        "camo"
    };
    hiddenSelectionsTextures[] =
    {
        "z\msf\addons\units\data\nato_w\MSF_NATO_Uniform_Alpine.paa"
    };
    class ItemInfo : UniformItem { 
        uniformClass = "MSF_Rifleman_W"; 
        containerClass = "Supply50"; 
        mass = 50; 
    }; 
};

class MSF_NATO_Uniform_Alpine : MSF_NATO_Alpine_Base
{
    author="Zeik_Tuvai";
    scope = 2;
    displayName = "Combat Fatigues (Alpine)";
    picture = "\z\msf\addons\units\data\ui\icon\MSF_NATO_Alpine_Uniform.paa";
    model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d"; 
    class ItemInfo : UniformItem { 
        uniformClass = "MSF_Rifleman_W"; 
        containerClass = "Supply50"; 
        mass = 50; 
    }; 
};
class MSF_NATO_Uniform_Alpine_Recon : MSF_NATO_Alpine_Base
{
    author="Zeik_Tuvai";
    scope = 2;
    displayName = "Recon Fatigues (Alpine)";
    picture = "\z\msf\addons\units\data\ui\icon\MSF_NATO_Alpine_Uniform.paa";
    model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d"; 
    class ItemInfo : UniformItem { 
        uniformClass = "MSF_Engineer_W"; 
        containerClass = "Supply50"; 
        mass = 50; 
    }; 
};