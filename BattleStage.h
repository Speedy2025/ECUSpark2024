#pragma once

#include<iostream>
using namespace std;

//Controls the Flow of the Battle
bool BattleStage(int intEnemyCourse, int& intPlayerHealth);

//A practice question, returns if they want another
bool BattlePractice(int intEnemyCourse);

//The Main Battle Controller, returns if they won or lost
bool BattleActive(int intEnemyCourse, int& intPlayerHealth);