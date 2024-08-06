#include <iostream>
#include <string>
#include <vector>

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
        cout << "Da huy vung nho!!!" << name << endl;
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

// template function

template <class T>
T myABS(T value)
{
    return value >= 0 ? value : 0;
}

// template class

template <class T>
class MyEmployee
{
private:
    vector<T> employees;

public:
    void add(const T &value)
    {
        employees.push_back(value);
    }
    void remove(const T &value)
    {
        employees.pop_back(value);
    }

    void getLastValue()
    {
        return employees.back();
    }
    void getFirstValue()
    {
        return employees.front();
    }
    int getSize()
    {
        return employees.size();
    }
    auto begin()
    {
        return employees.begin(); // phần từ đầu
    }
    auto end()
    {
        return employees.end(); // phần tử sau phần tử cuối cùng
    }
    void print()
    {
        for (auto it = employees.begin(); it != employees.end(); ++it)
        {
            cout << *it << endl;
        }
    }
};

int main()
{

    // Person *man = new Man("Hoang Son Ha", 23, 59.5);

    // (*man).toString();
    // (*man).sleep();

    // Woman *woman = new Woman("Nguyen Thi Kim Ngan", 20, 45.5);

    // (*woman).toString();

    // delete man;

    // delete woman;

    // man = nullptr;

    // (*man).toString();

    // woman = nullptr;

    // (*woman).toString();

    // if (sextoy == Sex::FEMALE)
    //     cout << "Female" << endl;
    // else if (sextoy == Sex::MALE)
    //     cout << "Male" << endl;

    // template function

    // cout << "Value ABS: " << myABS(6.5) << endl;

    Person *man = new Person("Hoang Son Ha", 23, 59.5);

    Person *man2 = new Person("Ha Son Hoang", 21, 43.5);

    //  MyEmployee<Person> emps; // vector of object

    MyEmployee<Person *> emps; // vector of pointer

    emps.add(man);
    emps.add(man2);

    cout << emps.getSize() << endl;

    // // copy phan tu

    // for (Person *p : emps)
    // {
    //     cout << (*p).getName() << endl;
    // }

    emps.print();

    return 0;
}