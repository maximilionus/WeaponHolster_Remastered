class CfgPatches
{
	class weapon_holster_remastered_core
	{
		units[]={};
		weapons[]={};
		requiredAddons[]={"A3_Characters_F"};
		author[]=
		{
			"MAXIMILI"
		};
	};
};

class CfgFunctions
{
	class WpnHr
	{
		class Actions
		{
			class _weaponHolster_core
			{
				file="WeaponHolster_Remastered\fn\fn_weaponHolster_core.sqf";
			};
			class weaponHolster_init
			{
				file="WeaponHolster_Remastered\fn\fn_weaponHolster_init.sqf";
			};
		};
	};
};

class CfgVehicles
{
	class Land;
	class Man: Land {};
	class CAManBase: Man
	{
		class EventHandlers
		{
			class MXML_WeaponHolsterOnUnit
			{
				init = "[] call wpnhr_fnc__weaponHolster_core;";
			};
		};
	};
};
