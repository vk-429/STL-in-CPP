#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> vec;
    vec.push_back(15);
    vec.push_back(20);
    vec.push_back(50);
    vec.push_back(70);
    vec.push_back(90);
    for(auto& x:vec)cout<<x<<" ";
    cout<<'\n';
    return 0;
}