//*********************************************************************************************************************************************
//  
//            Biến cục bộ la biến ảnh hưởng trong 1 block và sẽ kết thúc trong khi hết câu lệnh đó.
//
//            Biến toàn cục là ảnh hưởng lên toàn bộ chuong trình và kết thúc sau khi kết thúc chuong trình.
//
//            Biến tĩnh là biến ảnh hưởng trong 1 block và sẽ kết thúc khi kết thúc chuong trình. (do k ket thuc nen no lay lai gt cu cua no)
//                                                                                     (dc sinh ra trong lan dau tien no dc goi va se k sinh ra nua)
        
#include<iostream>
using namespace std;
void doSomething() {
    static int s_value(1);
    
    ++s_value;
    cout<<s_value;
}
main() {
    int s_value;

    doSomething();
    doSomething();
    doSomething();
}
