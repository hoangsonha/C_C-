#include<iostream>
using namespace std;
#include<ctime>
#include<cstdlib>
void nhapmang(int ha[100], int &n) {
    srand(time(NULL));
    cout<<"Nhap so luong phan tu N : ";
    cin>>n;
    for(int i=0 ; i<n ; i++) {
        ha[i] = rand();
    }    
}
void xuatmang(int ha[100], int n) {
    for(int i=0 ; i<n ; i++) {
        cout<<"\n"<<" ha["<<i<<"] = "<<ha[i];
    }
}

main() {
    int ha[100], n;
    nhapmang(ha,n);
    xuatmang(ha,n);
    
}
