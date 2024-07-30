#include<iostream>

#pragma once  // cho phép include 1 class .

using namespace std;
#include<string>

class animal
{
    public:
        void showamthanhcuadongvat() {
            cout<<"\n\tChua co du lieu cua dong vat ! ";
        }
        void showtrangthai() {
            cout<<"\n\tNo data ! ";
        }
        void display() {
            cout<<"\n\tHello animal class";
        }
};
