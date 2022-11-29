#include <iostream>
#include <string>

#include "Employee.h"
#include "Days.h"
#include "Project.h"

using namespace std;

class CEO()
{
    // private variable of the academic degree of the CEO
    private:
        string degree;
    
    // public method intends to assign project to the other employees with a command 
    public:
        void manageProject()
        {
            cout<<"Assigning prjects">>
        }

    // public getter method wich returns the degree of the CEO of the company     
        string getDegree()
        {
            return degree;
            
        }
        void setDeg(string deg)
        {
            degree = deg;
        }
        CEO();
        CEO(degree);
}
