#include<iostream>
using namespace std;

class Employee{
    private :
        int id = 451278;
        int payroll = 100000;
    public :
        void getInfo() // print to console
        { 
            cout << "This is the employee ID : " << id << endl; 
            cout << "This is the payroll of the employee : " << payroll << endl; 
        }
} ;

int main()
{
    Employee ep1;
    ep1.getInfo();

    return 0;
}