#include<iostream>
#include<string>
using namespace std;

class Student {
    protected:
        string studentName;
        int rollno;
    public:
        void addStudentDetails(string name, int roll){
            studentName = name;
            rollno = roll;
        }

        void getStudentDetails(){
            cout << "Name of the student : " << studentName << endl;
            cout << "Roll Number of the student : " << rollno << endl;
        }
};

class Exam : public Student {
    protected:
        float math;
        float physics;
        float computerScience;
        float chemistry;
    public:
        void addMarks(float marks_math, float marks_physics, float marks_computer, float marks_chemistry){
            math = marks_math;
            physics = marks_physics;
            computerScience = marks_computer;
            chemistry = marks_chemistry;
        }

        void checkMarks(){
            cout << "Marks In Physics : "<< physics << endl;
            cout << "Marks In Maths : "<< math << endl;
            cout << "Marks In Computer Science : "<< computerScience << endl;
            cout << "Marks In Chemistry : "<< chemistry << endl;
        }
};

class ReportCard : public Exam{
    float percentage;
    public :
        void displayPercentage(){
            percentage = (math + physics + chemistry + computerScience) / 4.0 ;
            cout << "You have scored " << percentage << "% in this examination." << endl;
        }
};

int main()
{
    ReportCard s1;
    s1.addStudentDetails("Devesh", 45);
    s1.addMarks(45, 55, 65, 70);
    s1.getStudentDetails();
    s1.checkMarks();
    s1.displayPercentage();
    return 0;
}