//#include<iostream>
//using namespace std;
//main() {
    //int a,b;
    //cin>>a>>b;
    //int tong,hieu,tich;
    //float thuong;
    //tong=a+b;
    //hieu=a-b;
    //tich=a*b;
    //thuong=float(a)/float(b);
    //cout<<"\nTong la:"<<tong;
    //cout<<"\nHieu la:"<<hieu;
    //cout<<"\nTich la:"<<tich;
    //cout<<"\nThuong la:"<<thuong;
//}

#include<stdio.h>
using namespace std;
main() {
    int a,b;
    printf("Nhap a:");
    scanf("%d", &a);
    do {  
        printf("\nNhap b:");
        scanf("%d", &b);
    } while(b==0); 
       

    int tong,hieu,tich;
    float thuong;
    tong=a+b;
    hieu=a-b;
    tich=a*b;
    thuong=float(a)/float(b);
    printf("\nTong la %d", tong);
    printf("\nHieu la %d", hieu);
    printf("\nTich la %d", tich);
    printf("\nThuong la %.1f", thuong);

}