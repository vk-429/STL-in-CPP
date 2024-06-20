#include<iostream>
#include<queue>
using namespace std;

int main()
{
    queue<char> q1;
    q1.push('a');
    q1.push('b');
    q1.push('c');
    q1.push('d');
    q1.push('e');
    q1.push('f');
    q1.push('g');
    while(!q1.empty())
    {
        cout<<q1.front()<<" ";
        q1.pop();
    }
    return 0;
}