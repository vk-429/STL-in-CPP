#include<iostream>
#include<unordered_set>
using namespace std;

bool subArrayExists(int arr[], int size)
{
    unordered_set<int> sumset;
    int sum=0;
    for(int i=0;i<size;i++)
    {
        sum += arr[i];
        if(sum == 0 || sumset.find(sum) != sumset.end())
            return true;
        sumset.emplace(sum);
    }
    return false;
}

int main()
{
    int arr[] = {4,2,-3,1,6};
    int n = sizeof(arr)/sizeof(arr[0]);

    if(subArrayExists(arr,n))
        cout<<"True\n";
    else
        cout<<"False\n";
    return 0;
}