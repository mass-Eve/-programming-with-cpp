#include<iostream>
#include<string>
using namespace std;

// Base class Employee
class Employee{
    public:

        // Employee Name
        string emp_name;

        // Employee ID no.
        int emp_id;

        // Default construtor
        Employee(){
            cout << "New employee with garbage value has been created" << endl;
        }

        // Parameterised Constructor
        Employee(string name, int id){
            cout << "New employee with provided values has been created" << endl;
            emp_name = name;
            emp_id = id;
        }

        // A function to display data
        void displayData(){
            cout << "Employee name : " << emp_name << endl;
            cout << "Employee ID : " << emp_id << endl;
        }
};

// A Programmer class which is Derived from the Employee class 
//          OR
// A Company has an employee which is also a programmer, but not all the employees are programmer
class Programmer : Employee{
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

        void displayData(){
            cout << "Programming Language : " << programmingLanguage << endl;
            cout << "Total Projects Completed Till Noe : " << totalProjects << endl;
        }
};

int main()
{
    cout << "------------------------------------------------" << endl;
    cout << "Creating one Employee using the Employee class" << endl;
    Employee emp1("mona", 1245);
    cout << "------------------------------------------------" << endl;

    cout << endl;
    cout << "These are my regular employees" << endl;
    cout << "------------------------------------------------" << endl;
    cout <<  "Employee 1" << endl;
    emp1.displayData();

    cout << "------------------------------------------------" << endl;
    cout << "Creating One Programmer Employee using the Programmer class" << endl;
    Programmer emp2("C", 5);
    cout << "------------------------------------------------" << endl;

    cout << "This is a programmer employee " << endl;
    emp2.displayData();
    cout << "------------------------------------------------" << endl;

    cout << endl;

    cout << "------------------------------------------------" << endl;
    cout << "Accesing the name and id of the employee ~ " << endl;
    emp1.emp_name = "Nishant";
    emp1.emp_id = 22;
    emp1.displayData();
    cout << "------------------------------------------------" << endl;

    cout << endl;

    cout << "------------------------------------------------" << endl;
    cout << "Trying to assign name and id to a programmer employee ~" << endl;
    emp2.emp_name = "Shantanu";
    emp2.emp_id = 50;
    emp2.displayData();

    return 0;
}