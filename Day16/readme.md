# This Is Day 16 Of Learning C++
## *22 February 2024*

# Constructor Overloading & Dynamic Initialisation Of Objects
Lets create a complex number class like this ~
```cpp
#include<iostream>
using namespace std;

class ComplexNumber{
    private:
        int real, imaginary;

    public:
        // for a + bi
        ComplexNumber(int, int);

        // for a + 0i
        ComplexNumber(int);

        // for 0 + 0i
        ComplexNumber();

        // viewNum
        void viewNum(){
            cout << "The complex number is : " << real << " + " << imaginary << "i" << endl;
        }
};

ComplexNumber :: ComplexNumber(int a, int b){
    real = a;
    imaginary = b;
}

ComplexNumber :: ComplexNumber(int a){
    real = a;
    imaginary = 0;
}

ComplexNumber :: ComplexNumber(){
    real = 0;
    imaginary = 0;
}

int main()
{
    ComplexNumber c1(1, 2), c2(1), c3;

    c1.viewNum();
    c2.viewNum();
    c3.viewNum();

    return 0;
}
```
Here in this program we have create a complex number class where we can create a complex number with different properties.
1. We can create a complex number with both real and imaginary part.
2. We can create a complex number with 0 as imaginary part.
3. And we can create a empty complex number as well.
and it is running fine.

- What if I remove this part from the above program ?
    ```cpp
    // for 0 + 0i
    ComplexNumber();
    ```

```cpp
#include<iostream>
using namespace std;

class ComplexNumber{
    private:
        int real, imaginary;

    public:
        // for a + bi
        ComplexNumber(int, int);

        // for a + 0i
        ComplexNumber(int);

        // viewNum
        void viewNum(){
            cout << "The complex number is : " << real << " + " << imaginary << "i" << endl;
        }
};

ComplexNumber :: ComplexNumber(int a, int b){
    real = a;
    imaginary = b;
}

ComplexNumber :: ComplexNumber(int a){
    real = a;
    imaginary = 0;
}

int main()
{
    ComplexNumber c1(1, 2), c2(1), c3;

    c1.viewNum();
    c2.viewNum();
    c3.viewNum();

    return 0;
}
```

- It will mess-up the program. The program will raise an error, which basically says that ***"Sir I know what to do when two arguments are given, I know what to do when one argument is given. But I have no idea about what has to be done when no arguments are given!"***

- Thats why, ***it is very important to solve this issue, and it can be solved in two ways, either by declaring an empty constructor with a blank definition, it will basically assign a garbage value in this case, OR a constructor which assign zero as both the elements.***

***CASE 1 :- Assigning garbage value using a constructor with blank definition***
```cpp
#include<iostream>
using namespace std;

class ComplexNumber{
    private:
        int real, imaginary;

    public:
        // for a + bi
        ComplexNumber(int, int);

        // for a + 0i
        ComplexNumber(int);

        // for 0 + 0i
        ComplexNumber(){}

        // viewNum
        void viewNum(){
            cout << "The complex number is : " << real << " + " << imaginary << "i" << endl;
        }
};

ComplexNumber :: ComplexNumber(int a, int b){
    real = a;
    imaginary = b;
}

ComplexNumber :: ComplexNumber(int a){
    real = a;
    imaginary = 0;
}

int main()
{
    ComplexNumber c1(1, 2), c2(1), c3;

    c1.viewNum();
    c2.viewNum();
    c3.viewNum();

    return 0;
}
```

*The output is as follows ~*
```cmd
The complex number is : 1 + 2i
The complex number is : 1 + 0i
The complex number is : -2 + 6422280i
```

***CASE 2 :- By creating a function that assigns zero as value***
```cpp
#include<iostream>
using namespace std;

class ComplexNumber{
    private:
        int real, imaginary;

    public:
        // for a + bi
        ComplexNumber(int, int);

        // for a + 0i
        ComplexNumber(int);

        // for 0 + 0i
        ComplexNumber();

        // viewNum
        void viewNum(){
            cout << "The complex number is : " << real << " + " << imaginary << "i" << endl;
        }
};

ComplexNumber :: ComplexNumber(int a, int b){
    real = a;
    imaginary = b;
}

ComplexNumber :: ComplexNumber(int a){
    real = a;
    imaginary = 0;
}

ComplexNumber :: ComplexNumber(){
    real = 0;
    imaginary = 0;
}

int main()
{
    ComplexNumber c1(1, 2), c2(1), c3;

    c1.viewNum();
    c2.viewNum();
    c3.viewNum();

    return 0;
}
```

*The output is as follows ~*
```cmd
The complex number is : 1 + 2i
The complex number is : 1 + 0i
The complex number is : 0 + 0i
```

-----

# Copy Constructors
- Copy Constructors are those constructors which create a copy of an object.

```cpp
#include<iostream>
using namespace std;

// a class to assign roll numbers to the students of a kaksha
class assignRollNumber{
    private:
        int roll;
    public:
        void displayRoll(){
            cout << "The Roll Number is : " << roll;
            cout << endl;
        }
        assignRollNumber(int rollNumber){
            roll = rollNumber;
        }
        assignRollNumber(){
            cout << "Since no roll number was passed, so a default roll number has been assigned to the student" << endl;
            roll = 0;
        }

        // copy constructor; takes an object and copies its value into another object's values
        assignRollNumber(assignRollNumber &student){
            cout << "The roll number has been copied from a student, which is not allowed!" << endl;
            roll = student.roll;
        }
};

int main()
{
    assignRollNumber student1;
    student1.displayRoll();

    assignRollNumber student2(5);
    student2.displayRoll();

    assignRollNumber student3(4);
    student3.displayRoll();

    assignRollNumber student4(student2);
    student4.displayRoll();

    return 0;
}
```

```cmd
Since no roll number was passed, so a default roll number has been assigned to the student
The Roll Number is : 0
The Roll Number is : 5
The Roll Number is : 4
The roll number has been copied from a student, which is not allowed!
The Roll Number is : 5
```

------

### But what if no copy constructor is present in the program and we are still trying to do the job of that constructor function, something like this ~

```cpp
#include<iostream>
using namespace std;

// a class to assign roll numbers to the students of a kaksha
class assignRollNumber{
    private:
        int roll;
    public:
        void displayRoll(){
            cout << "The Roll Number is : " << roll;
            cout << endl;
        }
        assignRollNumber(int rollNumber){
            roll = rollNumber;
        }
        assignRollNumber(){
            cout << "Since no roll number was passed, so a default roll number has been assigned to the student" << endl;
            roll = 0;
        }

        // copy constructor
        // assignRollNumber(assignRollNumber &student){
        //     cout << "The roll number has been copied from a student, which is not allowed!" << endl;
        //     roll = student.roll;
        // }
};

int main()
{
    assignRollNumber student1;
    student1.displayRoll();

    assignRollNumber student2(5);
    student2.displayRoll();

    assignRollNumber student3(4);
    student3.displayRoll();

    assignRollNumber student4(student2);
    student4.displayRoll();

    return 0;
}
```

```cmd
Since no roll number was passed, so a default roll number has been assigned to the student
The Roll Number is : 0
The Roll Number is : 5
The Roll Number is : 4
The Roll Number is : 5
```

*Can you see it still worked perfectly fine, and the behaviour is just like we have with copy constructor! How's that possible ?*

## The Reason :
***When there is no copy constructor found, the compiler creates its own copy constructor that works just like the requirements and sends it to the main to fulfill the requirements.***