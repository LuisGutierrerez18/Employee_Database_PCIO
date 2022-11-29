#include<iostream>
#include<string>

#include "Adress.h"
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
        void getPhoneNum()
        {
            return phoneNumber;
        }
    
    // Public getter method which returns the ID of the employee
        void getID()
        {
            return ID;
        }
    
    // Public getter method which returns the salary of the employee
        void getSalary();
        {
            return salary;
        }
    
    // Public  method which the employee with all the values before specified
        void createEmployee(name, phoneNumber, ID, salary);
        Employee();
}

// From the employee class

// Setter method which receives the name as a parameter
// Asks the user to enter the name of the employee, then saves it
void Employee::setName(string n)
{
    name = n;
}

// Setter method which receives the phone number as a parameter
// Asks the user to enter the phone number of the employee, then saves it 
void Employee:: setPhoneNum(int phoneNum)
{
    phoneNumber = phoneNum;
}

// Setter method which receives the ID as a parameter
// Asks the user to enter the ID of the employee, then saves it
void Employee:: setID(int Id)
{
    ID = Id;
}

// Setter method which receives the Salary as a parameter
// Asks the user to enter the salary of the employee, then saves it
void Employee:: setSalary(float Salary)
{
    salary = Salary;
}

// Method which calculates the monthly salry of the employee
// Uses the total income and divides it by the total amount of months to get the monthly salary
void Employe:: calcMonthlySalary()
{
    float monthsInYear = 12.0;
    return salary/monthsInYear;
}
