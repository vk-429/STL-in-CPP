#include<iostream>
#include<unordered_map>
using namespace std;

int main()
{
    unordered_multimap<int,string> umap = {
        {1,"Varanasi"},
        {1,"Bhopal"},
        {3,"Gnadhi Nagar"},
        {4,"Bomabay"},
        {5,"Banglore"}};
    cout<<"Elements :-\n";
    for(auto& x:umap)
        cout<<x.first<<" "<<x.second<<"\n";
    return 0;
}
