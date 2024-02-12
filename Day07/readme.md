# This is Day 07 of learning C++
## *12 February 2024*

## Create A Private Class
- we can create a private class using the *`private`* keyword.
```cpp
#include<iostream>
using namespace std;

class Employee{
    private :
        int id ;
        int payroll ;
} ;

int main()
{
    Employee ep1;
    ep1.id = 45 ;
    return 0;
}
```

```cmd
02-private-class.cpp: In function 'int main()':
02-private-class.cpp:13:9: error: 'int Employee::id' is private within this context
     ep1.id = 45 ;
         ^~
02-private-class.cpp:6:13: note: declared private here
         int id ;
```

- By default, if private of public is not mentioned, then all the objects will be considered ***private***.
```cpp
#include<iostream>
using namespace std;

class Employee{
    int id ;
    int payroll ;
} ;

int main()
{
    Employee ep1;
    ep1.id = 45 ;
    return 0;
}
```

```cmd
02-private-class.cpp: In function 'int main()':
02-private-class.cpp:13:9: error: 'int Employee::id' is private within this context
     ep1.id = 45 ;
         ^~
02-private-class.cpp:6:13: note: declared private here
         int id ;
```

***Note - We can not access the members of a private class directly.***

----

## Accessing the elements of a *private* class
We can access the elements of a private class by creating functions inside a public class in it.
```cpp
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
```

```cmd
This is the employee ID : 451278
This is the payroll of the employee : 100000
```

----

Lets see how can we pass values to elements present in a private class for a particular object.
For that, we have to use scope resolution operator.
Syntax -
```cpp
<func-data-type> <Class-Name> :: (<arguments, if any>) {
    // body
}
```

```cpp
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
```

```cmd
Enter the employee id : 0128011
Enter the employee payroll : 100000

This is the employee ID : 128011
This is the payroll of the employee : 100000
```