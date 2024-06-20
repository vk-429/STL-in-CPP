#include<iostream>
#include<vector>
#include<stack>
using namespace std;

int main()
{
    vector<int> v1{4,3,1,6,5};
    stack<int> st;
    while(!v1.empty())
    {  
        int curr=v1.back();
        v1.pop_back();
        while(!st.empty() && st.top()<curr)
        {
            v1.push_back(st.top());
            st.pop();
        }
        st.push(curr);
    }
    while(!st.empty())
    {
        v1.push_back(st.top());
        st.pop();
    }
    for(auto&x:v1)
        cout<<x<<" ";
    cout<<"\n";
    return 0;
}