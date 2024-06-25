#include<iostream>
#include<unordered_set>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
        cin>>arr[i];
    sort(arr.begin(),arr.end());
    unordered_set<int> us;
    for(int i=0;i<n;i++)
        us.emplace(arr[i]);
    int ans=0;
    for(int i=0;i<n-2;i++)
    {
        for(int j=i+1;j<n-1;j++)
        {
            auto it=us.find(arr[i]+arr[j]);
            if(it!=us.end())
            {
                if((arr[i]^arr[j]^*it) == 0)
                    ans++;
            }
        }
    }
    cout<<ans<<"\n";
    return 0;
}