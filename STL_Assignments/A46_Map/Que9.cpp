#include<iostream>
#include<map>
#include<set>
#include<vector>
using namespace std;

int main()
{
    map<string,vector<int>> map1,map2;
    map1 = { {"key1", {0, 1}}, {"key2", {0, 1}} };
    map2 = { {"key2", {1, 2}} };
    map<string,vector<int>>::iterator it1,it2;
    it1=map1.begin();
    it2=map2.begin();
    map<string,vector<int>> ans;
    vector<int> vec;
    set<int> st;
    int i;
    while(it1!=map1.end())
    {
        if(it1->first==it2->first)
        {
            if(it1->second!=it2->second)
            {
                for(i=0;i<it1->second.size();i++)
                    st.emplace(it1->second[i]);
                for(i=0;i<it2->second.size();i++)
                    st.emplace(it2->second[i]);
                for(auto& x:st)
                    vec.push_back(x);
                ans.emplace(it1->first,vec);
            }
            else
            {
                it2++;
                ans.emplace(it1->first,it1->second);
            }
        }
        else
            ans.emplace(it1->first,it1->second);
        it1++;
    }
    while(it2!=map2.end())
    {
        ans.emplace(it2->first,it2->second);
        it2++;
    }
    cout<<"{ ";
    for(auto&x:ans)
    {
        cout<<"("<<x.first<<", {";
        for(i=0;i<x.second.size();i++)
            cout<<x.second[i]<<", ";
        cout<<"\b}), ";
    }
    cout<<"\b\b }\n";
    return 0;
}