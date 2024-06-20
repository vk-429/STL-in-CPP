#include<iostream>
#include<utility>
#include<vector>
#include<algorithm>
using namespace std;

bool customComparator1(const pair<int, int>& a, const pair<int, int>& b) 
{
    return a.first < b.first;  // First element in ascending order
}

bool customComparator2(const pair<int, int>& a, const pair<int, int>& b)
{
    return a.second>b.second;
}
int main()
{
    vector<pair<int,int>> vp;
    vp={{1,3},{5,6},{8,5},{3,2},{7,4}};
    sort(vp.begin(),vp.end(),customComparator1);

    for(const auto&x:vp)
    {
        cout<<x.first<<" "<<x.second<<"\n";
    }

    cout<<"\n";
    sort(vp.begin(),vp.end(),customComparator2);

    for(const auto&x:vp)
    {
        cout<<x.first<<" "<<x.second<<"\n";
    }

    return 0;
}