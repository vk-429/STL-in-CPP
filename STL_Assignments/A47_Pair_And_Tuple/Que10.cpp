#include<iostream>
#include<utility>
#include<vector>
#include<math.h>
#include<algorithm>
using namespace std;

double distance(double x,double y)
{
    return sqrt((x*x)+(y*y));
}  

bool comparebydistance(pair<int,int>&p1, pair<int,int>& p2)
{
    return distance(p1.first,p1.second)<distance(p2.first,p2.second);
}

int main()
{
    int n;
    cout<<"Enter Total No. of Points : ";
    cin>>n;
    vector<pair<int,int>> vec;
    cout<<"Enter Coordinates of Each Point : ";
    for(int i=0;i<n;i++)
    {
        int x,y;
        cin>>x>>y;
        vec.push_back(make_pair(x,y));
    }
    sort(vec.begin(),vec.end(),comparebydistance);
    cout<<"Taking Refrence Point as Origin(0,0) these are the sorted order of pairs :-\n";
    for(int i=0;i<n;i++)
        cout<<"("<<vec[i].first<<", "<<vec[i].second<<") , distance = "<<distance(vec[i].first,vec[i].second)<<"\n";
    
    return 0;
}