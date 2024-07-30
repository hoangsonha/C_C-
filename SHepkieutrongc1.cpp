#include<iostream>
using namespace std;
main() {
    double a = 3/2;
    double b = 3.0/2;
    int c = 3;
    int d = 2;
    double e = static_cast<double>(c)/d;

    cout<<"\n"<<a;
    cout<<"\n"<<b;
    cout<<"\n"<<e;
}