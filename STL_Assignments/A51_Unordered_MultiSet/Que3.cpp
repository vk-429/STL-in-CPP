#include<iostream>
#include<unordered_set>
using namespace std;
using lli = long long int;

lli fact(int n)
{
    lli fact = 1;
    for(int i=2;i<=n;i++)
        fact*=i;
    return fact;
}

int main()
{
    int arr[] = {1,1,2,5,41};
    int n = sizeof(arr)/sizeof(arr[0]);
    unordered_multiset<int> ums(arr,arr+n);
    int ans = 0;
    if(n == 1)
    {
        if(arr[0] != 1) 
            ans=1;
    }
    else
    {
        ans = 2 - ums.count(1);
        for(int i=2;i<n;i++)
        {
            int catalan = (fact(2*i)/(fact(i+1)*fact(i)));
            if(ums.find(catalan) == ums.end())
                ans++;
        }
    }
    cout<<ans<<"\n";
    return 0;
}