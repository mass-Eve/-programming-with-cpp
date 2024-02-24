# This Is Day18 Of Learning C++
## *24 February 2024*

# Some Points To Be Noted While Inheriting Classes
- Visibility of the Class is kind of a parameter which basically is just like the *public* and *private* thing that we have inside a class.
- It defines how you are inheriting the members of the base class in your class! 

- ***Important Note : We can only inherit the public members of a class, we simply can't inherit the private members of a class.***

- If you want to inherit the public members of the base class as public members in your derived class, you use *public visibility*. 
- But if you want to inherit the public members of the base class as private members of your derived class, you use *private visibility*.

- The ***default visibility*** is *private*.

-----

# Creating Derived Classes
To create a derived class, or a class which is inheriting properties from another class (*base class*), we use the following syntax ~
```cpp
// Declare the base class
class <Base-Class-Name>{
    // body
};

// Declare the derived class
class <Derived-Class-Name> : <visibility-mode> <Base-Class-Name>{

};
```

-----

# Understanding The Concept Of Inheritance With Examples ~
To understand inheritance in the simplest form, lets divide it in two forms -:

**Case 1** : Base Class with private members

**Case 2** : Base Class with public members

## Case 1 Outline ~  
- We have created a `Employee` class and in that class we have created two private members.
- Next we have created a `Programmer` class, which is inheriting values from the `Employee` class. 
- The idea is that a company has many employees and each employee has a different department. Not every employee is a computer programmer, but every computer programmer (in that company specifically) is an Employee of that company.
- Utilising that idea, we have some general properties that every employee has and then we have some properties that are specific the Programmer Employees.

### Example 1 ~
```cpp
#include<iostream>
#include<string>
using namespace std;

// Base class Employee
class Employee{
    private:
        string emp_name;
        int emp_id;
    public:
        // Empty construtor
        Employee(){
            cout << "New employee with garbage value has been created" << endl;
        }

        Employee(string name, int id){
            cout << "New employee with provided values has been created" << endl;
            emp_name = name;
            emp_id = id;
        }

        void displayData(){
            cout << "Employee name : " << emp_name << endl;
            cout << "Employee ID : " << emp_id << endl;
        }
};

// A Programmer class which is Derived from the Employee class 
//          OR
// A Company has an employee which is also a programmer, but not all the employees are programmer
class Programmer : Employee{
    private: 
        string programmingLanguage;
        int totalProjects;
    public:
        Programmer(){
            cout << "A programmer employee has been created with default values" << endl;
            programmingLanguage = "C";
            totalProjects = 5;
        }
        
        Programmer(string langName, int projectsCount){
            cout << "A programmer employee has been created with the passed values" << endl;
            programmingLanguage = langName;
            totalProjects = projectsCount;
        }

        void displayData(){
            cout << "Programming Language : " << programmingLanguage << endl;
            cout << "Total Projects Completed Till Noe : " << totalProjects << endl;
        }
};

int main()
{
    cout << "------------------------------------------------" << endl;
    cout << "Creating two Employees using the Employee class" << endl;
    Employee emp1("mona", 1245), emp2;
    cout << "------------------------------------------------" << endl;

    cout << endl;
    cout << "These are my regular employees" << endl;
    cout << "------------------------------------------------" << endl;
    cout <<  "Employee 1" << endl;
    emp1.displayData();
    cout << "------------------------------------------------" << endl;
    cout <<  "Employee 2" << endl;
    emp2.displayData();
    
    cout << "------------------------------------------------" << endl;
    cout << "Creating One Programmer Employee using the Programmer class" << endl;
    Programmer emp3("C", 5);
    cout << "------------------------------------------------" << endl;

    cout << "This is a programmer employee " << endl;
    emp3.displayData();
    cout << "------------------------------------------------" << endl;

    return 0;
}
```

### Output
```cpp
Creating two Employees using the Employee class
New employee with provided values has been created
New employee with garbage value has been created
------------------------------------------------

These are my regular employees
------------------------------------------------
Employee 1
Employee name : mona
Employee ID : 1245
------------------------------------------------
Employee 2
Employee name :
Employee ID : 1993577244
------------------------------------------------
Creating One Programmer Employee using the Programmer class
New employee with garbage value has been created
A programmer employee has been created with the passed values
------------------------------------------------
This is a programmer employee
Programming Language : C
Total Projects Completed Till Noe : 5
------------------------------------------------
```

- But as you can see, this program is running well. But ideally, it shouldn't! Because we are trying to inherit the private members of the `Employee` Class which is against the rules.
- On looking carefully, we can see that we are not actually accessing those private members of the Employee class, we are just accessing the members created inside the `Programmer` class. 

### Example 2 ~
- But if I try to access those private members, then it should raise appropriate errors ? Lets check this out .......
- In this example, we are adding one more member function inside our `Programmer` class, which is basically used to add the name and id of the programmer employee.

```cpp
#include<iostream>
#include<string>
using namespace std;

// Base class Employee
class Employee{
    private:
        string emp_name;
        int emp_id;
    public:
        // Empty construtor
        Employee(){
            cout << "New employee with garbage value has been created" << endl;
        }

        Employee(string name, int id){
            cout << "New employee with provided values has been created" << endl;
            emp_name = name;
            emp_id = id;
        }

        void displayData(){
            cout << "Employee name : " << emp_name << endl;
            cout << "Employee ID : " << emp_id << endl;
        }
};

// A Programmer class which is Derived from the Employee class 
//          OR
// A Company has an employee which is also a programmer, but not all the employees are programmer
class Programmer : Employee{
    private: 
        string programmingLanguage;
        int totalProjects;
    public:
        Programmer(){
            cout << "A programmer employee has been created with default values" << endl;
            programmingLanguage = "C";
            totalProjects = 5;
        }
        
        Programmer(string langName, int projectsCount){
            cout << "A programmer employee has been created with the passed values" << endl;
            programmingLanguage = langName;
            totalProjects = projectsCount;
        }

        void setEmployeeDetails(string name, int id){
            emp_name = name;
            emp_id = id;
        }

        void displayData(){
            cout << "Programming Language : " << programmingLanguage << endl;
            cout << "Total Projects Completed Till Noe : " << totalProjects << endl;
        }
};

int main()
{
    cout << "------------------------------------------------" << endl;
    cout << "Creating two Employees using the Employee class" << endl;
    Employee emp1("mona", 1245), emp2;
    cout << "------------------------------------------------" << endl;

    cout << endl;
    cout << "These are my regular employees" << endl;
    cout << "------------------------------------------------" << endl;
    cout <<  "Employee 1" << endl;
    emp1.displayData();
    cout << "------------------------------------------------" << endl;
    cout <<  "Employee 2" << endl;
    emp2.displayData();
    
    cout << "------------------------------------------------" << endl;
    cout << "Creating One Programmer Employee using the Programmer class" << endl;
    Programmer emp3("C", 5);
    cout << "------------------------------------------------" << endl;

    cout << "This is a programmer employee " << endl;
    emp3.displayData();
    cout << "------------------------------------------------" << endl;

    return 0;
}
```

### Output
```cpp
02-inheritance.cpp: In member function 'void Programmer::setEmployeeDetails(std::__cxx11::string, int)':
02-inheritance.cpp:49:13: error: 'std::__cxx11::string Employee::emp_name' is private within this context
             emp_name = name;
             ^~~~~~~~
02-inheritance.cpp:8:16: note: declared private here
         string emp_name;
                ^~~~~~~~
02-inheritance.cpp:50:13: error: 'int Employee::emp_id' is private within this context
             emp_id = id;
             ^~~~~~
02-inheritance.cpp:9:13: note: declared private here
         int emp_id;
             ^~~~~~
```

- But as you can see, without even calling that function, the compiler is giving an error
- Now this completely proves that *"private employees are not inherited at all."*

### Example 3 ~
- What if I create this `setEmployeeDetails()` function in the public section of the base class `Employee` instead of this `Programmer` class, will that work ? 
- Ideally, it should work because, since the function is now in the public scope of the base class, and all the elements of base class are inherited, isn't it ?

- Lets try this out ......

```cpp
#include<iostream>
#include<string>
using namespace std;

// Base class Employee
class Employee{
    private:
        string emp_name;
        int emp_id;
    public:
        // Empty construtor
        Employee(){
            cout << "New employee with garbage value has been created" << endl;
        }

        Employee(string name, int id){
            cout << "New employee with provided values has been created" << endl;
            emp_name = name;
            emp_id = id;
        }

        void displayData(){
            cout << "Employee name : " << emp_name << endl;
            cout << "Employee ID : " << emp_id << endl;
        }

        void setEmployeeDetails(string name, int id){
            emp_name = name;
            emp_id = id;
        }
};

// A Programmer class which is Derived from the Employee class 
//          OR
// A Company has an employee which is also a programmer, but not all the employees are programmer
class Programmer : Employee{
    private: 
        string programmingLanguage;
        int totalProjects;
    public:
        Programmer(){
            cout << "A programmer employee has been created with default values" << endl;
            programmingLanguage = "C";
            totalProjects = 5;
        }
        
        Programmer(string langName, int projectsCount){
            cout << "A programmer employee has been created with the passed values" << endl;
            programmingLanguage = langName;
            totalProjects = projectsCount;
        }

        void displayData(){
            cout << "Programming Language : " << programmingLanguage << endl;
            cout << "Total Projects Completed Till Noe : " << totalProjects << endl;
        }
};

int main()
{
    cout << "------------------------------------------------" << endl;
    cout << "Creating two Employees using the Employee class" << endl;
    Employee emp1("mona", 1245), emp2;
    cout << "------------------------------------------------" << endl;

    cout << endl;
    cout << "These are my regular employees" << endl;
    cout << "------------------------------------------------" << endl;
    cout <<  "Employee 1" << endl;
    emp1.displayData();
    cout << "------------------------------------------------" << endl;
    cout <<  "Employee 2" << endl;
    emp2.displayData();
    
    cout << "------------------------------------------------" << endl;
    cout << "Creating One Programmer Employee using the Programmer class" << endl;
    Programmer emp3("C", 5);
    cout << "------------------------------------------------" << endl;

    cout << "This is a programmer employee " << endl;
    emp3.displayData();
    cout << "------------------------------------------------" << endl;

    cout << endl;

    cout << "------------------------------------------------" << endl;
    cout << "Trying to add name and ID of the programmer employee " <<  endl;
    emp3.setEmployeeDetails("Christine", 45);

    return 0;
}
```

### Output
Wait, again !

```cpp
03-inheritance.cpp: In function 'int main()':
03-inheritance.cpp:88:44: error: 'void Employee::setEmployeeDetails(std::__cxx11::string, int)' is inaccessible within this context
     emp3.setEmployeeDetails("Christine", 45);
                                            ^
03-inheritance.cpp:27:14: note: declared here
         void setEmployeeDetails(string name, int id){
              ^~~~~~~~~~~~~~~~~~
03-inheritance.cpp:88:44: error: 'Employee' is not an accessible base of 'Programmer'
     emp3.setEmployeeDetails("Christine", 45);
```

We got another error. Maybe this was because *by default, all the inheritance is private, if we don't mention it externally.* Lets try again by changing that as well.

## Example 4 ~
- This time we are changing the visibility of inheritance from private to public. Lets see if that work......
- While doing this, I saw an ambiguity in the program which might can result in undesired value. We are having two `displayData()` member functions, one unique to the base class and other unique to derived class. So for the derived class, I have changed it to `displayDataProgrammer()` to avoid ambiguity.

```cpp
#include<iostream>
#include<string>
using namespace std;

// Base class Employee
class Employee{
    private:
        string emp_name;
        int emp_id;
    public:
        // Empty construtor
        Employee(){
            cout << "New employee with garbage value has been created" << endl;
        }

        Employee(string name, int id){
            cout << "New employee with provided values has been created" << endl;
            emp_name = name;
            emp_id = id;
        }

        void displayData(){
            cout << "Employee name : " << emp_name << endl;
            cout << "Employee ID : " << emp_id << endl;
        }

        void setEmployeeDetails(string name, int id){
            emp_name = name;
            emp_id = id;
        }
};

// A Programmer class which is Derived from the Employee class 
//          OR
// A Company has an employee which is also a programmer, but not all the employees are programmer
class Programmer : public Employee{
    private: 
        string programmingLanguage;
        int totalProjects;
    public:
        Programmer(){
            cout << "A programmer employee has been created with default values" << endl;
            programmingLanguage = "C";
            totalProjects = 5;
        }
        
        Programmer(string langName, int projectsCount){
            cout << "A programmer employee has been created with the passed values" << endl;
            programmingLanguage = langName;
            totalProjects = projectsCount;
        }

        void displayDataProgrammer(){
            cout << "Programming Language : " << programmingLanguage << endl;
            cout << "Total Projects Completed Till Noe : " << totalProjects << endl;
        }
};

int main()
{
    cout << "------------------------------------------------" << endl;
    cout << "Creating two Employees using the Employee class" << endl;
    Employee emp1("mona", 1245), emp2;
    cout << "------------------------------------------------" << endl;

    cout << endl;
    cout << "These are my regular employees" << endl;
    cout << "------------------------------------------------" << endl;
    cout <<  "Employee 1" << endl;
    emp1.displayData();
    cout << "------------------------------------------------" << endl;
    cout <<  "Employee 2" << endl;
    emp2.displayData();
    
    cout << "------------------------------------------------" << endl;
    cout << "Creating One Programmer Employee using the Programmer class" << endl;
    Programmer emp3("C", 5);
    cout << "------------------------------------------------" << endl;

    cout << "This is a programmer employee " << endl;
    emp3.displayData();
    cout << "------------------------------------------------" << endl;

    cout << endl;

    cout << "------------------------------------------------" << endl;
    cout << "Trying to add name and ID of the programmer employee " <<  endl;
    emp3.setEmployeeDetails("Christine", 45);
    emp3.displayData();
    emp3.displayDataProgrammer();

    return 0;
}
```

### Output
And here we go...... No Errors at all .......

```cpp
------------------------------------------------
Creating two Employees using the Employee class
New employee with provided values has been created
New employee with garbage value has been created
------------------------------------------------

These are my regular employees
------------------------------------------------
Employee 1
Employee name : mona
Employee ID : 1245
------------------------------------------------
Employee 2
Employee name :
Employee ID : 4199136
------------------------------------------------
Creating One Programmer Employee using the Programmer class
New employee with garbage value has been created
A programmer employee has been created with the passed values
------------------------------------------------
This is a programmer employee
Employee name :
Employee ID : 0
------------------------------------------------

------------------------------------------------
Trying to add name and ID of the programmer employee
Employee name : Christine
Employee ID : 45
Programming Language : C
Total Projects Completed Till Noe : 5
```

----

## *Now it is pretty clear that If we want to access the private elements of the base class, we have to create a public function in the base class only, which can manipulate those private members on the behalf of the derived class. Also, we have to change the inheritance visibility to public. Then only we can suppose to do this.*