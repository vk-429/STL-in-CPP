#include <iostream>
#include <unordered_set>

using namespace std;

int main() 
{
    // Initialize two unordered_multisets with some values
    unordered_multiset<int> ums1 = {1, 2, 2, 3, 4};
    unordered_multiset<int> ums2 = {5, 6, 7, 8, 8, 9};

    // Print the original elements of ums1
    cout << "Elements of ums1 before swap: ";
    for (const int& elem : ums1)
        cout << elem << " ";
    cout << "\n";

    // Print the original elements of ums2
    cout << "Elements of ums2 before swap: ";
    for (const int& elem : ums2)
        cout << elem << " ";
    cout << "\n";

    // Swap the elements of ums1 and ums2
    ums1.swap(ums2);

    // Print the elements of ums1 after swap
    cout << "Elements of ums1 after swap: ";
    for (const int& elem : ums1)
        cout << elem << " ";
    cout << "\n";

    // Print the elements of ums2 after swap
    cout << "Elements of ums2 after swap: ";
    for (const int& elem : ums2)
        cout << elem << " ";
    cout << "\n";

    return 0;
}
