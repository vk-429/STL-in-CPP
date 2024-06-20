
#include<iostream>
#include<deque>
using namespace std;

int main()
{
    string s1,s2;
    cout<<"Enter string 1 : ";
    cin>>s1;
    cout<<"Enter string 2 : ";
    cin>>s2;
    int i;
    deque<char> d1,d2;
    for(i=0;i<s1.length();i++)
        d1.push_back(s1[i]);
    for(i=0;i<s2.length();i++)
        d2.push_back(s2[i]);
    while(!d1.empty() && !d2.empty() && d1.back()==d2.back())
    {
        d1.pop_back();
        d2.pop_back();
    }
    while(!d1.empty() && !d2.empty() && d1.front()==d2.front())
    {
        d1.pop_front();
        d2.pop_front();
    }
    if(d1.size()==0 || d2.size()==0)
        cout<<"Yes\n";
    else
        cout<<"No\n";
    return 0;
}