#include <iostream>
#include <unordered_set>

using namespace std;

int main() 
{
    // Initialize an unordered_multiset with some values
    unordered_multiset<int> ums = {1,1,1,2,4,5,7,8,9,10,11};

    // Get the number of buckets in the unordered_multiset
    size_t bucketCount = ums.bucket_count();

    // Print the number of buckets
    cout << "Number of buckets in the unordered_multiset: " << bucketCount << "\n";

    // Print the elements in each bucket
    for (size_t i = 0; i < bucketCount; ++i) 
    {
        cout << "Bucket " << i << " contains: ";
        for (auto it = ums.begin(i); it != ums.end(i); ++it)
            cout << *it << " ";
        cout << "\n";
    }

    return 0;
}
