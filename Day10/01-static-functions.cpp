#include<iostream>
#include<string>
using namespace std;

// A Class Kaksha to store the details of the students of a particular kaksha and section. A single kaksha with a section can store a maximum of 35 students only.
class Kaksha{
    private:
        // Name of the student
        string name[35];

        // Roll no of the student
        int rollno[35];

        // gender of the student
        string gender[35];

        // A static count of students, which is basically the count of the all the students in the school (combined of all the kaksha)
        static int total_student_count;

        // Count of total students currently studying in a particular kaksha and section
        int kaksha_student_count;

    public:
        // A function to add details of new students
        void addDetails();

        // A function to fetch the details of existing students 
        void fetchtDetails();

        // A function to initialise the counter of students for a particular kaksha
        void initialiseStudentCount(){
            kaksha_student_count = 0;
        }

        // A function to print the total count of students in the school
        static void allStudentsCount(){
            cout << "The total number of students currently studying in this school are : " << total_student_count << endl;
        }
} ;

// static variable to hold the count of all the students combined from all tha kaksha of a school
int Kaksha :: total_student_count = 0;

// Definition of the fetchDetails() function
void Kaksha :: fetchtDetails()
{
    if (kaksha_student_count == 0){
        cout << "No students!" << endl ;
        cout << endl;
        cout << endl;
    }
    else{
        for (int i = 0; i < kaksha_student_count; i++)
        {
            cout << "Name of the student : " << name[i] << endl;
            cout << endl;
            cout << endl;
            cout << "Roll No. of the student : " << rollno[i] << endl;
            cout << endl;
            cout << endl;
            cout << "Gender : " << gender[i] << endl; 
            cout << endl;
            cout << endl;
        }
    }
}

// The definition of the addDetails() function
void Kaksha :: addDetails()
{
    cout << "Enter the details of student ~ " << endl;

    cout << "Name of the student : " << endl;
    cin >> name[kaksha_student_count];
    cout << endl;
    cout << endl;

    cout << "Enter the gender of the student : " << endl;
    cin >> gender[kaksha_student_count] ;
    cout << endl;
    cout << endl;

    cout << "Enter the roll no. of the student: " << endl;
    cin >> rollno[kaksha_student_count] ;
    cout << endl;
    cout << endl;

    kaksha_student_count++ ;
    total_student_count++ ;
}

int choice;

// Menu functions()
// Main Menu Function
int mainMenu()
{
    cout << "Welcome to the Campus......" << endl;
    cout << "Visit a Kaksha ? The available Kaksha and their sections are as follows ~" << endl;
    cout << "Kaksha 1 - 12, each with 3 sections {A, B and C}" << endl;
    cout << "To visit a kaksha, enter 1 : ";
    cin >> choice;

    return choice;
}

// Kaksha Menu
int kakshaMenu()
{
    cout << "To see the students list, enter 1, " << endl; 
    cout << "To add a new student to the kaksha, enter 2, " << endl;
    // cout << "To see the details of a specific student, enter 3" << endl;
    cout << "To see the total number of students studying in the school, enter 4:" << endl;
    cout << "To exit, enter 0, " << endl;
    cin >> choice;

    return choice;
}

// Main function / Driver program
int main()
{
    Kaksha TwelveA;
    TwelveA.initialiseStudentCount();

    int choice;

    // Menu
    cout << "Welcome to the Best School" << endl;
    cout << "To enter in the school, enter 1, else 0 : ";
    cin >> choice;

    if (choice == 1){
        choice = mainMenu();
        if (choice == 1){

        while (true){
                // cout << "Enter the kaksha and section ~ \nfor example - to visit kaksha '12 B', input 122";
                // cin >> choice;
                choice = kakshaMenu();
                if (choice == 1){
                    TwelveA.fetchtDetails();
                    cout << endl;
                }
                else if (choice == 2){
                    TwelveA.addDetails();
                    cout << endl;
                }
                else if (choice == 4){
                    Kaksha :: allStudentsCount() ;
                    cout << endl;
                }
                else{
                    cout << "Exiting out of the program" << endl;
                    cout << endl;
                    exit(0);
                }
            }
        }
        else{
            cout << "Exiting from the school......" << endl;
            exit(0);
        }
    }
    else{
        cout << "Exiting from the school......" << endl;
        exit(0);
    }

    return 0;
}