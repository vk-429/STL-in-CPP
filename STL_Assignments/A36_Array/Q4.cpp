#include<iostream>
#include<array>
#include<utility>
using namespace std;

int main()
{
    array<int,10> arr={1,2,3,4,5,6,7,8,9,0};
    cout<<"Enter index : ";
    int index;
    cin>>index;
    cout<<"arr["<<index<<"] = "<<arr[index]<<'\n';
    cout<<"arr["<<index<<"] = "<<arr.at(index)<<'\n';
    cout<<"arr["<<index<<"] = "<<get<5>(arr)<<'\n';
    // get<key>(container)
    return 0;
}