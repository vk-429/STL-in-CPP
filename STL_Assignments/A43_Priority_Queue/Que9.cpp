#include<iostream>
#include<queue>
#include<vector>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the Size of the Array : ";
    cin>>n;
    priority_queue<int,vector<int>,greater<int>> q1,q2,q3;
    cout<<"Enter the Elements of First Array : ";
    int x,i;
    for(i=0;i<n;i++)
    {
        cin>>x;
        q1.push(x);
    }
    cout<<"Enter the Elements of Second Array : ";
    for(i=0;i<n;i++)
    {
        cin>>x;
        q2.push(x);
    }
    cout<<"Enter the Elements of Third Array : ";
    for(i=0;i<n;i++)
    {
        cin>>x;
        q3.push(x);
    }
    int ans=0;
    while(!q1.empty() && !q2.empty() && !q3.empty())
    {
        while(!q2.empty() && q1.top()>=q2.top())
            q2.pop();
        while(!q3.empty() && q2.top()>=q3.top())
            q3.pop();
        if(q2.empty() || q3.empty())
            break;
        else
        {
            ans++;
            q1.pop();
            q2.pop();
            q3.pop();
        }
    }
    cout<<"No. of Maximum Triplet : "<<ans<<"\n";
    return 0;

}