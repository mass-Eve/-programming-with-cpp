#include<iostream>
using namespace std;

class ComplexNumber{
    private:
        int a, b;

    public:
        void getNums();
        void viewNums();
        void joinNums(ComplexNumber one, ComplexNumber two);
        void joinNums(ComplexNumber one, ComplexNumber two, int key);
        // void minusNums(ComplexNumber one, ComplexNumber two, int key = 2);
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

    // making cn1
    cn1.getNums();
    cn2.getNums();
    cn3.joinNums(cn1, cn2);
    cn4.joinNums(cn1, cn2, key = 1);
    cn5.joinNums(cn1, cn2, key = 2);

    cn1.viewNums();
    cn2.viewNums();
    cn3.viewNums();
    cn4.viewNums();
    cn5.viewNums();

    return 0;
}