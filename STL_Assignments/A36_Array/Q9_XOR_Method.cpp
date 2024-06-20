#include<iostream>
#include<array>
using namespace std;

int main()
{
    array<int,20> arr={1,1,2,2,3,3,3,3,4,4,8,8,9};
    int result = 0;
    for(auto&i:arr)
        result=result^i;
    cout<<"Ans = "<<result<<"\n";
    return 0;
}
