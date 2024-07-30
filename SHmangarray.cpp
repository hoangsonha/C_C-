#include<iostream>
using namespace std;
main() {
    int a[10] {2,3,4,5};
    for(int i=0;i<10;i++) {
        cout<<a[i]<<"\n";
    }
    cout<< a[3];//xuất ra giá trị của phần tử số 3 tính từ aray 0,1,2,3,4,5,6...
    
    cout<<endl;
    a[0]=100;//gán giá trị cho vị trí mảng 0;
    cout<<a[0];


for(int i=0;i<10;i++) {
    cout<<"Nhap a["<<i<<"] = ";
    cin>>a[i];
    
}
for(int i=0;i<10;i++) {
    cout<<a[i]<<"\n";
}
}
