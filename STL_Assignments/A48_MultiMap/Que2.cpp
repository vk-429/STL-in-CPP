#include<iostream>
#include<map>
using namespace std;

int main()
{
    multimap<int,int> m1;
    m1.emplace(1,2);
    m1.emplace(1,2);
    m1.emplace(2,4);
    m1.emplace(7,2);
    m1.emplace(9,1);
    m1.emplace(11,12);
    m1.emplace(10,3);
    cout<<"First Map:-\n";
    for(auto x:m1)
        cout<<x.first<<" "<<x.second<<"\n";
    multimap<int,int> m2(m1.begin(),m1.end());
    cout<<"\nSecond Map:-\n";
    for(auto x:m2)
        cout<<x.first<<" "<<x.second<<"\n";
    return 0;
}