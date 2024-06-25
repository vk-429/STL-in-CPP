#include<iostream>
#include<utility>
#include<algorithm>
#include<vector>
using namespace std;

bool comparePairs(const pair<int, int>& p1, const pair<int, int>& p2) 
{
    return p1.first < p2.first || (p1.first == p2.first && p1.second < p2.second);
}

int main()
{
    vector<pair<int,int>> vec;
    vec.push_back(make_pair(1,0));
    vec.push_back(make_pair(1,1));
    vec.push_back(make_pair(2,3));
    vec.push_back(make_pair(3,4));
    vec.push_back(make_pair(4,5));
    vec.push_back(make_pair(6,7));
    sort(vec.begin(),vec.end(),comparePairs);
    vector<pair<int,int>>:: iterator it;
    it = lower_bound(vec.begin(),vec.end(),make_pair(0,0));
    if(it!=vec.end())
        cout<<"Lower Bound : "<<it->first<<" "<<it->second<<"\n";
    else
        cout<<"Lower Bound Not Found!\n";

    it = upper_bound(vec.begin(),vec.end(),make_pair(1,0));
    if(it!=vec.end())
        cout<<"Upper Bound : "<<it->first<<" "<<it->second<<"\n";
    else
        cout<<"Upper Bound Not Found!\n";
    return 0;
}