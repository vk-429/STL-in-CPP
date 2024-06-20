#include<iostream>
#include<map>
using namespace std;

int main()
{
    map<int,int> mp;
    int i,j;
    for(i=1;i<=1000;i++)
        mp[i]=(i*i*i);
    int n;
    cout<<"Enter the Number : ";
    cin>>n;
    int flag=0;
    for(i=1;i<=999;i++)
    {
        for(j=i+1;j<=1000;j++)
        {
            if(mp[j]-mp[i] == n)
            {
                flag=1;
                break;
            }
        }
    }
    if(flag)
        cout<<"Yes\n";
    else
        cout<<"No\n";
    return 0;
}