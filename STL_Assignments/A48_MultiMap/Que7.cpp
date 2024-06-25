#include<iostream>
#include<map>
using namespace std;

int main()
{
     multimap<int,string> mp;

    mp.insert({1,"Varanasi"});
    mp.insert({2,"Mirzapur"});
    mp.insert({3,"Kanpur"});
    mp.emplace(4,"Lucknow");
    mp.emplace(1,"Mumbai");
    mp.emplace(2,"Chennai");
    cout<<"Elements :-\n";
    for(auto x:mp)
        cout<<x.first<<" "<<x.second<<"\n";
    cout<<"\n";
    cout<<"Find Lower Bound of key 1 :-\n";
    auto it = mp.lower_bound(1);
    if(it!=mp.end())
        cout<<it->first<<" "<<it->second<<"\n";
    else
        cout<<"Lower Bound not found!\n";
    return 0;
}