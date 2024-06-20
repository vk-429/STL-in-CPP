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
    cout<<"Size = "<<s.size()<<"\n";
    s.erase(10);
    cout<<"After Erasing one element : ";
    cout<<"Size = "<<s.size()<<"\n";
    for(auto& x:s)
    {
        cout<<x<<" ";
    }
    cout<<"\n";
    return 0;
}