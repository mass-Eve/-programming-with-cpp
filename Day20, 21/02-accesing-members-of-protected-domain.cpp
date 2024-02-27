#include<iostream>
#include<string>
using namespace std;

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

int main()
{
    // An employee {e1} from the Employee Class
    Employee e1;

    // accessing the members for the object (employee) e1

    // adding details
    e1.addData("Saksham", 4620346);

    // checking the details
    e1.viewData();
    
    return 0;
}