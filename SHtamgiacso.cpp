#include<iostream>
using namespace std;
main() {
    int a(1);
    while(a<=20) {
        int b(1);
        while(b<=a) {
            cout<<b<<" ";
            ++b;
        }
        cout<<endl;
        ++a;    
    }
}

