#include <iostream>
using namespace std;
#include "animal.cpp"
#include "cat.cpp"
#include "dog.cpp"

int main()
{
    cat meo;
    animal *ptrmeo = &meo;
    ptrmeo->showamthanhcuadongvat();
    ptrmeo->showtrangthai();

    dog cho;
    animal *ptrcho = &cho;
    ptrcho->display();

    animal dong_vat;
    cat *meomeo = (cat *)&dong_vat;
    meomeo->display();
    meomeo->showamthanhcuadongvat();

    meomeo->showtrangthai();

    int age;

    cout << age;

    return 0;
}