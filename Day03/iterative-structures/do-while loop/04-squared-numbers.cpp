#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the value of n: " ;
    cin >> n ;

    int i = 1;
    do {
        if (i == n)
        {
            cout << i*i << endl;
        }
        else{
            cout << i*i << ", ";
        }
        i++ ;
    } while (i <= n) ;

    return 0;
}