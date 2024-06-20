/*

You have a set of integer s, which originally contains all the numbers from 1 to n.
Unfortunately, due to some error, one of the numbers in s got duplicated to another
number in the set, which results in repetition of one number and loss of another
number.You are given an integer array nums representing the data status of this set
after the error.Find the number that occurs twice and the number that is missing and
return them in the form of an array

*/

#include<iostream>
#include<set>
#include<array>
#include<vector>
using namespace std;


vector<int> find_missing(vector<int> &arr)
{
    vector<int>  a(2,0);
    multiset<int> ms;
    for(int i=0;i<arr.size();i++)
        ms.emplace(arr[i]);
    multiset<int>:: iterator it,it1;
    it=ms.begin();
    it1=ms.begin();
    it1++;
    while(it!=ms.end())
    {
        if((it1)!=ms.end())
        {
            if(*it==*it1)
                a[0]=*it;
            if(*it1-*it>1)
                a[1]=*it+1;
        }
        it++;
        it1++;
    }
    if(a[1]==0) a[1]=arr.size();
    return a;
}
int main()
{
    vector<int> a={1,2,6,7,5,3,3};
    vector<int> p=find_missing(a);
    cout<<"Repeated Element : "<<p[0]<<"\nMissing Element : "<<p[1]<<"\n";
    return 0;
}