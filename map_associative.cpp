#include<iostream>
#include<map>
#include<string>

using namespace std;

int main() {
    // Define a typedef for the map with string keys and integer values
    typedef map<string, int> mapType;

    // Create an instance of the map to store state populations
    mapType populationMap;

    // Insert population data for different states into the map
    populationMap.insert(pair<string, int>("Maharashtra", 7026357));
    populationMap.insert(pair<string, int>("Rajasthan", 6578936));
    populationMap.insert(pair<string, int>("Karnataka", 6678993));
    populationMap.insert(pair<string, int>("Punjab", 5789032));
    populationMap.insert(pair<string, int>("West Bengal", 6676291));

    // Declare an iterator for the map
    mapType::iterator iter;

    // Display a header for the population information
    cout << "========Population of states in India==========\n";

    // Display the size of the populationMap
    cout << "\n Size of populationMap: " << populationMap.size() << "\n";

    // Prompt the user to enter the name of a state
    string state_name;
    cout << "\n Enter the name of the state: ";
    cin >> state_name;

    // Search for the entered state in the populationMap
    iter = populationMap.find(state_name);

    // Check if the state is found and display the population
    if (iter != populationMap.end())
        cout << state_name << "'s population is " << iter->second;
    else
        cout << "State not found in the populationMap" << "\n";

    // Clear the populationMap
    populationMap.clear();

    return 0;
}

