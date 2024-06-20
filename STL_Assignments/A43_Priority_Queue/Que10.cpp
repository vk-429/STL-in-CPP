#include<iostream>
#include<queue>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    priority_queue<int> q;
    int x;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        q.push(x);
    }
    int sum=0;
    int count=0;
    while(!q.empty() && k>sum)
    {
        sum+=q.top();
        q.pop();
        count++;
    }
    if(sum>=k)
        cout<<count<<"\n";
    else
        cout<<"-1\n";
    return 0;
}