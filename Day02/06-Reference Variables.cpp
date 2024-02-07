#include <iostream>

using namespace std;

int main()
{
    int a = 5;
    int & b = a;

    cout << "This is a : " << a << endl ;
    cout << "This is a reference of a, b : " << b << endl ;

    return 0;
}