#include <tuple>
#include <unordered_map>
#include <iostream>
using namespace std;

// Helper function to print a tuple
template <typename Tuple, size_t... Is>
void printTuple(const Tuple& t, index_sequence<Is...>) {
    ((cout << (Is == 0 ? "" : ", ") << get<Is>(t)), ...);
}

// Function to print a tuple of any size
template <typename... Args>
void printTuple(const tuple<Args...>& t) {
    cout << "(";
    printTuple(t, index_sequence_for<Args...>{});
    cout << ")";
}

int main() {
    unordered_map<int, tuple<int, double, string>> m1;
    m1.emplace(1, make_tuple(1, 1.1, "Varanasi"));
    m1.emplace(2, make_tuple(2, 2.1, "Delhi"));
    m1.emplace(3, make_tuple(3, 3.1, "Kolkata"));
    m1.emplace(4, make_tuple(4, 4.1, "Chennai"));
    m1.emplace(5, make_tuple(5, 5.1, "Bengaluru"));
    
    for (const auto& [key, value] : m1) {
        cout << "Key: " << key << ", Tuple: ";
        apply(([](const auto&... args){((cout << args << " "), ...);}), value);
        cout << "\n";
    }
    cout<<"\n\n";
    for (const auto& x : m1) {
        cout << "Key: " << x.first << ", Tuple: ";
        printTuple(x.second);
        cout << "\n";
    }

    return 0;
}
