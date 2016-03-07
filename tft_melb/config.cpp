class CfgPatches {
	class tft_melb {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"MELB"};
		version = 1.0;
		versionStr = 1.0;
		versionAr[] = {1, 0};
		author[] = {"YoursTruly"};
	};
};

class cfgWeapons {
	class Laserdesignator_mounted;	// External class reference
	class M134_minigun;	// External class reference
	class HMG_127;	// External class reference
	class missiles_DAR;	// External class reference
	class MissileLauncher;	// External class reference

	class Laserdesignator_MELB : Laserdesignator_mounted {
        cursor = "EmptyCursor";
		cursorAim = "laserDesignator";
        cursorAimOn = "cursorAimOn";
	};

	class M134x2_MELB : M134_minigun {
		cursorAim = "mg";
	};

    class M134_L_MELB : M134x2_MELB {
        cursorAim = "mg";
    };

	class GAU19_MELB : HMG_127 {
        cursor = "mg";
		cursorAim = "mg";
	};

    class GAU19_R_MELB : GAU19_MELB {
        cursor = "mg";
        cursorAim = "mg";
    };

	class M260_MELB : missiles_DAR {
		cursorAim = "rocket";
	};

	class M261_MELB : missiles_DAR {
		cursorAim = "rocket";
	};

	class MELB_Hellfire : MissileLauncher {
		cursorAim = "missile";
	};

	class MELB_DAGR : MissileLauncher {
		cursorAim = "rocket";
	};
};

class CfgVehicles {
    class Helicopter;	// External class reference

	class Helicopter_Base_F : Helicopter {
		class Turrets;	// External class reference
	};

	class Helicopter_Base_H : Helicopter_Base_F {
		class Turrets : Turrets {
			class CopilotTurret;	// External class reference
		};
    };

    class MELB_base : Helicopter_Base_H {
        ace_fastroping_enabled = 1;
        ace_fastroping_ropeOrigins[] = {{1.17, 0.06, 0.98}, {-1.17, 0.06, 0.98}};
        class Turrets : Turrets {
			class CopilotTurret : CopilotTurret {
                class OpticsIn {
					class Wide {
                        thermalMode[] = {0,1};
                    };
                };
            };
        };
    };
};
