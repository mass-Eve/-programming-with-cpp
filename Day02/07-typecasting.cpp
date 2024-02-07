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