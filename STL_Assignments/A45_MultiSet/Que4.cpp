#include<iostream>
#include<set>
using namespace std;

int main()
{   
    multiset<int> ms;
    ms.emplace(2);
    ms.emplace(4);
    ms.emplace(1);
    ms.emplace(42);
    ms.emplace(21);
    ms.emplace(24);
    cout<<"Maximum no. of Elements that Multiset can Hold = "<<ms.max_size()<<"\n";
    cout<<"Size = "<<ms.size()<<"\n";
    cout<<"Elements :- \n";
    for(auto&x:ms)
    {
        cout<<x<<" ";
    }
    cout<<"\n";
    return 0;
}