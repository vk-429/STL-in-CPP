#include<iostream>
#include<deque>
#include<vector>
using namespace std;

int main()
{
    int n,k;
    cout<<"Entr N and K (K<N): ";
    cin>>n>>k;
    deque<int> dq;
    for(int i=1;i<=n;i++)
        dq.push_back(i);
    vector<int> ans;
    for(int i=0;i<k/2;i++)
    {
        ans.push_back(dq.front());
        dq.pop_front();
        ans.push_back(dq.back());
        dq.pop_back();
    }
    if(k%2==1)          
    {
        while(!dq.empty())
        {
            ans.push_back(dq.front());
            dq.pop_front();
        }
    }
    else
    {
        while(!dq.empty())
        {
            ans.push_back(dq.back());
            dq.pop_back();
        }
    }
    for(auto&x:ans)
        cout<<x<<" ";
    cout<<"\n";
    return 0;
}