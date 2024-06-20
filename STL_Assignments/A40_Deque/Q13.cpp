#include<iostream>
#include<deque>
#include<list>
using namespace std;

int main()
{
    list<int> l1={4,51,3,9,20,27,8,16,37,48,49};
    cout<<"List Before Segregation :-\n";
    for(auto&x:l1)
        cout<<x<<" ";
    cout<<"\n";
    deque<int> dq;
    for(auto&x:l1)
    {
        if(x%2==0) dq.push_front(x);
        else dq.push_back(x);
    }
    l1.clear();
    while(!dq.empty() && dq.front()%2==1)
    {
        l1.push_front(dq.front());
        dq.pop_front();
    }
    while(!dq.empty())
    {
        l1.push_front(dq.front());
        dq.pop_front();
    }
    cout<<"List After Segregation :-\n";
    for(auto&x:l1)
        cout<<x<<" ";
    cout<<"\n";
    return 0;
}