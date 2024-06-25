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
    int key=3;
    cout<<"Find value with Key 3 :-\n";
    auto it=mp.find(key);
    if(it!=mp.end())
        cout<<it->first<<" "<<it->second<<"\n";
    else
        cout<<"Key Not Found!\n";

    key=5;
    cout<<"Find value with Key 5 :-\n";
    auto it1=mp.find(key);
    if(it1!=mp.end())
        cout<<it->first<<" "<<it->second<<"\n";
    else
        cout<<"Key Not Found!\n";
    return 0;
}