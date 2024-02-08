# This is Day 03 of learning C++

# Control Structures In C++
- They help us in controling the flow of the program and also they provide logic to our program.

- They are mainly 3 types ~
    01. Sequence Structures.
    02. Selection Structures.
    03. Iterative or Loop Structures.

Let's discuss more about them ......

## Sequence Structures :
- In sequence stuctures, we normally write all the lines of code that has to be executed by c++ . And all those lines are executed, always.

- The *Flow of Control* is top to down. First we enter the program through the main() , after that we execute each statement we see.

This is what a sequential execution is.

## Selction Structures :
- In selection structures, we can control the flow of the program. 

- In selection structures, first a condition is encountered by the c++ compiler, it is like a question, and the answer is mostly `boolean true` or `boolean false` .

- The compiler evaluates the condition or tries to find the answer of the question and if the condition evaluates to be *true*, it will do a certain task, and if the condition evaluates as *false*, it will do something else. But it will not be doing both the things.

- For example, all of us have used the one and only ***Sridharacharya Formula*** to find the roots of a quadratic equation. Where the conditions are as follows - if the value of discriminant is more than 0, the quadratic equation will have Real and Distinct roots, else if the value of discriminant is equal to 0, the quadratic equation will have equal and real roots, else the equation will have imaginary roots. In all the cases, only task has to be done.

## Types of Selection Statements ~
01. ***if statements***
02. ***if-else statements***
03. ***if-(else-if)-else ladder***
04. ***switch(case) statement***

---

## Loop Structures
- When we want to do a task *n number of times* , wwe make use of loop structures.

- Loops helps us in doing a task until the condition is `True` .

## Types Of Loop Structures
There are 3 loops in total, in c++
01. ***while loop***
```c++
// Initialisation of loop variable
int <var> = <value>;
while (<condition>)
{
    // Body
    // Loop variable Updation
}
```

02. ***for loop***
```c++
for (<loop-variable-initialisation> ; <condition> ; <updation>)
{
    // Body
}
```

03. ***do while loop***
```c++
// Initialisation of loop variable
int <var> = <value>;
do {
    // Body
    // Loop variable Updation
} while (<condition>) ;
```


inifinite
