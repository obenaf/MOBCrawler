#include <iostream>
#include <vector>
#include <algorithm>
#include <windows.h>

#include "main.h"
using namespace std;

void initInputs(combatant[], int);
void clearScreen();

int main() {
    int charCount;
    printf("Welcome to MOBCrawler!\n Press any key to begin...\n");
    cin.get();

    clearScreen();

    printf("Please enter number of combatants: ");
    cin >> charCount;
    printf("Please enter combatant stats in the following manner:\n");


    combatant character[charCount];
    initInputs(character, charCount);




    return 0;
}

void initInputs(combatant character[], int charCount) {
    //This is broken with incorrect inputs
    string iName;
    int iInitiative, iHP, iAC;
    for(int i = 0; i < charCount; i++) {
        bool iFlag = TRUE;
        while(iFlag) {//Waits for successful input

            printf("\n[Name] [Init] [HP] [AC]\n");
            printf("e.g. \"obenaf 18 54 16\" \n");
            printf("Character %i:", i);
            cin >> iName >> iInitiative >> iHP >> iAC;

            if(cin.fail()) {//Checks for incorrect cin
                cin.clear();
                printf("User input is incorrect, please try again!\n");
            }
            else {//If successful
                  //Add to class and bail out of loop
                character[i].setStats(iName, iInitiative, iHP, iAC);
                cout << iName << " has been successfully added!\n";
                clearScreen();
                iFlag = FALSE;
            }
        }
    }
}

void clearScreen() {
    cout << string(64, '\n');
}