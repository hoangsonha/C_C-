//**************************************************************************************************
//
//   Truyền giá trị ---------------------------------------------------------------------
//
// //  VD; đi nộp cmnd cho công ty bằng bản photo, ng ta có làm j trên bản sao thì bản gốc vẫn còn đó.
//
//          #include<iostream>
//          using namespace std;
//          int thongtin(int a, int b) {  //sau (a,b) là tham số
    
    
//              return a+b;
//          }
//          main() {
//              int a,b;
                                            // 5 và 6 là đối số.
//              cout<<thongtin(4,6);





//              int c =1;
//              int d =2;
//              cout<<"\n"<<thongtin(c,d +1);

//          }


//***********************************************************************************************
//***********************************************************************************************



//*************************************************************************************************
//
//      Truyền tham số  (&)
//

/* #include<iostream>
using namespace std;
void thongtin(int &y) {    
    cout<<"\nY = "<<y;
    y=69;
    cout<<"\nY = "<<y;
}
main() {
    int x(1);
    cout<<"\nX = "<<x;

    thongtin(x);                   // truyen tham so chi nhan  bien

    cout<<"\nX = "<<x;

} */


#include<iostream>
using namespace std;
void UpdateBalance(int &balance, int change) {       //   cho phép thay đổi thông tin đc nhập vào thì dùng tham chiếu (&).
                                                    //  kiểu như gửi địa chỉ đến và người ta đến lấy đồ chứ k cần bê đồ đến cho người mua.
    balance = balance + change;
}
main() {
    int amount = 1000000;
    UpdateBalance(amount, 2000000);
    cout<<"Balance : "<<amount;

    UpdateBalance(amount, -1500000);
    cout<<"\nBalance : "<<amount;
}
 

 