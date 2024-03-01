#include<iostream>
#include<cmath>
using namespace std;

class SimpleCalculator{
    protected:
        int n1, n2;
        float result;
    public:
        void addition(int num1, int num2){
            n1 = num1;
            n2 = num2;

            result = n1 + n2;
            cout << n1 << " + " << n2 << " = " << result << endl;
        }
        void subtraction(int num1, int num2){
            n1 = num1;
            n2 = num2;

            result = n1 - n2;
            cout << n1 << " - " << n2 << " = " << result << endl;
        }
        void multiplication(int num1, int num2){
            n1 = num1;
            n2 = num2;

            result = n1 * n2;
            cout << n1 << " * " << n2 << " = " << result << endl;
        }
        void division(int nr, int dr){
            n1 = nr;
            n2 = dr;

            result = float(n1) / float(n2);
            cout << n1 << " / " << n2 << " = " << result << endl;
        }
        void remainder(int nr, int dr){
            n1 = nr;
            n2 = dr;

            result = n1 % n2;
            cout << n1 << " % " << n2 << " = " << result << endl;
        }
        void exponentiation(int base, int power){
            n1 = base;
            n2 = power;

            result = pow(n1, n2);
            cout << n1 << "^ " << n2 << " = " << result << endl;
        }
};

class ScientificCalculator{
    protected:
        int n;
        float angle;
    public:
        void takeAngleConversion(){
            int choice;
            cout << "If you are entering the angle measure in degrees, enter 1, else enter 2 : " << endl;
            cin >> choice;
            if (choice == 1){
                cout << "Enter the measure of the angle in degree : ";
                cin >> angle;

                angle = angle * 0.0174533;
            }
            else if (choice == 2){
                cout << "Enter the measure of the angle in radians : ";
                cin >> angle;
            }
            else{
                cout << "Wrong Choice" << endl;
                exit(0);
            }
        }
        void funcSine(int angle);
        void funcCosine(int angle);
        void funcTangent(int angle);
        void funcCotangent(int angle);
        void funcSecant(int angle);
        void funcCosecant(int angle);
};

class HybridCalculator : public SimpleCalculator, public ScientificCalculator{};

int main(){
    SimpleCalculator calculationOne;
    
    int a, b;
    cout << "Enter the value of number 1 : " ;
    cin >> a;
    cout << "Enter the value of number 2 : " ;
    cin >> b;

    // calculationOne.addition(a, b);
    // calculationOne.subtraction(a, b);
    calculationOne.multiplication(a, b);
    // calculationOne.division(a, b);
    // calculationOne.remainder(a, b);
    // calculationOne.exponentiation(a, b);
}