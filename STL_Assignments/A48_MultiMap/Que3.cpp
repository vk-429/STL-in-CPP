#include<iostream>
#include<map>
using namespace std;

int main()
{
    multimap<int,string> mp1,mp2;
    mp1.insert({1,"rohan"});
    mp1.insert({2,"vipin"});
    mp1.insert({3,"rama"});
    mp2.insert({1,"Manish"});
    mp2.insert({2,"Manoj"});
    mp2.insert({3,"Namrata"});
    cout<<"\nSwapping two multimaps :-\n";
    cout<<"Before swapping :-\n";
    for(auto&x:mp1)
        cout<<"("<<x.first<<", "<<x.second<<")\n";
    cout<<"\n";
    for(auto&x:mp2)
        cout<<"("<<x.first<<", "<<x.second<<")\n";
    mp1.swap(mp2);
    cout<<"After swapping :-\n";
    for(auto&x:mp1)
        cout<<"("<<x.first<<", "<<x.second<<")\n";
    cout<<"\n";
    for(auto&x:mp2)
        cout<<"("<<x.first<<", "<<x.second<<")\n";
    return 0;
}