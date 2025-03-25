class MSF_NATO_Alpine_Base : Uniform_Base
{
    scope = 1;
    hiddenSelections[] = {"camo"};
    hiddenSelectionsTextures[] = {"z\msf\addons\units\data\blufor\w\uniform\MSF_NATO_Uniform_Alpine.paa"};
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
class MSF_BLUFOR_Tanker_Alpine : Uniform_Base
{
    author="Zeik_Tuvai";
    scope = 2;
    displayName = "Tanker Coveralls (Alpine)";
    picture = "\A3\characters_f_exp\data\ui\icon_U_BT_Soldier_F_tna_ca.paa";
    model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d"; 
    class ItemInfo : UniformItem { 
        uniformClass = "MSF_Crewman_W"; 
        containerClass = "Supply50"; 
        mass = 50; 
    };
};
class MSF_BLUFOR_Coveralls_Alpine : Uniform_Base
{
    author="Zeik_Tuvai";
    scope = 2;
    displayName = "Heli Pilot Coveralls (Alpine)";
    picture = "\A3\characters_f\data\ui\icon_U_B_coveralls_ca.paa";
    model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
    class ItemInfo : UniformItem { 
        uniformClass = "MSF_Pilot_W"; 
        containerClass = "Supply50"; 
        mass = 50;
    }; 
};
