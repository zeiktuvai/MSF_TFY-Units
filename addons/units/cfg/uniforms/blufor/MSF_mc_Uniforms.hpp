class MSF_BLUFOR_Tanker_MC : Uniform_Base
{
    author="Zeik_Tuvai";
    scope = 2;
    displayName = "Tanker Coveralls (MC)";
    picture = "\A3\characters_f_exp\data\ui\icon_U_BT_Soldier_F_tna_ca.paa";
    model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d"; 
    class ItemInfo : UniformItem { 
        uniformClass = "MSF_Crewman"; 
        containerClass = "Supply50"; 
        mass = 50; 
    };
};