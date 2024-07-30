#include<iostream>
using namespace std;
main() {
    char ha[10] = {'I', 'L' , 'O', 'V', 'E' , 'Y', 'O', 'U'};
    char ha1[11] = "I LOVE YOU";
    char ha2[] = {'I', 'L' , 'O', 'V', 'E' , 'Y', 'O', 'U'};
    char ha3[] = "iloveYOU";
// tu dong them ki tu null o cuoi ; vd 5 phan tu tinh null la 6;
    ha3[0] = 'I';
    ha3[1] = 'L';
    ha3[2] = 'O';
    ha3[3] = 'V';
    ha3[4] = 'E';
    
    cout<<ha3<<"\n";     //   chỉ đọc đến kí tự NULL, về sau là không đọc nữa, cho dù có gán giá trị phía sau NULL thì nó vẫn k đọc.


    /*char quynh[10];
    cout<<"Nhap ho ten : ";
    cin>>quynh;                //  cin là nhận kí tự từ bàn phím cho tới khi gặp khoảng trắng or enter. ->> getline sẽ thay thế cho cin trong kí tự
    cout<<quynh<<endl;*/


    char quynh[10];
    cout<<"Nhap ho ten : ";             
    cin.getline(quynh, 10);                // số 10 là nó chỉ nhận 9 phần tử và phần tử cuối là NULL, nó sẽ k hiện các phần tử cuối.
    
    cout<<quynh<<endl;
}
