#include<iostream>
using namespace std;

template<typename x>
x larger(x a, x b)
{
    return a>b?a:b;
}
int main()
{
    cout<<larger(2.5,3.1)<<"\n";
    cout<<larger(2,4)<<"\n";
    cout<<larger('A','T')<<'\n';
    cout<<larger(2.1f,2.5f)<<'\n';
    return 0;
}