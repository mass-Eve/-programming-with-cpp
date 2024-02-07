#include <iostream>

using namespace std;

int age = 20;
int main()
{
    int age = 16;

    cout << "This is local pie : " << age << endl ;
    cout << "This is global pie : " << ::age << endl ;

    return 0;
}