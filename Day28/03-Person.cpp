/*
Write a C++ program to create a class called Person that has private member variables for name, age and country. Implement member functions to set and get the values of these variables.
*/

#include<iostream>
#include<string>
using namespace std;

class Person{
    private:
        string name;
        char gender;
        int age;
        string country;
    public:
        void showInfo();
        void addInfo();
};

void Person :: showInfo(){
    cout << "-------------------------------------------------" << endl;
    cout << "Name : " << name << endl;
    cout << "Country : " << country << endl;
    cout << "Age : " << age << endl;
    cout << "Gender : " << gender << endl;
    cout << "-------------------------------------------------" << endl;
}

void Person :: addInfo(){
    cout << "Enter the country of the person : " << endl;
    cin >> country ;
    cout << "Enter the name of the person : " << endl;
    cin >> name ;
    cout << "Enter the age of the person : " << endl;
    cin >> age ;
    cout << "Enter the gender of the person : " << endl;
    cin >> gender ;
}

int main()
{
    Person p1;
    p1.addInfo();
    p1.showInfo();
    return 0;
}