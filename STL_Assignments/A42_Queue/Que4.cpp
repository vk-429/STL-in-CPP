#include<iostream>
#include<queue>
#include<vector>
using namespace std;

class compare
{
    public:
        bool operator()(const string &a,const string &b)
        {
            return a[0]>b[0];
        }
};

int main()
{
    
    priority_queue<string,vector<string>,compare> q;
    q.push("Hello");
    q.push("Vivek");
    q.push("Aman");
    q.push("Roshan");
    while(!q.empty())
    {
        cout<<q.top()<<"\n";
        q.pop();
    }
    return 0;
}