#include <iostream>
#include <queue>
#include <string>
using namespace std;

// Function to simulate ticket allotment
void allotTickets(queue<string>& ticketQueue, int totalTickets) 
{
    int ticketNumber = 1;
    while (!ticketQueue.empty() && totalTickets > 0) 
    {
        string passenger = ticketQueue.front();
        ticketQueue.pop();
        cout << "Ticket Number " << ticketNumber << " allotted to " << passenger << endl;
        ticketNumber++;
        totalTickets--;
    }

    if (totalTickets == 0)
        cout << "Tickets are sold out!" << endl;
    else if (ticketQueue.empty())
        cout << "All passengers have received tickets!" << endl;
}

int main() 
{
    queue<string> ticketQueue;

    // Passengers arriving at the ticket counter
    ticketQueue.push("Alice");
    ticketQueue.push("Bob");
    ticketQueue.push("Charlie");
    ticketQueue.push("Diana");
    ticketQueue.push("Eve");

    int totalTickets = 3; // Total number of tickets available

    allotTickets(ticketQueue, totalTickets);

    return 0;
}
