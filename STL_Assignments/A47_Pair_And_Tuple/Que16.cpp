#include <iostream>
#include <forward_list>
#include <tuple>
#include <string>

using namespace std;

// Typedef for simplicity
typedef tuple<int, string> StudentTuple;

int main() 
{
    // Define a forward_list of tuples
    forward_list<StudentTuple> students;

    // Inserting elements into the forward_list
    students.push_front(make_tuple(101, "Alice"));
    students.push_front(make_tuple(102, "Bob"));
    students.push_front(make_tuple(103, "Charlie"));
    students.push_front(make_tuple(104, "David"));

    // Iterating through the forward_list and printing each tuple
    cout << "Contents of forward_list of tuples:" << endl;
    for (const auto& student : students) 
        cout << "Roll Number: " << get<0>(student) << ", Name: " << get<1>(student) << endl;

    return 0;
}
