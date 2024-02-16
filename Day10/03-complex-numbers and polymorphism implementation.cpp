#include<iostream>
using namespace std;

class ComplexNumber{
    private:
        int a, b;

    public:
        // To get the number details (real and imaginary pasrts)
        void getNums();

        // To view the number
        void viewNums();

        // To add two complex numbers and form a new complex number from it
        void joinNums(ComplexNumber one, ComplexNumber two);
        
        // To subtract two complex numbers and form a new complex number from it
        void joinNums(ComplexNumber one, ComplexNumber two, int key);
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

void ComplexNumber :: joinNums(ComplexNumber one, ComplexNumber two){
    a = one.a + two.a ;
    b = one.b + two.b ;
}

void ComplexNumber :: joinNums(ComplexNumber one, ComplexNumber two, int key){
    if (key == 1){
        a = one.a - two.a ;
        b = one.b - two.b ;
    }
    else {
        a = two.a - one.a ;
        b = two.b - one.b ;
    }
}

int main()
{
    ComplexNumber cn1, cn2, cn3, cn4, cn5;
    int key;

    // forming complex number 1
    cn1.getNums();

    // forming complex number 2
    cn2.getNums();

    // forming complex number 3 from adding the complex numbers 1 and 2
    cn3.joinNums(cn1, cn2);

    // forming complex number 4 from subtracting complex number 1 and 2
    cn4.joinNums(cn1, cn2, key = 1);
    
    // forming complex number 5 from adding the complex numbers 2 and 1
    cn5.joinNums(cn1, cn2, key = 2);

    // Printing all the numbers on the console
    cn1.viewNums();
    cn2.viewNums();
    cn3.viewNums();
    cn4.viewNums();
    cn5.viewNums();

    return 0;
}