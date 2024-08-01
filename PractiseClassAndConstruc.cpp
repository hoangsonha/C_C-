#include <iostream>
#include <string>

using namespace std;

struct MyMovie
{
private:
    string name;
    int age;

public:
    MyMovie(string name, int age) : name(name), age(age) {}
    ~MyMovie()
    {
        cout << "\nDa huy vung nho\n";
    }
    int getAge()
    {
        return age;
    }
    void setAge(MyMovie *myMovie)
    {
        (*myMovie).age = 18;
    }
};

int main()
{
    struct MyMovie my1 = {"Hoang Son Ha", 21};

    struct MyMovie *my2 = &my1;

    (*my2).setAge(my2);

    cout << "my1 : " << my1.getAge() << endl;

    cout << "my2 : " << (*my2).getAge() << endl;

    return 0;
}