class CfgPatches {
    class tft_cup
    {
        units[] = {"TFT_B_Medical"};
        weapons[] = {};
        requiredVersion = 0.6;
        requiredAddons[] = { "CUP_AirVehicles_UH60", "CUP_Vehicles_ACE_compat", "CUP_AirVehicles_MH60S", "CUP_AirVehicles_AH6", "CUP_Weapons_VehicleWeapons", "A3_Weapons_F", "CUP_Weapons_Ammunition", "ace_frag", "ace_cookoff", "CUP_Weapons_Backpacks"};
        version = 2.0;
        versionStr = 2.0;
        versionAr[] = {2, 0};
        author = "Ampersand, YoursTruly";
    };
};

#define ENHANCED_LAUNCHER \
    airLock = 1; \
    allowAgainstInfantry = 1; \
    aiAmmoUsageFlags = "64 + 128 + 256 + 512"; \
    whistleDist = 32;
   
class CfgAmmo {
    class RocketBase;   // External Class Reference
    class ShellCore;    // External Class Reference

    class ShellBase : ShellCore {
        soundFly[] = {"a3\sounds_f\vehicles\soft\tires\int-tires-sand2.wss",170,2,1000};
        //A3\Sounds_F\weapons\Rockets\rocket_fly_1, 8, 1.2
        //a3\sounds_f_epc\Device\device_disassembled_loop.wss, 30, 1.6
        //A3\Sounds_F\weapons\smokeshell\smoke_loop2, 6, 1.3
        
    };
    class ace_explosion_reflection_base: ShellBase {
        soundFly[] = {"",0.0316228,4};
    };
    class ace_ammoExplosion: ShellBase {
        soundFly[] = {"",0.0316228,4};
    };

    class R_PG32V_F: RocketBase {
        ENHANCED_LAUNCHER
        cost = 20;
    };
    class R_TBG32V_F: R_PG32V_F {
        ENHANCED_LAUNCHER
        cost = 15;
    };
    class CUP_R_PG7V_AT: RocketBase {
        ENHANCED_LAUNCHER
        cost = 25;
    };
    class CUP_R_PG7VL_AT: RocketBase {
        ENHANCED_LAUNCHER
        cost = 20;
    };
    class CUP_R_PG7VR_AT: RocketBase {
        ENHANCED_LAUNCHER
        cost = 25;
    };
    class CUP_R_OG7_AT: RocketBase {
        ENHANCED_LAUNCHER
        cost = 15;
    };
    class CUP_R_PG9_AT: RocketBase {
        ENHANCED_LAUNCHER
        cost = 20;
    };
    class CUP_R_OG9_HE: CUP_R_PG9_AT {
        ENHANCED_LAUNCHER
        cost = 15;
    };
    class CUP_R_SMAW_HEDP: RocketBase {
        ENHANCED_LAUNCHER
        cost = 20;
    };
    class CUP_R_SMAW_HEAA: CUP_R_SMAW_HEDP {
        ENHANCED_LAUNCHER
        cost = 100;
    };
    class CUP_R_M136_AT: RocketBase {
        ENHANCED_LAUNCHER
    };
    class CUP_R_MEEWS_HEDP: RocketBase {
        ENHANCED_LAUNCHER
        cost = 25;
    };
    class CUP_R_MEEWS_HEAT: CUP_R_MEEWS_HEDP {
        ENHANCED_LAUNCHER
        cost = 100;
    };
    class CUP_R_RPG18_AT: RocketBase {
        ENHANCED_LAUNCHER
        cost = 25;
    };
    class CUP_R_SMAW_HEDP_N: RocketBase {
        ENHANCED_LAUNCHER
    };
    class CUP_R_SMAW_HEAA_N: CUP_R_SMAW_HEDP_N {
        ENHANCED_LAUNCHER
        cost = 100;
    };
};
