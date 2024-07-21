#include <iostream>
#include <unordered_set>

using namespace std;

int main() 
{
    // Initialize an unordered_multiset
    unordered_multiset<int> ums;

    // Use emplace() to add elements to the unordered_multiset
    ums.emplace(1);
    ums.emplace(2);
    ums.emplace(2); // Add duplicate
    ums.emplace(3);
    ums.emplace(4);
    ums.emplace(4); // Add duplicate
    ums.emplace(4); // Add duplicate

    // Print the elements of the unordered_multiset
    cout << "Elements of the unordered_multiset :-\n";
    for (const int& elem : ums)
        cout << elem << " ";
    cout << "\n";

    return 0;
}


// The emplace function in C++ constructs elements in-place within the container, directly using the provided arguments, which can improve efficiency by avoiding unnecessary copies or moves. The insert function, on the other hand, takes an existing element or range of elements and copies or moves them into the container.
