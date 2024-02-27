#include<iostream>
#include<string>
using namespace std;

// A Employee class to hold the details of employees of a company
class Employee{
    protected:
        string emplName;

    private :
        int empID;

    public :
        void addData(string name, int id){
            emplName = name;
            empID = id;
        }

        void viewData(){
            cout << "------------------------------------\n";
            cout << "Employee Name : " << emplName << endl;
            cout << "Employee ID : " << empID << endl;
            cout << "------------------------------------\n";
        }
};

// A class specifically designed to store the details of all the programmer employees working in a company. This class is inheriting from Employee Class 
class ProgrammerEmployee : public Employee{
    
};

int main()
{
    // An employee {e1} from the Employee Class
    ProgrammerEmployee e1;

    // accessing the members for the object (employee) e1

    // adding details
    e1.addData("Saksham", 54214);

    // checking the details
    e1.viewData();
    
    return 0;
}