#include <map>
#include <iostream>
#include <string>

using namespace std;

int main() {
    typedef map<string, int> mapType;
    mapType populationMap;
    populationMap.insert(pair<string, int>("Maharashtra", 847654));
    populationMap.insert(pair<string, int>("Punjab", 645652));
    populationMap.insert(pair<string, int>("Rajasthan", 543213));
    populationMap.insert(pair<string, int>("Bihar", 3423648));
    populationMap.insert(pair<string, int>("Kerala", 848748));
    populationMap.insert(pair<string, int>("Goa", 646351));

    mapType::iterator iter;

    cout << "++++++++++++++++++++ POPULATION MAP +++++++++++++++++++++++++\n";
    cout << "Size of populationMap: " << populationMap.size() << "\n";

    string state_name;

    do {
        cout << "Enter the name of the state (with first letter capital): ";
        cin >> state_name;
        iter = populationMap.find(state_name);
        if (iter != populationMap.end()) {
            cout << state_name << "'s population is " << iter->second << endl;
        } else {
            cout <<state_name<<" Not present,Try again.\n";
        }
    } while (iter == populationMap.end());

    populationMap.clear();

    return 0;
}

