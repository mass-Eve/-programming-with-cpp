/*
Write a C++ program to create a class called Rectangle that has private member variables for length and width. Implement member functions to calculate the rectangle's area and perimeter.
*/

#include<iostream>
using namespace std;

class Rectangle{
    private:
        float length = 0;
        float breadth = 0;
        float area = 0;
        float perimeter = 0;
    public:
    void enterRadius(int l, int b);
        void calcArea();
        void calcperimeter();
};

void Rectangle :: enterRadius(int l, int b){
    length = l;
    breadth = b;
}

void Rectangle :: calcArea(){
    area = length * breadth ;
    cout << "The area of the rectangle is " << area << " square units" << endl;
}

void Rectangle :: calcperimeter(){
    perimeter = 2 * (length + breadth) ;
    cout << "The perimeter of the rectangle is " << perimeter << " square units" << endl;
}

int main()
{
    Rectangle c1;
    c1.enterRadius(5, 6);
    c1.calcArea();
    c1.calcperimeter();
    return 0;
}