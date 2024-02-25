#include<iostream>
using namespace std;

// Base class
class BaseClass{
    private:
        int data1;
    public:
        int data2;

        void addData(int dataOne, int dataTwo){
            data1 = dataOne;
            data2 = dataTwo;
        }

        int getDataOne(){
            return data1;
        }

        int getDataTwo(){
            return data2;
        }

};

// Derived class
class DerivedClass : public BaseClass{
    private:
        int data3;
    public:
        DerivedClass(){
            cout << "An instance of the derived class has been created....... \n" << endl;
        }
        
        void displayData(){
            cout << "data one is : " << getDataOne() << endl;
            cout << "data two is : " << data2 << endl;
            cout << "Data 3 is : " << data3 <<  endl;
        }

        void addDataThree(){
            data3 = getDataOne() * getDataTwo();
        }
};

int main()
{
    DerivedClass derivedClassObject;
    derivedClassObject.addData(10, 20);
    derivedClassObject.addDataThree();
    derivedClassObject.displayData();


    return 0;
}