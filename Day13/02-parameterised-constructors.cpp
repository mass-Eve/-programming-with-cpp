#include<iostream>
using namespace std;

class ComplexNumber{
    private:
        int a, b;

    public:
        // To get the number details (real and imaginary pasrts)
        // Parameterized constructor
        ComplexNumber(int, int);

        // To view the number
        void viewNum();
};

// constructor function definition
ComplexNumber :: ComplexNumber(int one, int two){
    a = one;
    b = two;
}

void ComplexNumber :: viewNum()
{
    cout << "Complex Number is : " << a << " + " << b << "j" << endl;
    cout << endl;
}

int main()
{
    // Implicit Call
    ComplexNumber n1(5, 10);
    cout << "This is complex number 1, created by implicit call ~" << endl;
    n1.viewNum();

    // explicit call
    ComplexNumber n2 = ComplexNumber(5, 10);
    cout << "This is complex number 2, created by explicit call ~" << endl;
    n2.viewNum();

    return 0;
}