#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Comparator function to sort by first element in ascending and second element in descending
bool customComparator(const pair<int, int>& a, const pair<int, int>& b) 
{
    if (a.first == b.first)
        return a.second > b.second;  // Second element in descending order
    return a.first < b.first;  // First element in ascending order
}

// Function to find the length of the longest subsequence with the given conditions
int findLongestSubsequence(vector<pair<int, int>>& arr) 
{
    // Step 1: Sort the array with the custom comparator
    sort(arr.begin(), arr.end(), customComparator);

    // Step 2: Apply LIS on the second element in reverse order
    vector<int> lis;
    for (const auto& p : arr) 
    {
        int second = p.second;
        auto it = lower_bound(lis.begin(), lis.end(), second, greater<int>());
        if (it == lis.end()) 
            lis.push_back(second);
        else
            *it = second;
    }

    // for(auto&x:lis)
    //     cout<<x<<" ";
    // cout<<"\n";
    // The length of lis vector is the answer
    return lis.size();
}

int main() 
{
    vector<pair<int, int>> arr1 = {{1, 2}, {2, 2}, {3, 1}};
    cout << "Output: " << findLongestSubsequence(arr1) << "\n"; // Output should be 2

    vector<pair<int, int>> arr2 = {{1, 3}, {2, 5}, {3, 2}, {5, 2}, {4, 1}};
    cout << "Output: " << findLongestSubsequence(arr2) << "\n"; // Output should be 3
    return 0;
}
