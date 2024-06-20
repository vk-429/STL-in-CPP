#include<iostream>
#include<queue>
using namespace std;

int main()
{
    queue<int> q;
    q.push(2);
    q.push(1);
    q.push(5);
    q.push(3);
    q.push(7);
    cout<<"Front Element : "<<q.front()<<"\n";
    cout<<"Rear Element : "<<q.back()<<"\n";
    cout<<"Empty : "<<q.empty()<<"\n";
    cout<<"Size : "<<q.size()<<"\n";
    return 0;
}