#include<iostream>
#include<map>
using namespace std;

int main()
{
    multimap<int,string> mp;
    cout<<"Empty Status : "<<mp.empty()<<"\n";
    cout<<"Inserting Some Elements :-\n";
    mp.insert({1,"Varanasi"});
    mp.insert({2,"Mirzapur"});
    mp.insert({3,"Kanpur"});
    mp.emplace(4,"Lucknow");
    mp.emplace(1,"Mumbai");
    mp.emplace(2,"Chennai");
    cout<<"Empty Status : "<<mp.empty()<<"\n";
    cout<<"Elements :-\n";
    for(auto x:mp)
        cout<<x.first<<" "<<x.second<<"\n";
    return 0;
}