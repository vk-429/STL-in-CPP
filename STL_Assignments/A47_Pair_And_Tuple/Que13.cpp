#include<iostream>
#include<tuple>
#include<utility>
using namespace std;

template <typename Tuple>
void iterateTuple(const Tuple& t) {
    apply([](const auto&... args) {
        ((cout << args << " "), ...);
    }, t);
}

int main()
{
    tuple<int,int,double,double,string,string> mytuple;
    mytuple = make_tuple(1,2,1.1,2.2,"Anand","Anumesh");
    
    cout << "Tuple elements: ";
    iterateTuple(mytuple);

    cout<<"\n";
    auto printmytuple = [](const auto&... args){((cout << args << " "), ...);};
    apply(printmytuple,mytuple);

    
    return 0;
}