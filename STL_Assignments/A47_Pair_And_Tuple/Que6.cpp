#include <iostream>
#include <list>
#include <algorithm>
using namespace std;

// Comparison function for std::pair
bool comparePairs(const pair<int, int>& p1, const pair<int, int>& p2) 
{
    return p1.first < p2.first || (p1.first == p2.first && p1.second < p2.second);
}

// Lower bound for pairs in a list
list<pair<int, int>>::iterator lower_bound(
    list<pair<int, int>>& lst, 
    const pair<int, int>& value
) 
{
    for (auto it = lst.begin(); it != lst.end(); ++it) 
    {
        if (!comparePairs(*it, value)) 
            return it;
    }
    return lst.end();
}

// Upper bound for pairs in a list
list<pair<int, int>>::iterator upper_bound(
    list<pair<int, int>>& lst, 
    const pair<int, int>& value
) 
{
    for (auto it = lst.begin(); it != lst.end(); ++it) 
    {
        if (comparePairs(value, *it))
            return it;
    }
    return lst.end();
}

int main() 
{
    list<pair<int, int>> lst = 
    {{-1, 2}, {2, 3}, {2, 5}, {3, 4}, {4, 1}};

    // Sort the list to use lower_bound and upper_bound
    lst.sort(comparePairs);

    pair<int, int> target = {0, 1};

    auto lb = lower_bound(lst, target);
    auto ub = upper_bound(lst, target);

    if (lb != lst.end()) 
    {
        cout << "Lower bound of {" << target.first << ", " << target.second << "} is: {"
                  << lb->first << ", " << lb->second << "}\n";
    } 
    else 
        cout << "Lower bound not found\n";

    if (ub != lst.end()) 
    {
        cout << "Upper bound of {" << target.first << ", " << target.second << "} is: {"
                  << ub->first << ", " << ub->second << "}\n";
    } 
    else 
        cout << "Upper bound not found\n";

    return 0;
}
