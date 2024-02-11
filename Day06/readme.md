# This is Day 06
## *11 February 2024*

# Object Oriented Programming In C++

## Terminologies Used In OOPs

01. ***class*** :  Basic templates used for creating objects are termed as *classes*.

02. ***Object*** : Basic *run time entities* are termed as *objects*.

## Creat A Class
- A class can be created using the `class` keyword.

- While creating objects inside a class, we have to make it sure that we are defining the scope of the objects. *Scope* basically means if they can be accessed easily or not.

- There are two types of scopes
    01. ***private scope*** :
    02. ***public scope***
- by default, all the objects are in private scope, unless specified explicitly.

Lets create our first clas, a *Public Class* ~
```cpp
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
```

```cmd
Employee ID is : 1001852
Employee Payroll is : 180000
Employee Grade is : a
Employee Sits at : 4
```