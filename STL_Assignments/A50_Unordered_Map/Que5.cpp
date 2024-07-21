#include<iostream>
#include<unordered_map>
#include<math.h>
using lli = long long int;
using namespace std;

lli find_nearest_power(lli n)
{
    lli mult = 1;
    while(n > mult)
        mult *= 2;
    return (mult - n)>(n - (mult/2))? mult/2 : mult;
}

int main()
{
    lli n;
    cout<<"Enter n : ";
    cin>>n;
    unordered_map<lli,int> freq;
    while(n)
    {
        freq[n%10]++;
        n/=10;
    }
    for(auto& x:freq)
    {
        lli near = find_nearest_power(x.second);
        cout<<x.first<<" -> "<<near<<"\n";
    }
    return 0;
}