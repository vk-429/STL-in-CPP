#include <iostream>
#include <stack>
#include <string>

using namespace std;

class Browser 
{
    private:
        stack<string> history; // Stack to store the history of visited pages
        string current_page;   // String to store the current page
        stack<string> forward;
    public:
        Browser() : current_page("") {}

        void visit(const string& url) 
        {
            if (!current_page.empty()) 
                history.push(current_page); // Push the current page onto the stack
            current_page = url; // Set the new current page
            cout << "Visiting: " << current_page << endl;
        }

        void back() {
            if (history.empty()) 
            {
                cout << "No pages in history to go back to." << endl;
                return;
            }
            if(!current_page.empty())
                forward.push(current_page);
            current_page = history.top(); // Set the current page to the top of the stack
            history.pop(); // Pop the top page from the stack
            cout << "Going back to: " << current_page << endl;
        }
        void front(){
            if(forward.empty())
            {
                cout<<"No Furhter Pages to Show!\n";
                return;
            }
            if(!current_page.empty())
                history.push(current_page);
            current_page = forward.top();
            forward.pop();
            cout<<"Going Forward to: "<<current_page<<endl;
        }
        void current() const 
        {
            if (current_page.empty()) 
                cout << "No page is visited till yet!" << endl;
            else 
                cout << "Current page: " << current_page << endl;
        }
};

int main() {
    Browser browser;
    int choice;
    string url;

    while (true) 
    {
        cout << "\n1. Visit a new page\n2. Go back\n3. Show current page\n4. Show forward page\n5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) 
        {
            case 1:
                cout << "Enter URL: ";
                cin >> url;
                browser.visit(url);
                break;
            case 2:
                browser.back();
                break;
            case 3:
                browser.current();
                break;
            case 4:
                browser.front();
                break;
            case 5:
                return 0;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }
    return 0;
}
