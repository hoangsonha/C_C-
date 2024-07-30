#include <iostream>
using namespace std;
#include <string>

struct MyGirl
{
    MyGirl(string name, int age) : name(name), age(age) {}
    string name;
    int age;
};

int main()
{
    MyGirl my1("Nguyen Kim Ngan", 20);

    MyGirl *my2 = &my1;

    (*my2).age = 18;

    cout << my1.age << endl;
    cout << (*my2).age << endl;

    cout << (*my2);

    return 0;
}