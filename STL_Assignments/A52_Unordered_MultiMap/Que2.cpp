#include<iostream>
#include<unordered_map>
using namespace std;

int main()
{
    unordered_multimap<int,string> umap1 = {
        {1,"Varanasi"},
        {2,"Bhopal"},
        {3,"Gnadhi Nagar"},
        {4,"Bomabay"},
        {5,"Banglore"}};
    

    unordered_multimap<int,string> umap2 = umap1;
    unordered_multimap<int,string> umap3(umap2);
    unordered_multimap<int,string> umap4(umap1.begin(),umap1.end());
    cout<<"Elements of Original Map :-\n";
    for(auto& x:umap1)
        cout<<x.first<<" "<<x.second<<"\n";
    cout<<"\nElements of Copied Map :-\n";
    for(auto& x:umap2)
        cout<<x.first<<" "<<x.second<<"\n";
    return 0;
}