#include<iostream>
using namespace std;

class ComplexNumber{
    private:
        int real, imaginary;

    public:
        // for a + bi
        ComplexNumber(int, int);

        // for a + 0i
        ComplexNumber(int);

        // for 0 + 0i
        ComplexNumber();

        // viewNum
        void viewNum(){
            cout << "The complex number is : " << real << " + " << imaginary << "i" << endl;
        }
};

ComplexNumber :: ComplexNumber(int a, int b){
    real = a;
    imaginary = b;
}

ComplexNumber :: ComplexNumber(int a){
    real = a;
    imaginary = 0;
}

ComplexNumber :: ComplexNumber(){
    real = 0;
    imaginary = 0;
}

int main()
{
    ComplexNumber c1(1, 2), c2(1), c3;

    c1.viewNum();
    c2.viewNum();
    c3.viewNum();

    return 0;
}