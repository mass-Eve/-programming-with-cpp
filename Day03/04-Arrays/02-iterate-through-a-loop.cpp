#include<iostream>
using namespace std;

int main()
{
    // create an integer array to store the marks of a student in 6 subjects
    int marks[6] = {70, 75, 62, 95, 98, 81};

    // Print the marks
    cout << "The marks of the student are as follows -\n" ;

    // using for loop
    for (int i = 0; i < 6; i++)
    {
        if (i == 5){
            cout << i << endl;
        }
        else{
            cout << i << ", ";
        }
    }

    cout << endl ;

    // using while loop
    int i = 0;
    while (i < 6)
    {
        if (i == 5){
            cout << i << endl;
        }
        else{
            cout << i << ", ";
        }
        i++ ;
    }

    cout << endl ;

    // using do while loop
    i = 0 ;
    do {
        if (i == 5){
            cout << i << endl;
        }
        else{
            cout << i << ", ";
        }
        i++ ;
    } while (i < 6) ;

    return 0;
}