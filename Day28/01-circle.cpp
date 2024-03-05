/*
Write a C++ program to implement a class called Circle that has private member variables for radius. Include member functions to calculate the circle's area and circumference.
*/

#include<iostream>
using namespace std;

class Circle{
    private:
        float radius = 0;
        float area = 0;
        float circumference = 0;
    public:
    void enterRadius(int r);
        void calcArea();
        void calcCircumference();
};

void Circle :: enterRadius(int r){
    radius = r;
}

void Circle :: calcArea(){
    area = 3.14 * radius * radius ;

    cout << "The area of the circle with " << radius << " units as radius is : " << area << " square units" << endl;
}

void Circle :: calcCircumference(){
    circumference = 2 * 3.14 * radius ;

    cout << "The circumference of the circle with " << radius << " units as radius is : " << circumference << " square units" << endl;
}

int main()
{
    Circle c1;
    c1.enterRadius(5);
    c1.calcArea();
    c1.calcCircumference();
    return 0;
}