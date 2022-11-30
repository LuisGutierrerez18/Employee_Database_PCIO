
// Class which creates vacations and sick leave days for the employee 
class days
{
    // private variables corresponding to both vacation and sick leave days
    private:
        int vacationDays;
        int sickLeaveDays; 
    
    public:
    // method which gets the vacations days of the employee
    int getVacationDays()
    {
        return vacationDays;
    }
    // method which gets the sick leave days of the employee
    int getSickLeaveDays()
    {
        return sickLeaveDays;
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
        int newTotalDays = vacationDays - daysTaken;
        return newTotalDays; 
    }

    // Addas sick leave days to the employee
    int addSickLeaveDys()
    {
        // sickBase is the monthly days the employee can take
        int sickBase = 3;
        int totalSickDays = sickBase + sickLeaveDays;

        return totalSickDays;
    }

    // removes the sick leave days from the employee
    int removeSickLeaveDays()
    {
        int sickDaysTaken = 0;

        int newTotalSickDays = vacationDays - sickDaysTaken;
        
        return newTotalSickDays; 
    }

    void setVacationDays(int vacDays)
    {
        vacationDays = vacDays;
    }
    void setSickDays(int sickDay)
    {
        sickLeaveDays = sickDay;
    }

    days();
    /// @brief 
    /// @param  
    /// @param  
    days(int vacationDays, int sicklLeaveDays);
};
