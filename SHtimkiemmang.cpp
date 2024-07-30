#include<iostream>
using namespace std;
#include<ctime>
#include<cstdlib>
#define max 100
void  nhapmang(int quynh[max], int &n) {
    cout<<"Nhap so luong phan tu N : ";
    cin>>n;
    srand(time(NULL));
    for(int i=0; i<n ; i++) {
        quynh[i] = rand();
        //cout<<"\n"<<quynh[i];
    }
}
void xuatmang(int quynh[max], int n) {
    for(int i=0; i<n; i++) {
        cout<<"\n"<<"quynh["<<i<<"] = "<<quynh[i];
    }
}
void saochepmang(int ha[max],int quynh[max], int n) {
    for(int i=0 ; i<n ; i++) {
        ha[i] = quynh[i];
        cout<<"\n"<<"ha["<<i<<"] = "<<ha[i];
    }
}
int timkiemphantu(int ha[max], int n, int x) {
    
    for(int i=0; i<n ;i++) {
        if(x==ha[i]) {
            return i;
        }
    }
    return 0;
}

main() {
    int quynh[max], n;
    int ha[max];
    int x;
    nhapmang(quynh,n);
    xuatmang(quynh,n);

    cout<<"\nSau khi sao chep : ";
    saochepmang(ha,quynh,n);

    cout<<"\nNhap gia tri ban can tim kiem : ";
    cin>>x;
    int kiemtra = timkiemphantu(ha,n,x);
    if(kiemtra==0) {
        cout<<"k tim thay gia tri !!!";
    } else {
        cout<<"Gia tri nay nam o ["<<kiemtra<<"]";
    }
}