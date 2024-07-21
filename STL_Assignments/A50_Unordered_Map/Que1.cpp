#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int main() {
    // 1. Creating an unordered_map
    unordered_map<string, int> umap;

    // 2. Inserting elements into the unordered_map
    umap["one"] = 1;
    umap["two"] = 2;
    umap["three"] = 3;

    // Alternative way to insert elements
    umap.insert({"four", 4});
    umap.insert(make_pair("five", 5));
    umap.emplace("six",6);

    // 3. Accessing elements
    cout << "umap[\"one\"] = " << umap["one"] << "\n";

    // 4. Checking if a key exists
    string key = "two";
    if (umap.find(key) != umap.end()) 
        cout << "Key \"" << key << "\" exists in the unordered_map with value = " << umap[key] << "\n";
    else
        cout << "Key \"" << key << "\" does not exist in the unordered_map" << "\n";

    // 5. Iterating over elements
    cout << "Iterating over unordered_map elements:" << "\n";
    for (const auto& pair : umap) 
        cout << pair.first << ": " << pair.second << "\n";

    // 6. Deleting an element
    umap.erase("three");
    cout << "After erasing key \"three\":" << "\n";
    for (const auto& pair : umap) 
        cout << pair.first << ": " << pair.second << "\n";

    // 7. Checking the size of the unordered_map
    cout << "Size of unordered_map: " << umap.size() << "\n";

    // 8. Clearing all elements
    umap.clear();
    cout << "After clearing, size of unordered_map: " << umap.size() << "\n";

    // 9. Using count to check if a key exists (alternative to find)
    umap["seven"] = 7;
    umap["eight"] = 8;
    if (umap.count("six") > 0) 
        cout << "Key \"six\" exists in the unordered_map with value = " << umap["six"] << "\n";
    else
        cout << "Key \"six\" does not exist in the unordered_map" << "\n";

    // 10. Using at() to access elements with bounds checking
    try 
    {
        cout << "umap.at(\"seven\") = " << umap.at("nine") << "\n";
    } 
    catch (const out_of_range& e) 
    {
        cout << "Exception: " << e.what() << "\n";
    }
    return 0;
}
