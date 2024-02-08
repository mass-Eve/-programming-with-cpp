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
            cout << i*2 << endl;
        }
        else{
            cout << i*2 << ", ";
        }
        i++ ;
    } while (i <= n) ;

    return 0;
}