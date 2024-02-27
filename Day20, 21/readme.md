# This Is Day20 Of Learning C++
## *26 February 2024*

# Quick Recap About The *public* and *private* Declarations Of The Members.
- When we create a member inside the **public** domain of a class, this member can be 
    1. accessed outside of the class with *dot (.) operator* and it is not necessary to create a funciton that can access it.
    2. inherited by an sub-class, both as private and public.

- When we create a member inside the **private** domain of a class, this member can not be 
    1. directly accessed outside of the class. To access it, there has to be a function defined in the public domain of the class, which is accessing it.
    2. inherited by a class deriving itself from the base class where that member is created.

- There is another category of members which can be declared inside a class, it is known as ***protected***.

-----

# Protected Access Modifier
- Sometime, we may encounter a condition where we want to access that private member, but still we don't want to threaten its privacy.
- In these type of conditions, a *protected* access modifier comes in action.
- The members declared in the section *protected* section of the class are kind of a special case to a *private* members.
- We can access and inherit the protected members but we can not do the same with *private* members of the class.
- The class member declared as Protected are inaccessible outside the class but they can be accessed by any subclass(derived class) of that class.

## How To Create Members With *protected* Access ?
- The syntax to create members with *protected* access is similar to that of the *public* and *private* access modifiers.
- We will make use of the *`protected`* keyword.

## Lets Understand This All

### Example 1 ~
```cpp
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
```

### Output ~
```cmd
\01-protected-access-modifier.cpp: In function 'int main()':
.\01-protected-access-modifier.cpp:19:8: error: 'int Employee::empID' is private within this context
     e1.empID;
        ^~~~~
.\01-protected-access-modifier.cpp:10:13: note: declared private here
         int empID;
             ^~~~~
.\01-protected-access-modifier.cpp:22:8: error: 'std::__cxx11::string Employee::emplName' is protected within this context
     e1.emplName;
        ^~~~~~~~
.\01-protected-access-modifier.cpp:7:16: note: declared protected here
         string emplName;
```

- ***From the above code, it is evident that just like private members, we can not access protected members as well, outside of the class, directly.***

### Example 2 ~

```cpp
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
```

### Output 

```cmd
------------------------------------
Employee Name : Saksham
Employee ID : 4620346
------------------------------------
```

- ***From the above code, it is evident that -- to access the protected members of a class, we have to follow the same rules as we follow for the private members.***

# This Is Day21 Of Learning C++
## *27 February 2024*

# Private Inheritance For Members Of `protected` Zone

### Example 3 ~
- Here we are creating a base class *`Employee`* and a class *`ProgrammerEmployee`* which is inheriting from the base class.
- We have set the inheritance as private, that is why all the public and protected members are inherited as private members of the *`ProgrammerEmployee`* class and the private members are not inherited at all.
- Clearly, we can not access the members inside the derived class as they are not inherited. Also the functions which are able to access them are private as well.
- But what we can do is that, we can access those functions, because they are declared in the public section of the base class. So they are inherited, but are in the private section. Thats it.
- So I created two respective functions and called those functions inside them.

```cpp
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
        void addDataThruProgrammerClass(string name, int id){
            addData(name, id);
        }

        void viewDataThruProgrammerClass(){
            viewData();
        }
};

int main()
{
    // An employee {e1} from the Employee Class
    ProgrammerEmployee e1;

    // accessing the members for the object (employee) e1

    // adding details
    e1.addDataThruProgrammerClass("Saksham", 4620346);

    // checking the details
    e1.viewDataThruProgrammerClass();
    
    return 0;
}
```

### Output ~

```cmd
------------------------------------
Employee Name : Saksham
Employee ID : 4620346
------------------------------------
```

### Example 4 ~
- But wait, *employee name* is declared in the protected zone, so it must accessible, isn't it ?
- Lets check that out as well.

```cpp
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
```

### Output ~

```cmd
Entering the name of employee as it is declared in the protected zone of the base class, so it is accessible to this derived class as well.

This is the name of the programmer employee : 'Saksham'. We are able to access it because it was declared in the protected zone of the base class, and that is why it was inherited in the derived class.
```

--------