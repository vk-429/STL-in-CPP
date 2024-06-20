#include<iostream>
#include<set>
using namespace std;

int main()
{
    set<int> s;
    s.emplace(2);
    s.emplace(8);
    cout<<"Empty Status = "<<s.empty()<<"\n";
    s.erase(s.begin(),s.end());
    cout<<"Empty Status = "<<s.empty()<<"\n";
    cout<<"Inserting 5 Elements :- \n";
    s.emplace(10);
    s.emplace(30);
    s.emplace(50);
    s.emplace(20);
    s.emplace(40);
    cout<<"Size = "<<s.size()<<"\nEmpty Status : "<<s.empty()<<"\n";
    for(auto& x:s)
    {
        cout<<x<<" ";
    }
    cout<<"\n";
    return 0;
}