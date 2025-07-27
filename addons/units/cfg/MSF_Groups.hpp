class CfgGroups
{
    class West
    {
        name = "$STR_A3_CfgGroups_West0";
		side = 1;
        class BLU_F_MSF
        {
            name = "NATO (MSF)";
            #include "group\MSF_NATO_W.hpp"            
        };
    };
    class East
    {
        name = "$STR_A3_CfgGroups_East0";
        side = 0;
        class OPF_ARC
        {
            name = "ARC";
            #include "group\MSF_OPFOR_ARC.hpp"
        };
    };
};
