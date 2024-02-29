# This Is Day 23 Of Learning C++
## *29 February 2024*

# Multiple Inheritance In C++
- When a single class is deriving its features from more than one class, it is termed as ***Mulitple Inheritance***.

- ***For example*** 
    - Suppose we have a book named *"Object Oriented Programming In C++"*. Now this thing belongs to two categories. 
        - First is that, it is a book. Therefore, it has all the qualities and features that a normal book has. 
        - Second, it is a book of programming genre, meaning, it is a book which is used to learn programming. 
    - Now the language it teaches is something that is unique to this book only. 
    - Therefore, we can say that, this book has all the qualities that a normal book has, plus it is a programming book, that means we can learn computer programming from it, and the book that makes it unique is that it teaches programming in c++ .

*This is how multiple inheritance works !*

# Syntax Of Declaring (Derived) Classes Inheriting From Multiple Other (Base) Classes

```cpp
class <Name Of The Derived Class> : <visibility mode for base1 class>, <visibility mode for base2 class>, .... <visibility mode for base 'n' class> {
    // body 
};
```

## Example ~

```cpp
#include<iostream>
using namespace std;

class BaseClassOne{
    protected:
        int baseOneInt ;
};

class BaseClassTwo{
    protected:
        int baseTwoInt ;
};

class DerviedClass : public BaseClassOne, public BaseClassTwo{
    protected:
        int derivedInt ;

    public:
        void addInts(int one, int two){
            baseOneInt = one;
            baseTwoInt = two;
            derivedInt = baseOneInt + baseTwoInt;
        }

        void showInts(){
            cout << "This is Integer One from Base Class One : " << baseOneInt << endl;
            cout << "This is Integer Two from Base Class Two : " << baseTwoInt << endl;
            cout << "This is Integer Three from Derived Class : " << derivedInt << endl;
        }
};

int main()
{
    DerviedClass n;
    n.addInts(2, 2);
    n.showInts();
    return 0;
}
```

## Output 

```cmd
This is Integer One from Base Class One : 2
This is Integer Two from Base Class Two : 2
This is Integer Three from Derived Class : 4
```