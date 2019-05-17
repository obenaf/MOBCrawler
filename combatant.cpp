//
// Created by obena on 16-May-19.
//
#include<string>

using namespace std;

#include "main.h"

void combatant::setStats(string iName, int iInitiative, int iHP, int iAC) {
    name = iName;
    initiative = iInitiative;
    HP = iHP;
    AC = iAC;
}

void combatant::changeHP(int change) {
    HP += change;
}