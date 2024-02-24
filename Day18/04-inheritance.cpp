#include<iostream>
#include<string>
using namespace std;

// Base class Employee
class Employee{
    private:
        string emp_name;
        int emp_id;
    public:
        // Empty construtor
        Employee(){
            cout << "New employee with garbage value has been created" << endl;
        }

        Employee(string name, int id){
            cout << "New employee with provided values has been created" << endl;
            emp_name = name;
            emp_id = id;
        }

        void displayData(){
            cout << "Employee name : " << emp_name << endl;
            cout << "Employee ID : " << emp_id << endl;
        }

        void setEmployeeDetails(string name, int id){
            emp_name = name;
            emp_id = id;
        }
};

// A Programmer class which is Derived from the Employee class 
//          OR
// A Company has an employee which is also a programmer, but not all the employees are programmer
class Programmer : public Employee{
    private: 
        string programmingLanguage;
        int totalProjects;
    public:
        Programmer(){
            cout << "A programmer employee has been created with default values" << endl;
            programmingLanguage = "C";
            totalProjects = 5;
        }
        
        Programmer(string langName, int projectsCount){
            cout << "A programmer employee has been created with the passed values" << endl;
            programmingLanguage = langName;
            totalProjects = projectsCount;
        }

        void displayDataProgrammer(){
            cout << "Programming Language : " << programmingLanguage << endl;
            cout << "Total Projects Completed Till Noe : " << totalProjects << endl;
        }
};

int main()
{
    cout << "------------------------------------------------" << endl;
    cout << "Creating two Employees using the Employee class" << endl;
    Employee emp1("mona", 1245), emp2;
    cout << "------------------------------------------------" << endl;

    cout << endl;
    cout << "These are my regular employees" << endl;
    cout << "------------------------------------------------" << endl;
    cout <<  "Employee 1" << endl;
    emp1.displayData();
    cout << "------------------------------------------------" << endl;
    cout <<  "Employee 2" << endl;
    emp2.displayData();
    
    cout << "------------------------------------------------" << endl;
    cout << "Creating One Programmer Employee using the Programmer class" << endl;
    Programmer emp3("C", 5);
    cout << "------------------------------------------------" << endl;

    cout << "This is a programmer employee " << endl;
    emp3.displayData();
    cout << "------------------------------------------------" << endl;

    cout << endl;

    cout << "------------------------------------------------" << endl;
    cout << "Trying to add name and ID of the programmer employee " <<  endl;
    emp3.setEmployeeDetails("Christine", 45);
    emp3.displayData();
    emp3.displayDataProgrammer();

    return 0;
}