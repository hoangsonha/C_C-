#include<iostream>
using namespace std;
main() {
    // int n;
    // do {
    // cout<<"Nhap n: ";
    // cin>>n;
    // } while(n<0 || n>=9);

    

    int n;
    tryAgain:
    cout<<"Nhap n : ";
    cin>>n;
    if(n>0) {
        goto tryAgain;
        goto sayHi;
    }

    sayHi:
        cout<<"Hi";
        cout<<" I'm Son Ha ";
}