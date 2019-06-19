[] call wpnhr_fnc_weaponHolster_init;

_EHCreatedCheck = missionNamespace getVariable "wpnhr_LoadEH_created";
if (isNil "_EHCreatedCheck") then {
	addMissionEventHandler ["Loaded", {
		[] call wpnhr_fnc_weaponHolster_init;
	}];
	missionNamespace setVariable ["wpnhr_LoadEH_created", 1];
};