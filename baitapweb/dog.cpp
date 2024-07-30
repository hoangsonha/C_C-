#include "animal.cpp"  // // trong class dog ta cũng đã include class animal nên khi ta include class animal ở Main thì sẽ có 3 class animal bao gồm class animal của class dog và cat neen se dan den loi trung class
#include<iostream>
using namespace std;
#include<string>

class dog : public animal
{
    public:
        void showamthanhcuadongvat() {
            cout<<"\n\tGau Gau";
        }
        void showamthanhcuacho() {
            cout<<"\n\tGauuuuuuuuuuu";
        }
        void showtrangthai() {
            cout<<"\n\tCHo dang an ! ";
        }
        void showtrangthaicuameo() {
            cout<<"\n\tAn suot ngay ! ";
        }
};