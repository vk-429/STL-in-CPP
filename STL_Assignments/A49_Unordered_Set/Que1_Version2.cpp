#include<iostream>
#include<unordered_set>
#include<vector>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    int i;
    vector<int> a(n);
    for(i=0;i<n;i++)cin>>a[i];
    int count=0;
    unordered_set<int> st;
    unordered_set<int> seen;
    for(auto num:a)
    {
        if(st.find(k-num) != st.end() && seen.find(num) == seen.end())
        {
            count++;
            seen.insert(num);
            seen.insert(k-num);
        }
        st.insert(num);
    }
    cout<<count<<"\n";
    return 0;
}