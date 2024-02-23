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