#include<iostream>
#include<map>
#include<string>
using namespace std;

int main()
{
    map<string,int> mp;
    mp.insert({"Mukul",1});
    mp.insert({"Banti",4});
    mp.insert({"Sweta",3});
    mp.insert({"Shreya",5});
    mp.emplace("Vivek",2);
    for(auto&x:mp)
        cout<<x.first<<" "<<x.second<<"\n";
    cout<<"\n";
    return 0;
}