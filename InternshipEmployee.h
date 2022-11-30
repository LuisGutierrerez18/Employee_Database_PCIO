#include <iostream>
#include <string>

#include "Employee.h"

using namespace std;

// class which creates an intership employee with all his/her's characteristics 
class internshipEmployee()
{
    // private variable degree of the intern
    private:
        //Current year of University
        string degree;
    
    // Checks if the applicant is studying biotechnology
    public:
        bool isElligibleToWork()
        {
            return true;
        }
    
    // Method which gets in what year of is he/she
    public:
        string getInternDegree()
        {
            return degree;
        }
        void setDegree(deg)
        {
            degree = deg;
        }
        internshipEmployee();  
        internshipEmployee(degree);
}
