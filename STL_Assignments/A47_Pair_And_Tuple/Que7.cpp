#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Comparison function for pair
bool comparePairs(const pair<int, int>& p1, const pair<int, int>& p2) 
{
    return p1.first < p2.first || (p1.first == p2.first && p1.second < p2.second);
}

// Lower bound for pairs
vector<pair<int, int>>::iterator lower_bound(
    vector<pair<int, int>>& vec, 
    const pair<int, int>& value
) 
{
    for (auto it = vec.begin(); it != vec.end(); ++it) 
    {
        if (!comparePairs(*it, value)) 
            return it;
    }
    return vec.end();
}

// Upper bound for pairs
vector<pair<int, int>>::iterator upper_bound(
    vector<pair<int, int>>& vec, 
    const pair<int, int>& value
) 
{
    for (auto it = vec.begin(); it != vec.end(); ++it) 
    {
        if (comparePairs(value, *it))
            return it;
    }
    return vec.end();
}

int main() 
{
    vector<pair<int, int>> vec = 
    {{1, 2}, {2, 3}, {2, 5}, {3, 4}, {4, 1}};

    // Sort the vector to use lower_bound and upper_bound
    sort(vec.begin(), vec.end(), comparePairs);

    pair<int, int> target = {2, 3};

    auto lb = lower_bound(vec, target);
    auto ub = upper_bound(vec, target);

    cout << "Lower bound of {" << target.first << ", " << target.second << "} is: {"<< lb->first << ", " << lb->second << "}\n";

    cout << "Upper bound of {" << target.first << ", " << target.second << "} is: {"<< ub->first << ", " << ub->second << "}\n";

    return 0;
}
