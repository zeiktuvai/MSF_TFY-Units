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
            #include "vehicles\blufor\units.inc"
            #include "vehicles\opfor\arc\ARC_Units.inc"
        };
        weapons[] = {
            #include "cfg\weapons\weapons.inc"
            #include "cfg\equipment\equipment.inc"
            #include "cfg\uniforms\uniforms.inc"
        };
        requiredVersion = 2.0;
        requiredAddons[] = { "MSF3den" };
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
    #include "cfg\MSF_Uniforms.hpp"
};

class UniformSlotInfo 
{ 
    slotType = 0; 
    linkProxy = "-"; 
}; 
