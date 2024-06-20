#include<iostream>
#include<set>
using namespace std;

/*

The lower bound of a given value in a sorted container 
is the first element that is not less than 
(i.e., greater than or equal to) the specified value.

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
    desired_element=15;
    set<int>::iterator it = myset.lower_bound(desired_element);
    if(it != myset.end())
        cout<<"Lower bound of "<<desired_element<<" is "<<*it<<"\n";
    else
        cout << "No element in the set is greater than or equal to " << desired_element<<"\n";
    return 0;
}