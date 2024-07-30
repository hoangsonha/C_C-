#include<iostream>
using namespace std;
main() {
     bool dung(true);
     cout<<"\n\t"<<dung;
     cout<<"\nPhu dinh = "<<!dung;

     bool sai(false);
     cout<<"\n\t"<<sai;
     cout<<"\nPhu dinh = "<<!sai;

     cout<<std::boolalpha;
     cout<<"\n"<<true;
     cout<<"\n"<<false;

     cout<<std::noboolalpha;
     cout<<"\n"<<true;
     cout<<"\n"<<false;

     bool dung1(10);  // giá trị khác 0 luôn là true = 1.
     cout<<"\n"<<dung1;

     bool sai1 = 0;
     cout<<"\n"<<sai1;
    

//*******************************************************************************************.
//   Ứng dụng trong vòng lập FOR
//*******************************************************************************************.

bool ha{!false};
    if (ha == false) 
        cout<<"\n"<<"ha la : "<<ha;
    else 
        cout<<"ha la : "<<ha;


bool thongbao{!true};
if(!thongbao) {
    cout<<"\n"<<"thong bao nay la dung";
} else {
    cout<<"\n"<<"thong bao nay la sai";
}
}
