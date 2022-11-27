
// Class which creates different projects with their specific attributes 
class project()
{
    // Private variables related to the project object
    private:
        string projectName;
        float projectDuration; // In hours
        string projectDescription;
    // Prints the project info
    public:
        string addProject()
        {
            cout<<projectName<<projectDuration<<"Hours"<<projectDescription;
        }
    // Gets the project name
    string getProjectName()
    {
        return projectName;
    }

    // Get project duration
    float getProjectDuration()
    {
        return projectDuration;
    }
}