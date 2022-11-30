#include <iostream>
#include <string>


#include "Address.h"
#include "Days.h"

using namespace std;

// class which has all the attributes and characteristics of the employee
class Employee{
    
    // private variables related to the personal infomation of the employee
    private:
        string name;
        int phoneNumber;
        int ID;
        float salary;

    public:
        void setName(string n)
        {
            name = n;
        }

    // Public getter method which returns the name of the employee
        string getName()
        {
            return name;
        }

    // Public getter method which returns the phone number of the employee
        int getPhoneNum()
        {
            return phoneNumber;
        }
    
    // Public getter method which returns the ID of the employee
        int getID()
        {
            return ID;
        }
    
    // Public getter method which returns the salary of the employee
        float getSalary()
        {
            return salary;
        }
    
    // Public  method which the employee with all the values before specified
        void createEmployee(string name, int phoneNumber, int ID, float salary);
        // Employee();

        void setPhoneNum(int phoneNum)
        {
            phoneNumber = phoneNum;
        } 

        void setID(int Id)
        {
            ID = Id;
        }  

        void setSalary(float Salary)
        {
            salary = Salary;
        } 

        float calcMonthlySalary()
        {
            float monthsInYear = 12.0;
            return salary/monthsInYear;
        }
};
