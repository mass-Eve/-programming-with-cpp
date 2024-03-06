#include<iostream>
#include<string>
using namespace std;

class Student{
    protected:
        string name;
        int rollno;
    public:
        void addDetails(string sname, int roll){
            name = sname;
            rollno = roll;
        }

        void showDetails(){
            cout << "Student Name : " << name << endl;
            cout << "Student Roll No. : " << rollno << endl;
        }
};

class Test : virtual public Student{
    protected:
        float english;
        float hindi;
    public:
        void addMarks(float e, float h){
            english = e;
            hindi = h;
        }
        void displayMarks(){
            cout << "Marks in english : " << english << endl;
            cout << "Marks in hindi : " << hindi << endl;
        }
};

class Sports : virtual public Student{
    protected:
        float badminton = 0;
        float cricket = 0;
    public:
        void updateSCore(float b, float c){
            badminton = b;
            cricket = c;
        }
        void displayScore(){
            cout << "Score In Badminton : " << badminton << endl;
            cout << "Score In Cricket : " << cricket << endl;
        }
};

class Result : public Test, public Sports {
    private:
        float result = 0.0;
    public:
        void calculateResult(){
            result = (english + hindi + badminton + cricket)/4;
        }
        void displayResult(){
            cout << "-----------------------------------------" << endl;
            showDetails();
            displayMarks();
            displayScore();
            cout << "RESULT : " << result << "% " << endl;
            cout << "-----------------------------------------" << endl;
        }
};

int main()
{
    string name;
    cout << "Enter the student's name : " ;
    cin >> name;
    int roll;
    cout << "Enter the student's roll number : ";
    cin >> roll;

    Result s1;
    float m1, m2, m3, m4;
    cout << "Enter marks in english : ";
    cin >> m1;
    cout << "Enter marks in hindi : ";
    cin >> m2;
    cout << "Enter score in badminton : ";
    cin >> m3;
    cout << "Enter score in cricket : ";
    cin >> m4;

    s1.addDetails(name, roll);
    s1.addMarks(m1, m2);
    s1.updateSCore(m3, m4);
    s1.calculateResult();
    s1.displayResult();

    return 0;
}