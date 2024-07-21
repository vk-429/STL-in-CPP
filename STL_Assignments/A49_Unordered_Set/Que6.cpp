#include<iostream>
#include<unordered_set>
#include<vector>
#include<algorithm>
using namespace std;

bool isPrime(int n)
{
    if(n<=1) return false;
    for(int i=2;i*i<n;i++)
        if(n%i == 0) return false;
    return true;
}

void Primes(unordered_set<int>& primes)
{
    primes.emplace(2);
    primes.emplace(3);
    for(int i=1;(6*i+1)<=1000000;i++)
    {
        if(isPrime(6*i-1))
            primes.emplace(6*i-1);
        if(isPrime(6*i+1))
            primes.emplace(6*i+1);
    }
}

int main()
{
    unordered_set<int> primes;
    Primes(primes);
    int n;
    cin>>n;
    int i;
    vector<int> a(n);
    for(i=0;i<n;i++) cin>>a[i];
    int count=0;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(primes.find(__gcd(a[i],a[j])) == primes.end())
                count++;
        }
    }
    cout<<count<<"\n";
    return 0;
}