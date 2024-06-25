#include<iostream>
#include<queue>
using namespace std;

struct comparePairs {
    bool operator()(const pair<int,int>& p1, const pair<int,int>& p2) {
        return p1.first < p2.first || (p1.first == p2.first && p1.second < p2.second);
    }
};

struct comparePairs2
{
    bool operator()(const pair<int,int>& p1, const pair<int,int>& p2) {
        return p1.second < p2.second || (p1.second == p2.second && p1.first < p2.first);
    }
};

int main()
{
    priority_queue<pair<int,int>,vector<pair<int,int>>,comparePairs> pq; 
    // If you're using a custom comparator then you must define the underlying container
    pq.push(make_pair(1,2));
    pq.push(make_pair(4,2));
    pq.push(make_pair(3,1));
    pq.push(make_pair(5,6));
    pq.push(make_pair(9,4));
    pq.push(make_pair(7,3));
    cout<<"Ordering Based on First Element of Pair : :-\n";
    while(!pq.empty())
    {
        cout<<pq.top().first<<" "<<pq.top().second<<"\n";
        pq.pop();
    }
    cout<<"\n";

    priority_queue<pair<int,int>,vector<pair<int,int>>,comparePairs2> pq2; 
    // If you're using a custom comparator then you must define the underlying container
    pq2.push(make_pair(1,2));
    pq2.push(make_pair(4,2));
    pq2.push(make_pair(3,1));
    pq2.push(make_pair(5,6));
    pq2.push(make_pair(9,4));
    pq2.push(make_pair(7,3));
    cout<<"Ordering Based on Second Element of Pair : :-\n";
    while(!pq2.empty())
    {
        cout<<pq2.top().first<<" "<<pq2.top().second<<"\n";
        pq2.pop();
    }
    cout<<"\n";
}
