#include<iostream>
using namespace std;

// a class to assign roll numbers to the students of a kaksha
class assignRollNumber{
    private:
        int roll;
    public:
        void displayRoll(){
            cout << "The Roll Number is : " << roll;
            cout << endl;
        }
        assignRollNumber(int rollNumber){
            roll = rollNumber;
        }
        assignRollNumber(){
            cout << "Since no roll number was passed, so a default roll number has been assigned to the student" << endl;
            roll = 0;
        }

        // copy constructor
        // assignRollNumber(assignRollNumber &student){
        //     cout << "The roll number has been copied from a student, which is not allowed!" << endl;
        //     roll = student.roll;
        // }
};

int main()
{
    assignRollNumber student1;
    student1.displayRoll();

    assignRollNumber student2(5);
    student2.displayRoll();

    assignRollNumber student3(4);
    student3.displayRoll();

    assignRollNumber student4(student2);
    student4.displayRoll();

    return 0;
}   