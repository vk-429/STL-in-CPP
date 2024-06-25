#include<iostream>
#include<map>
#include<vector>
using namespace std;

int main()
{
    vector<int> a;
    multimap<int,int> m1;
    for(int i=1;i<=10;i++)
        a.push_back(i);
    for(int i=0;i<10;i++)
        m1.emplace(a[i],i);
    cout<<"Vector elements :-\n";
    for(auto x:a)
        cout<<x<<" ";
    cout<<"\n\n";
    cout<<"Multimap Elements :-\n";
    for(auto x:m1)
        cout<<x.first<<" "<<x.second<<"\n";

    int key=5;
    bool isErased = m1.erase(key);
    if(isErased)
        cout<<"Erased "<<key<<"\n";
    else
        cout<<"Key Not Found!\n";

    cout<<"\n\n";
    cout<<"Multimap Elements :-\n";
    for(auto x:m1)
        cout<<x.first<<" "<<x.second<<"\n";
    return 0;
}