# This is Day 04 Of Learning C++
## *09 February 2024*

## Structures
Structure is a user-defined data type, which can be used to stored values of **different data types**

## Let's Create A Structure
To create a structure, we make use of the `struct` keyword.

```c++
#include<iostream>
using namespace std;

// A structure to store the marks and grade of two subjects of a student
struct marks{
    int marks_math ;
    char grade_math ;
    int marks_cs ;
    char grade_cs ;
} ;

int main()
{
    // A struct-type variable to use the structure created above
    struct marks Shashank;

    Shashank.marks_math = 98;
    Shashank.marks_cs = 95;
    Shashank.grade_math = 'A' ;
    Shashank.grade_cs = 'A' ;

    cout << "Marks of Shashank in Maths : " << Shashank.marks_math << endl; 
    cout << "Marks of Shashank in CS : " << Shashank.marks_cs << endl;

    cout << "Grade of Shashank in Maths : " << Shashank.grade_math << endl; 
    cout << "Grade of Shashank in CS : " << Shashank.grade_cs << endl;

    return 0;
}
```

```powershell
Marks of Shashank in Maths : 98
Marks of Shashank in CS : 95
Grade of Shashank in Maths : A
Grade of Shashank in CS : A
```

- We can also create alias in c++. 
- clearly in the above program, writing the whole thing `struct <structure name> <identifier>` can be a bit challenging when the names are too long. Therefore, we can use the *`typedef`* keyword in c++ to create an alias of it. Let's see how we can do it.

```c++
#include<iostream>
using namespace std;

// A structure to store the marks and grade of two subjects of a student
typedef struct marks{
    int marks_math ;
    char grade_math ;
    int marks_cs ;
    char grade_cs ;
} mng;

int main()
{
    // A struct-type variable to use the structure created above
    mng Shashank;
    
    Shashank.marks_math = 98;
    Shashank.marks_cs = 95;
    Shashank.grade_math = 'A' ;
    Shashank.grade_cs = 'A' ;

    cout << "Marks of Shashank in Maths : " << Shashank.marks_math << endl; 
    cout << "Marks of Shashank in CS : " << Shashank.marks_cs << endl;

    cout << "Grade of Shashank in Maths : " << Shashank.grade_math << endl; 
    cout << "Grade of Shashank in CS : " << Shashank.grade_cs << endl;

    return 0;
}
```

```cmd
Marks of Shashank in Maths : 98
Marks of Shashank in CS : 95
Grade of Shashank in Maths : A
Grade of Shashank in CS : A
```

## Unions

- A union is a user-defined datatype in which we can define members of different types of data types just like structures. 

- But the thing that makes *`unions`* different from structures is that all the members *(variables)* of the union share the same memory location, unlike a structure that allocates memory separately for each member variable. 

- The size of the union is equal to the size of the largest data type.

### Create a Unions
```c++
#include<iostream>
using namespace std;

// a union to store information about a student
union studentInfo{
    int rollno ;
    int kaksha ;
    char section ;
    float height ;
    float weight ;
} ;

int main()
{
    // lets create a union variable
    union studentInfo Himesh;
    
    Himesh.rollno = 45;
    cout << "The roll number of Himesh is : " << Himesh.rollno << endl;

    Himesh.kaksha = 12;
    cout << "Himesh studies in : " << Himesh.kaksha << endl;

    return 0;
}
```

```cmd
The roll number of Himesh is : 45
Himesh studies in : 12
```

But 
```cpp
#include<iostream>
using namespace std;

// a union to store information about a student
union studentInfo{
    int rollno ;
    int kaksha ;
    char section ;
    float height ;
    float weight ;
} ;

int main()
{
    // lets create a union variable
    union studentInfo Himesh;
    
    Himesh.rollno = 45;
    Himesh.kaksha = 12;

    cout << "The roll number of Himesh is : " << Himesh.rollno << endl;
    cout << "Himesh studies in : " << Himesh.kaksha << endl;

    return 0;
}
```

```cmd
The roll number of Himesh is : 12
Himesh studies in : 12
```

You can spot the difference, we are getting a value for rollno which we have not setted. 

----

# Functions In C++
`return 0` means that our program has run without any problems

## Syntax Of Creating A Function
```cpp
<data-type> <function-name>()
{
    // body

    // return , if applicable
}
```

## Creating A Function
```cpp
// A Function to add two numbers
#include<iostream>
using namespace std;

int add(int a, int b){
    int sum = a + b;
    return sum;
}

int main()
{
    int num1 = 5;
    int num2 = 6;
    int sum = add(num1, num2);
    cout << "The sum of " << num1 << " and " << num2 << " is : " << sum << endl; 
    return 0;
}
```

```cmd
The sum of 5 and 6 is : 11
```

## Function Prototyping
```cpp
#include<iostream>
using namespace std;

// Function prototyping
int add(int, int);

int main()
{
    int num1 = 5;
    int num2 = 6;
    int sum = add(num1, num2);
    cout << "The sum of " << num1 << " and " << num2 << " is : " << sum << endl; 
    return 0;
}

// Function definition
int add(int a, int b){
    int sum = a + b;
    return sum;
}
```

```cmd
The sum of 5 and 6 is : 11
```

# Function Calling Mechanisms
There are two ways in which a function can be called.

## Call By Value
In this method, a copy of the actual values is passed in the *user-defined function.*

```cpp
#include<iostream>
using namespace std;

// A function to swap two numbers
void swap(int num1, int num2)
{
    cout << endl;
    cout << "State of values inside the function, before swapping ~ num1: " << num1 << " || num2: " << num2 << endl;
    int temp = num1;
    num1 = num2;
    num2 = temp;
    
    cout << "State of values inside the function, after swapping ~ num1: " << num1 << " || num2: " << num2 << endl;
    cout << endl;
}

int main()
{
    int a, b;
    cout << "Enter num1: " ;
    cin >> a;
    cout << "Enter num2: " ;
    cin >> b;

    cout << "Before swapping ~ num1: " << a << " || num2: " << b << endl;
    swap(a, b);
    cout << "After swapping ~ num1: " << a << " || num2: " << b << endl;

    return 0;
}
```

```cmd
Enter num1: 5
Enter num2: 3
Before swapping ~ num1: 5 || num2: 3

State of values inside the function, before swapping ~ num1: 5 || num2: 3
State of values inside the function, after swapping ~ num1: 3 || num2: 5

After swapping ~ num1: 5 || num2: 3
```

----

## Call By Reference
In this method, the actual memory reference of the variable is passed. Therefore, any changes made inside the function, affects the state of the actual values. 

```cpp
#include<iostream>
using namespace std;

// A function to swap two numbers
void swap(int *num1, int *num2)
{
    cout << endl;
    cout << "State of values inside the function, before swapping ~ num1: " << *num1 << " || num2: " << *num2 << endl;
    
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
    
    cout << "State of values inside the function, after swapping ~ num1: " << *num1 << " || num2: " << *num2 << endl;
    cout << endl;
}

int main()
{
    int a, b;
    cout << "Enter num1: " ;
    cin >> a;
    cout << "Enter num2: " ;
    cin >> b;

    cout << "Before swapping ~ num1: " << a << " || num2: " << b << endl;
    swap(&a, &b);
    cout << "After swapping ~ num1: " << a << " || num2: " << b << endl;

    return 0;
}
```

```cmd
Enter num1: 10
Enter num2: 20
Before swapping ~ num1: 10 || num2: 20

State of values inside the function, before swapping ~ num1: 10 || num2: 20
State of values inside the function, after swapping ~ num1: 20 || num2: 10

After swapping ~ num1: 20 || num2: 10
```

-----

## Call By Reference Variable

```cpp
#include<iostream>
using namespace std;

// A function to swap two numbers
void swap(int &num1, int &num2)
{
    cout << endl;
    cout << "State of values inside the function, before swapping ~ num1: " << num1 << " || num2: " << num2 << endl;

    int temp = num1;
    num1 = num2;
    num2 = temp;
    
    cout << "State of values inside the function, after swapping ~ num1: " << num1 << " || num2: " << num2 << endl;
    cout << endl;
}

int main()
{
    int a, b;
    int &y = a , &z = b;
    cout << "Enter num1: " ;
    cin >> a;
    cout << "Enter num2: " ;
    cin >> b;

    cout << "Before swapping ~ num1: " << a << " || num2: " << b << endl;
    swap(y, z);
    cout << "After swapping ~ num1: " << a << " || num2: " << b << endl;

    return 0;
}
```

```cmd
Enter num1: 5
Enter num2: 10
Before swapping ~ num1: 5 || num2: 10

State of values inside the function, before swapping ~ num1: 5 || num2: 10
State of values inside the function, after swapping ~ num1: 10 || num2: 5

After swapping ~ num1: 10 || num2: 5
```

-----

## Returning Reference Values

```cpp
#include<iostream>
using namespace std;

// A function to swap two numbers
int & swap(int &num1, int &num2)
{
    cout << endl;
    cout << "State of values inside the function, before swapping ~ num1: " << num1 << " || num2: " << num2 << endl;

    int temp = num1;
    num1 = num2;
    num2 = temp;
    
    cout << "State of values inside the function, after swapping ~ num1: " << num1 << " || num2: " << num2 << endl;
    cout << endl;

    return num1;
}

int main()
{
    int a, b;
    int &y = a , &z = b;
    cout << "Enter num1: " ;
    cin >> a;
    cout << "Enter num2: " ;
    cin >> b;

    cout << "Before swapping ~ num1: " << a << " || num2: " << b << endl;
    swap(y, z) = 96;
    cout << "After swapping ~ num1: " << a << " || num2: " << b << endl;

    return 0;
}
```

```cmd
Enter num1: 5
Enter num2: 6
Before swapping ~ num1: 5 || num2: 6

State of values inside the function, before swapping ~ num1: 5 || num2: 6
State of values inside the function, after swapping ~ num1: 6 || num2: 5

After swapping ~ num1: 96 || num2: 5
```

----

## Default Arguments
These are those arguments which have their value pre-defined in the function definition. And if the user don't provide any value from their side, then this value is used.

```cpp
#include<iostream>
using namespace std;

// A function to calculate discount
float discountCalculator(float purchaseAmount, float discountRate = 5)
{
    return (discountRate * purchaseAmount) / 100.0 ;
}

int main()
{
    float purchaseAmount;
    cout << "Enter your purchase amount : " ;
    cin >> purchaseAmount ;

    cout << "Your discount amount is : Rs " << discountCalculator(purchaseAmount) << endl ;
    cout << "Net Payment : Rs " << purchaseAmount - discountCalculator(purchaseAmount) << endl;

    cout << endl;

    cout << "Since you have put your own discount code, your discount amount is : Rs " << discountCalculator(purchaseAmount, 15) << endl ;
    cout << "Net Payment : Rs " << purchaseAmount - discountCalculator(purchaseAmount, 15) << endl;

    return 0;
}
```

```cmd
Enter your purchase amount : 1105
Your discount amount is : Rs 55.25
Net Payment : Rs 1049.75

Since you have put your own discount code, your discount amount is : Rs 165.75
Net Payment : Rs 939.25
```

----

# Constant Variables
There values can not be changed.
```cpp
#include<iostream>
using namespace std;

int main()
{
    int a = 5;
    cout << "a: " << a << endl;
    a = 6;
    cout << "Now a is: " << a << endl;

    // This will raise an error
    const int b = 7;
    cout << "b: " << a << endl;
    b = 8;
    cout << "Now b is: " << a << endl;

    return 0;
}
```

```cmd
08-constant-variables.cpp: In function 'int main()':
08-constant-variables.cpp:14:9: error: assignment of read-only variable 'b'
     b = 8;
```