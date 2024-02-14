#include<iostream>
#include<string>
using namespace std;


// A Class Kaksha to store the details of the students of a particular class and section
class Kaksha{
    private:
        string name[35];
        int rollno[35];
        string gender[35];
        static int total_student_count;
        int kaksha_student_count;
    public:
        void addDetails();
        void fetchtDetails();
        void initialiseStudentCount(){
            kaksha_student_count = 0;
        }
} ;

int Kaksha :: total_student_count = 0;

void Kaksha :: fetchtDetails()
{
    if (kaksha_student_count == 0){
        cout << "No students!" << endl ;
        cout << endl;
    }
    else{
        for (int i = 0; i < kaksha_student_count; i++)
        {
            cout << "Name of the student : " << name[i] << endl;
            cout << endl;
            cout << "Roll No. of the student : " << rollno[i] << endl;
            cout << endl;
            cout << "Gender : " << gender[i] << endl; 
            cout << endl;
        }
    }
}

void Kaksha :: addDetails()
{
    cout << "Enter the details of student ~ " << endl;

    cout << "Name of the student : " << endl;
    cin >> name[kaksha_student_count];
    cout << endl;

    cout << "Enter the gender of the student : " << endl;
    cin >> gender[kaksha_student_count] ;
    cout << endl;

    cout << "Enter the roll no. of the student: " << endl;
    cin >> rollno[kaksha_student_count] ;
    cout << endl;

    kaksha_student_count++ ;
}

int main()
{
    Kaksha TwelveB;

    TwelveB.initialiseStudentCount();
    TwelveB.addDetails();
    TwelveB.fetchtDetails();

    return 0;
}