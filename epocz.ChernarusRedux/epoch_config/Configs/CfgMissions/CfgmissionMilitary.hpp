class milMissionAccepted{
	author = "axeman";
	title = "Military Crash Site";
	desc = "";
	img = "";
	simpleTask = 0;
	triggerCondition = "";
	taskLimit = 3;
	taskCheckTime = 16;
	triggerDelay = 3;
	items[] = {""};
	itemSpawn = 0;
	markerType = 0;
	markerRadius = 250;
	markerText = "";
	initfsm = "";
	initsqf = "";
	initcall = "";
	callEventBinTask = 0;
	callEventCondition1 = "";
	callEventCondition2 = "";
	callEventCondition3 = "";
	callEventCALL1 = "";
	callEventFSM1 = "";
	callEventSQF1 = "";
	callEventTask1 = "";
	callEventCALL2 = "";
	callEventFSM2 = "";
	callEventSQF2 = "";
	callEventTask2 = "";
	callEventCALL3 = "";
	callEventFSM3 = "";
	callEventSQF3 = "";
	callEventTask3 = "";
	diag1Condition = "true";
	dialogue1[] = {"A militia group has stolen military aircraft from a nearby airfield.","A stolen military aircraft has just taken off from an airport nearby.","I have received word that a splinter group are stealing an aircraft."};
	diagSquelch = 30;
	diag2Condition = "";
	dialogue2[] = {""};
	diag3Condition = "";
	dialogue3[] = {""};
	failedCondition = "";
	abandonDist = -1;
	abandonTime = 480;
	failed[] = {""};
	failedFSM = "";
	failedSQF = "";
	failedCall = "";
	failedTask[] = {""};
	cleanUp = 0;
	cleanUpCalls[] = {};
	completeCondition = "true";
	reward[] = {""};
	completed1[] = {""};
	completed2[] = {""};
	completedCALL = "";
	reminder[] = {""};
	nextTask[] = {"milSpawnCrashSite"};
};
class milSpawnCrashSite{
	author = "axeman";
	title = "Military Spawn Crash Site";
	desc = "";
	img = "";
	simpleTask = 0;
	triggerCondition = "";
	taskLimit = 3;
	taskCheckTime = 16;
	triggerDelay = 0;
	items[] = {""};
	itemSpawn = 0;
	markerType = 0;
	markerRadius = 250;
	markerText = "";
	initfsm = "";
	initsqf = "";
	initcall = "[] spawn {milCrashPos = [position player, 1000, 2550, 0, 0, 1000, 0] call BIS_fnc_findSafePos;terminate _thisScript;};";
	callEventBinTask = 0;
	callEventCondition1 = "(diag_tickTime - EPOCH_task_startTime) > 12";
	callEventCondition2 = "";
	callEventCondition3 = "";
	callEventCALL1 = "[player,Epoch_personalToken,selectRandom [""B_Plane_CAS_01_F"",""O_Heli_Attack_02_black_F"",""B_UAV_02_CAS_F"",""I_Plane_Fighter_03_AA_F ""],milCrashPos,objNull,false,""CAN_COLLIDE"","""","""","""","""",true] remoteExec [""EPOCH_Server_createObject"",2];";
	callEventFSM1 = "";
	callEventSQF1 = "";
	callEventTask1 = "";
	callEventCALL2 = "";
	callEventFSM2 = "";
	callEventSQF2 = "";
	callEventTask2 = "";
	callEventCALL3 = "";
	callEventFSM3 = "";
	callEventSQF3 = "";
	callEventTask3 = "";
	diag1Condition = "(diag_tickTime - EPOCH_task_startTime) > 6";
	dialogue1[] = {"As suspected, the aircraft was sabotaged and has crashed.","An inept theft attempt, the aircraft has gone down.","Something went wrong, my UAV has spotted the aircraft, it has crashed nearby."};
	diagSquelch = 15;
	diag2Condition = "true";
	dialogue2[] = {};
	diag3Condition = "";
	dialogue3[] = {""};
	failedCondition = "";
	abandonDist = -1;
	abandonTime = 480;
	failed[] = {""};
	failedFSM = "";
	failedSQF = "";
	failedCall = "";
	failedTask[] = {""};
	cleanUp = 0;
	cleanUpCalls[] = {};
	completeCondition = "(diag_tickTime - EPOCH_task_startTime) > 18";
	reward[] = {""};
	completed1[] = {""};
	completed2[] = {""};
	completedCALL = "true";
	reminder[] = {"Wait 10, I am triangulating the position.","Hold your position and wait for the location","I am calculating the location of the crash site."};
	nextTask[] = {"milMarkCrashSite"};
};
class milMarkCrashSite{
	author = "axeman";
	title = "Mark Military Crash Site";
	desc = "";
	img = "";
	simpleTask = 0;
	triggerCondition = "";
	taskLimit = 3;
	taskCheckTime = 16;
	triggerDelay = 3;
	items[] = {""};
	itemSpawn = 0;
	markerType = 0;
	markerRadius = 500;
	markerText = "Crash Site";
	initfsm = "";
	initsqf = "";
	initcall = "[[1,player],milCrashPos,""ELLIPSE"",""mil_dot"",""Crash Site"",""ColorRed"",[800,800], ""SolidBorder"", 42, 0.6, ""milMarkCrashSite""] remoteExec [""EPOCH_server_makeMarker"",2];";
	callEventBinTask = 0;
	callEventCondition1 = "true";
	callEventCondition2 = "true";
	callEventCondition3 = "true";
	callEventCALL1 = "milWH1 = createVehicle[""groundWeaponHolder"", milCrashPos, [], 4, ""CAN_COLLIDE""];removeFromRemainsCollector [milWH1];[milWH1,""Pelican_EPOCH""] remoteExec [""EPOCH_serverLootObject"",2];";
	callEventFSM1 = "";
	callEventSQF1 = "";
	callEventTask1 = "";
	callEventCALL2 = "milWH2 = createVehicle[""groundWeaponHolder"", milCrashPos, [], 4, ""CAN_COLLIDE""];removeFromRemainsCollector [milWH2];[milWH2,""ToolRack_EPOCH""] remoteExec [""EPOCH_serverLootObject"",2];";
	callEventFSM2 = "";
	callEventSQF2 = "";
	callEventTask2 = "";
	callEventCALL3 = "milWH3 = createVehicle[""groundWeaponHolder"", milCrashPos, [], 4, ""CAN_COLLIDE""];removeFromRemainsCollector [milWH3];[milWH3,""AirDrop_Payout1""] remoteExec [""EPOCH_serverLootObject"",2];";
	callEventFSM3 = "";
	callEventSQF3 = "";
	callEventTask3 = "";
	diag1Condition = "(diag_tickTime - EPOCH_task_startTime) > 6";
	dialogue1[] = {"Check your map, I have marked the site in red for your team.","Your map has been marked.","I have added a marker for your team."};
	diagSquelch = 30;
	diag2Condition = "(diag_tickTime - EPOCH_task_startTime) > 31";
	dialogue2[] = {"Reports are it was last spotted in that area..","Search the area, it was seen coming down from that location.","Be sure to search the area, the marker is the last know location."};
	diag3Condition = "(diag_tickTime - EPOCH_task_startTime) > 128";
	dialogue3[] = {"Be careful, I have spotted another UAV.","An enemy UAV is scouting the location","Keep a low profile, the enemy are scouting the area."};
	failedCondition = "";
	abandonDist = -1;
	abandonTime = 1280;
	failed[] = {""};
	failedFSM = "";
	failedSQF = "";
	failedCall = "";
	failedTask[] = {""};
	cleanUp = 0;
	cleanUpCalls[] = {};
	completeCondition = "(diag_tickTime - EPOCH_task_startTime) > 60";
	reward[] = {""};
	completed1[] = {""};
	completed2[] = {""};
	completedCALL = "";
	reminder[] = {""};
	nextTask[] = {"milFindCrashSite"};
};
class milFindCrashSite{
	author = "axeman";
	title = "Military Crash Site Hunt";
	desc = "";
	img = "";
	simpleTask = 0;
	triggerCondition = "";
	taskLimit = 3;
	taskCheckTime = 16;
	triggerDelay = 20;
	items[] = {""};
	itemSpawn = 0;
	markerType = 0;
	markerRadius = 250;
	markerText = "";
	initfsm = "";
	initsqf = "";
	initcall = "milDoUAV = false;";
	callEventBinTask = 0;
	callEventCondition1 = "count (units group player select {_x distance milCrashPos < 800}) > 0";
	callEventCondition2 = "count (units group player select {_x distance milCrashPos < 480}) > 0 && random 100 < 12";
	callEventCondition3 = "";
	callEventCALL1 = "_diag = format [""Great work the UAV has spotted %1 nearly on-site."",name ((units group player select {_x distance milCrashPos < 800}) select 0)];[_diag, 5] call Epoch_message;";
	callEventFSM1 = "";
	callEventSQF1 = "";
	callEventTask1 = "";
	callEventCALL2 = "[(selectRandom (units group player select {_x distance milCrashPos < 480}))] execVM ""epoch_code\compile\missions\tasks\mission_spawnUAV.sqf"";milDoUAV = true;";
	callEventFSM2 = "";
	callEventSQF2 = "";
	callEventTask2 = "";
	callEventCALL3 = "";
	callEventFSM3 = "";
	callEventSQF3 = "";
	callEventTask3 = "";
	diag1Condition = "count (units group player select {_x distance milCrashPos < 1000}) > 0";
	dialogue1[] = {"Keep going you are getting close now","You are closing in on the target.","You are nearly there. Keep it up."};
	diagSquelch = 60;
	diag2Condition = "milDoUAV";
	dialogue2[] = {"Enemy UAV spotted, you've got company.","You've got another UAV in the area, keep low.","Find a spot to hide, enemy UAV incoming."};
	diag3Condition = "count (units group player select {_x distance milCrashPos < 60}) > 0";
	dialogue3[] = {"You've made it, find any loot.","Search the area, there will be loot around","There should be plenty to scavange."};
	failedCondition = "";
	abandonDist = -1;
	abandonTime = 4800;
	failed[] = {""};
	failedFSM = "";
	failedSQF = "";
	failedCall = "";
	failedTask[] = {""};
	cleanUp = 0;
	cleanUpCalls[] = {};
	completeCondition = "(diag_tickTime - EPOCH_task_startTime) > 4600 || count (units group player select {_x distance milWH1 < 60}) > 0";
	reward[] = {""};
	completed1[] = {""};
	completed2[] = {""};
	completedCALL = "";
	reminder[] = {""};
	nextTask[] = {"milEndCrashSite"};
};
	
class milEndCrashSite{
	author = "axeman";
	title = "";
	desc = "";
	img = "";
	simpleTask = 0;
	triggerCondition = "";
	taskLimit = 3;
	taskCheckTime = 16;
	triggerDelay = 16;
	items[] = {""};
	itemSpawn = 1;
	markerType = 0;
	markerRadius = 50;
	markerText = "";
	initfsm = "";
	initsqf = "";
	initcall = "";
	callEventBinTask = 0;
	callEventCondition1 = "";
	callEventCondition2 = "";
	callEventCondition3 = "";
	callEventCALL1 = "";
	callEventFSM1 = "";
	callEventSQF1 = "";
	callEventTask1 = "";
	callEventCALL2 = "";
	callEventFSM2 = "";
	callEventSQF2 = "";
	callEventTask2 = "";
	callEventCALL3 = "";
	callEventFSM3 = "";
	callEventSQF3 = "";
	callEventTask3 = "";
	diag1Condition = "true";
	dialogue1[] = {"Well done, that was a good find","You are an official scavenger now, congratulations.","Your loot is welcome at my store any time."};
	diagSquelch = 60;
	diag2Condition = "";
	dialogue2[] = {""};
	diag3Condition = "";
	dialogue3[] = {""};
	failedCondition = "";
	abandonDist = 100;
	abandonTime = 240;
	failed[] = {""};
	failedFSM = "";
	failedSQF = "";
	failedCall = "";
	failedTask[] = {""};
	cleanUp = 1;
	cleanUpCalls[] = {};
	completeCondition = "true";
	reward[] = {""};
	completed1[] = {""};
	completed2[] = {""};
	completedCALL = "[player,1,""milMarkCrashSite""] remoteExec [""EPOCH_server_removeMarker"",2];";
	reminder[] = {""};
	nextTask[] = {""};
};
