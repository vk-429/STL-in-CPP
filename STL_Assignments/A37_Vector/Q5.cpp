#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector<int> vec{1,2,3,4,5,6,7,8,9,10};
    int mn=INT_MAX,mx=INT_MIN;
    for(auto&x:vec)
    {
        if(x<mn)mn=x;
        if(x>mx)mx=x;
    }
    cout<<"Largest Element : "<<mx<<"\n";
    cout<<"Smallest Element : "<<mn<<"\n";
    cout<<*max_element(vec.begin(),vec.end())<<"\n";
    cout<<*min_element(vec.begin(),vec.end())<<"\n";
    return 0;
}