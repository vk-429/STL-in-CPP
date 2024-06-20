#include<iostream>
#include<set>
using namespace std;

int main()
{   
    multiset<int> ms;
    cout<<"Size = "<<ms.size()<<"\n";
    cout<<"Inserting 1st Element \n";
    ms.insert(2);
    cout<<"Size = "<<ms.size()<<"\n";
    cout<<"Inserting 2nd Element \n";
    ms.insert(4);
    cout<<"Size = "<<ms.size()<<"\n";
    cout<<"Inserting 3rd Element \n";
    ms.insert(1);
    cout<<"Size = "<<ms.size()<<"\n";
    cout<<"Inserting 4th Element \n";
    ms.insert(42);
    cout<<"Size = "<<ms.size()<<"\n";
    cout<<"Inserting 5th Element \n";
    ms.insert(70);
    
    cout<<"Elements :- \n";
    for(auto&x:ms)
    {
        cout<<x<<" ";
    }
    cout<<"\n";
    return 0;
}