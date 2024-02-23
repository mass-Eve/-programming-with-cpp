# This Is Day17 Of Learning C++
## *23 February 2024*

# Destructors In C++
- Destructors are special member functions which destroys the objects when they are no longer required.
- It neither takes any arguments nor return any value.
- Compiler runs it automatically or invokes it automatically.

## Syntax to create a Destructor Function
```cpp
class <Class-Name>{
    private:
        // body
    public:
        // body

        // a constructor member function
        <Class-Name>(){
            // body
        }

        // a destructor member function
        ~<Class-Name>(){
            // body
        }

};
```

------

### Example ~
```cpp
#include<iostream>
using namespace std;

static int count;

class Number{
    private:
    
    public:
        // constructor
        Number(){
            count++ ;
            cout << "Constructor has been called to create object " << count << " of class 'Numbers'" << endl;
        }

        // destructor
        ~Number(){
            cout << "Destructor has been called to destroy object " << count << " of class 'Numbers'" << endl;
            count-- ;
        }
};

int main()
{
    cout << "Entering inside the main() function" << endl;
    cout << "Creating object 1" << endl;
    Number n1;

    // creating object 2 inside a block
    {
        cout << "Entering inside a block " << endl;
        cout << "Creating object 2" << endl;
        Number n2;

        cout << "Creating object 3" << endl;
        Number n3;
        cout << "exiting from the block" << endl;
    }

    cout << "In the main again" << endl;

    return 0;
}
```

### Output
```cpp
Entering inside the main() function
Creating object 1
Constructor has been called to create object 1 of class 'Numbers'
Entering inside a block
Creating object 2
Constructor has been called to create object 2 of class 'Numbers'
Creating object 3
Constructor has been called to create object 3 of class 'Numbers'
exiting from the block
Destructor has been called to destroy object 3 of class 'Numbers'
Destructor has been called to destroy object 2 of class 'Numbers'
In the main again
Destructor has been called to destroy object 1 of class 'Numbers'
```

-------

# Inheritance 
- Inheritance is a specific part of Object Oriented Programming.
- Reusability is a very important aspect of programming. 
    - Suppose we have created a class named *`class 1`* , now we are creating another class named *`class 2`* . 
    - Now suppose that *`class 2`* has some requirements which are already fulfilled inside the *`class 1`* . 
    - Now either we can write those things again inside *`class 2`* , but it will take up more memory and will violate a very basic principle of programming, which is basically *"DONT REPEAT YOUR CODE"*.
    - What we can do this is we can do something by which we can inherit everything written inside *`class 1`* into *`class 2`* and add only those things in *`class 2`* which are not being mentioned in *`class 1`* .
    - ### ***This is what Innheritance is!***

- The class which is being inherited is termed as ***Base Class*** and the class which is inherting the base class is termed as ***Derived Class***.
- There are different types of Inheritance in c++ .

## *Forms Of Inheritance*
There are 4 types of inheritance in c++ .

- ### 1. *Single Inheritance :*
    When a class is derived from only one base class, it is termed as Single Inheritance.

- ### 2. *Multiple Inheritance :*
    When a class is derived from more than one base class, it is termed as Multiple Inheritance.

- ### 3. *Hierarchial Inheritance :*
    When several classes are derived from one base class, or, when more than one class is derived from the same base class, it is termed as Hierarchial Inheritance.

- ### 4. *Multilevel Inheritance :*
    When a class is derived from a class which is also derived from some other class.

- ### 5. *Hybrid Inheritance :*
    It is a combination of both multiple inheritance and multilevel inheritance.