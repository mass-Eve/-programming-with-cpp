#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the value of n: " ;
    cin >> n ;

    for (int i = 1; i <= n; i++)
    {
        if (i == n)
        {
            cout << i << endl;
        }
        else{
            cout << i << ", ";
        }
    }

    return 0;
}