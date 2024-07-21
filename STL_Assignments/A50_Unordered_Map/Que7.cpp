#include<iostream>
#include<unordered_map>
using namespace std;

int main()
{
    unordered_map<string,int> mp1;
    mp1.emplace("Varanasi",1);
    mp1.emplace("Bhopal",1);
    mp1.emplace("MP Nagar",2);
    mp1.emplace("Bomabay",2);
    mp1.emplace("Chennai",3);
    unordered_map<string,int> mp2(mp1);
    cout<<"Elements of first Map :-\n";
    for(auto& x : mp1)
        cout<<"("<<x.first<<", "<<x.second<<")\n";
    cout<<"\nAfter copying Elements of 2nd Map :-\n";
    for(auto& x : mp2)
        cout<<"("<<x.first<<", "<<x.second<<")\n";
    return 0;
}