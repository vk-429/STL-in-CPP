#include<iostream>
#include<vector>
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
    for(i=0;i<n-2;i++)
    {
        for(j=i+1;j<n-1;j++)
        {
            for(k=j+1;k<n;k++)
            {
                if(((vec[i].first!=vec[j].first) && (vec[j].first!=vec[k].first))||((vec[i].second!=vec[j].second) && (vec[j].second!=vec[k].second)))
                    ans++;
            }
        }
    }
    cout<<ans<<"\n";
    return 0;
}