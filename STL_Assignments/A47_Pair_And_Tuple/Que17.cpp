#include <iostream>
#include <queue>
#include <tuple>
#include <vector>

using namespace std;

// Typedef for simplicity
typedef tuple<int, string> StudentTuple;

// Custom comparator for max-heap (based on the first element of the tuple)
struct MaxHeapComparator 
{
    bool operator()(const StudentTuple& a, const StudentTuple& b) {
        return get<0>(a) < get<0>(b); // Max-heap based on the first element of the tuple (roll number)
    }
};

int main() {
    // Define a priority queue of tuples with custom comparator
    priority_queue<StudentTuple, vector<StudentTuple>, MaxHeapComparator> maxHeap;

    // Inserting elements into the max-heap priority queue
    maxHeap.push(make_tuple(101, "Alice"));
    maxHeap.push(make_tuple(102, "Bob"));
    maxHeap.push(make_tuple(103, "Charlie"));
    maxHeap.push(make_tuple(104, "David"));

    // Accessing the maximum element from the max-heap (root of the heap)
    cout << "Maximum element in max-heap: \n";
    cout << "Roll Number: " << get<0>(maxHeap.top()) << ", Name: " << get<1>(maxHeap.top()) << endl;

    // Removing elements from the max-heap
    cout << "Elements :" << endl;
    while (!maxHeap.empty()) {
        cout << "Roll Number: " << get<0>(maxHeap.top()) << ", Name: " << get<1>(maxHeap.top()) << endl;
        maxHeap.pop();
    }

    return 0;
}
