#include<iostream>
#include<stack>
using namespace std;

int main()
{
    stack<int> s;
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(1);
    s.push(5);
    cout<<"Top Most Element : "<<s.top()<<"\n";

    return 0;
}