#include<iostream>
#include<unordered_set>
using namespace std;

int main()
{
    unordered_set<int> sample1 = {10,20,30,40,50};
    unordered_set<int> sample2 = {10,30,50,40,20};
    unordered_set<int> sample3 = {10,20,30,50,60};
    if(sample1 == sample2)
        cout<<"Sample 1 is Equal to Sample 2\n";
    else
        cout<<"Sample 1 is not Equal to Sample 2\n";
    if(sample2 != sample3)
        cout<<"Sample 2 is not Equal to Sample 3\n";
    else
        cout<<"Sample 1 is Equal to Sample 2\n";
    return 0;
}