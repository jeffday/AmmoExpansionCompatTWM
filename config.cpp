
class CfgPatches
{
	class AmmoExpansionCompatTWM
	{
		requiredVersion = 0.1;
		requiredAddons[] = {
			"DZ_Data",
			"DZ_Pistols",
			"DZ_Weapons_Firearms",
			"DZ_Weapons_Magazines",
			"Ammo_AE57x28",
			"Banshee",
			"TWM_FN57"
		};
	}
};
class CfgMods
{
	class AmmoExpansionCompatTWM
	{
		dir = "AmmoExpansionCompatTWM";
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "Ammunition Expansion Compatibility Tech's Weapon Mod";
		author = "angrystoma";
		authorID = "0";
		version = "1.0";
		extra = 0;
		type = "mod";
		inputs = "";
		dependencies[]=
		{
			"Game",
			"World",
			"Mission"
		};
		class defs
		{
			class missionScriptModule
			{
				value="";
				files[]= {"AmmoExpansionCompatTWM\Scripts\5_Mission"};
			};
			class worldScriptModule
			{
				value = "";
				files[] = {"AmmoExpansionCompatTWM\Scripts\4_World"};
			};
			class gameScriptModule
			{
				value = "";
				files[] = {"AmmoExpansionCompatTWM\Scripts\3_Game"};
			};
		};
	};
};

class cfgWeapons
{

	class Colt1911_Base;
	class TWM_FN57_Base: Colt1911_Base
	{
		chamberableFrom[]+=
		{
			"Ammo_AE57x28"
		};
	}

	class M4A1_Base;
	class TWM_Banshee57_Base: M4A1_Base
	{
		chamberableFrom[]+=
		{
			"Ammo_AE57x28"
		};
	}
};

class CfgMagazines
{
	class DefaultMagazine;
	class Magazine_Base;

	class TWM_Mag_FN57: Magazine_Base
	{
		ammo="TWM_Bullet_57x28";
		ammoItems[]+=
		{
			"Ammo_AE57x28"
		};
	}

	class Mag_CZ527_5rnd;
	class TWM_Mag_Banshee_57: Mag_CZ527_5rnd
	{
		ammo="TWM_Bullet_57x28";
		ammoItems[]+=
		{
			"Ammo_AE57x28"
		};
	}
}
