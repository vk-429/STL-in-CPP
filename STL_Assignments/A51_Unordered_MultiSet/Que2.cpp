#include<iostream>
#include<unordered_set>
using namespace std;

int main()
{
    unordered_multiset<int> ums1 = {6,4,2,7,3,3,1,1,1};
    cout<<"Before deleting Copies :-\n";
    for(auto& x:ums1)
        cout<<x<<" ";
    cout<<"\n";

    unordered_multiset<int> to_keep;
    unordered_multiset<int> to_erase;

    for (auto it = ums1.begin(); it != ums1.end(); ++it) 
    {
        if (to_keep.count(*it) == 0)
            to_keep.insert(*it);
        else 
            to_erase.insert(*it);
    }

    for (auto& x : to_erase)
        ums1.erase(ums1.find(x));

    cout<<"Before deleting Copies :-\n";
    for(auto& x:ums1)
        cout<<x<<" ";
    cout<<"\n";
    return 0;
}