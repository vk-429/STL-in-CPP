#include<iostream>
#include<array>
using namespace std;

int main()
{
    array<int,10> arr={1,2,3,4,5,6,7,8,9,0};
    cout<<arr.size()<<endl;
    int count=0;
    for(auto i = arr.begin(); i != arr.end(); i++)
        count++;
    cout<<"Size = "<<arr.size()<<"\n";
    return 0;
}