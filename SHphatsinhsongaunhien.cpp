/*******************************************************************************************************
//
//              cách 1, sử dụng time thực để ra sô ngẫu nhiên.

#include<iostream>
using namespace std;
#include<ctime>
#include<cstdlib>
main() {
    int a, b;
    srand(time(NULL));
    a = rand() % 10 + 1;       // ngẫu nhiên trong khoảng từ 1 to 10;
    cout<<a<<"\n";

    for(int i=0;i<15;i++) {
        cout<<rand() % 1000 + 1 <<" ";
    }
    
    do {
        cout<<"\n"<<" Guess your number : ";
        cin>>b;
        if(b>a) {
            cout<<" Your number is higher : ";
        } else {
            if(b<a) {
                cout<<" Your number is lower : ";
            }
        }
    }while(a!=b);
}
*/



//********************************************************************************************
//
//          cách 2: sử dụng hàm random.

#include<iostream>
using namespace std;
#include<random>
#include<ctime>
main() {
    random_device ha;
    mt19937 quynh(ha());
    uniform_int_distribution<int> may(1, 1000);

    auto n = may(quynh);
    cout<<n;
}



