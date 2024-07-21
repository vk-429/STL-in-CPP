#include <iostream>
#include <unordered_map>
using namespace std;


int main() 
{
    // Using assignment operator with an initializer list
    unordered_map<int, std::string> map1 = {
        {1, "one"},
        {2, "two"},
        {3, "three"}
    };

    // Printing the elements of map1
    cout << "Map1 elements:" << "\n";
    for (const auto& pair : map1)
        cout << pair.first << ": " << pair.second << "\n";
    

    // Using subscript operator to add elements
    unordered_map<int, string> map2;
    map2[4] = "four";
    map2[5] = "five";
    map2[6] = "six";

    // Printing the elements of map2
    cout << "Map2 elements:" << "\n";
    for (const auto& pair : map2) 
        cout << pair.first << ": " << pair.second << "\n";

    return 0;
}
