***02 March 2024***
## *This Is Day 25 Of Learning C++*

# Calculator Working Using Classes & Objects

## Structure Of All The Classes Used

### Base Class 1 ~ `SimpleCalculator`
- It comprises of 3 protected members and 6 member functions.
- The three protected members are as follows ~
    - Two ***integer*** variables to hold numbers ~ *`num1`* and *`num2`*
    - One ***float variable*** to store the computational result ~ *`result`*
- Next we have six functions to perform ~
    - *`addtion`* 
    - *`subtraction`*
    - *`multiplication`*
    - *`division`*
    - *`remainder`*
    - *`exponentiation`*

This is our `SimpleCalculator` class.

### Base Class 2 ~ `ScientificCalculator`
- It has 4 protected members and 14 member functions.
- The four protected members are as follows ~
    - The first variable is an ***integer variable*** which is used to store a integer number.
    - The second and third variables are ***double variables*** used to store angle measure. They are *`angle`* and *`temp`*
    - The fourth variable is a ***float variable***, used to store the computational result ~ *`result`*
- The member functions are as follows ~
    - We have one function whose sole purpose is to handle *angle measure*.
        - It is *`takeAngleConversion()`* . 
        - In `<cmath>` library of c++ , trigonometric functions take radian measure as its angle argument. But we are used to degrees.
        - Thats why this function will prompt the user to enter the angle measure, but before that it will ask the user to tell in which measure it is entering the angle measure.
        - If the angle measure is in radians already, no issue, just put it into the angle variable.
        - Otherwise, convert it into radians from degrees and then put it into the angle variable.
    - Next we have 6 six member functions to calculate the values of sine, cosine, tangent, cotangent, secant and cosecant
    - Next we have 5 functions which are used for the following purposes ~
        - to find the square of a number ~ *`square(int)`*
        - to find the square root of a number ~ *`squareRoot(int)`*
        - to find the cube of a number ~ *`cube(int)`*
        - to find the cube root of a number ~ *`cubeRoot(int)`*
        - to find the factorial of a number ~ *`factorial(int)`*
    - At last, we have two functions, which are used to convert angle measures.
        - To convert degree measure to radian measure ~ *`deg2rad(int angle_measure)`* 
        - To convert radian measure to degree measure ~ *`rad2deg(int angle_measure)`* 
    - Now the use of this `temp` variable is to store the angle measure which was entered by the user, so that in the result time we can show the user that we have converted this angle measure into that.