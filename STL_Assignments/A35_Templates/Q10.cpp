#include <iostream>
#include <vector>
#include <list>
using namespace std;

// Class for Hash Table
template<typename K, typename V>
class HashTable 
{
    private:
        // Number of buckets
        int buckets;
        // Array of lists to store elements
        vector<list<pair<K, V>>> table;

        // Hash function to determine the bucket index
        int hashFunction(const K& key) {
            return hash<K>{}(key) % buckets;
        }


        /*
        
        hash<K>{}(key):

        hash<K>: is a template specialization of the std::hash functor for type K.
        hash<K>{}: creates an instance of this hash functor.
        hash<K>{}(key): calls the functor with key as the argument, which 
        returns a hash value of type std::size_t for the given key.
        
        */

    public:
        // Constructor
        HashTable(int size) : buckets(size), table(size) {}

        // Function to insert key-value pair
        void insert(const K& key, const V& value) 
        {
            int index = hashFunction(key); // Return index
            for (auto& kv : table[index]) 
            {
                if (kv.first == key) 
                {
                    cout << "Key already exists. Updating value.\n";
                    kv.second = value;
                    return;
                }
            }
            table[index].emplace_back(key, value);
        }

        // Function to search for value given key
        V search(const K& key) 
        {
            int index = hashFunction(key);
            for (auto& kv : table[index]) 
            {
                if (kv.first == key) 
                {
                    return kv.second;
                }
            }
            throw out_of_range("Key not found");
        }

        // Function to remove value given key
        void remove(const K& key) {
            int index = hashFunction(key);
            for (auto it = table[index].begin(); it != table[index].end(); ++it) 
            {
                if (it->first == key) 
                {
                    table[index].erase(it);
                    return;
                }
            }
            throw out_of_range("Key not found");
        }
};

int main() 
{
    HashTable<string, int> hashTable(10);

    // Inserting values
    hashTable.insert("John", 25);
    hashTable.insert("Doe", 30);
    hashTable.insert("Jane", 35);

    // Searching for values
    try 
    {
        cout << "John's age is: " << hashTable.search("John") << endl;
        cout << "Doe's age is: " << hashTable.search("Doe") << endl;
        cout << "Jane's age is: " << hashTable.search("Jane") << endl;
    } 
    catch (const out_of_range& e) 
    {
        cerr << e.what() <<"\n";
    }

    // Removing a value
    try 
    {
        hashTable.remove("Doe");
        cout << "Removed Doe's record.\n";
    } 
    catch (const out_of_range& e) 
    {
        cerr << e.what() <<"\n";
    }

    return 0;
}
