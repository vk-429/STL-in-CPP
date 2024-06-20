#include<iostream>
#include<list>
#include<vector>
using namespace std;

int main()
{
    vector<int> myvec={1,2,3,4,5};
    list<int> mylist(myvec.begin(),myvec.end());
    for(int x:mylist)cout<<x<<" ";
    cout<<"\n";
    int arr[] = {10,20,30,40,50};
    mylist.assign(arr,arr+5);
    for(int x:mylist)cout<<x<<" ";
    cout<<"\n";
    return 0;
}