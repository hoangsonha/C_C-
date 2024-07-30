#include<iostream>
using namespace std;
#include<ctime>
#include<cstdlib>
#define row 50
#define col 50
void nhapmanghaichieu(int ha[row][col], int &r, int &c) {
    cout<<"Nhap so dong can su dung : ";
    cin>>r;
    cout<<"\nNhap so cot can su dung : ";
    cin>>c;
    srand(time(NULL));
    for(int i=0; i<r; i++) {        for(int j=0; j<c; j++) {
            ha[i][j] = rand() % 100 + 1;
        }
    }
}
void xuatmanghaichieu(int ha[row][col], int r, int c) {
    for(int i=0; i<r; i++) {
        for(int j=0; j<c; j++) {
            cout<<ha[i][j]<<"\t";
        }
        cout<<endl;
    }

}
void saochepmanghaichieu(int quynh[row][col], int ha[row][col], int r, int c) {
    for(int i=0; i<r; i++) {
        for(int j=0; j<c; j++) {
            quynh[i][j] = ha[i][j];
            cout<<quynh[i][j]<<"\t";
        }
        cout<<endl;
    }
}
int tongcot(int ha[row][col], int r, int tCOL) {
    
    cout<<"\t\tNhap cot can tinh : ";
    cin>>tCOL;
    int sum=0;
    for(int i=0; i<r; i++) {
        sum+= ha[i][tCOL];
    }
    return sum;
}
int tongdong(int ha[row][col], int c, int tROW) {
    cout<<"\n\t\tNhap dong can tinh : ";
    cin>>tROW;
    int sum=0;
    for(int i=0; i<c;i++) {
        sum+= ha[tROW][i];
    }
    return sum;
}
int timkiemphantu(int ha[row][col], int r, int c, int x) {
    cout<<"\n\tNhap phan tu muon tim kiem : ";
    cin>>x;
    for(int i=0; i<r; i++) {
        for(int j=0; j<c; j++) {
            if(ha[i][j]==x);
            return i,j;
        }
    }
    return 0;
}
int timMIN_dong(int ha[row][col], int r, int c, int dongcantim) {
    int min = ha[dongcantim][0];
    for(int i=0; i<c; i++) {
        if(min>ha[dongcantim][i]) {
            min = ha[dongcantim][i];
        }
    }
    return min;
}
int timMAX_dong(int ha[row][col], int r, int c, int dongcantim) {
    int max = ha[dongcantim][0];
    for(int i=0; i<c; i++) {
        if(max<ha[dongcantim][i]) {
            max = ha[dongcantim][i];
        }
    }
    return max;
}
int timMIN_cot(int ha[row][col], int r, int c, int cotcantim) {
    int min = ha[0][cotcantim];
    for(int i=0; i<c; i++) {
        if(min>ha[i][cotcantim]) {
            min = ha[i][cotcantim];
        }
    }
    return min;
}
int timMAX_cot(int ha[row][col], int r, int c, int cotcantim) {
    int max = ha[0][cotcantim];
    for(int i=0; i<c; i++) {
        if(max<ha[i][cotcantim]) {
            max = ha[i][cotcantim];
        }
    }
    return max;
}
main() {
    int may[row][col];
    int r,c;
    int maianh[row][col];
    nhapmanghaichieu(may,r,c);
    xuatmanghaichieu(may,r,c);

    cout<<"\n\tSau khi sao chep : "<<endl;
    saochepmanghaichieu(maianh, may, r, c);

    int tCOL;
    int sum = tongcot(may, r, tCOL);
    cout<<sum;

    int tROW;
    int sum1 = tongdong(may,c,tROW);
    cout<<sum1;

    cout<<"\n\tMin = ";
    int ketqua = timMIN_cot(may,r,c,1);
    cout<<ketqua;

    cout<<"\n\tMin = ";
    int ketqua1 = timMIN_dong(may,r,c,1);
    cout<<ketqua1;

    cout<<"\n\tMax = ";
    int ketqua2 = timMAX_cot(may,r,c,1);
    cout<<ketqua2;

    cout<<"\n\tMin = ";
    int ketqua3 = timMAX_dong(may,r,c,1);
    cout<<ketqua3;
    



}