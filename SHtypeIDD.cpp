#include<iostream>
using namespace std;
main() {
    auto ha {'H'};
    cout<<"Type id : "<<typeid(ha).name()<<endl;        // auto là phải khởi tạo giá trị luôn .
    auto ha1 {5};
    cout<<"Type id : "<<typeid(ha1).name()<<endl;
    auto ha2 {5.5f};
    cout<<"Type id : "<<typeid(ha2).name()<<endl;
    auto ha3 {1.0};
    cout<<"Type id : "<<typeid(ha3).name()<<endl;



    int arr[] = {1,2,3,4,5};
    for(auto item : arr) {
        cout<<item<<endl;
    }
}
