#include<iostream>
using namespace std;

class ComplexNumber{
    private:
        int a, b;

    public:
        void getNums();
        void viewNums();
        void joinNums(ComplexNumber one, ComplexNumber two);

        friend ComplexNumber addViaFriendFunction(ComplexNumber one, ComplexNumber two);
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

ComplexNumber addViaFriendFunction(ComplexNumber one, ComplexNumber two){
    ComplexNumber cn;
    cn.a = one.a + two.a;
    cn.b = one.b + two.b;

    return cn;
}

int main()
{
    ComplexNumber cn1, cn2, cn3, cn4;
    int key;

    // making complex number 1
    cn1.getNums();

    // making complex number 2
    cn2.getNums();

    // making complex number 3 by adding the complex numbers 1 and 2; using the normal joinNums() member function
    cn3.joinNums(cn1, cn2);

    // making complex number 4 by adding the complex numbers 1 and 2; using a friend function
    cn4 = addViaFriendFunction(cn1, cn2);

    // Printing all the 4 number
    cn1.viewNums();
    cn2.viewNums();
    cn3.viewNums();
    cn4.viewNums();

    return 0;
}