#include "employee.cpp"
#include<iostream>
using namespace std;
#include<string>
#pragma once
class parttime : public employee
{
    private: 
        int workinghours;
    public:
        parttime(string name, int pa,int wo) 
        : employee(name,pa)
        {
            this->workinghours = wo;
        }
        int calculate() {
            return workinghours* getpaymentperhour();
        }

};