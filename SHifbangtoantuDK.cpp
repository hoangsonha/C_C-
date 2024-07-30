#include<iostream>
using namespace std;
main() {
    if(1>0) {
        cout<<"dung";                             // phuc tap nen dung
    } else {
        cout<<"sai";
    }

    (1>0) ? (cout<<"\n"<<"dung") : (cout<<"sai");   // co ban thi nen dung

    cout<<"\n"<< ((1>0) ? "dung" : "sai");


//************************************************************************
//
//    trong 1 vài trường hợp k thể xài if else, vd 1 khách sạn vip = 1000 đô k vip = 500 đô
//    phải dùng biến hằng để lưu giá trị của giá nên k thể dùng if.

bool RoomVip = true;
const double price = RoomVip ? 1000 : 500;


}