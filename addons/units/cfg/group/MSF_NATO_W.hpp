class MSF_Infantry_W
{
    name = "Infantry (Winter)";
    class MSF_InfSquad_W
    {
        name="$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSquad0";
        side=1;
        scope=2;
        scopeCurator=2;
        faction="BLU_F_MSF";
        icon="\A3\ui_f\data\map\markers\nato\b_inf.paa";
        class Unit0
        {
            side=1;
            vehicle="MSF_Leader_W";
            rank="SERGEANT";
            position[]={0,0,0};
        };
        class Unit1
        {
            side=1;
            vehicle="MSF_Rifleman_W";
            rank="PRIVATE";
            position[]={5,-5,0};
        };
        class Unit2
        {
            side=1;
            vehicle="MSF_ATRifleman_W";
            rank="CORPORAL";
            position[]={-5,-5,0};
        };
        class Unit3
        {
            side=1;
            vehicle="MSF_Marksman_W";
            rank="PRIVATE";
            position[]={10,-10,0};
        };
        class Unit4
        {
            side=1;
            vehicle="MSF_Leader_W";
            rank="SERGEANT";
            position[]={-10,-10,0};
        };
        class Unit5
        {
            side=1;
            vehicle="MSF_Gunner_W";
            rank="CORPORAL";
            position[]={15,-15,0};
        };
        class Unit6
        {
            side=1;
            vehicle="MSF_Rifleman_W";
            rank="PRIVATE";
            position[]={-15,-15,0};
        };
        class Unit7
        {
            side=1;
            vehicle="MSF_Medic_W";
            rank="PRIVATE";
            position[]={20,-20,0};
        };
    };
    class MSF_InfSquad_Weapons_W
    {
        name="$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSquad_Weapons0";
        side=1;
        faction="BLU_F_MSF";
        icon="\A3\ui_f\data\map\markers\nato\b_inf.paa";
        class Unit0
        {
            side=1;
            vehicle="MSF_Leader_W";
            rank="SERGEANT";
            position[]={0,0,0};
        };
        class Unit1
        {
            side=1;
            vehicle="MSF_Gunner_W";
            rank="PRIVATE";
            position[]={5,-5,0};
        };
        class Unit2
        {
            side=1;
            vehicle="MSF_Grenadier_W";
            rank="CORPORAL";
            position[]={-5,-5,0};
        };
        class Unit3
        {
            side=1;
            vehicle="MSF_Marksman_W";
            rank="SERGEANT";
            position[]={10,-10,0};
        };
        class Unit4
        {
            side=1;
            vehicle="MSF_ATRifleman_W";
            rank="CORPORAL";
            position[]={-10,-10,0};
        };
        class Unit6
        {
            side=1;
            vehicle="MSF_ATRifleman_W";
            rank="PRIVATE";
            position[]={15,-15,0};
        };
        class Unit5
        {
            side=1;
            vehicle="MSF_Rifleman_W";
            rank="PRIVATE";
            position[]={-15,-15,0};
        };
        class Unit7
        {
            side=1;
            vehicle="MSF_Medic_W";
            rank="PRIVATE";
            position[]={20,-20,0};
        };
    };
    class MSF_InfTeam_W
    {
        name="$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam0";
        side=1;
        scope=2;
        scopeCurator=2;
        faction="BLU_F_MSF";
        icon="\A3\ui_f\data\map\markers\nato\b_inf.paa";
        class Unit0
        {
            side=1;
            vehicle="MSF_Leader_W";
            rank="SERGEANT";
            position[]={0,0,0};
        };
        class Unit1
        {
            side=1;
            vehicle="MSF_Gunner_W";
            rank="CORPORAL";
            position[]={5,-5,0};
        };
        class Unit2
        {
            side=1;
            vehicle="MSF_Grenadier_W";
            rank="PRIVATE";
            position[]={-5,-5,0};
        };
        class Unit3
        {
            side=1;
            vehicle="MSF_ATRifleman_W";
            rank="PRIVATE";
            position[]={10,-10,0};
        };
    };
    class MSF_InfTeam_AT_W
    {
        name="$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam_AT0";
        side=1;
        faction="BLU_F_MSF";
        icon="\A3\ui_f\data\map\markers\nato\b_inf.paa";
        class Unit0
        {
            side=1;
            vehicle="MSF_Leader_W";
            rank="SERGEANT";
            position[]={0,0,0};
        };
        class Unit1
        {
            side=1;
            vehicle="MSF_ATRifleman_W";
            rank="CORPORAL";
            position[]={5,-5,0};
        };
        class Unit2
        {
            side=1;
            vehicle="MSF_ATRifleman_W";
            rank="PRIVATE";
            position[]={-5,-5,0};
        };
        class Unit3
        {
            side=1;
            vehicle="MSF_ATRifleman_W";
            rank="PRIVATE";
            position[]={10,-10,0};
        };
    };
    class MSF_InfTeam_AA_W
    {
        name="$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam_AA0";
        side=1;
        faction="BLU_F_MSF";
        icon="\A3\ui_f\data\map\markers\nato\b_inf.paa";
        class Unit0
        {
            side=1;
            vehicle="MSF_Leader_W";
            rank="SERGEANT";
            position[]={0,0,0};
        };
        class Unit1
        {
            side=1;
            vehicle="MSF_AARifleman_W";
            rank="CORPORAL";
            position[]={5,-5,0};
        };
        class Unit2
        {
            side=1;
            vehicle="MSF_AARifleman_W";
            rank="PRIVATE";
            position[]={-5,-5,0};
        };
        class Unit3
        {
            side=1;
            vehicle="MSF_AARifleman_W";
            rank="PRIVATE";
            position[]={10,-10,0};
        };
    };
    class MSF_InfSentry_W
    {
        name="$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSentry0";
        side=1;
        faction="BLU_F_W";
        icon="\A3\ui_f\data\map\markers\nato\b_inf.paa";
        class Unit0
        {
            side=1;
            vehicle="MSF_Grenadier_W";
            rank="CORPORAL";
            position[]={0,0,0};
        };
        class Unit1
        {
            side=1;
            vehicle="MSF_Rifleman_W";
            rank="PRIVATE";
            position[]={5,-2,0};
        };
    };
    class MSF_ReconTeam_W
    {
        name="$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_reconTeam0";
        side=1;
        faction="BLU_F_WINTER";
        icon="\A3\ui_f\data\map\markers\nato\b_recon.paa";
        class Unit0
        {
            side=1;
            vehicle="MSF_Leader_W";
            rank="SERGEANT";
            position[]={0,0,0};
        };
        class Unit1
        {
            side=1;
            vehicle="MSF_Marksman_W";
            rank="CORPORAL";
            position[]={5,-5,0};
        };
        class Unit2
        {
            side=1;
            vehicle="MSF_Medic_W";
            rank="PRIVATE";
            position[]={-5,-5,0};
        };
        class Unit3
        {
            side=1;
            vehicle="MSF_ATRifleman_W";
            rank="CORPORAL";
            position[]={10,-10,0};
        };
        class Unit4
        {
            side=1;
            vehicle="MSF_Rifleman_W";
            rank="PRIVATE";
            position[]={-10,-10,0};
        };
        class Unit5
        {
            side=1;
            vehicle="MSF_Engineer_W";
            rank="PRIVATE";
            position[]={15,-15,0};
        };
    };
    class MSF_ReconPatrol_W
    {
        name="$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_reconPatrol0";
        side=1;
        faction="BLU_F_MSF";
        icon="\A3\ui_f\data\map\markers\nato\b_recon.paa";
        class Unit0
        {
            side=1;
            vehicle="MSF_Leader_W";
            rank="SERGEANT";
            position[]={0,0,0};
        };
        class Unit1
        {
            side=1;
            vehicle="MSF_Marksman_W";
            rank="CORPORAL";
            position[]={5,-5,0};
        };
        class Unit2
        {
            side=1;
            vehicle="MSF_Medic_W";
            rank="PRIVATE";
            position[]={-5,-5,0};
        };
        class Unit3
        {
            side=1;
            vehicle="MSF_Rifleman_W";
            rank="PRIVATE";
            position[]={10,-10,0};
        };
    };
    class MSF_ReconSentry_W
    {
        name="$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_reconSentry0";
        side=1;
        faction="BLU_F_MSF";
        icon="\A3\ui_f\data\map\markers\nato\b_recon.paa";
        class Unit0
        {
            side=1;
            vehicle="MSF_Marksman_W";
            rank="CORPORAL";
            position[]={0,0,0};
        };
        class Unit1
        {
            side=1;
            vehicle="MSF_Rifleman_W";
            rank="PRIVATE";
            position[]={5,-5,0};
        };
    };
    class MSF_InfAssault_W
    {
        name="$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfAssault0";
        side=1;
        faction="BLU_F_MSF";
        icon="\A3\ui_f\data\map\markers\nato\b_inf.paa";
        class Unit0
        {
            side=1;
            vehicle="MSF_Leader_W";
            rank="SERGEANT";
            position[]={0,0,0};
        };
        class Unit1
        {
            side=1;
            vehicle="MSF_Gunner_W";
            rank="PRIVATE";
            position[]={5,-5,0};
        };
        class Unit2
        {
            side=1;
            vehicle="MSF_Gunner_W";
            rank="CORPORAL";
            position[]={-5,-5,0};
        };
        class Unit3
        {
            side=1;
            vehicle="MSF_AARifleman_W";
            rank="PRIVATE";
            position[]={10,-10,0};
        };
        class Unit4
        {
            side=1;
            vehicle="MSF_Marksman_W";
            rank="PRIVATE";
            position[]={-10,-10,0};
        };
        class Unit5
        {
            side=1;
            vehicle="MSF_Sniper_W";
            rank="CORPORAL";
            position[]={15,-15,0};
        };
        class Unit6
        {
            side=1;
            vehicle="MSF_ATRifleman_W";
            rank="PRIVATE";
            position[]={-15,-15,0};
        };
        class Unit7
        {
            side=1;
            vehicle="MSF_Medic_W";
            rank="PRIVATE";
            position[]={20,-20,0};
        };
    };
    class MSF_ReconSquad_W
    {
        name="$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_reconSquad0";
        side=1;
        faction="BLU_F_MSF";
        icon="\A3\ui_f\data\map\markers\nato\b_recon.paa";
        class Unit0
        {
            side=1;
            vehicle="MSF_Leader_W";
            rank="SERGEANT";
            position[]={0,0,0};
        };
        class Unit1
        {
            side=1;
            vehicle="MSF_Marksman_W";
            rank="CORPORAL";
            position[]={5,-5,0};
        };
        class Unit2
        {
            side=1;
            vehicle="MSF_Medic_W";
            rank="PRIVATE";
            position[]={-5,-5,0};
        };
        class Unit3
        {
            side=1;
            vehicle="MSF_Rifleman_W";
            rank="PRIVATE";
            position[]={10,-10,0};
        };
        class Unit4
        {
            side=1;
            vehicle="MSF_ATRifleman_W";
            rank="PRIVATE";
            position[]={-10,-10,0};
        };
        class Unit5
        {
            side=1;
            vehicle="MSF_Rifleman_W";
            rank="PRIVATE";
            position[]={15,-15,0};
        };
        class Unit6
        {
            side=1;
            vehicle="MSF_Engineer_W";
            rank="PRIVATE";
            position[]={-15,-15,0};
        };
        class Unit7
        {
            side=1;
            vehicle="MSF_Marksman_W";
            rank="CORPORAL";
            position[]={20,-20,0};
        };
    };
};
class MSF_Support_W
{
    name="Support Infantry (Winter)";
    class MSF_Support_CLS_W
    {
        name="$STR_A3_CfgGroups_West_BLU_F_Support_BUS_support_CLS0";
        side=1;
        faction="BLU_F_WINTER";
        icon="\A3\ui_f\data\map\markers\nato\b_inf.paa";
        class Unit0
        {
            side=1;
            vehicle="MSF_Leader_W";
            rank="SERGEANT";
            position[]={0,0,0};
        };
        class Unit1
        {
            side=1;
            vehicle="MSF_Gunner_W";
            rank="CORPORAL";
            position[]={5,-5,0};
        };
        class Unit2
        {
            side=1;
            vehicle="MSF_Medic_W";
            rank="PRIVATE";
            position[]={-5,-5,0};
        };
        class Unit3
        {
            side=1;
            vehicle="MSF_Medic_W";
            rank="PRIVATE";
            position[]={10,-10,0};
        };
    };
    class MSF_Support_EOD_W
    {
        name="$STR_A3_CfgGroups_West_BLU_F_Support_BUS_support_EOD0";
        side=1;
        faction="BLU_F_WINTER";
        icon="\A3\ui_f\data\map\markers\nato\b_inf.paa";
        class Unit0
        {
            side=1;
            vehicle="MSF_Leader_W";
            rank="SERGEANT";
            position[]={0,0,0};
        };
        class Unit1
        {
            side=1;
            vehicle="MSF_Engineer_W";
            rank="CORPORAL";
            position[]={5,-5,0};
        };
        class Unit2
        {
            side=1;
            vehicle="MSF_Mine_W";
            rank="PRIVATE";
            position[]={-5,-5,0};
        };
        class Unit3
        {
            side=1;
            vehicle="MSF_Mine_W";
            rank="PRIVATE";
            position[]={10,-10,0};
        };
    };
    class MSF_Support_ENG_W
    {
        name="$STR_A3_CfgGroups_West_BLU_F_Support_BUS_support_ENG0";
        side=1;
        faction="BLU_F_WINTER";
        icon="\A3\ui_f\data\map\markers\nato\b_inf.paa";
        class Unit0
        {
            side=1;
            vehicle="MSF_Leader_W";
            rank="SERGEANT";
            position[]={0,0,0};
        };
        class Unit1
        {
            side=1;
            vehicle="MSF_Engineer_W";
            rank="CORPORAL";
            position[]={5,-5,0};
        };
        class Unit2
        {
            side=1;
            vehicle="MSF_Engineer_W";
            rank="PRIVATE";
            position[]={-5,-5,0};
        };
        class Unit3
        {
            side=1;
            vehicle="MSF_Repair_W";
            rank="PRIVATE";
            position[]={10,-10,0};
        };
    };
    class MSF_Recon_EOD_W
    {
        name="$STR_A3_CfgGroups_West_BLU_F_Support_BUS_recon_EOD0";
        side=1;
        faction="BLU_F_WINTER";
        icon="\A3\ui_f\data\map\markers\nato\b_inf.paa";
        class Unit0
        {
            side=1;
            vehicle="MSF_Leader_W";
            rank="SERGEANT";
            position[]={0,0,0};
        };
        class Unit1
        {
            side=1;
            vehicle="MSF_Engineer_W";
            rank="CORPORAL";
            position[]={5,-5,0};
        };
        class Unit2
        {
            side=1;
            vehicle="MSF_Engineer_W";
            rank="PRIVATE";
            position[]={-5,-5,0};
        };
        class Unit3
        {
            side=1;
            vehicle="MSF_Rifleman_W";
            rank="PRIVATE";
            position[]={10,-10,0};
        };
    };
    class MSF_Support_MG_W
    {
        name="$STR_A3_CfgGroups_West_BLU_F_Support_BUS_support_MG0";
        side=1;
        faction="BLU_F_WINTER";
        icon="\A3\ui_f\data\map\markers\nato\b_inf.paa";
        class Unit0
        {
            side=1;
            vehicle="MSF_Leader_W";
            rank="SERGEANT";
            position[]={0,0,0};
        };
        class Unit1
        {
            side=1;
            vehicle="MSF_Gunner_W";
            rank="CORPORAL";
            position[]={5,-5,0};
        };
        class Unit2
        {
            side=1;
            vehicle="MSF_Gunner_W";
            rank="PRIVATE";
            position[]={-5,-5,0};
        };
    };
    class MSF_Support_GMG_W
    {
        name="$STR_A3_CfgGroups_West_BLU_F_Support_BUS_support_GMG0";
        side=1;
        faction="BLU_F_WINTER";
        icon="\A3\ui_f\data\map\markers\nato\b_inf.paa";
        class Unit0
        {
            side=1;
            vehicle="MSF_Leader_W";
            rank="SERGEANT";
            position[]={0,0,0};
        };
        class Unit1
        {
            side=1;
            vehicle="MSF_Gunner_W";
            rank="CORPORAL";
            position[]={5,-5,0};
        };
        class Unit2
        {
            side=1;
            vehicle="MSF_Gunner_W";
            rank="PRIVATE";
            position[]={-5,-5,0};
        };
    };
    class MSF_Support_Mort_W
    {
        name="$STR_A3_CfgGroups_West_BLU_F_Support_BUS_support_Mort0";
        side=1;
        faction="BLU_F_WINTER";
        icon="\A3\ui_f\data\map\markers\nato\b_mortar.paa";
        class Unit0
        {
            side=1;
            vehicle="MSF_Leader_W";
            rank="SERGEANT";
            position[]={0,0,0};
        };
        class Unit1
        {
            side=1;
            vehicle="MSF_Rifleman_W";
            rank="CORPORAL";
            position[]={5,-5,0};
        };
        class Unit2
        {
            side=1;
            vehicle="MSF_Rifleman_W";
            rank="PRIVATE";
            position[]={-5,-5,0};
        };
    };
};