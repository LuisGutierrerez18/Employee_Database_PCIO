#include "Adress.h"

class Employee{
    private:
        string name;
        int phoneNumber;
        int ID;
        float salary;
   
    public:
        void getName()
        {
            return name;
        }
    public:
        void getPhoneNum()
        {
            return phoneNumber;
        }
    public:
        void getID()
        {
            return ID;
        }
    public:
        void getSalary();
        {
            return salary;
        }
     public:
        void createEmployee(name, phoneNumber, ID, salary);
}

void Employee::setName(string name)
{
    cout<<"Enter the name">>
    cin>>name;
}
void Employee:: setPhoneNum(int phoneNumber)
{
    cout<<"Enter the Phone Number">>
    cin>>phoneNumber;
}
void Employee:: setID(int ID)
{
    cout<<"Enter your ID number">>
    cin>>ID
}
void Employee:: setSalary(float Salary)
{
    cout<<"Enter your annual salary">>
    cin>>Salary
}
void Employe:: calcMonthlySalary()
{
    int monthsInYear = 12;
    return salary/monthsInYear;
}