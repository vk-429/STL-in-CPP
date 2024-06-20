#include<iostream>
#include<set>
using namespace std;

int main()
{
    string s;
    cout<<"Enter String : ";
    getline(cin,s);
    cout<<"Converting String to Set\n";
    set<char> st;
    for(char x:s)
        st.insert(x);
    cout<<"After Converting to set : String looks like\n";
    for(auto &x:st)
        cout<<x<<" ";
    cout<<"\n";

    return 0;
}