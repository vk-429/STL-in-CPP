#include<iostream>
#include<utility>
#include<vector>
using namespace std;

int main()
{
    int n;
    cout<<"Enter No. of Pairs : ";
    cin>>n;
    vector<pair<int,int>> vec;
    cout<<"Enter Pairs : ";
    for(int i=0;i<n;i++)
    {
        int x,y;
        cin>>x>>y;
        vec.push_back(make_pair(x,y));
    }
    vector<bool> ans;
    for(int i=0;i<n;i++)
    {
        int a=vec[i].first;
        int b=vec[i].second;
        int suma=0,sumb=0;
        for(int j=1;j<=a/2;j++)
            if(a%j==0)suma+=j;
        for(int j=1;j<=b/2;j++)
            if(b%j==0)sumb+=j;
        if(suma==(b+1) && sumb==(a+1))
            ans.push_back(true);
        else
            ans.push_back(false);
    }
    for(int i=0;i<n;i++)
    {
        if(ans[i]==true)
            cout<<vec[i].first<<" and "<<vec[i].second<<" are Betrothed Numbers.\n";
        else
           cout<<vec[i].first<<" and "<<vec[i].second<<" are not Betrothed Numbers.\n"; 
    }
    return 0;
}