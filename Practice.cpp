#include<iostream>
using namespace std;
#include<array>
void printptr(int *ptr) {
    cout<<ptr<<"\n";
    cout<<*ptr<<"\n";

} 
main() {
    int value = 5;
    int *ptrvalue = &value;
    for(int i=0; i<2; i++) {
        printptr(ptrvalue + i);    //  đi tới địa chỉ kế tiếp của kiểu dữ liệu đó
    }

    int array[] = {1,2,3,4};
    cout<<&array[1]<<"\n";
    cout<< array + 1<<"\n";

    cout<<array[1]<<"\n";           // cách dùng của mảng tĩnh
    cout<<*(array + 1)<<"\n";       // cách dùng của pointer                       giá trị của mảng đc trỏ tới vị trí kế tiếp 


    const int arrayLength = 4;
    int array1[arrayLength] = {2,1,0,2};
    for(int *ptr = array1; ptr < array1 + arrayLength; ptr++) {
        printptr(ptr);
    }
}