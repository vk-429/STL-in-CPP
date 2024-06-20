#include<iostream>
#include<set>
using namespace std;

/*

The upper bound of a given value in a sorted container 
is the first element that is greater than the specified value.

*/

int main()
{
    set<int> myset;
    myset.insert(10);
    myset.insert(20);
    myset.insert(30);
    myset.emplace(2);
    myset.emplace(8);
    myset.emplace(6);

    int desired_element;
    desired_element=20;
    set<int>::iterator it = myset.upper_bound(desired_element);
    if(it != myset.end())
        cout<<"Upper bound of "<<desired_element<<" is "<<*it<<"\n";
    else
        cout << "No element in the set is greater than " << desired_element<<"\n";
    return 0;
}