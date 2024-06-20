#include <iostream>
using namespace std;
#include <list>

int main() {
    // Initialize a list with consecutive duplicate elements
    list<int> mylist = {1, 2, 2, 3, 3, 3, 2, 4, 4, 5};
    for (int x : mylist) {
        cout << x << " ";
    }cout<<"\n";
    // Remove consecutive duplicates
    mylist.unique(); // Removes only adjacent duplicates

    // Output the elements of mylist
    cout << "Elements of mylist after unique(): ";
    for (int x : mylist) {
        cout << x << " ";
    }

    return 0;
}
