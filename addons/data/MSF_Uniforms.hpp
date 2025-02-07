class UniformItem;    

class Uniform_Base : ItemCore
{
    class ItemInfo;
};

class MSF_O_ARC_Uniform : Uniform_Base
{
    author="Zeik_Tuvai";
    scope = 2;
    displayName = "Combat Fatigues (ARC)";
    picture = "\z\msf\addons\units\data\ui\icon_ARC_Uniform.paa";
    model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d"; 
    class ItemInfo : UniformItem { 
        uniformClass = "MSF_O_ARC_Rifleman"; 
        containerClass = "Supply50"; 
        mass = 50; 
    }; 
};

class MSF_O_ARC_Recon : Uniform_Base
{
    author="Zeik_Tuvai";
    scope = 2;
    displayName = "Recon Fatigues (ARC)";
    picture = "\z\msf\addons\units\data\ui\icon_ARC_Uniform.paa";
    model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d"; 
    class ItemInfo : UniformItem { 
        uniformClass = "MSF_O_ARC_Engineer"; 
        containerClass = "Supply50"; 
        mass = 50; 
    }; 
};

class MSF_O_ARC_Tank_Crew : Uniform_Base
{
    author="Zeik_Tuvai";
    scope = 2;
    displayName = "Tanker Coveralls [ARC]";
    picture = "\a3\Characters_F_Tank\Uniforms\Data\UI\icon_U_Tank_crew_CA.paa";
    model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
    class ItemInfo : UniformItem { 
        uniformClass = "MSF_O_ARC_Crewman"; 
        containerClass = "Supply50"; 
        mass = 50;
    }; 
};

class MSF_O_ARC_Coveralls : Uniform_Base
{
    author="Zeik_Tuvai";
    scope = 2;
    displayName = "Heli Pilot Coveralls [ARC]";
    picture = "\A3\characters_f\data\ui\icon_U_B_coveralls_ca.paa";
    model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
    class ItemInfo : UniformItem { 
        uniformClass = "MSF_O_ARC_Helicrew"; 
        containerClass = "Supply50"; 
        mass = 50;
    }; 
};

class MSF_NATO_Alpine_Base : Uniform_Base
{
    scope = 1;
    hiddenSelections[] = {"camo"};
    hiddenSelectionsTextures[] = {"z\msf\addons\units\data\nato_w\MSF_NATO_Uniform_Alpine.paa"};
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