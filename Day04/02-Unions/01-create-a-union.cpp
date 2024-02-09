#include<iostream>
using namespace std;

// a union to store information about a student
union studentInfo{
    int rollno ;
    int kaksha ;
    char section ;
    float height ;
    float weight ;
} ;

int main()
{
    // lets create a union variable
    union studentInfo Himesh;
    
    Himesh.rollno = 45;
    Himesh.kaksha = 12;

    cout << "The roll number of Himesh is : " << Himesh.rollno << endl;
    cout << "Himesh studies in : " << Himesh.kaksha << endl;

    return 0;
}