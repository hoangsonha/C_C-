//  rác hay NULL đều gây chết chương trình

#include<iostream>
using namespace std;
main() {
    int x=10;
    cout<<"print the value of variable x: "<<x<<"\n";
    cout<<"print the memory address of variable x: "<<&x<<"\n";
    cout<<"prin the value at the memory address of variable x: "<<*&x<<"\n";

    *&x=20; //Thay đổi cái giá trị của địa chỉ đó mà x là lấy giá trị tại địa chỉ đó. ( gan lai gia tri cho X )
    cout<<"print the value of variable x: "<<x<<"\n";

    int *xptr = &x ; 
    cout<<"in dia chi cua x: "<<&x<<"\n";
    cout<<"in dia chi con tro dang giu x: "<<xptr<<"\n";
    cout<<"gia tri ma dia chi dang co: "<<*xptr;

    *xptr = 1000;
    cout<<"\n"<<x;

    float a = 6.5;
    cout<<"\n"<<typeid(&a).name()<<endl;

    float *ptrmay {0};  // con cho NULL;
    float *ptrmay1;   // con tro rac;
    ptrmay1 = 0;      // con tro NULL;

    // Ta có thể sử dụng đk if để kiểm tra xem một con chỏ có NULL hay không,
    // con tro se true neu no la NULL va fall neu no k NULL

    if(ptrmay) {
        cout<<"Con cho cho den dia chi : ";
    } else {
        cout<<"Con cho NULL";
    }

}

// VD ve hop a, a la dia chi, ben trong hop la gia tri



// dùng để cập nhật một cái j đó thì dùng pointer.

// cộng trừ địa chỉ đc ứng dụng trong mảng or cấu trucs.