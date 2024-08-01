#include <iostream>
#include <string>

using namespace std;

enum Sex
{
    MALE,
    FEMALE
};

string EnumToString(Sex sex)
{
    if (sex == Sex::FEMALE)
        return "Female";
    else if (sex == Sex::MALE)
        return "Male";
    return nullptr;
};

class Person
{
private:
    string name;
    int age;
    double weight;
    bool active;

public:
    Person(string name, int age, double weight, bool active = true) : name(name), age(age), weight(weight), active(active) {}
    ~Person()
    {
        cout << "Da huy vung nho!!!" << endl;
    }
    virtual void sleep()
    {
        cout << name << " is sleeping" << endl;
    }
    string getName()
    {
        return name;
    }
    int getAge()
    {
        return age;
    }
    bool getActive() { return active; }
    double getWeight() { return weight; }
    void toString()
    {
        cout << name << ", " << age << ", " << weight << ", " << active << endl;
    }
};

class Man : public Person
{
private:
    Sex sex = Sex::MALE;

public:
    Man(string name, int age, double weight, bool active = true) : Person(name, age, weight, active) {};
    void sleep()
    {
        cout << getName() << " is sleeping with " << EnumToString(sex) << endl;
    }
    void toString()
    {
        cout << getName() << ", " << to_string(getAge()) << ", " << to_string(getWeight()) << ", " << to_string(getActive()) << ", " << EnumToString(sex) << endl;
    }
    void football()
    {
        cout << getName() << " is playing football" << endl;
    }
};

class Woman : public Person
{
private:
    Sex sex = Sex::FEMALE;

public:
    Woman(string name, int age, double weight, bool active = true) : Person(name, age, weight, active) {};
    void sleep()
    {
        cout << getName() << " is sleeping with " << EnumToString(sex) << endl;
    }
    void toString()
    {
        cout << getName() << ", " << to_string(getAge()) << ", " << to_string(getWeight()) << ", " << to_string(getActive()) << ", " << EnumToString(sex) << endl;
    }
    void yoga()
    {
        cout << getName() << " is playing yoga" << endl;
    }
};

union Test // union là tất cả các biến nằm trung 1 chỗ -> thay đổi 1 cái sẽ ảnh hưởng tới tất cả biến khác theo giá trị biến thay đổi
{

    bool s;
    double d;
    int i;
    int b;
} so;

// so.s = true;

// cout << so.s << ", " << so.b << ", " << so.i << ", " << so.d << endl;

// so.i = 10;

// cout << so.s << ", " << so.b << ", " << so.i << ", " << so.d << endl;

int main()
{

    Person *man = new Man("Hoang Son Ha", 23, 59.5);

    (*man).toString();
    (*man).sleep();

    Woman *woman = new Woman("Nguyen Thi Kim Ngan", 20, 45.5);

    (*woman).toString();

    delete man;

    delete woman;

    man = nullptr;

    (*man).toString();

    woman = nullptr;

    (*woman).toString();

    // if (sextoy == Sex::FEMALE)
    //     cout << "Female" << endl;
    // else if (sextoy == Sex::MALE)
    //     cout << "Male" << endl;

    return 0;
}