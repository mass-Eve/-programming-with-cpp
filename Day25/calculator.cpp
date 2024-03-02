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

            if (n2 != 0){
                result = float(n1) / float(n2);
                cout << n1 << " / " << n2 << " = " << result << endl;
            }
            else{
                cout << "NOT DEFINED" << endl;
            }
        }
        void remainder(int nr, int dr){
            n1 = nr;
            n2 = dr;

            if (n2 != 0){
                result = n1 % n2;
                cout << n1 << " % " << n2 << " = " << result << endl;
            }
            else{
                cout << "NOT DEFINED" << endl;
            }
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
            cout << "The measure of " << angle_measure << " degree angle in radians is : " << angle;
        }
        void rad2deg(int angle_measure){
            angle = angle_measure * 57.2958;
            cout << "The measure of " << angle_measure << " radians angle in degrees is : " << angle;
        }
};

class Calculator : public SimpleCalculator, public ScientificCalculator{

};

void menu(){
    cout << "\t\t Welcome" << endl;;
    cout << "--------------------------------------------------------------" << endl;
    cout << "|  1. | Addition                                             |" << endl;
    cout << "|  2. | Subtraction                                          |" << endl;
    cout << "|  3. | Multiplication                                       |" << endl;
    cout << "|  4. | Division                                             |" << endl;
    cout << "|  5. | Remainder                                            |" << endl;
    cout << "|  6. | Exponentiation                                       |" << endl;
    cout << "|  7. | Square of a number                                   |" << endl;
    cout << "|  8. | Cube of a number                                     |" << endl;
    cout << "|  9. | Square root of a number                              |" << endl;
    cout << "| 10. | Cube root of a number                                |" << endl;
    cout << "| 11. | Factorial of a number                                |" << endl;
    cout << "| 12. | Sine value of an angle                               |" << endl;
    cout << "| 13. | Cosine value of an angle                             |" << endl;
    cout << "| 14. | Tangent value of an angle                            |" << endl;
    cout << "| 15. | Cotangent value of an angle                          |" << endl;
    cout << "| 16. | Secant value of an angle                             |" << endl;
    cout << "| 17. | Cosecant value of an angle                           |" << endl;
    cout << "| 18. | Convert Radian measure of an angle to Degree measure |" << endl;
    cout << "| 19. | Convert Degree measure of an angle to Radian measure |" << endl;
    cout << "--------------------------------------------------------------" << endl;
}

void takeValues(int *num1, int *num2){
    cout << "Enter the 1st value : " << endl;
    cin >> *num1;
    cout << "Enter the 2nd value : " << endl;
    cin >> *num2;
}

void takeValues(int *num1){
    cout << "Enter the number here : " << endl;
    cin >> *num1;
}

int main(){
    //                          Testing

    SimpleCalculator calculationOne;
    // calculationOne.addition(5, 6);
    // calculationOne.subtraction(5, 6);
    // calculationOne.multiplication(5, 6);
    // calculationOne.division(5, 6);
    // calculationOne.remainder(5, 6);
    // calculationOne.exponentiation(5, 6);

    ScientificCalculator calculationTwo;
    // calculationTwo.cube(5);
    // calculationTwo.cubeRoot(125);
    // calculationTwo.square(5);
    // calculationTwo.squareRoot(25);
    // calculationTwo.factorial(5);
    // calculationTwo.takeAngleConversion();
    // calculationTwo.funcSine();
    // calculationTwo.funcCosine();
    // calculationTwo.funcTangent();
    // calculationTwo.funcCotangent();
    // calculationTwo.funcSecant();
    // calculationTwo.funcCosecant();

    Calculator calculation;

    int choice;
    do {
        menu();
        cout << "Enter your choice here : " << endl;
        cin >> choice;
        switch(choice){
            int num1, num2;
            case 1:
                takeValues(&num1, &num2);
                calculation.addition(num1, num2);
                break;
            case 2:
                takeValues(&num1, &num2);
                calculation.subtraction(num1, num2);
                break;
            case 3:
                takeValues(&num1, &num2);
                calculation.multiplication(num1, num2);
                break;
            case 4:
                takeValues(&num1, &num2);
                calculation.division(num1, num2);
                break;
            case 5:
                takeValues(&num1, &num2);
                calculation.remainder(num1, num2);
                break;
            case 6:
                takeValues(&num1, &num2);
                calculation.exponentiation(num1, num2);
                break;
            case 7:
                takeValues(&num1);
                calculation.square(num1);
                break;
            case 8:
                takeValues(&num1);
                calculation.cube(num1);
                break;
            case 9:
                takeValues(&num1);
                calculation.squareRoot(num1);
                break;
            case 10:
                takeValues(&num1);
                calculation.cubeRoot(num1);
                break;
            case 11:
                takeValues(&num1);
                calculation.factorial(num1);
                break;
            case 12:
                calculation.takeAngleConversion();
                calculation.funcSine();
                break;
            case 13:
                calculation.takeAngleConversion();
                calculation.funcCosine();
                break;
            case 14:
                calculation.takeAngleConversion();
                calculation.funcTangent();
                break;
            case 15:
                calculation.takeAngleConversion();
                calculation.funcCotangent();
                break;
            case 16:
                calculation.takeAngleConversion();
                calculation.funcSecant();
                break;
            case 17:
                calculation.takeAngleConversion();
                calculation.funcCosecant();
                break;
            case 18:
                takeValues(&num1);
                calculation.deg2rad(num1);
                break;
            case 19:
                takeValues(&num1);
                calculation.rad2deg(num1);
                break;
        }
    
        cout << "Would you like to continue the calculation ? Enter 0 to QUIT and 1 to CONTINUE\nEnter your choice here : " << endl;
        cin >> choice;
    } while (choice);

    return 0;
}