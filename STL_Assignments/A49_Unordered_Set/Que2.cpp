#include<iostream>
#include<unordered_set>
#include<vector>
using namespace std;

int main()
{
    vector<int> arr;
    arr = {2,6,9,12,17,22,31,32,35,42};
    int size = arr.size();
    unordered_set<int> us;
    for(int i=0;i<size;i++)
        us.emplace(arr[i]);
    for(int i=0;i<size-2;i++)
    {
        for(int j=i+1;j<size-1;j++)
        {
            auto it=us.find(2*arr[j]-arr[i]);
            if(it!=us.end())
                cout<<arr[i]<<" "<<arr[j]<<" "<<*it<<"\n";
        }
    }

    return 0;
}