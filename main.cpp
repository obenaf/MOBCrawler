#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Combatant {
    int initiative;
    int hP;
    int AC;
    string name;
};

void displayStats(const vector<Combatant> &combat);
bool combatSort(Combatant &a, Combatant &b);

int main() {
    int iCounter = 0;
    string iName;
    vector<Combatant> combat;

    combat.push_back(Combatant());

    cout << "Please enter combatants, type 'done' when finished.\n";
    while(true) {
        cout << "Enter name of combatant " << iCounter << ":";
        cin >> iName;
        //checks for end in name input
        if(iName == "done")
            break;
        combat[iCounter].name = iName;
        //TODO: input checking
        cout<< "\nEnter initiative: ";
        cin >> combat[iCounter].initiative;
        cout << "\nEnter current hitpoints: ";
        cin >> combat[iCounter].hP;
        cout << "\nEnter Armor Class: ";
        cin >> combat[iCounter].AC;
        combat.push_back(Combatant());
        iCounter++;
    }
    sort(combat.begin(), combat.end(), combatSort);

    displayStats(combat);

    return 0;
}

void displayStats(const vector<Combatant> &combat) {
    cout << string(64, '\n');
    for(int i = 1; i < combat.size(); i++) {
        cout << "Title: " << combat[i].name << "\n";
        cout << "Init: " << combat[i].initiative << "\n";
        cout << "hP: " << combat[i].hP << " AC: " << combat[i].AC;
        cout << "\n\n";
    }
}

bool combatSort(Combatant &a, Combatant &b) {
    return a.initiative < b.initiative;
}