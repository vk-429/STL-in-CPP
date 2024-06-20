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

    map<string,int>::reverse_iterator it;
    for(it=mp.rbegin();it!=mp.rend();++it)
    {
        cout<<it->first<<" "<<it->second<<"\n";
    }
    cout<<"\n";
    return 0;
}