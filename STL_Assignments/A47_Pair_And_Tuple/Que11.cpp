#include <iostream>
#include <tuple>
#include <string>
#include <utility> 
using namespace std;

int main() 
{
    // Creating tuples
    tuple<int, double, string> myTuple(10, 3.14, "Hello");
    tuple<int, double, string> anotherTuple(20, 6.28, "World");

    auto printmyTuple = [](const auto&... args) {
        ((cout << args << " "), ...);
    };

    cout << "Printing elements of myTuple: ";
    apply(printmyTuple, myTuple);
    cout << "\n\n";

    // Accessing elements using std::get
    cout << "First element: " << get<0>(myTuple) << "\n";
    cout << "Second element: " << get<1>(myTuple) << "\n";
    cout << "Third element: " << get<2>(myTuple) << "\n";
    cout<<"\n";

    cout << "Printing elements of anotherTuple: ";
    apply(([](const auto&... args){((cout<<args<<" "),...);}),anotherTuple);
    cout<<"\n";
    
    // Modifying elements
    get<0>(myTuple) = 42;
    get<2>(myTuple) = "C++";
    cout << "Modified myTuple: (" << get<0>(myTuple) << ", " << get<1>(myTuple) << ", " << get<2>(myTuple) << ")" << "\n\n";

    // Tuple size
    cout << "myTuple size: " << tuple_size<decltype(myTuple)>::value << "\n\n";

    // Tuple element type
    tuple_element<1, decltype(myTuple)>::type myDouble = get<1>(myTuple);
    cout << "Second element of myTuple: " << myDouble << "\n\n";

    // Unpacking tuple using std::tie
    int a;
    double b;
    string c;
    tie(a, b, c) = myTuple;
    cout << "Unpacked values: " << a << ", " << b << ", " << c << "\n\n";

    // Creating and comparing tuples
    if (myTuple == anotherTuple) 
        cout << "Tuples are equal" << "\n\n";
    else
        cout << "Tuples are not equal" << "\n\n";

    // Swapping tuples
    swap(myTuple, anotherTuple);
    cout << "First element of myTuple after swap with anotherTuple: " << get<0>(myTuple) << "\n\n";

    // Using std::make_tuple
    auto newTuple = make_tuple(1, 2.5, "example");
    cout << "New Tuple: (" << get<0>(newTuple) << ", " << get<1>(newTuple) << ", " << get<2>(newTuple) << ")" << "\n\n";

    // Concatenating tuples using std::tuple_cat
    auto concatenatedTuple = tuple_cat(myTuple, newTuple);
    cout << "Concatenated Tuple(myTuple and newTuple): (" << get<0>(concatenatedTuple) << ", " << get<1>(concatenatedTuple) << ", "
              << get<2>(concatenatedTuple) << ", " << get<3>(concatenatedTuple) << ", "
              << get<4>(concatenatedTuple) << ", " << get<5>(concatenatedTuple) << ")" << "\n\n";

    // Creating tuple from a pair using std::tuple
    pair<int, string> myPair = make_pair(100, "pair");
    auto tupleFromPair = tuple<int, string>(myPair);
    cout << "Tuple from pair: (" << get<0>(tupleFromPair) << ", " << get<1>(tupleFromPair) << ")" << "\n\n";

    //Printing all elements of a tuple using a helper function
    auto printTuple = [](const auto&... args) {
        ((cout << args << " "), ...);
    };

    cout << "Printing elements of newTuple via apply function: ";
    apply(printTuple, newTuple);
    cout << "\n";

    return 0;
}
