# This is Day 01 of learning C++

# Control Structures In C++
- They help us in controling the flow of the program and also they provide logic to our program.

- They are mainly 3 types ~
    01. Sequence Structures.
    02. Selection Structures.
    03. Iterative or Loop Structures.

Let's discuss more about them ......

## Sequence Structures :
- In sequence stuctures, we normally write all the lines of code that has to be executed by c++ . And all those lines are executed, always.

- The *Flow of Control* is top to down. First we enter the program through the main() , after that we execute each statement we see.

This is what a sequential execution is.

## Selction Structures :
- In selection structures, we can control the flow of the program. 

- In selection structures, first a condition is encountered by the c++ compiler, it is like a question, and the answer is mostly `boolean true` or `boolean false` .

- The compiler evaluates the condition or tries to find the answer of the question and if the condition evaluates to be *true*, it will do a certain task, and if the condition evaluates as *false*, it will do something else. But it will not be doing both the things.

- For example, all of us have used the one and only ***Sridharacharya Formula*** to find the roots of a quadratic equation. Where the conditions are as follows - if the value of discriminant is more than 0, the quadratic equation will have Real and Distinct roots, else if the value of discriminant is equal to 0, the quadratic equation will have equal and real roots, else the equation will have imaginary roots. In all the cases, only task has to be done.

## Types of Selection Statements ~
01. ***if statements***
02. ***if-else statements***
03. ***if-(else-if)-else ladder***
04. ***switch(case) statement***

---

## Loop Structures
- When we want to do a task *n number of times* , wwe make use of loop structures.

- Loops helps us in doing a task until the condition is `True` .

## Types Of Loop Structures
There are 3 loops in total, in c++
01. ***while loop***
```c++
// Initialisation of loop variable
int <var> = <value>;
while (<condition>)
{
    // Body
    // Loop variable Updation
}
```

02. ***for loop***
```c++
for (<loop-variable-initialisation> ; <condition> ; <updation>)
{
    // Body
}
```

03. ***do while loop***
```c++
// Initialisation of loop variable
int <var> = <value>;
do {
    // Body
    // Loop variable Updation
} while (<condition>) ;
```

----

# Pointers 
- Pointers are a kind of special variable, which stores the memory address of a variable.

### Address Of Operator Symbol (&)
Special symbol which gives the memory address of a variable.

```c++
#include<iostream>
using namespace std;

int main()
{
    int a = 5;
    cout << "This is a : " << a << endl;
    cout << "This is the memory location of a : " << &a << endl;

    return 0;
}
```

```powershell
This is a : 5
This is the memory location of a : 0x61ff0c
```

### Indirection Operator In C ( * )
- The indirection operator in C is represented by the asterisk ' * ' symbol. 

- It is also known as the *dereference operator*. 

- The indirection operator serves two basic purposes -
 - It is used to create a pointer to a variable.
 - It is used to access the value stored at the address held by a pointer. In other words, it allows you to retrieve the data located in the memory location pointed to by a pointer.

## Lets create a pointer now
```c++
#include<iostream>
using namespace std;

int main()
{
    int a = 5;
    int *ap = &a ;
    cout << "The value of a is : " << a << endl;
    cout << "Variable a is stored at : '" << &a << "' memory location" << endl;
    cout << "The value of ap, which is a pointer to store the memory address of variable a, is : " << ap << endl;
    cout << "The variable ap, which is a pointer to store the memory address of variable a, is located at : '" << &ap << "' in the memory." << endl;
    cout << "The value stored in variable a thorugh the pointer ap, by pointer dereferencing is : " << *ap << endl;
    
    return 0;
}
```

```powershell
The value of a is : 5
Variable a is stored at : '0x61ff0c' memory location
The value of ap, which is a pointer to store the memory address of variable a, is : 0x61ff0c
The variable ap, which is a pointer to store the memory address of variable a, is located at : '0x61ff08' in the memory.
The value stored in variable a thorugh the pointer ap, by pointer dereferencing is : 5
```

----

# Arrays

- An *Array* is a colleciton of items of similar data type, stored in conriguous or continuous memory location.

- Arrays are indexed from *0* to *length - 1*.

- Lets create an array
```c++
#include<iostream>
using namespace std;

int main()
{
    // create an integer array to store the marks of a student in 6 subjects
    int marks[6] = {70, 75, 62, 95, 98, 81};

    // Print the marks
    cout << marks[0] << endl;
    cout << marks[1] << endl;
    cout << marks[2] << endl;
    cout << marks[3] << endl;
    cout << marks[4] << endl;
    cout << marks[5] << endl;
    return 0;
}
```

## Iterating through an array using loops
```cpp
#include<iostream>
using namespace std;

int main()
{
    // create an integer array to store the marks of a student in 6 subjects
    int marks[6] = {70, 75, 62, 95, 98, 81};

    // Print the marks
    cout << "The marks of the student are as follows -\n" ;

    // using for loop
    for (int i = 0; i < 6; i++)
    {
        if (i == 5){
            cout << i << endl;
        }
        else{
            cout << i << ", ";
        }
    }

    cout << endl ;

    // using while loop
    int i = 0;
    while (i < 6)
    {
        if (i == 5){
            cout << i << endl;
        }
        else{
            cout << i << ", ";
        }
        i++ ;
    }

    cout << endl ;

    // using do while loop
    i = 0 ;
    do {
        if (i == 5){
            cout << i << endl;
        }
        else{
            cout << i << ", ";
        }
        i++ ;
    } while (i < 6) ;

    return 0;
}
```
```cmd
The marks of the student are as follows -
0, 1, 2, 3, 4, 5

0, 1, 2, 3, 4, 5

0, 1, 2, 3, 4, 5
```

----

# Arrays & Pointers

- The name of the array, when written alone, itself points to the memory location where the first element of the array is stored.

- meaning, 
```c++
#include<iostream>
using namespace std;

int main()
{
    int array[] = {54, 35, 12, 03};

    cout << "The memory location of the zeroth element of the array by using the zeroth element itself is " << &array[0] << endl;
    cout << "The memory location of the zeroth element of the array by just using the array name is " << array << endl;
    return 0;
}
```

```cmd
The memory location of the zeroth element of the array by using the zeroth element itself is 0x61ff00
The memory location of the zeroth element of the array by just using the array name is 0x61ff00
```

## Iterating through an array using pointers
```cpp
#include<iostream>
using namespace std;

int main()
{
    // An integer array
    int array[] = {54, 35, 12, 03};

    // A pointer to that integer array
    int *ap = array;

    for (int i = 0; i < 4; i++)
    {
        cout << "element at position " << i << " is : " << *(ap+i) << endl;
    }
}
```

```cmd
element at position 0 is : 54
element at position 1 is : 35
element at position 2 is : 12
element at position 3 is : 3
```