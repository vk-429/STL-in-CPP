#include<iostream>
#include<map>
#include <memory>
using namespace std;

int main()
{
    multimap<int,string> mp;

    cout<<"Initially Size : "<<mp.size()<<"\n";

    cout<<"Inserting 3 elements using insert() Function :-\n";
    mp.insert({1,"Varanasi"});
    mp.insert({2,"Mirzapur"});
    mp.insert({3,"Kanpur"});

    cout<<"Size = "<<mp.size()<<"\n";

    cout<<"We can also insert key-value pair with the help of emplace() function.\n";
    mp.emplace(4,"Lucknow");
    mp.emplace(5,"Mumbai");
    mp.emplace(6,"Chennai");

    cout<<"Size = "<<mp.size()<<"\n";

    //mp[2]="Chand"; // No [] operator
    // Because Key is not unique

    cout<<"Printing Elements with the help of Range for loop :-\n";
    for(auto&x:mp)
        cout<<"("<<x.first<<", "<<x.second<<")\n";
    cout<<"\n";

    cout<<"Find Upper Bound :-\n";

    auto itu=mp.upper_bound(1);
    if(itu!=mp.end())
        cout<<itu->first<<" "<<itu->second<<"\n";
    else
        cout<<"Upper Bound doesn't exist!\n";

    cout<<"Find Lower Bound :-\n";

    auto itl=mp.lower_bound(1);
    if(itl!=mp.end())
        cout<<itl->first<<" "<<itl->second<<"\n";
    else
        cout<<"Lower Bound doesn't exist!\n";


    multimap<int,string>::iterator it=mp.begin();
    cout<<"Printing Elements with the help of iterator :-\n";
    for(;it!=mp.end();it++)
        cout<<"("<<it->first<<", "<<it->second<<")\n";

    cout<<"Printing Elements with the help of reverse iterator :-\n";
    multimap<int,string>::reverse_iterator rit=mp.rbegin();
    for(;rit!=mp.rend();rit++)
        cout<<"("<<rit->first<<", "<<rit->second<<")\n";

    cout<<"Printing Elements with the help of const(read - only) iterator :-\n";
    multimap<int,string>::const_iterator cit=mp.cbegin();
    for(;cit!=mp.cend();cit++)
        cout<<"("<<cit->first<<", "<<cit->second<<")\n";

    cout<<"Maximum Size = "<<mp.max_size()<<"\n";
    
    it=mp.begin();
    it++;
    mp.erase(it);
    cout<<"Erasing Element 2 :-\n";
    for(auto&x:mp)
        cout<<"("<<x.first<<", "<<x.second<<")\n";

    cout<<"Erasing elements in a range :-\n";
    auto it1=mp.begin();
    it1++;
    auto it2=mp.begin();
    it2++;it2++;it2++;
    mp.erase(it1,it2);
    for(auto&x:mp)
        cout<<"("<<x.first<<", "<<x.second<<")\n";

    cout<<"Clearing All the Elements :-\n";
    mp.clear();
    for(auto&x:mp)
        cout<<"("<<x.first<<", "<<x.second<<")\n";
    
    multimap<int,string> mp1,mp2;
    mp1.insert({1,"rohan"});
    mp1.insert({2,"vipin"});
    mp1.insert({3,"rama"});
    mp2.insert({1,"Manish"});
    mp2.insert({2,"Manoj"});
    mp2.insert({3,"Namrata"});
    cout<<"\nSwapping two multimaps :-\n";
    cout<<"Before swapping :-\n";
    for(auto&x:mp1)
        cout<<"("<<x.first<<", "<<x.second<<")\n";
    cout<<"\n";
    for(auto&x:mp2)
        cout<<"("<<x.first<<", "<<x.second<<")\n";
    mp1.swap(mp2);
    cout<<"After swapping :-\n";
    for(auto&x:mp1)
        cout<<"("<<x.first<<", "<<x.second<<")\n";
    cout<<"\n";
    for(auto&x:mp2)
        cout<<"("<<x.first<<", "<<x.second<<")\n";

    cout<<"Search an element :-\n";
    auto search=mp1.find(2);
    if(search!=mp.end())
        cout<<"Element Found : ("<<search->first<<", "<<search->second<<")\n";
    else
        cout<<"Element Not Found!\n";

    cout<<"Count(No. of Ocuurence of a particular key) = "<<mp1.count(1)<<"\n";
    cout<<"Checking Empty Status : "<<mp1.empty()<<"\n";
    
    cout<<"\n\n";
    // 1. emplace_hint

    // The emplace_hint function is used to insert elements into the multimap 
    // by constructing them in place. It accepts a hint (an iterator pointing 
    // to the position where the element can be inserted), which can improve 
    // performance by avoiding the need for an extensive search.
    multimap<int, string> mp3;
    auto itr = mp3.emplace_hint(mp3.end(), 1, "Hello");
    itr=mp3.emplace_hint(itr, 2, "World");
    mp3.emplace_hint(itr,3,"Bye");
    cout << "After emplace_hint:\n";
    for (const auto &x : mp3)
        cout << "(" << x.first << ", " << x.second << ")\n";
    cout << "\n";

    // 2. equal_range
    mp3.insert({2, "Another World"});
    auto range = mp3.equal_range(2);
    cout << "Elements with key 2 (using equal_range):\n";
    for (auto it = range.first; it != range.second; ++it)
        cout << "(" << it->first << ", " << it->second << ")\n";
    cout << "\n";

    // 3. key_comp
    auto key_comp = mp3.key_comp();
    cout << "Using key_comp to compare keys 1 and 2:\n";
    if (key_comp(2, 1))
        cout << "1 is less than 2\n";
    else
        cout << "1 is not less than 2\n";
    cout << "\n";

    // 4. value_comp
    auto value_comp = mp3.value_comp();
    cout << "Using value_comp to compare the first two elements:\n";
    if (value_comp(*mp3.begin(), *next(mp3.begin())))
        cout << "First element is less than second element\n";
    else
        cout << "First element is not less than second element\n";
    cout << "\n";

    // 5. extract
    // cout << "Using extract to remove and display an element with key 1:\n";
    // auto nh = mp3.extract(1);
    // if (nh) {
    //     cout << nh.key() << ": " << nh.mapped() << endl;  // Outputs: 1: Hello
    // }
    // cout << "\n";

    // 6. get_allocator
    cout << "Using get_allocator to allocate and construct a pair:\n";
    auto alloc = mp3.get_allocator();
    using PairType = multimap<int, string>::value_type;
    PairType* p = alloc.allocate(1);
    std::allocator_traits<decltype(alloc)>::construct(alloc, p, make_pair(3, "New Value"));
    cout << "(" << p->first << ", " << p->second << ")\n";  // Outputs: (3, New Value)
    std::allocator_traits<decltype(alloc)>::destroy(alloc, p);
    alloc.deallocate(p, 1);

    return 0;
}