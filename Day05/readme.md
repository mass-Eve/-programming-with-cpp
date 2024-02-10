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

----

## An Algorithm to print the fibonacci series upto n-terms, normally

```cpp
// 0, 1, 1, 2, 3, 5, 8, 13, 21, 34,

#include<iostream>
using namespace std;

int main()
{
    int terms;
    cout << "Enter the number of terms to be printed: ";
    cin >> terms ;

    // lets assume the first term to be 0
    int a1 = 0;

    // lets assume the second term to be 1
    int a2 = 1;

    cout << a1 << ", " ; 
    cout << a2 << ", " ; 
    
    for (int i = 0; i < terms - 2; i++)
    {
        int temp = a1; 
        a1 = a2;       
        a2 = a2 + temp;
        
        cout << a2 << ", " ; 
    }

    return 0;
}
```

```cmd
Enter the number of terms to be printed: 10
0, 1, 1, 2, 3, 5, 8, 13, 21, 34,
```

----

## An Algorithm to print the fibonacci series upto n-terms, by a function

```cpp
// 0, 1, 1, 2, 3, 5, 8, 13, 21, 34,

#include<iostream>
using namespace std;

// A function to print the fibonacci series upto n-terms
void printFibonacciSeries(int n)
{
    // lets assume the first term to be 0
    int a1 = 0;

    // lets assume the second term to be 1
    int a2 = 1;

    cout << a1 << ", " ; 
    cout << a2 << ", " ; 
    
    for (int i = 0; i < n - 2; i++)
    {
        int temp = a1; 
        a1 = a2;       
        a2 = a2 + temp;
        
        cout << a2 << ", " ; 
    }
}

int main()
{
    int terms;
    cout << "Enter the number of terms to be printed: ";
    cin >> terms ;

    printFibonacciSeries(terms);

    return 0;
}
```

```cmd
Enter the number of terms to be printed: 10
0, 1, 1, 2, 3, 5, 8, 13, 21, 34,
```

## An Algorithm to print the fibonacci series upto n-terms, by a recursive function

```cpp
// 0, 1, 1, 2, 3, 5, 8, 13, 21, 34,

#include<iostream>
using namespace std;

// A function to print the fibonacci series upto n-terms, recursively
int fibTerms(int n)
{
    if (n <= 1){
        return n;
    }
    else{
        return fibTerms(n - 1) + fibTerms(n - 2);
    }
}

// To print the terms
void printFibonacciSeries(int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << fibTerms(i) << ", ";
    }
}


int main()
{
    int terms;
    cout << "Enter the number of terms to be printed: ";
    cin >> terms ;

    cout << "The fibonacci series of " << terms << " is ~ " << endl;
    printFibonacciSeries(terms);

    return 0;
}
```

```cmd
Enter the number of terms to be printed: 10
The fibonacci series of 10 is ~
0, 1, 1, 2, 3, 5, 8, 13, 21, 34,
```