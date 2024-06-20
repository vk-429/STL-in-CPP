#include<iostream>
#include<queue>
#include<algorithm>
using namespace std;

int main()
{
    priority_queue<int> pq;
    // Push a new Element
    cout<<"Enter the size of the Array : ";
    int n;
    cin>>n;
    cout<<"Enter the Elements of the Array : \n";
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        pq.push(x);
    }
    int large=0;
    int s_large=0;
    while(pq.size()!=0 && pq.size()!=1)
    {
        large=pq.top();
        pq.pop();
        s_large=pq.top();
        pq.pop();
        if(s_large!=large)
            pq.push(large-s_large);
    }
    if(pq.size()==1)
        cout<<"Left Element = "<<pq.top()<<"\n";
    else   
        cout<<"-1\n"; 
    return 0;
}