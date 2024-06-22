#include<iostream>
#include<queue>
using namespace std;

int main()
{
    priority_queue<int> pq1;
    // Push a new Element
    pq1.push(2);
    pq1.push(1);
    pq1.push(5);
    pq1.push(3);
    pq1.push(7);
    
    // OR
    pq1.emplace(6);

    priority_queue<int> pq2;
    // Push a new Element
    pq2.push(12);
    pq2.push(11);
    pq2.push(51);
    pq2.push(77);
    
    // OR
    pq2.emplace(68);

    cout<<"Before Swapping :-\n";

    cout<<"\nPQ1 ;-\nSize : "<<pq1.size()<<"\n";
    cout<<"Empty Status : "<<pq1.empty()<<"\n";
    cout<<"Top Element : "<<pq1.top()<<"\n";

    cout<<"\nPQ2 ;-\nSize : "<<pq2.size()<<"\n";
    cout<<"Empty Status : "<<pq2.empty()<<"\n";
    cout<<"Top Element : "<<pq2.top()<<"\n";
    
    pq1.swap(pq2);

    cout<<"\nAfter Swapping :-\n";

    cout<<"\nPQ1 ;-\nSize : "<<pq1.size()<<"\n";
    cout<<"Empty Status : "<<pq1.empty()<<"\n";
    cout<<"Top Element : "<<pq1.top()<<"\n";

    cout<<"\nPQ2 ;-\nSize : "<<pq2.size()<<"\n";
    cout<<"Empty Status : "<<pq2.empty()<<"\n";
    cout<<"Top Element : "<<pq2.top()<<"\n";

    cout<<"\nElements : \n";

    while(!pq1.empty())
    {
        cout<<pq1.top()<<" ";
        pq1.pop();
    }
    cout<<"\n";
    while(!pq2.empty())
    {
        cout<<pq2.top()<<" ";
        pq2.pop();
    }
    return 0;
}