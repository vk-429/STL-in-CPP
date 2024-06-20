#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector<int> vec{1,2,3,4,5,6,7,8,9,10};
    cout<<"Enter element : ";
    int ele;
    cin>>ele;
    vector<int>::iterator it = find(vec.begin(),vec.end(),ele);
    if(it != vec.end())
        cout<<"Element Found at index = "<<(it-vec.begin())<<"\n";
    else cout<<"Element Not Found\n";
    return 0;
}