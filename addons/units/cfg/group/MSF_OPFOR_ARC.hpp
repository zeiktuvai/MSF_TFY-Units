class MSF_Infantry_ARC
{
    name = "Infantry";
    class MSF_InfSquad_ARC
    {
        name="$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSquad0";
        side=0;
        scope=2;
        scopeCurator=2;
        faction="OPF_ARC_MSF";
        icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
        class Unit0
        {
            side=0;
            vehicle="MSF_O_ARC_Leader";
            rank="SERGEANT";
            position[]={0,0,0};
        };
        class Unit1
        {
            side=0;
            vehicle="MSF_O_ARC_Rifleman";
            rank="PRIVATE";
            position[]={5,-5,0};
        };
        class Unit2
        {
            side=0;
            vehicle="MSF_O_ARC_ATRifleman";
            rank="CORPORAL";
            position[]={-5,-5,0};
        };
        class Unit3
        {
            side=0;
            vehicle="MSF_O_ARC_Marksman";
            rank="PRIVATE";
            position[]={10,-10,0};
        };
        class Unit4
        {
            side=0;
            vehicle="MSF_O_ARC_Leader";
            rank="SERGEANT";
            position[]={-10,-10,0};
        };
        class Unit5
        {
            side=0;
            vehicle="MSF_O_ARC_Autorifleman";
            rank="CORPORAL";
            position[]={15,-15,0};
        };
        class Unit6
        {
            side=0;
            vehicle="MSF_O_ARC_Rifleman";
            rank="PRIVATE";
            position[]={-15,-15,0};
        };
        class Unit7
        {
            side=0;
            vehicle="MSF_O_ARC_Medic";
            rank="PRIVATE";
            position[]={20,-20,0};
        };
    };
    class MSF_InfSquad_Weapons_W
    {
        name="$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSquad_Weapons0";
        side=0;
        faction="OPF_ARC_MSF";
        icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
        class Unit0
        {
            side=0;
            vehicle="MSF_O_ARC_Leader";
            rank="SERGEANT";
            position[]={0,0,0};
        };
        class Unit1
        {
            side=0;
            vehicle="MSF_O_ARC_Autorifleman";
            rank="PRIVATE";
            position[]={5,-5,0};
        };
        class Unit2
        {
            side=0;
            vehicle="MSF_O_ARC_Grenadier";
            rank="CORPORAL";
            position[]={-5,-5,0};
        };
        class Unit3
        {
            side=0;
            vehicle="MSF_O_ARC_Marksman";
            rank="SERGEANT";
            position[]={10,-10,0};
        };
        class Unit4
        {
            side=0;
            vehicle="MSF_O_ARC_ATRifleman";
            rank="CORPORAL";
            position[]={-10,-10,0};
        };
        class Unit6
        {
            side=0;
            vehicle="MSF_O_ARC_ATRifleman";
            rank="PRIVATE";
            position[]={15,-15,0};
        };
        class Unit5
        {
            side=0;
            vehicle="MSF_O_ARC_Rifleman";
            rank="PRIVATE";
            position[]={-15,-15,0};
        };
        class Unit7
        {
            side=0;
            vehicle="MSF_O_ARC_Medic";
            rank="PRIVATE";
            position[]={20,-20,0};
        };
    };
    class MSF_InfTeam_ARC
    {
        name="$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam0";
        side=0;
        scope=2;
        scopeCurator=2;
        faction="OPF_ARC_MSF";
        icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
        class Unit0
        {
            side=0;
            vehicle="MSF_O_ARC_Leader";
            rank="SERGEANT";
            position[]={0,0,0};
        };
        class Unit1
        {
            side=0;
            vehicle="MSF_O_ARC_Autorifleman";
            rank="CORPORAL";
            position[]={5,-5,0};
        };
        class Unit2
        {
            side=0;
            vehicle="MSF_O_ARC_Grenadier";
            rank="PRIVATE";
            position[]={-5,-5,0};
        };
        class Unit3
        {
            side=0;
            vehicle="MSF_O_ARC_ATRifleman";
            rank="PRIVATE";
            position[]={10,-10,0};
        };
    };
    class MSF_InfTeam_AT_ARC
    {
        name="$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam_AT0";
        side=0;
        faction="OPF_ARC_MSF";
        icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
        class Unit0
        {
            side=0;
            vehicle="MSF_O_ARC_Leader";
            rank="SERGEANT";
            position[]={0,0,0};
        };
        class Unit1
        {
            side=0;
            vehicle="MSF_O_ARC_ATRifleman";
            rank="CORPORAL";
            position[]={5,-5,0};
        };
        class Unit2
        {
            side=0;
            vehicle="MSF_O_ARC_ATRifleman";
            rank="PRIVATE";
            position[]={-5,-5,0};
        };
        class Unit3
        {
            side=0;
            vehicle="MSF_O_ARC_ATRifleman";
            rank="PRIVATE";
            position[]={10,-10,0};
        };
    };
    class MSF_InfTeam_AA_ARC
    {
        name="$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam_AA0";
        side=0;
        faction="OPF_ARC_MSF";
        icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
        class Unit0
        {
            side=0;
            vehicle="MSF_O_ARC_Leader";
            rank="SERGEANT";
            position[]={0,0,0};
        };
        class Unit1
        {
            side=0;
            vehicle="MSF_O_ARC_AARifleman";
            rank="CORPORAL";
            position[]={5,-5,0};
        };
        class Unit2
        {
            side=0;
            vehicle="MSF_O_ARC_AARifleman";
            rank="PRIVATE";
            position[]={-5,-5,0};
        };
        class Unit3
        {
            side=0;
            vehicle="MSF_O_ARC_AARifleman";
            rank="PRIVATE";
            position[]={10,-10,0};
        };
    };
    class MSF_InfSentry_ARC
    {
        name="$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSentry0";
        side=0;
        faction="OPF_ARC_MSF";
        icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
        class Unit0
        {
            side=0;
            vehicle="MSF_O_ARC_Grenadier";
            rank="CORPORAL";
            position[]={0,0,0};
        };
        class Unit1
        {
            side=0;
            vehicle="MSF_O_ARC_Rifleman";
            rank="PRIVATE";
            position[]={5,-2,0};
        };
    };
    class MSF_ReconTeam_ARC
    {
        name="$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_reconTeam0";
        side=0;
        faction="OPF_ARC_MSF";
        icon="\A3\ui_f\data\map\markers\nato\o_recon.paa";
        class Unit0
        {
            side=0;
            vehicle="MSF_O_ARC_Leader";
            rank="SERGEANT";
            position[]={0,0,0};
        };
        class Unit1
        {
            side=0;
            vehicle="MSF_O_ARC_Marksman";
            rank="CORPORAL";
            position[]={5,-5,0};
        };
        class Unit2
        {
            side=0;
            vehicle="MSF_O_ARC_Medic";
            rank="PRIVATE";
            position[]={-5,-5,0};
        };
        class Unit3
        {
            side=0;
            vehicle="MSF_O_ARC_ATRifleman";
            rank="CORPORAL";
            position[]={10,-10,0};
        };
        class Unit4
        {
            side=0;
            vehicle="MSF_O_ARC_Rifleman";
            rank="PRIVATE";
            position[]={-10,-10,0};
        };
        class Unit5
        {
            side=0;
            vehicle="MSF_O_ARC_Engineer";
            rank="PRIVATE";
            position[]={15,-15,0};
        };
    };
    class MSF_ReconPatrol_ARC
    {
        name="$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_reconPatrol0";
        side=0;
        faction="OPF_ARC_MSF";
        icon="\A3\ui_f\data\map\markers\nato\o_recon.paa";
        class Unit0
        {
            side=0;
            vehicle="MSF_O_ARC_Leader";
            rank="SERGEANT";
            position[]={0,0,0};
        };
        class Unit1
        {
            side=0;
            vehicle="MSF_O_ARC_Marksman";
            rank="CORPORAL";
            position[]={5,-5,0};
        };
        class Unit2
        {
            side=0;
            vehicle="MSF_O_ARC_Medic";
            rank="PRIVATE";
            position[]={-5,-5,0};
        };
        class Unit3
        {
            side=0;
            vehicle="MSF_O_ARC_Rifleman";
            rank="PRIVATE";
            position[]={10,-10,0};
        };
    };
    class MSF_ReconSentry_ARC
    {
        name="$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_reconSentry0";
        side=0;
        faction="OPF_ARC_MSF";
        icon="\A3\ui_f\data\map\markers\nato\o_recon.paa";
        class Unit0
        {
            side=0;
            vehicle="MSF_O_ARC_Marksman";
            rank="CORPORAL";
            position[]={0,0,0};
        };
        class Unit1
        {
            side=0;
            vehicle="MSF_O_ARC_Rifleman";
            rank="PRIVATE";
            position[]={5,-5,0};
        };
    };
    class MSF_InfAssault_ARC
    {
        name="$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfAssault0";
        side=0;
        faction="OPF_ARC_MSF";
        icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
        class Unit0
        {
            side=0;
            vehicle="MSF_O_ARC_Leader";
            rank="SERGEANT";
            position[]={0,0,0};
        };
        class Unit1
        {
            side=0;
            vehicle="MSF_O_ARC_Autorifleman";
            rank="PRIVATE";
            position[]={5,-5,0};
        };
        class Unit2
        {
            side=0;
            vehicle="MSF_O_ARC_Autorifleman";
            rank="CORPORAL";
            position[]={-5,-5,0};
        };
        class Unit3
        {
            side=0;
            vehicle="MSF_O_ARC_AARifleman";
            rank="PRIVATE";
            position[]={10,-10,0};
        };
        class Unit4
        {
            side=0;
            vehicle="MSF_O_ARC_Marksman";
            rank="PRIVATE";
            position[]={-10,-10,0};
        };
        class Unit5
        {
            side=0;
            vehicle="MSF_O_ARC_Marksman";
            rank="CORPORAL";
            position[]={15,-15,0};
        };
        class Unit6
        {
            side=0;
            vehicle="MSF_O_ARC_ATRifleman";
            rank="PRIVATE";
            position[]={-15,-15,0};
        };
        class Unit7
        {
            side=0;
            vehicle="MSF_O_ARC_Medic";
            rank="PRIVATE";
            position[]={20,-20,0};
        };
    };
    class MSF_ReconSquad_ARC
    {
        name="$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_reconSquad0";
        side=0;
        faction="OPF_ARC_MSF";
        icon="\A3\ui_f\data\map\markers\nato\o_recon.paa";
        class Unit0
        {
            side=0;
            vehicle="MSF_O_ARC_Leader";
            rank="SERGEANT";
            position[]={0,0,0};
        };
        class Unit1
        {
            side=0;
            vehicle="MSF_O_ARC_Marksman";
            rank="CORPORAL";
            position[]={5,-5,0};
        };
        class Unit2
        {
            side=0;
            vehicle="MSF_O_ARC_Medic";
            rank="PRIVATE";
            position[]={-5,-5,0};
        };
        class Unit3
        {
            side=0;
            vehicle="MSF_O_ARC_Rifleman";
            rank="PRIVATE";
            position[]={10,-10,0};
        };
        class Unit4
        {
            side=0;
            vehicle="MSF_O_ARC_ATRifleman";
            rank="PRIVATE";
            position[]={-10,-10,0};
        };
        class Unit5
        {
            side=0;
            vehicle="MSF_O_ARC_Rifleman";
            rank="PRIVATE";
            position[]={15,-15,0};
        };
        class Unit6
        {
            side=0;
            vehicle="MSF_O_ARC_Engineer";
            rank="PRIVATE";
            position[]={-15,-15,0};
        };
        class Unit7
        {
            side=0;
            vehicle="MSF_O_ARC_Marksman";
            rank="CORPORAL";
            position[]={20,-20,0};
        };
    };
};