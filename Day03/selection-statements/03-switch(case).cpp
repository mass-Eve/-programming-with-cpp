#include<iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter a number between 0-9 : ";
    cin >> num ;

    switch(num)
    {
        case 0: 
            cout << "You have entered Zero" << endl;
            break;
        case 1: 
            cout << "You have entered One" << endl;
            break;
        case 2: 
            cout << "You have entered Two" << endl;
            break;
        case 3: 
            cout << "You have entered Three" << endl;
            break;
        case 4: 
            cout << "You have entered Four" << endl;
            break;
        case 5: 
            cout << "You have entered Five" << endl;
            break;
        case 6: 
            cout << "You have entered Six" << endl;
            break;
        case 7: 
            cout << "You have entered Seven" << endl;
            break;
        case 8: 
            cout << "You have entered Eight" << endl;
            break;
        case 9: 
            cout << "You have entered Nine" << endl;
            break;
    }
}