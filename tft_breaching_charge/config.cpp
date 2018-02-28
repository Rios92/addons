#include "BIS_AddonInfo.hpp"
class CfgPatches 
{
	class TFT_Breaching_Charge
	{
		// Meta information for editor
		name = "Breaching Charge";
		author = "Ampersand";
		url = "";
		
		requiredVersion = 1.000000;
		requiredAddons[] = {
			"ace_explosives",
			"A3_Weapons_F_Explosives"
		};
		units[] = {"TFT_Breaching_Charge","TFT_Breaching_Charge_Place"};
		weapons[] = {"TFT_Breaching_Charge_Muzzle"};
	};
};

class CfgFunctions {
    class TFT_Breaching_Charge {
        tag = "tft";
        class functions {
            file = "\TFT_Breaching_Charge\functions";
            class plantBreachingCharge;
        };
    };
};

class CfgAmmo
{
	class ClaymoreDirectionalMine_Remote_Ammo;
	class TFT_Breaching_Charge_Ammo: ClaymoreDirectionalMine_Remote_Ammo
	{
		hit = 10;
		indirectHit = 10;
		indirectHitRange = 3;
		model = "\A3\Weapons_F\Explosives\mine_SLAM_directional";
		defaultMagazine = "TFT_Breaching_Charge_Mag";
		ace_explosives_magazine = "TFT_Breaching_Charge_Mag";
		ace_explosives_Explosive = "TFT_Breaching_Charge_Ammo_Scripted";
		
	};
	class TFT_Breaching_Charge_Ammo_Scripted: TFT_Breaching_Charge_Ammo
	{
	};
};

class CfgMagazines
{
	class SLAMDirectionalMine_Wire_Mag;
	class TFT_Breaching_Charge_Mag: SLAMDirectionalMine_Wire_Mag
	{
		scope = 2;
		scopeArsenal = 2;
		author = "TFT8";
		ammo = "TFT_Breaching_Charge_Ammo";
		mass = 10;
		model = "\A3\Weapons_F\Explosives\mine_SLAM_directional_i";
		picture = "\A3\Weapons_F\Data\UI\gear_mine_SLAM_directional_CA.paa";
		descriptionShort = "A breaching charge takes down walls, doors, and other obstacles with minimal collateral damage.";
		class Library
		{
			libTextDesc = "A breaching charge takes down walls, doors, and other obstacles with minimal collateral damage.";
		};
		displayName = "Breaching Charge";
		ace_explosives_SetupObject = "TFT_Breaching_Charge_Place";
		
		class ACE_Triggers
		{
			SupportedTriggers[] = {"Timer","Command"};
		};
	};
};

class CfgVehicles
{
	class SLAMDirectionalMine;
	class TFT_Breaching_Charge: SLAMDirectionalMine
	{
		author = "TFT8";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\SLAMDirectionalMine.jpg";
		_generalMacro = "TFT_Breaching_Charge";
		ammo = "TFT_Breaching_Charge_Ammo";
		model = "\A3\Weapons_F\Explosives\mine_SLAM_directional";
		displayName = "Breaching Charge [TFT8]";
	};
	
	class ACE_Explosives_Place_SLAM;
	class TFT_Breaching_Charge_Place: ACE_Explosives_Place_SLAM
	{
		author = "TFT8";
		displayName = "Breaching Charge";
		
		class EventHandlers
		{
			Init = "[_this select 0] call TFT_fnc_plantBreachingCharge;";
		};
	};
};

class CfgWeapons
{
    class Default;
    class Put: Default {
        muzzles[] += {TFT_Breaching_Charge_Muzzle};
        class PutMuzzle: Default{};
        class TFT_Breaching_Charge_Muzzle: PutMuzzle {
			magazines[] = {"TFT_Breaching_Charge_Mag"};
			displayName = "Breaching Charge";
        };
    };
};
