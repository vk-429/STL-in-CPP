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
    q1.pop();
    while(!q1.empty())
    {
        cout<<q1.front()<<" ";
        q1.pop();
    }
    return 0;
}