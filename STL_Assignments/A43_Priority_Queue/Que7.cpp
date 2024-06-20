#include<iostream>
#include<queue>
#include<array>
using namespace std;

int main()
{
    priority_queue<int,vector<int>,greater<int>> pq;
    // Push a new Element
    array<int,3> a={5,6,8};
    array<int,3> b={4,7,8};
    for(int i=0;i<a.size();i++)pq.push(a[i]);
    for(int i=0;i<b.size();i++)pq.push(b[i]);
    while(!pq.empty())
    {
        cout<<pq.top()<<" ";
        pq.pop();
    }
    cout<<"\n";
    return 0;
}