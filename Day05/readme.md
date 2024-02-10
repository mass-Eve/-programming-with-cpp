# This is Day 05 Of Learning C++

# Recursion (Recursive Functions)

- *When a function calls itself, it is called recursion.*
- *For Example* - the factorial of a number is calculated recursively.
```math
n! = n * (n - 1) * (n - 2) ..... 
```

- To create a *recursive function*, we have to identify the ***base conditions*** and the ***iterative conditions***.
    - ***Base Conditions*** are the conditions on which the function can finally take an exit.
    - ***Iterative Conditions*** are the conditions on which the function re-runs it, until it reaches the *base condition(s)*.

## An Algorithm to calculate the factorial of number, normally.
```cpp
#include<iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter a number : ";
    cin >> num;

    int factorial = 1;
    for (int i = 1; i <= num; i++)
    {
        factorial *= i ;
    }
    
    cout << "The factorial of " << num << " is " << factorial << endl;

    return 0;
}
```

```cmd
Enter a number : 5
The factorial of 5 is 120
```

----

## An Algorithm to calculate the factorial of number, by a function.
```cpp
#include<iostream>
using namespace std;

// A function to calculate the factorial of a given number
int calculateFactorial(int number)
{
    int factorial = 1;
    for (int i = 1; i <= number; i++)
    {
        factorial *= i ;
    }
    return factorial;
}

int main()
{
    int num;
    cout << "Enter a number : ";
    cin >> num;

    int factorial = calculateFactorial(num);
    cout << "The factorial of " << num << " is " << factorial << endl;

    return 0;
}
```

```cmd
Enter a number : 4
The factorial of 4 is 24
```

----

## An Algorithm to calculate the factorial of number, by a recursive function.

```cpp
#include<iostream>
using namespace std;

// A function to calculate the factorial of a given number recursively
int calculateFactorial(int number)
{
    int fac = 1 ;
    // setting base conditions
    if (number == 0 || number == 1)
    {
        return 1;
    }
    else{
        return fac * number * calculateFactorial(number - 1) ;
    }
}

int main()
{
    int num;
    cout << "Enter a number : ";
    cin >> num;

    int factorial = calculateFactorial(num);
    cout << "The factorial of " << num << " is " << factorial << endl;

    return 0;
}
```

```cmd
Enter a number : 4
The factorial of 4 is 24
```