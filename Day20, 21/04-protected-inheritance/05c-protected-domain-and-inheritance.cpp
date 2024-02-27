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
class ProgrammerEmployee : Employee{
    public : 
        void addDataThruProgrammerClass(string name){
            cout << "Entering the name of employee as it is declared in the protected zone of the base class, so it is accessible to this derived class as well." << endl;
            emplName = name;
        }

        void viewDataThruProgrammerClass(){
            cout << "This is the name of the programmer employee : '" << emplName << "'. We are able to access it because it was declared in the protected zone of the base class, and that is why it was inherited in the derived class." << endl;
        }
};

int main()
{
    // An employee {e1} from the Employee Class
    ProgrammerEmployee e1;

    // accessing the members for the object (employee) e1

    // adding details
    e1.addDataThruProgrammerClass("Saksham");

    // checking the details
    e1.viewDataThruProgrammerClass();
    
    return 0;
}