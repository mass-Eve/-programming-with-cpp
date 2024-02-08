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
            cout << ((i-1)*2)+1 << endl;
        }
        else{
            cout << ((i-1)*2)+1 << ", ";
        }
        i++ ;
    }

    return 0;
}