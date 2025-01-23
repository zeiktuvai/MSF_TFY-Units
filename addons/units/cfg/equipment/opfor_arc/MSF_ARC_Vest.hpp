class ARC_Vest : V_PlateCarrier2_rgr 
{ 
    scope = 2; 
    displayName = "Carrier Rig (ARC)"; 
    //picture = "-"; 
    model = "A3\Characters_F\BLUFOR\equip_b_Vest01.p3d"; 
    hiddenSelections[] = {"Camo"}; 
    hiddenSelectionsTextures[] = {"z\msf\addons\units\data\arc\MSF_O_ARC_Vest.paa"}; 
    class ItemInfo: VestItem 
    { 
        uniformModel = "A3\Characters_F\BLUFOR\equip_b_Vest01.p3d"; 
        containerClass = "Supply120"; 
        mass = 80; 
        armor = "5"; 
        passThrough = 0.3; 
        hiddenSelections[] = {"camo"}; 
    }; 
};
class ARC_Vest_Lite : V_PlateCarrier1_blk 
{ 
    scope = 2; 
    displayName = "Carrier Lite (ARC)"; 
    //picture = "-"; 
    model = "A3\Characters_F\BLUFOR\equip_b_Vest02.p3d"; 
    hiddenSelections[] = {"Camo"}; 
    hiddenSelectionsTextures[] = {"z\msf\addons\units\data\arc\MSF_O_ARC_Vest.paa"}; 
    class ItemInfo: VestItem 
    { 
        uniformModel = "A3\Characters_F\BLUFOR\equip_b_Vest02.p3d"; 
        containerClass = "Supply120"; 
        mass = 80; 
        armor = "5"; 
        passThrough = 0.3; 
        hiddenSelections[] = {"camo"}; 
    }; 
};