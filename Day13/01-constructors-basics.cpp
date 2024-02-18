#include<iostream>
using namespace std;

class ComplexNumber{
    private:
        int a, b;

    public:
        // To get the number details (real and imaginary pasrts)
        // default constructor
        ComplexNumber();

        // To view the number
        void viewNum();
};

// default constructor function definition
ComplexNumber :: ComplexNumber(){
    a = 5;
    b = 6;
}

void ComplexNumber :: viewNum()
{
    cout << "Complex Number is : " << a << " + " << b << "j" << endl;
    cout << endl;
}

int main()
{
    ComplexNumber n1;
    n1.viewNum();

    return 0;
}