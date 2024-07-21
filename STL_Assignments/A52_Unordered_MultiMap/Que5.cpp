#include<unordered_map>
#include<unordered_set>
#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n;
    cout<<"Enter n : ";
    cin>>n;
    int i;

    cout<<"Enter Array Elements :-\n";
    vector<int> a(n);
    for(i=0;i<n;i++) cin>>a[i];

    cout<<"Enter X, Y and K : ";
    int x,y,k;
    cin>>x>>y>>k;
    unordered_map<int,int> freq;
    for(i=0;i<n;i++) freq[a[i]]++;
    int ans = 0;
    for(i=0;i<n-1;i++)
    {
        freq[a[i]]--;
        ans += freq[(k-(a[i]*x))/y];
    }
    cout<<ans<<"\n";
    return 0;
}