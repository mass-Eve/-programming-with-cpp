#include<iostream>
using namespace std;

// A function to calculate discount
float discountCalculator(float purchaseAmount, float discountRate = 5)
{
    return (discountRate * purchaseAmount) / 100.0 ;
}

int main()
{
    float purchaseAmount;
    cout << "Enter your purchase amount : " ;
    cin >> purchaseAmount ;

    cout << "Your discount amount is : Rs " << discountCalculator(purchaseAmount) << endl ;
    cout << "Net Payment : Rs " << purchaseAmount - discountCalculator(purchaseAmount) << endl;

    cout << endl;

    cout << "Since you have put your own discount code, your discount amount is : Rs " << discountCalculator(purchaseAmount, 15) << endl ;
    cout << "Net Payment : Rs " << purchaseAmount - discountCalculator(purchaseAmount, 15) << endl;

    return 0;
}