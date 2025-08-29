class MSF_W_MRAP : B_T_MRAP_01_F
{
    displayName = "M-ATV";
    hiddenSelections[] = {"Camo1","Camo2","riotpolice"};
    hiddenSelectionsTextures[] = {"z\msf\addons\units\data\blufor\w\cars\MRAP_01_base.paa","z\msf\addons\units\data\blufor\w\cars\MRAP_01_adds.paa",""};
    editorPreview = "z\msf\addons\units\ui\icon\blufor\w\cars\MSF_W_MRAP.jpg";
    #include "base.inc"
};

class MSF_W_MRAP_gmg : B_T_MRAP_01_gmg_F
{
    displayName = "M-ATV (GMG)";
    hiddenSelections[] = {"Camo1","Camo2","camo3"};
    hiddenSelectionsTextures[] = {"z\msf\addons\units\data\blufor\w\cars\MRAP_01_base.paa","z\msf\addons\units\data\blufor\w\cars\MRAP_01_adds.paa","z\msf\addons\units\data\blufor\w\cars\Turret_W.paa"};
    editorPreview = "z\msf\addons\units\ui\icon\blufor\w\cars\MSF_W_MRAP_gmg.jpg";
    #include "base.inc"
};

class MSF_W_MRAP_hmg : B_T_MRAP_01_hmg_F
{
    displayName = "M-ATV (HMG)";
    hiddenSelections[] = {"Camo1","Camo2","camo3"};
    hiddenSelectionsTextures[] = {"z\msf\addons\units\data\blufor\w\cars\MRAP_01_base.paa","z\msf\addons\units\data\blufor\w\cars\MRAP_01_adds.paa","z\msf\addons\units\data\blufor\w\cars\Turret_W.paa"};
    editorPreview = "z\msf\addons\units\ui\icon\blufor\w\cars\MSF_W_MRAP_hmg.jpg";
    #include "base.inc"
};

class MSF_W_HEMTT : B_Truck_01_mover_F
{
    displayName = "HEMTT";
    hiddenSelections[] = {"Camo1","Camo2","camo3"};
    hiddenSelectionsTextures[] = {"z\msf\addons\units\data\blufor\w\cars\HEMTT_ext_01.paa","z\msf\addons\units\data\blufor\w\cars\HEMTT_ext_02.paa","z\msf\addons\units\data\blufor\w\cars\HEMTT_mprimer.paa"};
    editorPreview = "z\msf\addons\units\ui\icon\blufor\w\cars\MSF_W_HEMTT.jpg";
    #include "base.inc"
};

class MSF_W_HEMTT_Ammo : B_Truck_01_ammo_F
{
    displayName = "HEMTT Ammo";
    hiddenSelections[] = {"Camo1","Camo2","camo3"};
    hiddenSelectionsTextures[] = {"z\msf\addons\units\data\blufor\w\cars\HEMTT_ext_01.paa","z\msf\addons\units\data\blufor\w\cars\HEMTT_ext_02.paa","z\msf\addons\units\data\blufor\w\cars\HEMTT_ammo.paa"};
    editorPreview = "z\msf\addons\units\ui\icon\blufor\w\cars\MSF_W_HEMTT_Ammo.jpg";
    #include "base.inc"
};

class MSF_W_HEMTT_Covered : B_Truck_01_covered_F
{
    displayName = "HEMTT Transport (covered)";
    hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4"};
    hiddenSelectionsTextures[] = {"z\msf\addons\units\data\blufor\w\cars\HEMTT_ext_01.paa","z\msf\addons\units\data\blufor\w\cars\HEMTT_ext_02.paa","z\msf\addons\units\data\blufor\w\cars\HEMTT_cargo.paa","z\msf\addons\units\data\blufor\w\cars\HEMTT_cover.paa"};    
    editorPreview = "z\msf\addons\units\ui\icon\blufor\w\cars\MSF_W_HEMTT_Covered.jpg";
    #include "base.inc"
};

class MSF_W_HEMTT_Transport : B_Truck_01_transport_F
{
    displayName = "HEMTT Transport";
    hiddenSelections[] = {"Camo1","Camo2","Camo3"};
    hiddenSelectionsTextures[] = {"z\msf\addons\units\data\blufor\w\cars\HEMTT_ext_01.paa","z\msf\addons\units\data\blufor\w\cars\HEMTT_ext_02.paa","z\msf\addons\units\data\blufor\w\cars\HEMTT_cargo.paa"};
    editorPreview = "z\msf\addons\units\ui\icon\blufor\w\cars\MSF_W_HEMTT_Transport.jpg";
    #include "base.inc"
};

class MSF_W_HEMTT_Medical : B_Truck_01_medical_F
{
    displayName = "HEMTT Medical";
    hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4"};
    hiddenSelectionsTextures[] = {"z\msf\addons\units\data\blufor\w\cars\HEMTT_ext_01.paa","z\msf\addons\units\data\blufor\w\cars\HEMTT_ext_02.paa","z\msf\addons\units\data\blufor\w\cars\HEMTT_cargo.paa","z\msf\addons\units\data\blufor\w\cars\HEMTT_cover.paa"};    
    editorPreview = "z\msf\addons\units\ui\icon\blufor\w\cars\MSF_W_HEMTT_Medical.jpg";
    #include "base.inc"
};

class MSF_W_HEMTT_Flatbed : B_Truck_01_flatbed_F
{
    displayName = "HEMTT Flatbed";
    hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4"};
    hiddenSelectionsTextures[] = {"z\msf\addons\units\data\blufor\w\cars\HEMTT_ext_01.paa","z\msf\addons\units\data\blufor\w\cars\HEMTT_ext_02.paa",
        "z\msf\addons\units\data\blufor\w\cars\HEMTT_ammo.paa","z\msf\addons\units\data\blufor\w\cars\HEMTT_cargo_E.paa"};
    editorPreview = "z\msf\addons\units\ui\icon\blufor\w\cars\MSF_W_HEMTT_Flatbed.jpg";
    #include "base.inc"
};

class MSF_W_HEMTT_Fuel : B_Truck_01_fuel_F
{
    displayName = "HEMTT Fuel";
    hiddenSelections[] = {"Camo1","Camo2","Camo3"};
    hiddenSelectionsTextures[] = {"z\msf\addons\units\data\blufor\w\cars\HEMTT_ext_01.paa","z\msf\addons\units\data\blufor\w\cars\HEMTT_ext_02.paa","z\msf\addons\units\data\blufor\w\cars\HEMTT_Fuel.paa"};
    editorPreview = "z\msf\addons\units\ui\icon\blufor\w\cars\MSF_W_HEMTT_Fuel.jpg";
    #include "base.inc"
};

class MSF_W_HEMTT_Cargo : B_Truck_01_cargo_F
{
    displayName = "HEMTT Cargo";
    hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4"};
    hiddenSelectionsTextures[] = {"z\msf\addons\units\data\blufor\w\cars\HEMTT_ext_01.paa","z\msf\addons\units\data\blufor\w\cars\HEMTT_ext_02.paa","z\msf\addons\units\data\blufor\w\cars\HEMTT_ammo.paa","z\msf\addons\units\data\blufor\w\cars\HEMTT_cargo_E.paa"};    
    editorPreview = "z\msf\addons\units\ui\icon\blufor\w\cars\MSF_W_HEMTT_Cargo.jpg";
    #include "base.inc"
};

class MSF_W_HEMTT_Box : B_Truck_01_box_F
{
    displayName = "HEMTT Container";
    hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4"};
    hiddenSelectionsTextures[] = {"z\msf\addons\units\data\blufor\w\cars\HEMTT_ext_01.paa","z\msf\addons\units\data\blufor\w\cars\HEMTT_ext_02.paa","z\msf\addons\units\data\blufor\w\cars\HEMTT_ammo.paa","z\msf\addons\units\data\blufor\w\cars\Container_w.paa"};    
    editorPreview = "z\msf\addons\units\ui\icon\blufor\w\cars\MSF_W_HEMTT_Box.jpg";
    #include "base.inc"
};

class MSF_W_HEMTT_Repair : B_Truck_01_Repair_F
{
    displayName = "HEMTT Repair";
    hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4"};
    hiddenSelectionsTextures[] = {"z\msf\addons\units\data\blufor\w\cars\HEMTT_ext_01.paa","z\msf\addons\units\data\blufor\w\cars\HEMTT_ext_02.paa","z\msf\addons\units\data\blufor\w\cars\HEMTT_ammo.paa","z\msf\addons\units\data\blufor\w\cars\Container_w.paa"};    
    editorPreview = "z\msf\addons\units\ui\icon\blufor\w\cars\MSF_W_HEMTT_Repair.jpg";
    #include "base.inc"
};

class MSF_W_LSV : B_LSV_01_unarmed_F
{
    displayName = "Polaris DAGOR";
    hiddenSelections[] = {"Camo_1","Camo_2","Camo_3","Camo_4"};
    hiddenSelectionsTextures[] = {"z\msf\addons\units\data\blufor\w\cars\LSV_01.paa","z\msf\addons\units\data\blufor\w\cars\LSV_02.paa","z\msf\addons\units\data\blufor\w\cars\LSV_03.paa","z\msf\addons\units\data\blufor\w\cars\LSV_Adds.paa"};    
    editorPreview = "z\msf\addons\units\ui\icon\blufor\w\cars\MSF_W_LSV.jpg";
    #include "base.inc"
};

class MSF_W_LSV_armed : B_LSV_01_armed_F
{
    displayName = "Polaris DAGOR (XM312)";
    hiddenSelections[] = {"Camo_1","Camo_2","Camo_3","Camo_4"};
    hiddenSelectionsTextures[] = {"z\msf\addons\units\data\blufor\w\cars\LSV_01.paa","z\msf\addons\units\data\blufor\w\cars\LSV_02.paa","z\msf\addons\units\data\blufor\w\cars\LSV_03.paa","z\msf\addons\units\data\blufor\w\cars\LSV_Adds.paa"};    
    editorPreview = "z\msf\addons\units\ui\icon\blufor\w\cars\MSF_W_LSV_armed.jpg";
    #include "base.inc"
};

class MSF_W_LSV_AT : B_LSV_01_AT_F
{
    displayName = "Polaris DAGOR (Mini-Spike AT)";
    hiddenSelections[] = {"Camo_1","Camo_2","Camo_3","Camo_4","camo_launcher","camo_tube"};
    hiddenSelectionsTextures[] = {"z\msf\addons\units\data\blufor\w\cars\LSV_01.paa","z\msf\addons\units\data\blufor\w\cars\LSV_02.paa","z\msf\addons\units\data\blufor\w\cars\LSV_03.paa","z\msf\addons\units\data\blufor\w\cars\LSV_Adds.paa","z\msf\addons\units\data\blufor\w\weapons\titan_launcher.paa","z\msf\addons\units\data\blufor\w\weapons\titan_tubem.paa"};
    editorPreview = "z\msf\addons\units\ui\icon\blufor\w\cars\MSF_W_LSV_AT.jpg";
    #include "base.inc"
};

class MSF_W_Quadbike : B_Quadbike_01_F
{
    displayName = "Quad Bike";
    hiddenSelections[] = {"camo1","camo2"};
    hiddenSelectionsTextures[] = {"z\msf\addons\units\data\blufor\w\cars\Quadbike.paa","z\msf\addons\units\data\blufor\w\cars\Quadbike_wheel.paa"};
    editorPreview = "z\msf\addons\units\ui\icon\blufor\w\cars\MSF_W_Quadbike.jpg";
    #include "base.inc"
};
