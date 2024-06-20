#include<iostream>
#include<map>
using namespace std;

int main()
{
    map<string,int> mp;
    mp.insert({"Mukul",1});
    mp.insert({"Banti",4});
    mp.insert({"Sweta",3});
    mp.insert({"Shreya",5});
    mp.emplace("Vivek",2);
     mp.emplace("Vivek",2);
     mp.insert({"Banti",4});
    for(auto &x:mp)
    {
        cout<<"Frequency of ("<<x.first<<", "<<x.second<<") = "<<mp.count(x.first)<<"\n";
    }
    cout<<"\n";
    return 0;
}