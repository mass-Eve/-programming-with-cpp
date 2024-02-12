# This is Day 07 of learning C++
## *12 February 2024*

## Create A Private Class
- we can create a private class using the *`private`* keyword.
```cpp
#include<iostream>
using namespace std;

class Employee{
    private :
        int id ;
        int payroll ;
} ;

int main()
{
    Employee ep1;
    ep1.id = 45 ;
    return 0;
}
```

```cmd
02-private-class.cpp: In function 'int main()':
02-private-class.cpp:13:9: error: 'int Employee::id' is private within this context
     ep1.id = 45 ;
         ^~
02-private-class.cpp:6:13: note: declared private here
         int id ;
```

- By default, if private of public is not mentioned, then all the objects will be considered ***private***.
```cpp
#include<iostream>
using namespace std;

class Employee{
    int id ;
    int payroll ;
} ;

int main()
{
    Employee ep1;
    ep1.id = 45 ;
    return 0;
}
```

```cmd
02-private-class.cpp: In function 'int main()':
02-private-class.cpp:13:9: error: 'int Employee::id' is private within this context
     ep1.id = 45 ;
         ^~
02-private-class.cpp:6:13: note: declared private here
         int id ;
```


***Note - We can not access the members of a private class directly.***