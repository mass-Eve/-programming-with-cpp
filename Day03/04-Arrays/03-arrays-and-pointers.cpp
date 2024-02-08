#include<iostream>
using namespace std;

int main()
{
    // An integer array
    int array[] = {54, 35, 12, 03};

    // A pointer to that integer array
    int *ap = array;

    for (int i = 0; i < 4; i++)
    {
        cout << "element at position " << i << " is : " << *(ap+i) << endl;
    }
}