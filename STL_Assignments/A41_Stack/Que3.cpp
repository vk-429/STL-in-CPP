#include<iostream>
#include<stack>
using namespace std;

int main()
{
    stack<int> s;
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(1);
    s.push(5);
    cout<<"Size = "<<s.size()<<"\n";
    stack<int> s2;
    s2.push(10);
    s2.push(12);
    s2.push(13);
    s2.push(15);
    s.swap(s2);
    s2.emplace(2);
    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<"\n";
    while(!s2.empty())
    {
        cout<<s2.top()<<" ";
        s2.pop();
    }
    cout<<"\n";
    return 0;
}