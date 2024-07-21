#include<iostream>
#include<unordered_map>
#include<unordered_set>
using namespace std;

bool  isPrime(int n)
{
    if(n<=1) return false;
    else if(n==2) return true;
    else
    {
        for(int i = 2;i*i<=n;i++)
            if(n%i==0) return false;
        return true;
    }
}

int main()
{
    int l,r,k;
    cout<<"Enter l,r,k (in order) : ";
    cin>>l>>r>>k;
    unordered_set<int> primes;
    if (l <= 2 && r >= 2) primes.emplace(2);
    if (l <= 3 && r >= 3) primes.emplace(3);

    if (l <= 5) l = 5;
    else 
        if (l % 6 == 0) l += 1;
        else if(l%6 >= 2 && l%6 <= 4) l += (5-(l%6));

    for (int num = l; num <= r; num += 6) 
    {
        if (isPrime(num)) primes.emplace(num);
        if (num + 2 <= r && isPrime(num + 2)) primes.emplace(num + 2);
    }
    
    unordered_map<int,int> seen;
    for(auto& x:primes)
    {
        if(primes.find(x+k) != primes.end())
        {
            if(seen.find(x) == seen.end())
            {
                cout<<"("<<x<<", "<<(x+k)<<")\n";
                seen.emplace(x,x+k);
            }
        }
    }
    return 0;
}