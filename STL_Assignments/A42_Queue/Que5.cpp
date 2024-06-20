#include<iostream>
#include<string>
#include<queue>
using namespace std;

struct Time
{
    int hr;
    int min;
};

class Applicant
{
    private:
        string name;
        Time t;
    public:
        Applicant(string name,int hr,int min)
        {
            this->name=name;
            t.hr=hr;
            t.min=min;
        }
        string get_name()
        {
            return name;
        }
        int gethr()
        {
            return t.hr;
        }
        int getmin()
        {
            return t.min;
        }
        bool operator>(const Applicant &A) const
        {
            if(t.hr>A.t.hr)
                return true;
            if(t.hr==A.t.hr)
            {
                if(t.min>=A.t.min) return true;
                return false;
            }
            return false;
        }
};

struct comparebytime
{
    bool operator()(const Applicant& a, const Applicant& b)
    {
        return a>b;
    }
};

int main()
{
    priority_queue<Applicant,vector<Applicant>,comparebytime> q;
    q.push(Applicant("Alice", 10,30));
    q.push(Applicant("Bob", 5,30));
    q.push(Applicant("Charlie", 8,45));
    q.push(Applicant("David", 3,15));
    q.push(Applicant("Eve", 6,20));

    while(!q.empty())
    {
        Applicant curr=q.top();
        cout<<"Interview Scheduled For : "<<curr.get_name()<<" At Time "<<curr.gethr()<<" : "<<curr.getmin()<<"\n";
        q.pop();
    }
    return 0;
}