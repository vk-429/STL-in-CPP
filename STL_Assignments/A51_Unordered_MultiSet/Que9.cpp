#include <iostream>
#include <unordered_set>

using namespace std;

int main() {
    // Initialize an unordered_multiset with some values
    unordered_multiset<int> ums = {1, 2, 2, 3, 4, 4, 4, 5};

    // Get the load factor of the unordered_multiset
    double loadFactor = ums.load_factor();
    
    // Print the load factor
    cout << "Load factor of the unordered_multiset: " << loadFactor << "\n";

    return 0;
}
