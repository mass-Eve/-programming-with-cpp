#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of terms, n: " ;
    cin >> n ;

    for (int i = 1; i <= n; i++)
    {
        if (i == n){
            cout << i*i << endl ;
        }
        else{
            cout << i*i << ", " ;
        }
    }

    return 0;
}