#include<iostream>
using namespace std;

class Employee{
    private :
        int id ;
        int payroll ;
    public :
        void getInfo() // print to console
        { 
            cout << "This is the employee ID : " << id << endl; 
            cout << "This is the payroll of the employee : " << payroll << endl; 
        }

        void setDetails(int eid, int pay);
} ;

// A function to pass the values for a element of the class object.
void Employee :: setDetails(int eid, int pay)
{
    id = eid;
    payroll = pay;
}

int main()
{
    Employee ep1;

    int eid, pay;
    cout << "Enter the employee id : " ;
    cin >> eid;
    cout << "Enter the employee payroll : " ;
    cin >> pay;

    cout << endl ;

    ep1.setDetails(eid, pay);
    ep1.getInfo();

    return 0;
}