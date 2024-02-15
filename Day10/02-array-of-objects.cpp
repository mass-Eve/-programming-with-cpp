#include<iostream>
using namespace std;

class Employee{
    private:
        int id;
        int salary;

    public:
        void addDetails(){
            cout << "Enter the employee ID : " ;
            cin >> id;
            cout << "Enter the employee salary : " ;
            cin >> salary;
        }

        void viewDetails(){
            cout << "Employee ID : " << id << endl;
            cout << "Employee Salary : " << salary << endl;
        }
};

int main()
{
    // Dept1 is an array to store the details of employees in dept1 of a company
    Employee Dept1[5];

    // A for loop to accept details from the manager
    for (int i = 0; i < 5; i++)
    {
        Dept1[i].addDetails();
    }

    // A for loop to show details to the manager
    for (int i = 0; i < 5; i++)
    {
        Dept1[i].viewDetails();
    }

    return 0;
}