#include<iostream>
#include<set>
using namespace std;

template<typename arg_type>
typename set<arg_type>::iterator search(set<arg_type>& s,arg_type x)
{
    typename set<arg_type>::iterator it;
    for(it=s.begin();it!=s.end();it++)
        if(*it==x) break;
    return it;
}

int main()
{
    set<int> s;
    s.emplace(2);
    s.emplace(8);
    s.emplace(6);
    s.emplace(10);
    s.emplace(4);
    
    int element;
    element=20;
    set<int>::iterator it= search(s,element);

    if(it != s.end())
        cout<<"Elemet Found, Value = "<<*it<<"\n";
    else
        cout << "Element Not Found!"<<"\n";

    return 0;
}