#include<iostream>
using namespace std;

// A structure to store the marks and grade of two subjects of a student
typedef struct marks{
    int marks_math ;
    char grade_math ;
    int marks_cs ;
    char grade_cs ;
} mng;

int main()
{
    // A struct-type variable to use the structure created above
    mng Shashank;
    
    Shashank.marks_math = 98;
    Shashank.marks_cs = 95;
    Shashank.grade_math = 'A' ;
    Shashank.grade_cs = 'A' ;

    cout << "Marks of Shashank in Maths : " << Shashank.marks_math << endl; 
    cout << "Marks of Shashank in CS : " << Shashank.marks_cs << endl;

    cout << "Grade of Shashank in Maths : " << Shashank.grade_math << endl; 
    cout << "Grade of Shashank in CS : " << Shashank.grade_cs << endl;

    return 0;
}