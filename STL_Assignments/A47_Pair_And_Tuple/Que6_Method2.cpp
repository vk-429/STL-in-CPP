#include<iostream>
#include<utility>
#include<algorithm>
#include<list>
using namespace std;

bool comparePairs(const pair<int, int>& p1, const pair<int, int>& p2) 
{
    return p1.first < p2.first || (p1.first == p2.first && p1.second < p2.second);
}

int main()
{
    list<pair<int,int>> lip;
    lip.push_front(make_pair(1,0));
    lip.push_front(make_pair(1,1));
    lip.push_front(make_pair(2,3));
    lip.push_front(make_pair(3,4));
    lip.push_front(make_pair(4,5));
    lip.push_front(make_pair(6,7));
    lip.sort(comparePairs);
    list<pair<int,int>>:: iterator it;
    it = lower_bound(lip.begin(),lip.end(),make_pair(0,0));
    if(it!=lip.end())
        cout<<"Lower Bound : "<<it->first<<" "<<it->second<<"\n";
    else
        cout<<"Lower Bound Not Found!\n";

    it = upper_bound(lip.begin(),lip.end(),make_pair(1,0));
    if(it!=lip.end())
        cout<<"Upper Bound : "<<it->first<<" "<<it->second<<"\n";
    else
        cout<<"Upper Bound Not Found!\n";
    return 0;
}