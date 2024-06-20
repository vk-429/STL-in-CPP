#include<iostream>
#include<set>
using namespace std;

int main()
{   
    int n;
    cout<<"Enter no of Elements : ";
    cin>>n;
    multiset<int> ms;
    cout<<"Enter Elements : ";
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        ms.emplace(x);
    }
    multiset<int>:: iterator it;
    it=ms.begin();
    if(it!=ms.end())
        cout<<"First Element = "<<*it<<"\n";
    else
        cout<<"\nMultiset is Empty!\n";
    
    return 0;
}