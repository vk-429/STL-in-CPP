#include<iostream>
#include<queue>
using namespace std;

int main()
{
    queue<int> q;
    q.push(2);
    q.push(3);
    if(q.size()==0)
        cout<<"Queue is Empty\n";
    else
        cout<<"Queue is not Empty\n";
    q.pop();
    q.pop();
    if(q.size()==0)
        cout<<"Queue is Empty\n";
    else
        cout<<"Queue is not Empty\n";
    return 0;

}