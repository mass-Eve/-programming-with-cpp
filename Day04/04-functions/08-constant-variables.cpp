#include<iostream>
using namespace std;

int main()
{
    int a = 5;
    cout << "a: " << a << endl;
    a = 6;
    cout << "Now a is: " << a << endl;

    // This will raise an error
    const int b = 7;
    cout << "b: " << a << endl;
    b = 8;
    cout << "Now b is: " << a << endl;

    return 0;
}