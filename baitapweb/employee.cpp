#include<iostream>
using namespace std;
#include<string>
#pragma once
class employee
{
    private:
        string name;
        int paymentperhour;
    public:
        employee(string name, int paymentperhour) {
            this->name = name;
            this->paymentperhour = paymentperhour;
        }
        void setname(string name) {
            this->name = name;
        }
        string getname() {
            return name;
        }
        void setpaymentperhour(int paymentperhour) {
            this->paymentperhour = paymentperhour;
        }
        int getpaymentperhour() {
            return paymentperhour;
        }
        virtual int calculate() = 0;
};

