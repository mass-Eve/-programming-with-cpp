# This Is Day11 Of Learning C++
## *16 February 2024*

# Friend Functions In C++
- friend functions are special functions which are not a part of a class, but they have access to some features(or members) of that class.

- while the functions declared inside a class are called by *member functions* or *methods* because we use a *dot(.) operator* to access them, the same is not applicable to *friend functions*. Friend functions are still functions, ***NO*** methods.

- Often times, friend functions usually take objects as arguments.

- since they are not member functions, they are not accessed using the dot operator.

- They are invoked without any object.

- Can be declared in any scope, either private or public.

- we can declare a friend function using the following syntax ~
```cpp
class <Class-name>{
    private :
        friend <Class-name> <function-name>(<arguments, if any>);
                    // or
    public :
        friend <Class-name> <function-name>(<arguments, if any>){

        }
};
```

-----

# Friend Class
To declare whole class as friend, we use the following syntax ~
```cpp
class <Main-Class>{
    // body
    public :
        friend class <Friend-Class>;
};

class <Friend-Class>{
    // body
};
```