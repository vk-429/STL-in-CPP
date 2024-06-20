#include<iostream>
#include<set>
#include<iterator>
using namespace std;

int main()
{
    set<int,greater<int>> s;
    
    s.insert(1);
    s.insert(4);
    s.insert(4);
    s.insert(3);
    s.insert(10);
    s.insert(5);
    
    for(auto&x:s)
    {
        cout<<x<<" ";
    }
    cout<<"\n";
    set<int> s2(s.begin(),s.end());
    set<int,greater<int>>::iterator x;
    for(x=s.begin();x!=s.end();x++)
    {
        cout<<*x<<" ";
    }
    cout<<"\n";
    set<int>::reverse_iterator y;
    for(y=s2.rbegin();y!=s2.rend();y++)
    {
        cout<<*y<<" ";
    }
    return 0;
}