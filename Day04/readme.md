# This is Day 04 Of Learning C++

## Structures
Structure is a user-defined data type, which can be used to stored values of **different data types**

## Let's Create A Structure
To create a structure, we make use of the `struct` keyword.

```c++
#include<iostream>
using namespace std;

// A structure to store the marks and grade of two subjects of a student
struct marks{
    int marks_math ;
    char grade_math ;
    int marks_cs ;
    char grade_cs ;
} ;

int main()
{
    // A struct-type variable to use the structure created above
    struct marks Shashank;

    Shashank.marks_math = 98;
    Shashank.marks_cs = 95;
    Shashank.grade_math = 'A' ;
    Shashank.grade_cs = 'A' ;

    cout << "Marks of Shashank in Maths : " << Shashank.marks_math << endl; 
    cout << "Marks of Shashank in CS : " << Shashank.marks_cs << endl;

    cout << "Grade of Shashank in Maths : " << Shashank.grade_math << endl; 
    cout << "Grade of Shashank in CS : " << Shashank.grade_cs << endl;

    return 0;
}
```

```powershell
Marks of Shashank in Maths : 98
Marks of Shashank in CS : 95
Grade of Shashank in Maths : A
Grade of Shashank in CS : A
```

- We can also create alias in c++. 
- clearly in the above program, writing the whole thing `struct <structure name> <identifier>` can be a bit challenging when the names are too long. Therefore, we can use the *`typedef`* keyword in c++ to create an alias of it. Let's see how we can do it.

```c++
#include<iostream>
using namespace std;

// A structure to store the marks and grade of two subjects of a student
typedef struct marks{
    int marks_math ;
    char grade_math ;
    int marks_cs ;
    char grade_cs ;
} mng;

int main()
{
    // A struct-type variable to use the structure created above
    mng Shashank;
    
    Shashank.marks_math = 98;
    Shashank.marks_cs = 95;
    Shashank.grade_math = 'A' ;
    Shashank.grade_cs = 'A' ;

    cout << "Marks of Shashank in Maths : " << Shashank.marks_math << endl; 
    cout << "Marks of Shashank in CS : " << Shashank.marks_cs << endl;

    cout << "Grade of Shashank in Maths : " << Shashank.grade_math << endl; 
    cout << "Grade of Shashank in CS : " << Shashank.grade_cs << endl;

    return 0;
}
```

```cmd
Marks of Shashank in Maths : 98
Marks of Shashank in CS : 95
Grade of Shashank in Maths : A
Grade of Shashank in CS : A
```

## Unions

- A union is a user-defined datatype in which we can define members of different types of data types just like structures. 

- But the thing that makes *`unions`* different from structures is that all the members *(variables)* of the union share the same memory location, unlike a structure that allocates memory separately for each member variable. 

- The size of the union is equal to the size of the largest data type.

### Create a Unions
```c++
#include<iostream>
using namespace std;

// a union to store information about a student
union studentInfo{
    int rollno ;
    int kaksha ;
    char section ;
    float height ;
    float weight ;
} ;

int main()
{
    // lets create a union variable
    union studentInfo Himesh;
    
    Himesh.rollno = 45;
    cout << "The roll number of Himesh is : " << Himesh.rollno << endl;

    Himesh.kaksha = 12;
    cout << "Himesh studies in : " << Himesh.kaksha << endl;

    return 0;
}
```

```cmd
The roll number of Himesh is : 45
Himesh studies in : 12
```

But 
```cpp
#include<iostream>
using namespace std;

// a union to store information about a student
union studentInfo{
    int rollno ;
    int kaksha ;
    char section ;
    float height ;
    float weight ;
} ;

int main()
{
    // lets create a union variable
    union studentInfo Himesh;
    
    Himesh.rollno = 45;
    Himesh.kaksha = 12;

    cout << "The roll number of Himesh is : " << Himesh.rollno << endl;
    cout << "Himesh studies in : " << Himesh.kaksha << endl;

    return 0;
}
```

```cmd
The roll number of Himesh is : 12
Himesh studies in : 12
```

You can spot the difference, we are getting a value for rollno which we have not setted. 