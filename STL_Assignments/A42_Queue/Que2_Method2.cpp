#include<iostream>
#include<queue>
#include<time.h>
#include<math.h>
using namespace std;

struct Ticket
{
    string passanger;
    int t_number;
};

Ticket TicketCounter(int p_no)
{
    Ticket temp;
    cout<<"Enter Passanger["<<(p_no+1)<<"] Name : ";
    fflush(stdin);
    getline(cin,temp.passanger);
    srand(time(nullptr));
    temp.t_number = rand();
    return temp;
}

void showTicketList(queue<Ticket>& q)
{
    cout<<"\n\nPassanger Details :-\n\n";
    while(!q.empty())
    {
        cout<<"Passanger Name : "<<q.front().passanger<<"\n";
        cout<<"Ticket Number  : "<<q.front().t_number<<"\n";
        cout<<"\n------------------------------------------------\n\n";
        q.pop();
    }
}

int main()
{
    queue<Ticket> q;
    int size;
    cout<<"Enter the Number of Passangers : ";
    cin>>size;
    for(int i=0;i<size;i++)
        q.push(TicketCounter(i));
    
    showTicketList(q);
    return 0;
}