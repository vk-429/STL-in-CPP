#include<iostream>
#include<map>
using namespace std;

int main()
{
    map<int,string> mp;
    if(mp.empty())
        cout<<"Map is Empty\n";
    else 
        cout<<"Map is not Empty\n";
    cout<<"Size = "<<mp.size()<<"\n";
    cout<<"Inserting 1st Element\n";
    mp.insert({1,"Varanasi"});
    cout<<"Size = "<<mp.size()<<"\n";
    cout<<"Inserting 2nd Element\n";
    mp.insert({2,"Lucknow"}); 
    cout<<"Size = "<<mp.size()<<"\n";
    cout<<"Inserting 3rd Element\n";
    mp.insert({4,"Gorakhpur"});
    cout<<"Size = "<<mp.size()<<"\n";
    cout<<"Inserting 4th Element\n";
    mp.insert({3,"Kanpur"});
    cout<<"Size = "<<mp.size()<<"\n";
    cout<<"Inserting 5th Element\n";
    mp.insert({5,"Prayagraj"});
    cout<<"Size = "<<mp.size()<<"\n";
    cout<<"Elements :-\n";
    for(auto&x:mp)
        cout<<"("<<x.first<<", "<<x.second<<")"<<"\n";
    return 0;
}