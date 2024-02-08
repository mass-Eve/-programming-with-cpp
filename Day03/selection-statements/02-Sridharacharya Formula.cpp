#include<iostream>

using namespace std;

int main()
{
    // Variable of the quadratic equation
    int a, b, c, x, D;

    // Taking inputs of all the values from the user
    cout << "Enter the details about the quadratic equation ~" << endl;
    // cout << "Enter the value of x: " ;
    // cin >> x;
    cout << "Enter the coefficient of x^2, a: " ;
    cin >> a;
    cout << "Enter the coefficient of x, b: " ;
    cin >> b;
    cout << "Enter the value of constant c: " ;
    cin >> c;

    // Calculate Discriminant 
    D = (b*b) - (4*a*c);

    // Checking conditions
    if (D > 0){
        cout << "The quadratic equation has Real & Distinct Roots" << endl;
    }
    else if (D == 0){
        cout << "The quadratic equation has Real & Equal Roots" << endl;
    }
    else{
        cout << "The quadratic equation has Imaginary Roots" << endl;
    }

    return 0;
}