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