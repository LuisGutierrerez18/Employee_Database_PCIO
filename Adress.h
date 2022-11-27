using namespace std;
#include "Employee.h"

class Adress() 
{
    // Private Variables which are charasteristic to the adress of the employee
    private:
        string street;
        string city; 
        string state;
        int postalCode;
        string country;

    // Public method which intends to print all the adress information related of the employee
    public: 
        void addInformation();
        {
            cout<<street<<city<<state<<postalCode<<country;
        }

    // Public getter method which finds the street in which the employee lives
    // returns the street
    public:
        string getStreet()
        {
            return street;
        }

    // Public getter method which finds the city in which the employee lives
    //returns the city
        string getCity()
        {
            return city;
        }

    // Public getter method which finds the state in which the employee lives
    // returns the state
    public:
        string getState()
        {
            return state;
        }
    
    // Public getter method which finds the postalCode assgined to the adress of the employee
    // returns the postal code
    public:
        int getPostalCode();
        {
            return postalCode;
        }
    
    // Public getter method which finds the country in which the employee lives
    // returns the country
    public:
        string getCountry();
        {
            return country;
        }
}
