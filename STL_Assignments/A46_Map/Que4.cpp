#include<iostream>
#include<map>
#include<string>
using namespace std;

int main()
{
    map<int,string> mp;
    mp.insert({2,"Mukul"});
    mp.insert({4,"Banti"});
    mp.insert({3,"Sweta"});
    mp.insert({5,"Shreya"});
    mp.emplace(1,"Vivek");

    map<int,string>::iterator it;
    //it=mp.find(1);
   // mp.erase(it);
    //mp.insert({1,"Papa"});
    mp[1] = "Papa";
    for(auto&x:mp)
        cout<<x.first<<" "<<x.second<<"\n";
    cout<<"\n";
    return 0;
}