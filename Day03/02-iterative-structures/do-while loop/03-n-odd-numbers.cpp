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
            cout << ((i-1)*2)+1 << endl;
        }
        else{
            cout << ((i-1)*2)+1 << ", ";
        }
        i++ ;
    } while (i <= n) ;

    return 0;
}