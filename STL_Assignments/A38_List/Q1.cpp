/*
1. Capacity:

* empty(): Checks whether the list is empty.
* size(): Returns the number of elements in the list.
* max_size(): Returns the maximum possible size of the list.

2. Element Access:

* front(): Accesses the first element.
* back(): Accesses the last element.

3. Modifiers:

* assign(): Assigns new contents to the list from iterators or initializer list.
* push_front(const T& value), push_front(T&& value): Inserts an element at the beginning.
* pop_front(): Removes the first element.
* push_back(const T& value), push_back(T&& value): Inserts an element at the end.
* pop_back(): Removes the last element.
* insert(): Inserts elements at a specified position.
* erase(): Erases elements from a specified position or range.
* swap(list& other) noexcept: Swaps the contents of two lists.
* resize(): Changes the size of the list.
* clear(): Removes all elements from the list.

4. Operations:

* splice(): Transfers elements from one list to another.
* remove(const T& value): Removes all elements equal to a given value.
* remove_if(): Removes elements that satisfy a given condition.
* unique(): Removes consecutive duplicate elements.
* merge(): Merges two sorted lists into one sorted list.
* sort(): Sorts the elements of the list.
* reverse(): Reverses the order of elements in the list.

*/


#include<iostream>
#include<list>
using namespace std;

int main()
{
    list<int> l;

    if(l.empty())
        cout<<"List is Empty\n";
    else
        cout<<"List is not Empty\n";
    l.push_back(10);
    l.push_back(20);
    l.push_front(5);
    l.push_front(2);
    l.emplace_back(40);
    l.emplace_front(50);

    cout<<"List Elemetns after push_front() push_back() :-\n";
    for(auto& x:l)
        cout<<x<<" ";
    cout<<'\n';

    list<int>::iterator it;
    it = l.begin();
    l.insert(it,100);
    l.insert(it,200);
    it++;
    l.insert(it,300);
    l.pop_back();
    l.pop_front();
    for(auto& x:l)
        cout<<x<<" ";
    cout<<'\n';

    list<int> l2;
    l2.assign(5,100);
    for(auto& x:l2)
        cout<<x<<" ";
    cout<<'\n';

    l.merge(l2);
    for(auto& x:l)
        cout<<x<<" ";
    cout<<'\n';

    l.erase(it);
    for(auto& x:l)
        cout<<x<<" ";
    cout<<'\n';
    return 0;
}