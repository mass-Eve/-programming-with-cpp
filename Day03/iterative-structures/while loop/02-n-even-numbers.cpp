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
            cout << i*2 << endl;
        }
        else{
            cout << i*2 << ", ";
        }
        i++ ;
    }

    return 0;
}