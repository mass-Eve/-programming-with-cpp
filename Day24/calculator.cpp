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
        float angle, temp;
        float result;
    public:
        void takeAngleConversion(){
            int choice;
            cout << "If you are entering the angle measure in degrees, enter 1, else enter 2 : " << endl;
            cin >> choice;
            if (choice == 1){
                cout << "Enter the measure of the angle in degree : ";
                cin >> temp;

                angle = temp * 0.0174533;
            }
            else if (choice == 2){
                cout << "Enter the measure of the angle in radians : ";
                cin >> temp;
                angle = temp;
            }
            else{
                cout << "Wrong Choice" << endl;
                exit(0);
            }
        }
        void funcSine(){
            result = sin(angle);
            cout << "The value of sin(" << temp << ") is : " << result << endl;
        }
        void funcCosine(){
            result = cos(angle);
            cout << "The value of cos(" << temp << ") is : " << result << endl;
        }
        void funcTangent(){
            result = tan(angle);
            cout << "The value of tan(" << temp << ") is : " << result << endl;
        }
        void funcCotangent(){
            result = cos(angle)/sin(angle);
            cout << "The value of cot(" << temp << ") is : " << result << endl;
        }
        void funcSecant(){
            result = 1.0/cos(angle);
            cout << "The value of sec(" << temp << ") is : " << result << endl;
        }
        void funcCosecant(){
            result = 1/sin(angle);
            cout << "The value of cosec(" << temp << ") is : " << result << endl;
        }

        void square(int num){
            n = num;
            result = num*num;
            cout << "The square of " << num << " is : " << result << endl;
        }
        void squareRoot(int num){
            n = num;
            result = sqrt(num);
            cout << "The square root of " << num << " is : " << result << endl;
        }

        void cube(int num){
            n = num;
            result = num*num*num;
            cout << "The cube of " << num << " is : " << result << endl;
        }
        void cubeRoot(int num){
            n = num;
            result = cbrt(num);
            cout << "The cube root of " << num << " is : " << result << endl;
        }

        void factorial(int num){
            int fac = 1;
            for (int i = 1; i <= num; i++)
            {
                fac *= i;
            }
            result = fac;
            cout << "The factorial of " << num << " is : " << result << endl;
        }

        void deg2rad(int angle_measure){
            angle = angle_measure * 0.0174533;
        }
        void rad2deg(int angle_measure){
            angle = angle_measure * 57.2958;
        }
};

int main(){
    return 0;
}