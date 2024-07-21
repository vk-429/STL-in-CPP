#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
    // Initialize an unordered_multiset
    unordered_multimap<int,int> ums;

    // Print the initial bucket count
    cout << "Initial bucket count: " << ums.bucket_count() << "\n";

    // Reserve space for 10 elements
    ums.reserve(10);

    // Print the bucket count after reserving space
    cout << "Bucket count after reserving space for 10 elements: " << ums.bucket_count() << "\n";

    // Insert elements into the unordered_multiset
    for (int i = 1; i <= 10; ++i)
        ums.insert({i,i*i});

    // Print the elements in the unordered_multiset
    cout << "Elements in the unordered_multimap:-\n";
    for (auto& elem : ums)
        cout << elem.first << " "<<elem.second<<"\n";
    cout << "\n";

    // Print the final bucket count
    cout << "Final bucket count: " << ums.bucket_count() << "\n";

    return 0;
}
