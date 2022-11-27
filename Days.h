
// Class which creates vacations and sick leave days for the employee 
class days()
{
    // private variables corresponding to both vacation and sick leave days
    private:
        int vacationDays;
        int sicklLeaveDays; 
    
    public:
    // method which gets the vacations days of the employee
    int getVacationDays()
    {
        return vacationDays;
    }
    // method which gets the sick leave days of the employee
    int getSickLeaveDays()
    {
        return sicklLeaveDays;
    }
    // returns the the total vacation days per month
    // base is the number of days per month 
    int addVacationDays()
    {
        // base is the monthly days the employee can take
        int base = 2;
        int totalDays = base + vacationDays;
        return totalDays;
    }

    // removes days selected by the user
    int removeVacationDays()
    {
        int daysTaken;
        cout << "Enter the number of days you want to take"
        cin >> daysTaken;

        int newTotalDays = vacation days - daysTaken;
        return newTotalDays; 
    }

    // Addas sick leave days to the employee
    int addSickLeaveDys()
    {
        // sickBase is the monthly days the employee can take
        int sickBase = 3;
        int totalSickDays = sickBase + sicklLeaveDays;

        return totalSickDays;
    }

    // removes the sick leave days from the employee
    int removeSickLeaveDays()
    {
        int sickDaysTaken;
        cout << "Enter the number of days you want to take"
        cin >> sickDaysTaken;

        int newTotalSickDays = vacation days - daysTaken;
        
        return newTotalSickDays; 
    }

}