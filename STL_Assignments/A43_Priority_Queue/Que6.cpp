#include<iostream>
#include<queue>
using namespace std;

int main()
{
    priority_queue<int,vector<int>,greater<int>> pq;
    // Push a new Element
    pq.push(2);
    pq.push(1);
    pq.push(5);
    pq.push(3);
    pq.push(7);
    
    // OR
    pq.emplace(6);
    cout<<"\nElements : Min Heap : Lowest Priority at Top\n";
    while(!pq.empty())
    {
        cout<<pq.top()<<" ";
        pq.pop();
    }
    return 0;
}