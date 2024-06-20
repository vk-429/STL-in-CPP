#include<iostream>
#include<stack>
#include<queue>
using namespace std;

int main()
{
    stack<int> st1;
    st1.push(2);
    st1.push(4);
    st1.push(3);
    st1.push(10);
    st1.push(7);
    int size=st1.size();
    stack<int> st2,st3;
    for(int i=0;i<size;i++)
    {
        if(!st1.empty())
        {
            st2.push(st1.top());
            st1.pop();
        }
        while(!st1.empty())
        {
            if(st1.top()<st2.top())
            {
                st3.push(st2.top());
                st2.pop();
                st2.push(st1.top());
                st1.pop();
            }
            else
            {
                st3.push(st1.top());
                st1.pop();
            }
        }
        st1.swap(st3);
    }
    st1.swap(st2);
    while(!st1.empty())
    {
        cout<<st1.top()<<" ";
        st1.pop();
    }
    cout<<"\n";
    return 0;
}