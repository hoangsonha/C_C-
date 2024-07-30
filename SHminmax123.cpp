#include<iostream>
using namespace std;
main() {
    int a [] {4,6,9,3,4,6,7,32,4,7,8,32,56};
    int min = a[0];
    for(int i=0; i<13 ; i++) {
        if(min > a[i]) {
            min= a[i];
        }
    }
    cout<<"\n"<<min;;
}