#include<iostream>
#include<unordered_map>
using namespace std;

int main()
{
    cout<<"Enter String : ";
    string s;
    unordered_map<string,int> umap;
    getline(cin,s);
    int n = s.length();
    for(int i=0;i<n;i++)
    {
        string temp="";
        while(i<n && s[i]!=' ')
        {
            temp+=s[i];
            i++;
        }
        if(temp != "")
            umap[temp]++;
    }
    cout<<"Frequencies of individual words are :-\n";
    for(auto& x: umap)
        cout<<"("<<x.first<<", "<<x.second<<")\n";

    return 0;
}