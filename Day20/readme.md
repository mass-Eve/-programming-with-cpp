# This Is Day20 Of Learning C++
## *26 February 2024*

# Quick Recap About The *public* and *private* Declarations Of The Members.
- When we create a member inside the **public** domain of a class, this member can be 
    1. accessed outside of the class with *dot (.) operator* and it is not necessary to create a funciton that can access it.
    2. inherited by an sub-class, both as private and public.

- When we create a member inside the **private** domain of a class, this member can not be 
    1. directly accessed outside of the class. To access it, there has to be a function defined in the public domain of the class, which is accessing it.
    2. inherited by a class deriving itself from the base class where that member is created.

- There is another category of members which can be declared inside a class, it is known as ***protected***.

-----

# Protected Access Modifier
- Sometime, we may encounter a condition where we want to access that private member, but still we don't want to threaten its privacy.
- In these type of conditions, a *protected* access modifier comes in action.
- The members declared in the section *protected* section of the class are kind of a special case to a *private* members.
- We can access and inherit the protected members but we can not do the same with *private* members of the class.
- The class member declared as Protected are inaccessible outside the class but they can be accessed by any subclass(derived class) of that class.

## How To Create Members With *protected* Access ?
- The syntax to create members with *protected* access is similar to that of the *public* and *private* access modifiers.
- We will make use of the *`protected`* keyword.

- Here is an example~

```cpp

```