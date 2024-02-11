#include<iostream>
using namespace std;

// A class Employee to store the details of employees of a company
class Employee{
    public :
        int employee_id, payroll, desk_number ;
        char grade;
} ;


int main()
{
    Employee harman;

    harman.employee_id = 1001852;
    harman.grade = 'a';
    harman.payroll = 180000;
    harman.desk_number = 4;

    cout << "Employee ID is : " << harman.employee_id << endl;
    cout << "Employee Payroll is : " << harman.payroll << endl;
    cout << "Employee Grade is : " << harman.grade << endl;
    cout << "Employee Sits at : " <<harman.desk_number << endl;

    return 0;
}