#include<iostream>
using namespace std;

template<typename... Args>
auto sum(Args... args) {
    return (args + ...); // Unary right fold
}

int main() {
    auto result = sum(1, 2, 3, 4); // result = 10
    cout << "Sum: " << result << endl;
    return 0;
}
