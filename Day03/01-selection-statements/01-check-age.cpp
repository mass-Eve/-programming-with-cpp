#include<iostream>

using namespace std;

int main()
{
    // Taking Age from the user
    int age ;
    cout << "Enter your age : "; 
    cin >> age ;

    // Printing the age
    cout << "Your age is : " << age << endl;

    if (age < 18){
        cout << "You are not eligible for a driving license" << endl;
    }
    else{
        cout << "You are eligible for a driving license" << endl;
    }

    return 0;
}