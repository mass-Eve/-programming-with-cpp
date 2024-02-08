#include<iostream>
using namespace std;

int main()
{
    int a = 5;
    int *ap = &a ;
    
    cout << "The value of a is : " << a << endl;
    cout << "Variable a is stored at : '" << &a << "' memory location" << endl;
    cout << "The value of ap, which is a pointer to store the memory address of variable a, is : " << ap << endl;
    cout << "The variable ap, which is a pointer to store the memory address of variable a, is located at : '" << &ap << "' in the memory." << endl;
    cout << "The value stored in variable a thorugh the pointer ap, by pointer dereferencing is : " << *ap << endl;

    return 0;
}