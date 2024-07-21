#include <iostream>
#include <unordered_set>

using namespace std;

int main() 
{
    // Initialize an unordered_multiset with some values
    unordered_multiset<int> ums = {1, 2, 2, 3, 4, 4, 4, 5};

    // Element to be searched
    int element_to_find = 4;

    // Use find() to search for the element in the unordered_multiset
    auto it = ums.find(element_to_find);

    // Check if the element was found
    if (it != ums.end())
        cout << "Element " << element_to_find << " found in the unordered_multiset.\n";
    else
        cout << "Element " << element_to_find << " not found in the unordered_multiset.\n";

    // Try to find an element that doesn't exist
    element_to_find = 6;
    it = ums.find(element_to_find);

    if (it != ums.end())
        cout << "Element " << element_to_find << " found in the unordered_multiset.\n";
    else
        cout << "Element " << element_to_find << " not found in the unordered_multiset.\n";

    return 0;
}
