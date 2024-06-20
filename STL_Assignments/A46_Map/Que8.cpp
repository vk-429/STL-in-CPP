/*

Given a string s of length N, containing digits written in words but in jumbled form, the
task is to find out the digits present in the string in word form and arrange them in
sorted order using map
Example:
Input:  s = “ozerotwneozero”
Output: 0012
Explanation: The string can be arranged as “zerozeroonetwo”.
Therefore the digits are 0, 0, 1 and 2.

*/

#include<iostream>
#include<map>
using namespace std;

int main()
{
    map<int,string> mp;
    mp={{0,"zero"},{1,"one"},{2,"two"},{3,"three"},{4,"four"},{5,"five"},{6,"six"},{7,"seven"},{8,"eight"},{9,"nine"}};
    map<int,string> freq;
    freq={{0,""},{1,""},{2,""},{3,""},{4,""},{5,""},{6,""},{7,""},{8,""},{9,""}};
    string s;
    cout<<"Enter Input String : ";
    cin>>s;
    int i=0,j=0;
    while(!s.empty())
    {
        for(i=0;i<mp.size();i++)
        {
            string sub,temp;
            sub=s.substr(0,mp[i].length());
            for(j=0;j<mp[i].length();j++)
            {
                int index=sub.find(mp[i][j]);
                if(index!=string::npos)
                    temp+=sub[index];
                else
                    break;
            }
            if(mp[i]==temp)
            {
                s.erase(0,mp[i].length());
                freq[i]+=i+'0';
                break;
            }
        }
    }
    string ans;
    for(i=0;i<freq.size();i++)
        ans+=freq[i];
    cout<<ans<<"\n";
    return 0;
}

