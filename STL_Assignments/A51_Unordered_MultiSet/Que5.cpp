#include <iostream>
#include <unordered_set>
#include <unordered_map>

using namespace std;

int main() 
{
    // Initialize an unordered_multiset with some values, including duplicates
    unordered_multiset<int> ums = {1, 2, 2, 3, 3, 3, 4, 5, 5};

    // Create an unordered_map to store the frequency of each element
    unordered_map<int, int> frequency;

    // Count the frequency of each element in the unordered_multiset
    for (const int& elem : ums)
        frequency[elem]++;

    // Print the frequency of each element
    cout << "Element frequencies:\n";
    for (const auto& pair : frequency)
        cout << "Element: " << pair.first << ", Frequency: " << pair.second << "\n";

    return 0;
}
