#include<iostream>
using namespace std;
void value(int a);
int add(int a, int b);

main() {
    value(add(4,6));
} 
void value(int a) {
    cout<<a;
}
int add(int a, int b) {
    return a+b;
} 

extern int a;