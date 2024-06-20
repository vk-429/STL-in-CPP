#include<iostream>
#include<map>
using namespace std;

class sortbyvalue
{
    public:
        bool operator()(map<string,int>& mp1,map<string,int>&mp2)
        {
            map<string,int>::iterator it1,it2;
            it1=mp1.begin();
            it2=mp2.begin();
            return it1->second>it2->second;
        }
};

int main()
{
    map<string,int,sortbyvalue> mp;
    
    mp.insert({"Varanasi",1});
    mp.insert({"Lucknow",5});
    mp.insert({"Gorakhpur",3});
    mp.insert({"Kanpur",4});
    mp.insert({"Prayagraj",2});
    for(auto&x:mp)
        cout<<"("<<x.first<<", "<<x.second<<")"<<"\n";
    return 0;
}