#include<iostream>
#include<unordered_map>
#include<unordered_set>
using namespace std;

int main()
{
    string s;
    cout<<"Enter String : ";
    cin>>s;
    unordered_map<char,int> freq;
    for(int i=0;i<s.length();i++)
        freq[s[i]]++;
    unordered_set<int> seen;
    int count = 0;
    for(auto& x:freq)
    {
        while(x.second>0 && (seen.find(x.second) != seen.end()))
        {
            x.second--;
            count++;
        }
        if(x.second>0) seen.emplace(x.second);
    }
    cout<<count<<"\n";
    return 0;
}