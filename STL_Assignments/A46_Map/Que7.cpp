#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

// Comparator function to sort pairs by second value in descending order
bool comparebyvalue(const pair<string, int>& p1, const pair<string, int>& p2) 
{
    return p1.second > p2.second;
}

int main() 
{
    // Define the map
    map<string, int> mp;
    mp["Varanasi"] = 1;
    mp["Lucknow"] = 5;
    mp["Gorakhpur"] = 3;
    mp["Kanpur"] = 4;
    mp["Prayagraj"] = 2;

    // Copy the map to a vector of pairs
    vector<pair<string, int>> vec(mp.begin(), mp.end());

    // Sort the vector by value in descending order
    sort(vec.begin(), vec.end(), comparebyvalue);

    // Print sorted elements
    for (const auto& x : vec) 
        cout << "(" << x.first << ", " << x.second << ")\n";

    return 0;
}
