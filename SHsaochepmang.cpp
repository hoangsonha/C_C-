#include<iostream>
using namespace std;
#include<ctime>
#include<cstdlib>
#define MAX 100
void nhapmang(int ha[MAX], int &n) {
    cout<<"Nhap so luong phan tu N : ";
    cin>>n;
    srand(time(NULL));
    for(int i=0 ; i<n ; i++) {
        ha[i] = rand();
        //cout<<"\n"<<" ha["<<i<<"] = "<<ha[i];
    }
}

void xuatmang(int ha[MAX], int n) {
    for(int i=0 ; i< n ; i++) {
        cout<<"\n"<<"ha["<<i<<"] = "<<ha[i];
    }
}

void saochepmang(int may[MAX], int ha[MAX], int n) {
    for(int i=0; i<n ; i++) {
        may[i] = ha[i];
        cout<<"\n"<<"may["<<i<<"] = "<<may[i];
    }
}
main() {
    int ha[MAX],may[MAX], n;
    nhapmang(ha,n);
    xuatmang(ha,n);
    cout<<"\nSau khi sao chep : ";
    saochepmang(may, ha, n);
}