#include<iostream>
#include<vector>
#include<utility>
#include<algorithm>
using namespace std;

bool comparebyvalue(const pair<int,int>&p1, const pair<int,int>&p2)
{
    return p1.first<p2.first;
}

int main()
{
    int n,x;
    cin>>n>>x;
    vector<pair<int,int>> v;
    int i;
    for(i=0;i<n;i++)
    {
        int a;
        cin>>a;
        v.push_back(make_pair(a/x,i));
    }
    sort(v.begin(),v.end(),comparebyvalue);
    for(auto&x:v)
        cout<<(x.second+1)<<" ";
    cout<<"\n";
    return 0;
}