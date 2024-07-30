#include<iostream>
using namespace std;
#include<cstdlib>
#include<ctime>
#define row 100
#define col 100
void nhapmang2chieu(int ha[row][col], int &dong, int &cot) {
    cout<<"Nhap so dong : ";
    cin>>dong;
    cout<<"\nNhap so cot  : ";
    cin>>cot;
    srand(time(NULL));
    for(int i=0;i<dong; i++) {
        for(int j=0;j<cot; j++) {
            ha[i][j] = rand() % 10;
        }
    cout<<endl;
    }
}
void xuatmang2chieu(int ha[row][col], int dong, int cot) {
    for(int i=0;i<dong;i++) {
        for(int j=0; j<cot; j++) {
            cout<<ha[i][j]<<"\t";
        }
    cout<<endl;
    }
}
int tinhtongcua1ROW(int ha[row][col], int cot, int tROW) {
    int sum=0;
    for(int j=0;j<cot;j++) {
        sum+= ha[tROW][j];
    }
    return sum;
}
int tinhtongcua1COL(int ha[row][col], int dong, int tCOL) {
    int sum=0;
    for(int i=0;i<dong;i++) {
        sum += ha[i][tCOL];
    }
    return sum;
}
main() {
    int ha[row][col];
    int dong,cot;
    nhapmang2chieu(ha,dong,cot);
    xuatmang2chieu(ha,dong,cot);

    /*cout<<"Nhap ROW muon tinh tong : ";
    int tROW;
    cin>>tROW;
    int sumROW = tinhtongcua1ROW(ha, cot, tROW);
    cout<<"\n"<<sumROW;
    */

    cout<<"Nhap COL muon tinh tong : ";
    int tCOL;
    cin>>tCOL;
    int sumCOL = tinhtongcua1COL(ha, dong, tCOL);
    cout<<"\n"<<sumCOL;
}