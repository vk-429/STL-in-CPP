#include <iostream>
#include <vector>
#include <tuple>
#include <algorithm>

using namespace std;

// Custom comparator for sorting tuples in descending order
bool compareTuples(const tuple<int, int>& a, const tuple<int, int>& b) 
{
    // Compare based on the first element of the tuple in descending order
    return get<0>(a) > get<0>(b);
}

int main() 
{
    vector<tuple<int, int>> vec = { make_tuple(3, 5), make_tuple(1, 2), make_tuple(4, 1), make_tuple(2, 2) };

    // Sorting vec in descending order using custom comparator
    sort(vec.begin(), vec.end(), compareTuples);

    // Output the sorted vector
    for (const auto& t : vec) 
        cout << "(" << get<0>(t) << ", " << get<1>(t) << ")" << endl;

    return 0;
}
