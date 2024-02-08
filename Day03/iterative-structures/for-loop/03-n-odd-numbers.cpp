#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of terms n: " ;
    cin >> n ;

    for (int i = 1; i <= n; i++)
    {
        if (i == n)
        {
            cout << i*2+1 << endl;
        }
        else{
            cout << ((i-1)*2) + 1 << ", ";
        }
    }

    return 0;
}