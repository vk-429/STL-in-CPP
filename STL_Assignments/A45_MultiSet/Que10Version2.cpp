#include <iostream>
#include<set>
#include <unordered_map>
using namespace std;

bool areEqualMultisets(const std::multiset<int>& A, const std::multiset<int>& B) 
{
    // Frequency maps for both multisets
    std::unordered_map<int, int> freqMapA, freqMapB;

    // Construct frequency map for multiset A
    for (int num : A) 
        freqMapA[num]++;

    // Construct frequency map for multiset B
    for (int num : B) 
        freqMapB[num]++;

    // Check if frequency maps are equal
    return freqMapA == freqMapB;
}

int main() 
{
    // Example multisets
    multiset<int> A = {1, 2, 3};
    multiset<int> B = { 1, 2, 3};

    // Check if the multisets are equal
    if (areEqualMultisets(A, B)) 
        cout << "Multisets A and B are equal." << endl;
    else 
        cout << "Multisets A and B are not equal." << endl;

    return 0;
}