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