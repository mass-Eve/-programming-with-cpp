#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the value of n: " ;
    cin >> n ;

    int i = 1;
    while (i <= n) 
    {
        if (i == n)
        {
            cout << i*i << endl;
        }
        else{
            cout << i*i << ", ";
        }
        i++ ;
    }

    return 0;
}