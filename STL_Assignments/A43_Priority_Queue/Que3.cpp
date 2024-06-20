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
    cout<<"Size : "<<pq.size()<<"\n";
    cout<<"Empty Status : "<<pq.empty()<<"\n";

    cout<<"Top Element : "<<pq.top()<<"\n";

    cout<<"\nElements : Lowest Priority at Top\n";
    while(!pq.empty())
    {
        cout<<pq.top()<<" ";
        pq.pop();
    }
    return 0;
}