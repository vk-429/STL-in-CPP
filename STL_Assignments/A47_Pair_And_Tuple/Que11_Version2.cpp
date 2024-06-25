#include <iostream>
#include <tuple>
#include <vector>
#include <algorithm>
#include <numeric>

int main() {
    // Define the sample tuple using std::tuple
    std::tuple<int, int, int, int, int, int, int, int> sample_tuple(1, 2, 3, 4, 5, 3, 3, 6);

    // Convert the tuple to a vector to perform various operations
    std::vector<int> vec = { std::get<0>(sample_tuple), std::get<1>(sample_tuple), std::get<2>(sample_tuple),
                             std::get<3>(sample_tuple), std::get<4>(sample_tuple), std::get<5>(sample_tuple),
                             std::get<6>(sample_tuple), std::get<7>(sample_tuple) };

    // Length of the tuple
    std::cout << "Length of the tuple: " << vec.size() << std::endl;

    // Maximum value in the tuple
    std::cout << "Maximum value in the tuple: " << *std::max_element(vec.begin(), vec.end()) << std::endl;

    // Minimum value in the tuple
    std::cout << "Minimum value in the tuple: " << *std::min_element(vec.begin(), vec.end()) << std::endl;

    // Sum of all elements in the tuple
    std::cout << "Sum of all elements in the tuple: " << std::accumulate(vec.begin(), vec.end(), 0) << std::endl;

    // Create a new tuple from a vector
    std::vector<int> sample_list = {7, 8, 9};
    std::tuple<int, int, int> new_tuple(sample_list[0], sample_list[1], sample_list[2]);
    std::cout << "Converted list to tuple: (" 
              << std::get<0>(new_tuple) << ", " 
              << std::get<1>(new_tuple) << ", " 
              << std::get<2>(new_tuple) << ")" << std::endl;

    // Count occurrences of a value in the tuple
    int value_to_count = 3;
    std::cout << "Number of occurrences of " << value_to_count << " in the tuple: " 
              << std::count(vec.begin(), vec.end(), value_to_count) << std::endl;

    // Find the index of the first occurrence of a value in the tuple
    int value_to_find = 4;
    auto it = std::find(vec.begin(), vec.end(), value_to_find);
    if (it != vec.end()) {
        std::cout << "First occurrence of " << value_to_find << " in the tuple is at index: " 
                  << std::distance(vec.begin(), it) << std::endl;
    } else {
        std::cout << value_to_find << " not found in the tuple" << std::endl;
    }

    return 0;
}
