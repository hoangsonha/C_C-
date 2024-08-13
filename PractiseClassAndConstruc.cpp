#include <iostream>
#include <string>
#include <vector>

using namespace std;

const double pi(3.14);

class ITraditional
{
public:
    virtual void print() const = 0;
    virtual ~ITraditional()
    {
        cout << "Huy ITraditional";
    }
};

enum Sex
{
    MALE,
    FEMALE

};

string convertSex(Sex sex)
{
    if (sex == Sex::MALE)
        return "MALE";
    if (sex == Sex::FEMALE)
        return "FEMALE";
    return "unknown";
};

// lớp implements lại lớp cơ sở (cha) thì sẽ k cần phải khai báo destructor() ở lớp dẫn xuất (con)

class Person : public ITraditional
{
private:
    string name;
    int age;
    Sex sex;

public:
    Person(string name, int age, Sex sex) : name(name), age(age), sex(sex) {}
    ~Person()
    {
        cout << "Da huy vung nho cua " << name << endl;
    }
    string getName()
    {
        return name;
    }
    virtual void toString();

    void print() const override
    {
        cout << name << " dang choi nhac cu!" << endl;
    }
    void setAge(int age)
    {
        this->age = age;
    }
    int getAge()
    {
        return this->age;
    }
};

void Person::toString()
{
    cout << name << " " << to_string(age) << " " << convertSex(sex) << endl;
}

class GoodGirl : public Person
{
private:
    string character;

public:
    GoodGirl(string name, int age, Sex sex, string character) : Person(name, age, sex), character(character) {}
    ~GoodGirl()
    {
        cout << "Huy vung nho cua good girl " << getName() << endl;
    }
    void print() const override
    {
        cout << character << " in good girl dang choi nhac cu!" << endl;
    }
    void toString()
    {
        cout << getName() << " and " << getAge() << " in good girl " << endl;
    }
};

class BadGirl : public Person
{
private:
    string makeup;

public:
    BadGirl(string name, int age, Sex sex, string makeup) : Person(name, age, sex), makeup(makeup) {}
    ~BadGirl()
    {
        cout << "Huy vung nho cua bad girl " << getName() << endl;
    }
    void print() const override
    {
        cout << makeup << " in bad girl dang choi nhac cu!" << endl;
    }
    void toString()
    {
        cout << getName() << " and " << getAge() << " in bad girl " << endl;
    }
    void changeAge(int age)
    {
        Person::setAge(age);
    }
};

int main()
{
    Person *bad = new BadGirl("Ngan", 25, Sex::FEMALE, "hoa trang");

    // (bad).toString();

    // (bad).setAge(18);

    // (bad).toString();

    Person *bonhi = bad;

    (*bonhi).setAge(18);

    (*bonhi).toString();
    (*bad).toString();

    int a[5]{1, 2, 35, 6574, 5};
    for (auto &item : a)
    { // trường hợp k muốn thay đổi giá trị của phần tử trong mảng thì cho thêm const . ( const auto &item : a)
        cout << item << " ";
    }

    cout << pi;
}