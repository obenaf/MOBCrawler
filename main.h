//
// Created by obena on 16-May-19.
//
#include <string>

using namespace std;

#ifndef MOBCRAWLER_MAIN_H
#define MOBCRAWLER_MAIN_H

class combatant {
    int initiative, HP, AC;
    string name;

public:
    void setStats(string, int, int, int);
    void changeHP(int);


};

#endif //MOBCRAWLER_MAIN_H
