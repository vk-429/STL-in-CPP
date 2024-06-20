#include<iostream>
#include<vector>
#include<stack>
using namespace std;

int main()
{
    stack<int> s1;
    stack<int> s2;
    s1.push(4);
    s1.push(3);
    s1.push(1);
    s1.push(6);
    s1.push(7);
    s1.push(5);
    while(!s1.empty())
    {  
        int curr=s1.top();
        s1.pop();
        while(!s2.empty() && s2.top()>curr)
        {
            s1.push(s2.top());
            s2.pop();
        }
        s2.push(curr);
    }
    while(!s2.empty())
    {
       s1.push(s2.top());
            s2.pop();
    }
    while(!s1.empty())
    {
        cout<<s1.top()<<" ";
        s1.pop();
    }
    cout<<"\n";
    return 0;
}