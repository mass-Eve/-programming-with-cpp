#include<iostream>
#include<string>
using namespace std;

class Employee{
    protected:
        string emplName;

    private :
        int empID;
};

int main()
{
    // An employee {e1} from the Employee Class
    Employee e1;

    // Trying to access employee ID which is a private member
    e1.empID;

    // Trying to access employee Name which is a protected member
    e1.emplName;
    
    return 0;
}