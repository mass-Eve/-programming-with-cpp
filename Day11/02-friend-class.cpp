#include<iostream>
using namespace std;

// forward declaration to avoid errors
class ComplexNumber;

class ComplexNumberCalculator{

    public :
        // The sum of real part of two complex numbers
        int sumReal(ComplexNumber, ComplexNumber);

        // The sum of imaginary part of two complex numbers
        int sumImaginary(ComplexNumber, ComplexNumber);
};

class ComplexNumber{
    private:
        int a, b;

    public:
        // To get the number details (real and imaginary pasrts)
        void getNums();

        // To view the number
        void viewNums();

                        // Individually Declaring functions as friends

        // The sum of real part of two complex numbers
        // friend int ComplexNumberCalculator :: sumReal(ComplexNumber one, ComplexNumber two);

        // The sum of imaginary part of two complex numbers
        // friend int ComplexNumberCalculator :: sumImaginary(ComplexNumber one, ComplexNumber two);

                        // Declaring whole class as friend
        friend class ComplexNumberCalculator;
};

void ComplexNumber :: getNums(){
    cout << "Enter a : " ;
    cin >> a;
    cout << endl;

    cout << "Enter b : " ;
    cin >> b;
    cout << endl;
}

void ComplexNumber :: viewNums()
{
    cout << "Complex Number is : " << a << " + " << b << "j" << endl;
    cout << endl;
}

int ComplexNumberCalculator :: sumReal(ComplexNumber one, ComplexNumber two){
    return (one.a + two.a);
}

int ComplexNumberCalculator :: sumImaginary(ComplexNumber one, ComplexNumber two){
    return (one.b + two.b);
}

int main()
{
    ComplexNumber cn1, cn2;
    
    cn1.getNums();
    cn2.getNums();
    
    ComplexNumberCalculator calculate;

    cout << "Sum of Real Parts: " << calculate.sumReal(cn1, cn2) << endl;
    cout << "Sum of Imaginary Parts: " << calculate.sumImaginary(cn1, cn2) << endl;

    return 0;
}