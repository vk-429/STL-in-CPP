#include<iostream>
#include<unordered_map>
#include<algorithm>
#include<vector>
using namespace std;

int max_with_min(int *arr,int n)
{
    unordered_map<int,int> freq;
    for(int i=0;i<n;i++)
        freq[arr[i]]++;
    int min_freq = INT_MAX;
    int maxi = INT_MIN;
    for(auto& x:freq)
    {
        if(x.second < min_freq)
        {
            min_freq = x.second;
            maxi = x.first;
        }
        else if(x.second == min_freq)
        {
            if(x.first > maxi)
                maxi = x.first;
        }
    }
    return maxi;
}

int main()
{
    int arr[] = {2,2,2,5,5,1,1,50,50};
    int n = sizeof(arr)/sizeof(arr[0]);
    int ans = max_with_min(arr,n);
    cout<<"Maximum Element with Minimum Frequency = "<<ans<<"\n";
    return 0;
}