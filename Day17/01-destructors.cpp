#include<iostream>
using namespace std;

static int count;

class Number{
    private:
    
    public:
        // constructor
        Number(){
            count++ ;
            cout << "Constructor has been called to create object " << count << " of class 'Numbers'" << endl;
        }

        // destructor
        ~Number(){
            cout << "Destructor has been called to destroy object " << count << " of class 'Numbers'" << endl;
            count-- ;
        }
};

int main()
{
    cout << "Entering inside the main() function" << endl;
    cout << "Creating object 1" << endl;
    Number n1;

    // creating object 2 inside a block
    {
        cout << "Entering inside a block " << endl;
        cout << "Creating object 2" << endl;
        Number n2;

        cout << "Creating object 3" << endl;
        Number n3;
        cout << "exiting from the block" << endl;
    }

    cout << "In the main again" << endl;

    return 0;
}