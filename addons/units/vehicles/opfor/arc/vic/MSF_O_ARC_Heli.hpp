class O_Heli_Light_02_dynamicLoadout_F;
class O_Heli_Transport_04_covered_F;
class O_Heli_Attack_02_dynamicLoadout_F;
class O_Heli_Light_02_unarmed_F;

class MSF_O_ARC_Heli_1 : O_Heli_Light_02_dynamicLoadout_F
{
    crew = "MSF_O_ARC_Helicrew";
    side = 0;
    scope = 2;
    faction = "OPF_ARC_MSF";
    displayName = "Ka-60 Kasatka";
    hiddenSelectionsTextures[] = {"\A3\Air_F_Heli\Heli_Light_02\Data\Heli_Light_02_ext_OPFOR_V2_CO.paa"};
};

class MSF_O_ARC_Heli_2 : O_Heli_Light_02_unarmed_F
{
    crew = "MSF_O_ARC_Helicrew";
    side = 0;
    scope = 2;
    faction = "OPF_ARC_MSF";
    displayName = "Ka-60 Kasatka (Unarmed)";
};

class MSF_O_ARC_Heli_3 : O_Heli_Transport_04_covered_F
{
    crew = "MSF_O_ARC_Helicrew";
    side = 0;
    scope = 2;
    faction = "OPF_ARC_MSF";
    displayName = "Mi-290 Taru (Transport)";
    hiddenSelections[] = {"Camo_1","Camo_2","Camo_3","Camo_4"};
    hiddenSelectionsTextures[] = {"A3\Air_F_Heli\Heli_Transport_04\Data\heli_transport_04_base_01_Black_co.paa","A3\Air_F_Heli\Heli_Transport_04\Data\heli_transport_04_base_02_Black_co.paa","A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext01_Black_CO.paa","A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext02_Black_CO.paa"};
};

class MSF_O_ARC_Heli_4 : O_Heli_Attack_02_dynamicLoadout_F
{
    crew = "MSF_O_ARC_Helicrew";
    side = 0;
    scope = 2;
    faction = "OPF_ARC_MSF";
    displayName = "Mi-48 Kajman";
    hiddenSelectionsTextures[] = {"A3\Air_F_Beta\Heli_Attack_02\Data\Heli_Attack_02_body1_black_CO.paa","A3\Air_F_Beta\Heli_Attack_02\Data\Heli_Attack_02_body2_black_CO.paa"};
};