#include<iostream>
#include<unordered_map>
#include<math.h>
using lli = long long int;
using namespace std;

lli find_nearest_power(lli n)
{
    int lg = log2(n);
    int a = pow(2,lg);
    int b = pow(2,lg+1);

    return (b-n)>(n-a)?a:b;
}

int main()
{
    string n;
    cout<<"Enter n : ";
    cin>>n;
    unordered_map<char,int> freq;
    for(int i=0;i<n.length();i++)
        freq[n[i]]++;
    for(auto& x:freq)
    {
        lli near = find_nearest_power(x.second);
        cout<<x.first<<" -> "<<near<<"\n";
    }
    return 0;
}