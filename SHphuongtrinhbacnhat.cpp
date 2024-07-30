#include<iostream>
using namespace std;
#include<iomanip>
main() {
    int a,b;
    cin>>a>>b;
    cout<<"Phuong trinh ban vua nhap la:"<<a<<"*x +"<<b<<"=0";
    if(a==0 && b==0) {
        cout<<"Phuong trinh co vo so nghiem";
    } else {
        if(a==0 && b!=0) {
        cout<<"Phuong trinh vo nghiem";
        } else {
        cout<<"\n\tPhuong trinh co nghiem la: X="<<setprecision(2)<<-float(b)/float(a);
    }
}
}