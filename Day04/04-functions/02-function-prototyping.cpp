#include<iostream>
using namespace std;

int add(int, int);

int main()
{
    int num1 = 5;
    int num2 = 6;
    int sum = add(num1, num2);
    cout << "The sum of " << num1 << " and " << num2 << " is : " << sum << endl; 
    return 0;
}

int add(int a, int b){
    int sum = a + b;
    return sum;
}