#include<iostream>
#include<unordered_set>
using namespace std;

int main()
{
    unordered_multiset<int> umset = {1, 2, 2, 3, 4, 5, 5, 5};

    // Print the elements of the unordered_multiset
    cout << "Elements of unordered_multiset:-\n";
    for (const int& elem : umset)
        cout << elem << " ";
    cout << "\n";

    return 0;
}

