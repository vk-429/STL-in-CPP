#include<iostream>
#include<vector>
#include<numeric>
using namespace std;

int main()
{
    vector<int> vec{1,2,3,4,5,6,7,8,9,10};
    int sum=0;
    for(auto& x:vec)sum+=x;
    cout<<"sum = "<<sum<<'\n';
    int sum1 = accumulate(vec.begin(),vec.end(),0);
    cout<<"Sum = "<<sum1<<"\n";
    return 0;
}