#include<iostream>
#include<set>
using namespace std;


int main()
{   
    multiset<int> ms;
    ms.emplace(2);
    ms.emplace(4);
    ms.emplace(1);
    ms.emplace(1);
    ms.emplace(3);
    ms.emplace(5);
    int element=1;
    cout<<"Initially Size = "<<ms.size()<<"\n";
    cout<<"Elements :-\n";
    for(auto&x:ms)
    {
        cout<<x<<" ";
    }
    cout<<"\n";
    cout<<"Removing Only the 1st Occurence of "<<element<<"\n";
    multiset<int>::iterator it=ms.find(element);
    if(it!=ms.end())
        ms.erase(it);
    cout<<"After Removing "<<element<<"\n";
    cout<<"Size = "<<ms.size()<<"\n";
    cout<<"Elements :-\n";
    for(auto&x:ms)
    {
        cout<<x<<" ";
    }
    cout<<"\n";
    return 0;
}