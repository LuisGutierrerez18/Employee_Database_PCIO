#include<iostream>
#include<string>
#include "Employee.h"

using namespace std;

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
        void addInformation(street, cityl, state, postalCode, country);
        Adress();

    // Public getter method which finds the street in which the employee lives
    // returns the street
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
        string getState()
        {
            return state;
        }
    
    // Public getter method which finds the postalCode assgined to the adress of the employee
    // returns the postal code
        int getPostalCode();
        {
            return postalCode;
        }
    
    // Public getter method which finds the country in which the employee lives
    // returns the country
        string getCountry();
        {
            return country;
        }
}
