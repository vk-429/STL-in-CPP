#include<iostream>
#include<vector>
#include<utility>
#include<unordered_set>
#include<algorithm>
using namespace std;


int main()
{
    int n;
    cin>>n;
    vector<int> a,b;
    int i;
    for(i=0;i<n;i++)
    {
        int x;
        cin>>x;
        a.push_back(x);
    }
    for(i=0;i<n;i++)
    {
        int x;
        cin>>x;
        b.push_back(x);
    }
    vector<int> c;
    for(i=0;i<n;i++)
    {
        c.push_back(a[i]);
        c.push_back(b[i]);
    }
    sort(c.rbegin(),c.rend());
    unordered_set<int> st;
    i=0;
    while(i<2*n && st.size()!=n)
    {
        if(st.find(c[i]) == st.end())
            st.emplace(c[i]);
        i++;
    }
    if(st.size() != n)
    {
        cout<<"Not Possible to Construct Such Array!\n";
        return 0;
    }
    int j=0;
    vector<int> ans(n);
    for(i=0;i<n;i++)
    {
        if(st.find(b[i]) != st.end())
        {
            ans[j++] = b[i];
            st.erase(b[i]);
        }
    }
    for(i=0;i<n;i++)
    {
        if(st.find(a[i]) != st.end() )
        {
            ans[j++] = a[i];
            st.erase(a[i]);
        }
    }
    for(auto& x:ans)
        cout<<x<<" ";
    cout<<"\n";
    return 0;
}