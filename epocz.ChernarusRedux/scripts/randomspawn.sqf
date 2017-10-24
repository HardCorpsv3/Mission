if (isNil "inSpawnPoint") then {
	inSpawnPoint = false;
};
 
while {true} do {
	waitUntil { inSpawnPoint };
	waitUntil { player == vehicle player };
	thePlayer = vehicle player;
	_sP = [
		[1839,2991,0.1],
		[1862,3928,0.1],
		[2656,1623,0.1],
		[3377,2474,0.1],
		[4127,2525,0.1],
		[3998,3449,0.1],
		[5116,4294,0.1],
		[5732,6157,0.1],
		[4203,6795,0.1],
		[3255,7295,0.1],
		[2980,4945,0.1]
	];  //Stratis
	_selectedSp = _sP call BIS_fnc_selectRandom;
	_randPos = [_selectedSp,0,1000,1,0,25,0] call BIS_fnc_findSafePos; //off shore
//      _randPos = [_selectedSp,0,1000,1,0,25,1] call BIS_fnc_findSafePos; //on shore only (need spawnpoints near a coast)
	_posX = _randPos select 0;
	_posY = _randPos select 1;
	_spawnpoint = [_posX,_posY,0.1];
	sleep 1;
	// uncomment if you want to add some gear as well, check how to add 

	/*
	_uniform = ["U_C_Poloshirt_blue","U_C_Poloshirt_burgundy","U_C_Poloshirt_stripped","U_C_Poloshirt_tricolour","U_C_Poloshirt_salmon","U_C_Poloshirt_redwhite"] call BIS_fnc_selectRandom;
	player forceAddUniform _uniform;
	player addVest "V_41_EPOCH";				
	player addWeapon "ItemMap";
	*/
	thePlayer setPos _spawnpoint;

	waitUntil { !inSpawnPoint };
};