if(toLower worldName in ["chernarusredux","chernarus_summer"])then{
	([4654.62,9593.63,0] nearestObject 145259) setDamage 1;
	([4654.62,9593.63,0] nearestObject 145260) setDamage 1;
};	//Fix for something, find out ;)

[] execVM "scripts\randomspawn.sqf";