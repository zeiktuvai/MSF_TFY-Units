class B_T_MBT_01_TUSK_F;
class B_T_MBT_01_cannon_F;
class O_T_MBT_04_cannon_F;
class O_T_MBT_04_command_F;

class MSF_O_ARC_MBT_01 : B_T_MBT_01_cannon_F
{
    crew = "MSF_O_ARC_Crewman";
    side = 0;
    scope = 2;
    faction = "OPF_ARC_MSF";
    displayName = "Merkava Mk IV";
};

class MSF_O_ARC_MBT_02 : B_T_MBT_01_TUSK_F
{
    crew = "MSF_O_ARC_Crewman";
    side = 0;
    scope = 2;
    faction = "OPF_ARC_MSF";
    displayName = "Merkava Mk IV LIC";
};

class MSF_O_ARC_MBT_03 : O_T_MBT_04_cannon_F
{
    crew = "MSF_O_ARC_Crewman";
    side = 0;
    scope = 2;
    faction = "OPF_ARC_MSF";
    displayName = "T-14 Armata";
    hiddenSelectionsTextures[] = {"a3\Armor_F_Tank\MBT_04\Data\MBT_04_exterior_jungle_1_CO.paa","a3\Armor_F_Tank\MBT_04\Data\MBT_04_exterior_jungle_2_CO.paa","A3\Armor_F\Data\camonet_CSAT_Stripe_Green_CO.paa"};
};

class MSF_O_ARC_MBT_04 : O_T_MBT_04_command_F
{
    crew = "MSF_O_ARC_Crewman";
    side = 0;
    scope = 2;
    faction = "OPF_ARC_MSF";
    displayName = "T-14K Armata";
    hiddenSelectionsTextures[] = {"a3\Armor_F_Tank\MBT_04\Data\MBT_04_exterior_jungle_1_CO.paa","a3\Armor_F_Tank\MBT_04\Data\MBT_04_exterior_jungle_2_CO.paa","A3\Armor_F\Data\camonet_CSAT_Stripe_Green_CO.paa"};
};
