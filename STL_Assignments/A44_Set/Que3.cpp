#include<iostream>
#include<set>
using namespace std;

int main()
{
    set<int> s;
    s.emplace(2);
    s.emplace(8);
    s.emplace(6);
    s.emplace(10);
    s.emplace(4);
    for(auto& x:s)
    {
        cout<<x<<" ";
    }
    cout<<"\n";
    cout<<"Size = "<<s.size()<<"\n";
    set<int>::iterator it1,it2;
    it1=s.begin();
    it2=s.begin();
    it2++;
    it2++;
    s.erase(10);
    s.erase(it1,it2);
    cout<<"After Erasing three element : \n";
    cout<<"Size = "<<s.size()<<"\n";
    for(auto& x:s)
    {
        cout<<x<<" ";
    }
    cout<<"\n";
    return 0;
}