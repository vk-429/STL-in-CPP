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
    int key=1;
    cout<<"Erasing All entries of Key 1 :-\n";
    mp.erase(1);
    for(auto x:mp)
        cout<<x.first<<" "<<x.second<<"\n";
    cout<<"\n";
    return 0;
}