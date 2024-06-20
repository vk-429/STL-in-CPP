#include<iostream>
using namespace std;

template<typename arg_type>
class Stack
{
    private:
        int top;
        int capacity;
        arg_type *p;
    public:
        Stack(int cap)
        {
            capacity=cap;
            top=-1;
            p=new arg_type[capacity];
        }
        bool isFull()
        {
            return top==(capacity-1);
        }
        bool isEmpty()
        {
            return top==-1;
        }
        void push(arg_type value)
        {
            if(!isFull())
            {
                top++;
                p[top]=value;
            }
            else
                cout<<"Stack Overflow\n";
        }
        void pop()
        {
            if(!isEmpty())
                top--;
            else
                cout<<"Stack Underflow\n";
        }
        arg_type Top()
        {
            return p[top];
        }
        int size()
        {
            return top+1;
        }
};

int main()
{
    Stack<int> st(10);
    st.push(2);
    st.push(3);
    cout<<st.Top()<<"\n";
    st.pop();
    cout<<st.Top()<<"\n";
    st.pop();

    Stack<string> st1(10);
    st1.push("Vivek");
    st1.push("Shiva");
    cout<<st1.Top()<<"\n";
    st1.pop();
    cout<<st1.Top()<<"\n";
    st1.pop();
    return 0;
}