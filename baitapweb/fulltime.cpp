#include "employee.cpp"
#include<iostream>
using namespace std;
#include<string>
class fulltime : public employee
{
    
    public:
        fulltime(string name, int paymentperhours) 
        : employee(name,paymentperhours)
        {
            
        }
        int calculate() {
            return 8 * getpaymentperhour();
        }
        
};