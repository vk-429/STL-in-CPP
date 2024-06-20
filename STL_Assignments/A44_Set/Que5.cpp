#include<iostream>
#include<set>
using namespace std;

int main()
{
    set<int> myset;
    myset.insert(10);
    myset.insert(20);
    myset.insert(30);
    myset.emplace(2);
    myset.emplace(8);
    myset.emplace(6);

    myset.insert(20); // Trying inserting a duplicate element
    // Will not be inserted
    
    for(auto& x:myset)
    {
        cout<<x<<" ";
    }
    cout<<"\n";
    return 0;
}