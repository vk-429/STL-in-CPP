#include<iostream>
#include<unordered_map>
using namespace std;

int main()
{
    string s;
    cout<<"Enter String : ";
    getline(cin,s);
    unordered_map<char,int> umap;
    for(int i=0;i<s.length();i++)
        umap[s[i]]++;
    for(auto& x:umap)
        cout<<"Frequency of \'"<<x.first<<"\' = "<<x.second<<"\n";
    return 0;
}