#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector<int> vec{1,2,3,4,5,6,7,8,9,10};
    vector<int> vec2{4,7,9,2,20,15,40,11};
    vector<int> vec3;
    set_intersection(vec.begin(),vec.end(),vec2.begin(),vec2.end(),back_inserter(vec3));
    cout<<"Common Elements : ";
    for(auto& x:vec3)
        cout<<x<<" ";
    cout<<"\n";
    return 0;
}