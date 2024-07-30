#include<iostream>
using namespace std;
main() {
    new int;                // cấp phát động 1 số nguyên; tạo 1 vùng nhớ và trả về con trỏ chứa địa chỉ cùng nhớ đó.
    int *ptr = new int;     // biến con trỏ động;
//  int *ptr = new int(10) or {20}   // có thể gán giá trị.
    *ptr = 10;
  

// xoá các biến đơn sau khi k sử dụng biến cấp phát động nữa nếu k vùng nhớ bị kẹt lại ở đó.

// int *ptr = new int;
  delete ptr;
 ptr = nullptr;   // xoá và gán con trỏ về lại NULL.
}