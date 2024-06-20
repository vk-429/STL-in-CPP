#include<iostream>
#include<stack>
using namespace std;

int main()
{
    stack<int> stack1;
    stack<int> stack2;
    stack<int> stack3;
    stack1.push(2);
    stack1.push(5);
    stack1.push(10);
    stack1.push(20);
    stack1.push(15);
    while(!stack1.empty())
    {
        stack3.push(stack1.top());
        stack1.pop();
    }
    while(!stack3.empty())
    {
        stack2.push(stack3.top());
        stack3.pop();
    }
    while(!stack2.empty())
    {
        cout<<stack2.top()<<"\n";
        stack2.pop();
    }
    cout<<"\n";
    return 0;
}