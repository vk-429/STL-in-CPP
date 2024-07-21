#include<iostream>
#include<unordered_set>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int m,n;
    cout<<"Enter no. of rows and columns : ";
    cin>>m>>n;
    vector<vector<int>> mat(m);
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            int x;
            cin>>x;
            mat[i].push_back(x);
        }
    }
    unordered_set<int> min;
    for(int i=0;i<n;i++)
        min.emplace(*min_element(mat[i].begin(),mat[i].end()));
    for(int i=0;i<n;i++)
    {
        int maxi = mat[0][i];
        for(int j=1;j<m;j++)
            if(maxi<mat[j][i])maxi = mat[j][i];
        if(min.find(maxi)!=min.end())
            cout<<maxi<<" ";
    }
    return 0;
}