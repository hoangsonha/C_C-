#include "animal.cpp"   // trong class cat ta đã include class animal nên khi ta include class animal ở Main thì sẽ có 2 class animal.
#include<iostream>
using namespace std;
#include<string>

class cat : public animal
{
    public:
        void showamthanhcuadongvat() {
            cout<<"\n\tMeow Meow";
        }
        void showamthanhcuameo() {
            cout<<"\n\tMeowwwwwwww";
        }
        void showtrangthai() {
            cout<<"\n\tMeo dang ngu ! ";
        }
        void showtrangthaicuameo() {
            cout<<"\n\tNgu suot ngay ! ";
        }
};