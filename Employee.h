#include "Adress.h"
#include "Days.h"

// class which has all the attributes and characteristics of the employee
class Employee{
    
    // private variables related to the personal infomation of the employee
    private:
        string name;
        int phoneNumber;
        int ID;
        float salary;

    // Public getter method which returns the name of the employee
    public:
        void getName()
        {
            return name;
        }

    // Public getter method which returns the phone number of the employee
    public:
        void getPhoneNum()
        {
            return phoneNumber;
        }
    
    // Public getter method which returns the ID of the employee
    public:
        void getID()
        {
            return ID;
        }
    
    // Public getter method which returns the salary of the employee
    public:
        void getSalary();
        {
            return salary;
        }
    
    // Public  method which the employee with all the values before specified
     public:
        void createEmployee(name, phoneNumber, ID, salary);
}

// From the employee class

// Setter method which receives the name as a parameter
// Asks the user to enter the name of the employee, then saves it
void Employee::setName(string name)
{
    cout<<"Enter the name">>
    cin>>name;
    return 0;
}

// Setter method which receives the phone number as a parameter
// Asks the user to enter the phone number of the employee, then saves it 
void Employee:: setPhoneNum(int phoneNumber)
{
    cout<<"Enter the Phone Number">>
    cin>>phoneNumber;
    return 0;
}

// Setter method which receives the ID as a parameter
// Asks the user to enter the ID of the employee, then saves it
void Employee:: setID(int ID)
{
    cout<<"Enter your ID number">>
    cin>>ID
    return 0;
}

// Setter method which receives the Salary as a parameter
// Asks the user to enter the salary of the employee, then saves it
void Employee:: setSalary(float Salary)
{
    cout<<"Enter your annual salary">>
    cin>>Salary
    return 0;
}

// Method which calculates the monthly salry of the employee
// Uses the total income and divides it by the total amount of months to get the monthly salary
void Employe:: calcMonthlySalary()
{
    int monthsInYear = 12;
    return salary/monthsInYear;
}
