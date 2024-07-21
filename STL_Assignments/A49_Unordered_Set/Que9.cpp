#include<iostream>
#include<unordered_set>
#include<vector>
using namespace std;

int main()
{
    int n;
    cout<<"Enter n : ";
    cin>>n;
    vector<string> s(n);
    int i,j;
    for(i=0;i<n;i++)
        cin>>s[i];
    int len = s[0].length();
    int string_no=0;
    unordered_set<string> us;
    unordered_set<char> ch;
    int count = 0;
    for(i=0;i<len;i++)
    {
        char maxi = s[0][i];
        string_no = 0;
        for(j=1;j<n;j++)
        {
            if(s[j][i] > maxi)
            {
                maxi =s[j][i];
                string_no = j;
            }
            else if(s[j][i]==maxi)
                ch.emplace(s[j][i]);
        }
        if(ch.find(maxi) == ch.end())
        {
            if(us.find(s[string_no]) == us.end())
                count++;
            us.emplace(s[string_no]);
        }
        ch.clear();
    }
    cout<<count<<"\n";
    return 0;
}