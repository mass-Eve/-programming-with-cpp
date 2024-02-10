// 0, 1, 1, 2, 3, 5, 8, 13, 21, 34,

#include<iostream>
using namespace std;

// A function to print the fibonacci series upto n-terms, using a function
void printFibonacciSeries(int n)
{
    // lets assume the first term to be 0
    int a1 = 0;

    // lets assume the second term to be 1
    int a2 = 1;

    cout << a1 << ", " ; 
    cout << a2 << ", " ; 
    
    for (int i = 0; i < n - 2; i++)
    {
        int temp = a1; 
        a1 = a2;       
        a2 = a2 + temp;
        
        cout << a2 << ", " ; 
    }
}

int main()
{
    int terms;
    cout << "Enter the number of terms to be printed: ";
    cin >> terms ;

    printFibonacciSeries(terms);

    return 0;
}