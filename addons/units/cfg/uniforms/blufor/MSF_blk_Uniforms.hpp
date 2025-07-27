class MSF_BLUFOR_Clothing_MCB : Uniform_Base
{
    author="Zeik_Tuvai";
    scope = 2;
    displayName = "Recon Fatigues (MCB)";
    picture = "\A3\characters_f_exp\data\ui\icon_U_BT_Soldier_F_tna_ca.paa";
    model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d"; 
    class ItemInfo : UniformItem { 
        uniformClass = "MSF_Rifleman_N"; 
        containerClass = "Supply50"; 
        mass = 50; 
    };
};

class MSF_BLUFOR_Tanker_MCB : Uniform_Base
{
    author="Zeik_Tuvai";
    scope = 2;
    displayName = "Tanker Coveralls (MCB)";
    picture = "\A3\characters_f_exp\data\ui\icon_U_BT_Soldier_F_tna_ca.paa";
    model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d"; 
    class ItemInfo : UniformItem { 
        uniformClass = "MSF_Crewman_N"; 
        containerClass = "Supply50"; 
        mass = 50; 
    };
};
