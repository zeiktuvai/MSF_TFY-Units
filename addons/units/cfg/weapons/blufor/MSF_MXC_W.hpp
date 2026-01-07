class MSF_MXC_W : arifle_MXC_Black_F
{
	scope = 2;	
    author = "Zeik Tuvai";
	displayName = "MX (Winter)";
    baseWeapon = "MSF_MX_W";
    hiddenSelections[] = {"Camo1"};
    hiddenSelectionsTextures[] = {"z\msf\addons\units\data\blufor\w\weapons\XMX_short_w.paa"};
	picture = "z\msf\addons\units\ui\icon\blufor\w\weapons\gear_mx_rifle_w.paa";
	class LinkedItems {
		#include "..\base\MSF_MX_ItemsBase.hpp"
	};
};
