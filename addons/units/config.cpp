#include "cfg\MSF_Roles.hpp"
#include "cfg\MSF_Faction.hpp"
#include "cfg\MSF_Categories.hpp"
#include "cfg\MSF_Glasses.hpp"
#include "cfg\MSF_Groups.hpp"
#include "cfg\MSF_Functions.hpp"

class CfgPatches
{
    class MSF_Units
    {
		name = "MSF Units";
		author = "Zeik_Tuvai";
		version = "v0.0.0";
        units[] = {
            "MSF_Crewman", "MSF_Engineer", "MSF_Grenadier", "MSF_Gunner", "MSF_Leader", "MSF_Marksman", "MSF_Medic",
            "MSF_Mine", "MSF_ATRifleman", "MSF_AARifleman", "MSF_Pilot", "MSF_Repair", "MSF_Rifleman", "MSF_Sniper",
            "MSF_UAV", "MSF_RTO", "MSF_Crewman_T", "MSF_Engineer_T", "MSF_Grenadier_T", "MSF_Gunner_T", "MSF_Leader_T", 
            "MSF_Marksman_T", "MSF_Medic_T", "MSF_ATRifleman_T", "MSF_AARifleman_T", "MSF_Repair_T", "MSF_Rifleman_T", 
            "MSF_Sniper_T", "MSF_UAV_T", "MSF_RTO_T", "MSF_Engineer_N", "MSF_Grenadier_N", "MSF_Gunner_N", "MSF_Leader_N", 
            "MSF_Marksman_N", "MSF_Medic_N", "MSF_ATRifleman_N", "MSF_AARifleman_N", "MSF_Repair_N", "MSF_Rifleman_N", "MSF_Crewman_N",
            "MSF_UAV_N", "MSF_RTO_N", "MSF_SF_Diver_Exp", "MSF_SF_Diver", "MSF_mc_BaseBackpack", "MSF_mc_MarksmanBackpack",
            "MSF_mc_SniperBackpack", "MSF_mc_ATBackpack", 
            "MSF_mc_AABackpack", "MSF_mc_MedicBackpack", "MSF_mc_EngBackpack", "MSF_mc_MineBackpack",
            "MSF_Crewman_W", "MSF_Engineer_W", "MSF_Grenadier_W", "MSF_Gunner_W", "MSF_Leader_W", "MSF_Marksman_W", "MSF_Medic_W", 
            "MSF_Mine_W", "MSF_ATRifleman_W", "MSF_AARifleman_W", "MSF_Pilot_W", "MSF_Repair_W", "MSF_Rifleman_W", "MSF_Sniper_W", 
            "MSF_UAV_W", "MSF_w_BaseBackpack", "MSF_w_SniperBackpack",
            "MSF_w_ATBackpack", "MSF_w_AABackpack", "MSF_w_SAWBackpack", "MSF_w_MedicBackpack", "MSF_w_EngBackpack", "MSF_w_MineBackpack",
            "MSF_O_ARC_Rifleman", "MSF_O_ARC_Marksman", "MSF_O_ARC_Grenadier", "MSF_O_ARC_Autorifleman", "MSF_O_ARC_Medic", "MSF_O_ARC_ATRifleman",
            "MSF_O_ARC_AARifleman", "MSF_O_ARC_Leader", "MSF_O_ARC_Engineer", "MSF_O_ARC_Crewman", "MSF_O_ARC_Helicrew", "MSF_O_ARC_Backpack",
            "MSF_O_ARC_MedicBackpack", "MSF_O_ARC_ATBackpack", "MSF_O_ARC_AABackpack", "MSF_O_ARC_EngBackpack", "MSF_O_ARC_GMG_01_High",
            "MSF_O_ARC_GMG_01", "MSF_O_ARC_HMG_01_High", "MSF_O_ARC_HMG_01", "MSF_O_ARC_Mortar", "MSF_O_ARC_DAGOR_Green", "MSF_O_ARC_DAGOR_AT",
            "MSF_O_ARC_DAGOR_Armed", "MSF_O_ARC_MRAP", "MSF_O_ARC_MRAP_GMG", "MSF_O_ARC_MRAP_HMG", "MSF_O_ARC_MBT_01", "MSF_O_ARC_MBT_02",
            "MSF_O_ARC_MBT_03", "MSF_O_ARC_MBT_04", "MSF_O_ARC_Heli_1", "MSF_O_ARC_Heli_2", "MSF_O_ARC_Heli_3", "MSF_O_ARC_Heli_4"
        };
        weapons[] = {
            "MSF_MXM", "MSF_M249", "MSF_MAR10", "MSF_MX_B", "MSF_MXC_B", "MSF_MXGL_B", "MSF_MXM_B",
            "MSF_MXSW_W", "MSF_MXGL_White", "MSF_MMG_W", "MSF_MXM_W", "MSF_MXC_W", "MSF_MX", "MSF_MXC",
            "MSF_MX_3GL", "MSF_ARC_SPAR", "MSF_ARC_SPAR_MG", "MSF_ARC_SPAR_GL", "MSF_ARC_DMR", "MSF_NATO_Uniform_Alpine"
        };
        requiredVersion = 2.0;
        requiredAddons[] = { "MSF3den", "NATO_Winter_Units"};
    };
};

class CfgVehicles {
    #include "vehicles\MSF_Units_BLUFOR.hpp"
    #include "vehicles\MSF_Units_OPFOR.hpp"
};

class CfgWeapons
{
    class ItemCore;
    #include "cfg\MSF_Weapons.hpp"
    #include "cfg\MSF_Equipment.hpp"
};

class UniformSlotInfo 
{ 
    slotType = 0; 
    linkProxy = "-"; 
}; 
