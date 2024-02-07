## C++ was Created By : *Bjrane Stroustrup*
## Year : *1979*

----

# Understanding Our First C++ Program
The first line that we have written was ~
```c++
#include <iostream>
```
- Here `#include` is a *pre-processing directive* , used to include various important *header files* in our c++ program.
- The next thing is `<iostream>` , this is a *header file* , which helps us in carrying out many important tasks, some of them are basic I/O Tasks.
- Together this line says that *from the `<iostream>` header file* , include all the functions and things that are important to run our C++ Program.

***Note*** - *All the empty lines are ignored by c++ . They are just meant for us, and they doesn't mean anything to the compiler.*

The second line is ~
```c++
int main() {

}
```
- `main()` is the *entry-point* of a c++ program.
- `int` is a `data type` in c++, and here it defines that this function *will return a integer value as its output*.
- `{}` : It denotes the *function body*.

Next we have 
```c++
std::cout << "Hello World" ;
```
- `::` --> This is called `scope resolution operator`.
- `cout` is a function, which is present in the *`<iostream>` header file* .
- `std ::` is used to distinguish between the same functions present in different header files. `using namespace std` tells that -- "there is a function `cout` present in the *std namespace*" .

Lastly, we have `
```c++
    return 0;
}
```

----

## We can run our program in two way ~
```c++
#include <iostream>

using namespace std;
int main()
{
    cout << "Hello";
    return 0;
}
```

***or***

```c++
#include <iostream>

int main()
{
    std::cout << "Hello";
    return 0;
}
```

----

### Variables
They are containers to store values of different data types.

----

### Comments
These are those lines in our code, which get ignored by c++ . They are written for understanding *what a particular line is doing*.

They are of two types 
- *Single Line Comments* : They are declared using *two forward slashes*.
  ```c++
  // This is a single line comment 
  ```
- *Multi Line Comments* : They are declared using *forward slashe and asterisk*.
  ```c++
  /* 
  This is a multi line comment 
  */
  ```

----

### Data Types
Primary or Built-in Data Types -
01. integer 
02. float
03. double
04. char
05. boolean (*false* and *true*)

User defined data types -
01. structures
02. unions
03. enums

Derived data types ~
01. Arrays
02. Function
03. Pointer

-----

### Declaring Variables
```c++
<data-type> <variable-name> = value
```

```c++
// Declaring A Integer Variable
int age = 5;

// Declaring A float Variable
int height = 5.6; 
```

-----

# Scope Of Variables
Scope of variable is can be simply defined as *the locations where a variable can be accessed from.*
There are two scopes :
- ***Local Scope*** - when a variable can only be accessed within a code block.
- ***Global Scope*** - when a variable can be accessed from any location inside the program

-----

### Keywords 
Keywords are some special words in c++ which are reserved for some special tasks in c++ . It is advised to not identifiers that have similar or identical values with the keywords

-----

### To create a new line : 
- use the *\n* escape sequence.
- we can also use `endl`
```c++
cout << "Hi" << endl
```

----

# Basic I/O in C++

In C++ , the sequence of bytes corresponding to *input* and *output* are commonly known as *streams*.

***Input Stream*** : When the direction of flow of bytes is from the the input device to the main memory, it is called as *Input Stream*. 

***Output Stream*** : When the direction of flow of bytes is from the main memory to output device, it is termed as *Output Stream*.

`<<` : *This is insertion operator*
`>>` : *This is Extraction operator, extract the input*

----

# Header Files
Header files are those files in c++ which adds and increases the functionality of our programs.

## Types Of Header Files
01. **System Header Files**
They come with the c++ compiler
01. **User Header Files**
They are written by programmers

----

# Operators In C++
## 01. Arithmetic Operators
- Addition (+)
- Subtraction (-)
- Multiplication (*)
- Division (/)
- Modulo (%)
- Prefix Increment (++a)
- Prefix Decrement (--a)
- Postfix Increment (a++)
- Postfix Decrement (a--)

## 02. Assignment Operators
- Equal To Operator (=)

## 02. Comparision Operators
- Double Equal To Operator (==) : Checks the equality of two values
- Not Equal To Operator (!=) : Checks if two values are not same
- Greater Than (>)
- Greater Than Equal To (>=)
- Less Than (<)
- Less Than Equal To (<=)
They return bool true (1) or bool false (0)

## 03. Logical Operators
- AND Operator (&&)
- OR Operator (||)
- NOT Operator (!)

## 04. Bitwise Operators
*(To be done later)*


# Accessing Global Variables In C++
This is done using the *scope resolution operator* : `::`

For example - in this program ~
```c++
#include <iostream>

using namespace std;

int age = 20;
int main()
{
    int age = 16;

    cout << "This is local pie : " << age << endl ;
    cout << "This is global pie : " << ::age << endl ;

    return 0;
}
```
`age` variable is created both in a *global scope* and in a *local scope* . We just have to write the scope resolution operator whenever we want to access the value inside the global variable.

----

# *Note*
By default in c++ , all the decimal values are considered as `double` or has a data type `double` , unless you specify.
For example -
```c++
float height = 5.2
```
Here, the variable `height` is a float. But when they are passed into a function, they are treated as double. And to tell the function that this is a floating point value, we use the *floating point literal*.
```c++
5.2f
5.2F
```

To prove this point, lets' print their size
```c++
#include <iostream>

using namespace std;

int main()
{
    cout << "The size of 34.4 is : " << sizeof(34.4) << endl ;
    cout << "The size of 34.4l is : " << sizeof(34.4l) << endl ;
    cout << "The size of 34.4L is : " << sizeof(34.4L) << endl ;

    return 0;
}
```

```powershell
The size of 34.4 is : 8
The size of 34.4l is : 12
The size of 34.4L is : 12
```

----

# Reference Variables
Just like we have different names or different people may call us from different names, there are reference variables in c++ .

Lets say, 

your name is "*Anuj*"

your father calls you *"Annu"*

your friends call you *"TopCoder"*

your sister calls you "*bhai*"

Now by whatever name you are being called, everyone actually meant *Anuj* only!

Just like this, we have reference variables. When we create a reference of a variable, another variable is created which points to the same thing.

Demonstration ~
```c++
#include<iostream>

using namespace std;

int main()
{
    int a = 5;
    int & b = a;

    cout << "This is a : " << a << endl ;
    cout << "This is a reference of a, b : " << b << endl ;

    return 0;
}
```

```powershell
This is a : 5
This is a reference of a, b : 5
```

----

# TypeCasting In C++
It is method of converting a data type into other data type.
```c++
#include<iostream>

using namespace std;

int main()
{
    int a = 5;
    double b = 6.01;

    cout << "This is a, a integer value : " << a << endl ;
    cout << "The size of a is :" << sizeof(a) << endl ;
    cout << "This is b, a double value : " << b << endl ;
    cout << "The size of b is :" << sizeof(b) << endl ;

    cout << endl ;

    // Syntax 1
    cout << "value of a after type-casting into a double value : " << double(a) << endl ;
    cout << "The size of a is :" << sizeof(double(a)) << endl ;
    cout << "value of b after type-casting into a integer value : " << int(b) << endl ;
    cout << "The size of a is :" << sizeof(int(b)) << endl ;

    // Syntax 2
    cout << "value of a after type-casting into a double value : " << (float)a << endl ;
    cout << "value of b after type-casting into a integer value : " << (int)b << endl ;

    return 0;
}
```

```powershell
This is a, a integer value : 5
The size of a is : 4
This is b, a double value : 6.01
The size of b is : 8

value of a after type-casting into a double value : 5
The size of a is : 8
value of b after type-casting into a integer value : 6
The size of a is : 4
```

----

# Constant Variables In C++
At times, we will want that some of our variables should have a constant value and their value should not get changed, even accidentaly.

In such cases, we use the `const` keyword to create constant variables.

```c++
#include<iostream>

using namespace std ;

int main()
{
    const float pie = 3.14 ;

    cout << "The value of pie is " << endl ;

    // Error
    pie = 4.3 ;

    return 0;
}
```

```powershell
.\08-constant-variables.cpp: In function 'int main()':
.\08-constant-variables.cpp:12:11: error: assignment of read-only variable 'pie'
     pie = 4.3 ;
           ^~~
```

----

# Manipulators
- Manipulators are the functions that helps us in modifying the Input/Output Streams.

- Manipulators are operators that are used to format the data display.

- To access manipulators, the file *`<iomanip.h>`* should be included in the program.

- There are many manipulators in c++ , some of them are ~
    - *`endl`* : It is used to enter a new line after any `cout` message.
    - *`setw()`* : It helps in arranging the output on the basis of width of the output.

Demonstration ~
```c++
#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    cout << "This is a star pattern" << endl<< endl ;
    cout << setw(9) << "*" << endl;
    cout << setw(9) << "* *" << endl;
    cout << setw(9) << "* * *" << endl;
    cout << setw(9) << "* * * *" << endl;
    cout << setw(9) << "* * * * *" << endl;

    return 0;
}
```

```powershell
This is a star pattern

        *
      * *
    * * *
  * * * *
* * * * *
```