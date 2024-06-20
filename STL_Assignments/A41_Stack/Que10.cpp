#include<iostream>
#include<array>
#include<stack>
#include<vector>
using namespace std;

int main()
{
    array<int,10> a={4,5,2,25,30,12,15,100,21,56};
    stack<int> st;
    st.push(-1);
    int curr=INT_MIN;
    int i;
    vector<int> nextgreater(a.size(),-1);
    for(i=0;i<a.size();i++)
    {
        while(!st.empty() && a[i]>a[st.top()])
        {
            nextgreater[st.top()]=a[i];
            st.pop();
        }
        st.push(i);
    }
    for(i=0;i<a.size();i++)
        cout<<a[i]<<" -> "<<nextgreater[i]<<"\n";

    return 0;
}