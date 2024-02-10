// 0, 1, 1, 2, 3, 5, 8, 13, 21, 34,

#include<iostream>
using namespace std;

// A function to print the fibonacci series upto n-terms, recursively
int fibTerms(int n)
{
    if (n <= 1){
        return n;
    }
    else{
        return fibTerms(n - 1) + fibTerms(n - 2);
    }
}

// To print the terms
void printFibonacciSeries(int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << fibTerms(i) << ", ";
    }
}


int main()
{
    int terms;
    cout << "Enter the number of terms to be printed: ";
    cin >> terms ;

    cout << "The fibonacci series of " << terms << " is ~ " << endl;
    printFibonacciSeries(terms);

    return 0;
}