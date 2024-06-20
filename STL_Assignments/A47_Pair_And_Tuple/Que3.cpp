#include<iostream>
#include<deque>
#include<utility>
using namespace std;

int main()
{
    deque<pair<int,int>> dp;
    dp.push_back({1,2});
    dp.push_back({2,3});
    dp.push_back({3,4});
    dp.push_back({4,5});
    for(auto &x:dp)
        cout<<x.first<<" "<<x.second<<"\n";
    cout<<"\n";
    return 0;
}