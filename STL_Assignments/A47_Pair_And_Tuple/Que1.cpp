#include<iostream>
#include<vector>
#include<list>
#include<utility>
using namespace std;

int main()
{
    int n;
    cout<<"Enter N : ";
    cin>>n;
    vector<pair<int,int>> vec;
    cout<<"Enter Elements of each Pair :-\n";
    int i,j,k;
    for(i=0;i<n;i++)
    {
        int x,y;
        cin>>x>>y;
        vec.push_back(make_pair(x,y));
    }
    int ans=0;
    list<int> l1,l2;
    for(auto&x:vec)
    {   
        l1.push_front(x.first);
        l2.push_front(x.second);
    }
    l1.unique();
    l2.unique();
    int unique=max(l1.size(),l2.size());
    cout<<ans<<"\n";
    return 0;
}