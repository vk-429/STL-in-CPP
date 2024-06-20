#include<iostream>
#include<queue>
using namespace std;

int main()
{
    queue<int> q1;
    q1.push(2);
    q1.push(1);
    q1.push(5);
    q1.push(3);
    q1.push(7);
    queue<int> q2;
    q2.push(4);
    q2.push(6);
    q2.push(11);
    q1.swap(q2);
    while(!q1.empty())
    {
        cout<<q1.front()<<" ";
        q1.pop();
    }
    cout<<"\n";
    while(!q2.empty())
    {
        cout<<q2.front()<<" ";
        q2.pop();
    }
    cout<<"\n";
    return 0;
}