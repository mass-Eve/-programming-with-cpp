# This Is Day 13 Of Learning C++
## *18 February 2024*

# Constructors In C++
Constructor is a special member function which has the same name as of the class. It is used to initialise the objects of its class.

It is automatically invoked whenever an object is created.

Return value is not important for a constructor function, whereas for normal member functions, it does matters.

# Characteristics & Properties Of Constructors
- Constructors should be declared in the ***public*** section of the class only.
- Constructors that don't accept any parameters is called as Default Constructor.
- They don't have any return types and they don't return any values.
- They can have default arguments.
- We can not refer to their memory address.
- It is invoked automatically whenever an instance of that class is created.

# Create A Constructor
- To create a constructor function, we have to write the ***class's name*** followed by a pair parenthesis and then complete it the way we write functions.

- ***Syntax*** ~
```cpp
class <ClassName>{
    private :
        // private declarations
    public :
        // public declarations
        
        // default constructor
        ClassName();

        // or
        ClassName(<arguments, if any>);

        // or
        ClassName(){
            // body
        }

        // or
        ClassName(<arguments, if any>){
            // body
        }
};

// for writing the definition of the constructor function outside the class's body
<ClasName> :: <ClassName>(<arguments, if any>){
    // body
} 
```

## Create A Default Constructor
```cpp
#include<iostream>
using namespace std;

class ComplexNumber{
    private:
        int a, b;

    public:
        // To get the number details (real and imaginary pasrts)
        // default constructor
        ComplexNumber();

        // To view the number
        void viewNum();
};

// default constructor function definition
ComplexNumber :: ComplexNumber(){
    a = 5;
    b = 6;
}

void ComplexNumber :: viewNum()
{
    cout << "Complex Number is : " << a << " + " << b << "j" << endl;
    cout << endl;
}

int main()
{
    ComplexNumber n1;
    n1.viewNum();

    return 0;
}
```

-----

## Create A Parameterized Constructor
```cpp
#include<iostream>
using namespace std;

class ComplexNumber{
    private:
        int a, b;

    public:
        // To get the number details (real and imaginary pasrts)
        // Parameterized constructor
        ComplexNumber(int, int);

        // To view the number
        void viewNum();
};

// constructor function definition
ComplexNumber :: ComplexNumber(int one, int two){
    a = one;
    b = two;
}

void ComplexNumber :: viewNum()
{
    cout << "Complex Number is : " << a << " + " << b << "j" << endl;
    cout << endl;
}

int main()
{
    // Implicit Call
    ComplexNumber n1(5, 10);
    cout << "This is complex number 1, created by implicit call ~" << endl;
    n1.viewNum();

    // explicit call
    ComplexNumber n2 = ComplexNumber(5, 10);
    cout << "This is complex number 2, created by explicit call ~" << endl;
    n2.viewNum();

    return 0;
}
```