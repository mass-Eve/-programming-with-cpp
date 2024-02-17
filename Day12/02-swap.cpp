#include<iostream>
using namespace std;

class NumTwo;

class NumOne{
    private :
        int num1;
    public :
        void viewNum(){
            cout << "The number belongs to class one is : " << num1 << endl;
        }

        void inputNum(){
            cout << "Enter the number that belongs to class one : ";
            cin >> num1;
        }

        friend void swapNums(NumOne &, NumTwo &);
};

class NumTwo{
    private :
        int num2;
    public :
        void viewNum(){
            cout << "The number belongs to class two is : " << num2 << endl;;
        }

        void inputNum(){
            cout << "Enter the number that belongs to class two : ";
            cin >> num2;
        }

        friend void swapNums(NumOne & , NumTwo &);
};

// A function to swap the numbers of class one and two
void swapNums(NumOne & x, NumTwo & y){
    int temp = x.num1;
    x.num1 = y.num2;
    y.num2 = temp;
}

int main()
{
    NumOne n1;
    n1.inputNum();

    NumTwo n2;
    n2.inputNum();

    // before swapping
    cout << "before swapping" << endl;
    n1.viewNum();
    n2.viewNum();

    // after swapping
    cout << "after swapping" << endl;
    swapNums(n1, n2);
    n1.viewNum();
    n2.viewNum();

    return 0;
}