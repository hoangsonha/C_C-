#include<iostream>
using namespace std;
main() {
    cout<<"Chuong trinh chay tu 1 to n: "<<endl;
    int n;
    cout<<"Nhap n: ";
    cin>>n;
    while(n<0) {
        cout<<"Vui long nhap lai n ";
        cout<<"\n\tNhap n: ";
        cin>>n;
    }
    int i=0;
    while(i<=n) {
    
        cout<<i<<"\n";
        i=i+2;
    }
}