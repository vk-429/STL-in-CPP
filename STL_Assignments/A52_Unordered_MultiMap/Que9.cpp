#include<iostream>
#include<unordered_map>
#include<unordered_set>
using namespace std;

int main()
{
    int arr[] = {1,2,4,16,8,64,32,144,12,17,289};
    int n = sizeof(arr)/sizeof(arr[0]);
    unordered_set<int> uset;
    for(int i=0;i<n;i++)
        uset.emplace(arr[i]);
    int count = 0;
    for(int i=0;i<n;i++)
    {
        if(uset.find(arr[i]*arr[i]) != uset.end())
            count++;
    }
    cout<<count<<"\n";
    return 0;
}