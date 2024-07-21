#include<iostream>
#include<unordered_set>
#include<vector>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string s;
    unordered_set<string> us;
    for(int i=0;i<n;i++)
    { 
        cin>>s;
        us.emplace(s);
    }
    for(auto& s:us)
        cout<<s<<" ";
    cout<<"\n";
    return 0;
}