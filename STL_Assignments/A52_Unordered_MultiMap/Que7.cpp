#include<iostream>
#include<vector>
#include<unordered_set>
#include<unordered_map>
using namespace std;

bool isPalindrome(int n)
{
    int i;
    int reverse = 0;
    int n_copy = n;
    while(n_copy)
    {
        reverse = (reverse*10)+(n_copy%10);
        n_copy/=10;
    }
    if(reverse == n)
        return true;
    return false;
}

int main()
{
    int n;
    cout<<"Enter Array Size : ";
    cin>>n;
    cout<<"Enter Array Elements :-\n";
    int i;
    vector<int> a(n);
    for(i=0;i<n;i++)cin>>a[i];
    unordered_multiset<int> candidates;
    unordered_set<int> seen;
    unordered_map<int,int> umap;
    for(i=0;i<n;i++)
    {
        if(a[i]<10)
            candidates.emplace(a[i]);
        else if(isPalindrome(a[i]))
            candidates.emplace(a[i]);
        else
            umap[a[i]]++;
    }
    int ans = 0;
    for(i=0;i<n-1;i++)
    {
        auto it = candidates.find(a[i]);
        if(it != candidates.end())
        {
            candidates.erase(it);
            if(seen.find(a[i]) == seen.end())
                ans += candidates.size();
            seen.emplace(a[i]);
        }
    }
    for(auto& x:umap)
        if(x.second>1) ans++;
    cout<<ans<<"\n";
    return 0;
}