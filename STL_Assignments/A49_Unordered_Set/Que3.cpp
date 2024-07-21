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
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            int target = (arr[i]^arr[j]);
            if(us.find(target) != us.end() && target != arr[i] && target != arr[j])
                ans++;
        }
    }
    cout<<ans/3<<"\n";
    return 0;
}