#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int main() {
    // Creating an unordered_map
    unordered_map<string, int> umap;

    // Inserting elements into the unordered_map
    umap["apple"] = 1;
    umap["banana"] = 2;
    umap["cherry"] = 3;
    umap["date"] = 4;
    umap["elderberry"] = 5;

    // Demonstrating the find function
    string keyToFind = "banana";
    auto it = umap.find(keyToFind);

    if (it != umap.end())
        // Key found, output the value
        cout << "Key \"" << keyToFind << "\" found with value = " << it->second << "\n";
    else
        // Key not found
        cout << "Key \"" << keyToFind << "\" not found in the unordered_map" << "\n";


    // Trying to find a key that does not exist
    keyToFind = "fig";
    it = umap.find(keyToFind);

    if (it != umap.end())
        // Key found, output the value
        cout << "Key \"" << keyToFind << "\" found with value = " << it->second << "\n";
    else
        // Key not found
        cout << "Key \"" << keyToFind << "\" not found in the unordered_map" << "\n";

    return 0;
}
