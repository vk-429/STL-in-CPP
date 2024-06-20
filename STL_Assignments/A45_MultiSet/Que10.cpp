
//  Unlike a set, a multiset may contain multiple occurrences of same number. The
//  multiset equivalence problem states to check if two given multisets are equal or not.
//  For example let A = {1, 2, 3} and B = {1, 1, 2, 3}. Here A is set but B is not (1 occurs
//  twice in B), whereas A and B are both multisets. More formally, “Are the sets of pairs
//  defined as \(A' = \{ (a, frequency(a)) | a \in \mathbf{A} \}\)         
//  equal for the two given
//  multisets?” Given two multisets A and B, write a program to check if the two multisets
//  are equal


#include<iostream>
#include<set>
using namespace std;

int main()
{
    multiset<int> ms1,ms2;
    ms1={1,2,3};
    ms2={1,1,2,3};
    if(ms1==ms2)
        cout<<"Both Multisets are Equal\n";
    else
        cout<<"Multisets are Unequal\n";
    return 0;
}

