#include<iostream>
#include<unordered_map>
using namespace std;

int main()
{
    int arr[] = {22,22,115,115,115,7,313,313,17,17};
    int n = sizeof(arr)/sizeof(arr[0]);
    unordered_map<int,int> freq;
    for(int i=0;i<n;i++)
        freq[arr[i]]++;
    int ans;
    for(auto& x:freq)
        if(x.second == 1)
        {
            ans = x.first;
            break;
        }
    cout<<"Element with Single Occurence = "<<ans<<"\n";
    return 0;
}