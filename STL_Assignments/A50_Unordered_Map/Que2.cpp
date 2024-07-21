#include<iostream>
#include<unordered_map>
using namespace std;

int main()
{
    string s;
    cout<<"Enter String : ";
    getline(cin,s);
    unordered_map<string,int> umap;
    int flag=0;
    string key;
    for(int i=0;i<s.length();i++)
    {
        key="";
        while(i<s.length() &&s[i]!=' ')
        {
            key+=s[i];
            i++;
        }
        if(key !="")
        {
            umap[key]++;
            if(umap[key]>1)
            {
                flag=1;
                break;
            }
        }
    }
    if(flag == 1)
        cout<<key<<"\n";
    else
        cout<<"No Repetetion\n";
    return 0;
}