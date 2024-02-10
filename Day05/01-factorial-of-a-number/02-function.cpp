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