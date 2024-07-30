
//!!! lí do sử dụng hàm::::::
//đề yêu cầu viết hàm
//hàm này dùng nhiều lần
//chia nhỏ để dẽ quản lí

          //1: void :: dùng khi chỉ muốn xuất ra;
          //2: Nếu ta muốn dùng tiếp tục thì phải dùng return.

//(((((((((((((((((((((((((((((((((    *1111111111111111111111:
//#include<iostream>
//#include<iomanip>
//using namespace std;
//void tong(int a, int b) {
    //cout<<"Tong la:"<<a+b;
//}
//void hieu(int a, int b) {
    //cout<<"\nHieu la:"<<a-b;
//}
//void tich(int a, int b) {
    //cout<<"\nTich la:"<<a*b;
//}
//void thuong(float a, float b) {
    //cout<<"\nThuong la:"<<setprecision(2)<<float(a)/float(b);
//}
//main() {
    //int a,b;
    //cout<<"Nhap a:";
   // cin>>a;
    //do {
   // cout<<"\nNhap b:";
   // cin>>b;
   // } while(b==0);
   // tong(a,b);
   // hieu(a,b);
   // tich(a,b);
   // thuong(a,b);

//}                           )))))))))))))))))))))))))))))))))))))))))).


//!!!!!!!!&&&&&**********    22222222222222222 
#include<iostream>
using namespace std;
#include<iomanip>
int tong(int a, int b) {
    return a+b;
}
int hieu(int a, int b) {
    return a-b;
}
int tich(int a, int b) {
    return a*b;
}
float thuong(float a, float b) {
    return float(a)/float(b);
}
main() {
    int a,b;
    cout<<"Nhap a:";
    cin>>a;
    do {
    cout<<"\nNhap b:";
    cin>>b;
    } while(b==0);
    cout<<"Tong la:"<<tong(a,b);
    
    cout<<"\nHieu la:"<<hieu(a,b);
    
    cout<<"\nTich la:"<<tich(a,b);
    
    cout<<"\nThuong la:"<<setprecision(2)<<thuong(a,b);

}         


