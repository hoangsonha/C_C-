#include<iostream>
using namespace std;
main() {
    int a,b,c;
    cin>>a>>b>>c;
    int max=a, min=a;
    if(b>max && b>c) {
        max=b;
    } else {
        min=b;
    }
    if(c>max && c>b) {
        max=c;
    } else {
        min=c;
    }
    cout<<"\nSo"<<max<<"la so lon nhat";
    cout<<"\nSo"<<min<<"la so nho nhat";
}