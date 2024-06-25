#include<iostream>
#include<unordered_set>
#include<algorithm>
#include<vector>
using namespace std;

// Count of distinct pair sums in a given Array arr[] of size N, the task is to find the total
// number of unique pair sums possible from the array elements.

int main()
{
    int n;
    cin>>n;
    vector<int> vec;
    unordered_set<int> us;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        vec.push_back(x);
        us.emplace(x);
    }
    if(n<=1)
        cout<<"0\n";
    else
    {
        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                us.emplace(vec[i]+vec[j]);
            }
        }
        cout<<us.size()<<"\n";
    }
    return 0;
}