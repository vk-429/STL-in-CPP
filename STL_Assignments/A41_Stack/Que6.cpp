#include<iostream>
#include<stack>
using namespace std;

int main()
{
    string s;
    cout<<"Enter String : ";
    getline(cin,s);
    stack<char> st;
    int i;
    while(i<s.length())
    {
        st.push(s[i]);
        i++;
    }
    string ans;
    while(!st.empty())
    {
        ans+=st.top();
        st.pop();
    }  
    s=ans;
    cout<<s<<"\n";
    return 0;
}