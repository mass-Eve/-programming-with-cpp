## Created By : *Bjrane Stroustrup*
## Year : *1979*

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


### Variables
They are containers to store values of different data types.

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

# Scope Of Variables
Scope of variable is can be simply defined as *the locations where a variable can be accessed from.*
There are two scopes :
- ***Local Scope*** - when a variable can only be accessed within a code block.
- ***Global Scope*** - when a variable can be accessed from any location inside the program

### To create a new line : use the *\n* escape sequence.