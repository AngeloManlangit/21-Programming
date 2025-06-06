# Chapter 11  - Functions

---

## Functions

&nbsp;&nbsp;&nbsp;&nbsp;
Functions follow a certain pattern, as can be seen in main. Functions, 
however, are written outside of main and placed elsewhere in the code. 
They follow this syntax:

######

    data_type function_name(parameters) {
            // code of the function
    }
     
    Example:
    #include <stdio.h>
     
    int sum(int x, int y) {
            return x + y;
    }
     
    int main() {
            int a = 1;
            int b = 2;
            int result = sum(a, b);
                    
            printf("%d", result);
    return 0;
    }
     
    Output:
    3

######

> The data type of the function is the data type of the value that will 
be returned. In this example, there are two parameters: integers x and y.
To write the parameters, you also need to specify the data type of each 
variable when declaring. 

&nbsp;&nbsp;&nbsp;&nbsp;
In the line where we initialize the result variable, we called the sum 
function with arguments a and b. These arguments are passed onto the 
function, where the values will be added and get returned. The value 
returned needs to be the same data type as the variable the value is 
getting assigned to. If the data type of the sum function is a float, 
then the result variable also has to be a float.

#####

---

#####

## Function Prototypes

&nbsp;&nbsp;&nbsp;&nbsp;
Since compilers read the code from top to bottom, functions have to be 
written before the area where they are called as the function would 
be considered missing if it were below the function calls. To help 
with this, we make what is called a **Function Prototype**. Function 
Prototypes tell the compiler ahead of time that a certain function 
exists within the code without having to be before the function call. 
This makes your code more organized as you also get a list of the 
functions to be written.

######

    #include <stdio.h>
     
    int sum(int x, int y);		// function prototype
     
    int main() {
            int a = 1;
            int b = 2;
            int result = sum(a, b);	// function call
                    
            printf("%d", result);
    return 0;
    }
     
    int sum(int x, int y) {		// actual function
            return x + y;
    }
 
######

&nbsp;&nbsp;&nbsp;&nbsp;
Using the same example, we can see that we declared the function before 
main and placed the function’s code below main. So when calling the 
function inside of main, the compiler knows that the function is 
somewhere in the code.

#####

---

#####

## Pass by Value

&nbsp;&nbsp;&nbsp;&nbsp;
We call passing data with functions and arguments “Pass by Value” 
where we pass a value to the function and the function will create a 
copy of that value to be used within the function’s code. This means 
that the original variable won’t get affected. To affect the original 
variable, we use methods of passing like **Pass by Reference** but that 
is for *Chapter 16 with Pointers*. We pass the values to the function 
with the same amount of parameters the function has and in the same 
order those parameters are placed in.

#####

---

#####

## Returning Values

&nbsp;&nbsp;&nbsp;&nbsp;
If we want to assign a value to a variable using functions, we return 
a value of the same data type within the function. Returning values 
inside a function signifies that it is the end of the function, so 
processes after the return keyword will no longer be done. You can 
return any value as long as the data type is the same. You may return 
the result of a math equation, boolean of a condition, or not return 
anything at all. 

&nbsp;&nbsp;&nbsp;&nbsp;
Returning is also optional where you don’t have to always return 
if you don’t need to. This is the case for void functions where the 
data type of the function is *void*. Because void has no value, you 
don’t have to return a value either. You can just leave it as “return;” 
and it will work fine. However, other data types usually need a return 
value, so best to practice using returns and parameters with different 
data types, and try making code without them at all.

#####

---

#####

## Recursions

&nbsp;&nbsp;&nbsp;&nbsp;
Recursion is a technique to loop functions by calling itself. 
This makes complicated problems get broken down into more simplified 
and manageable steps and easier to solve. Recursions are a bit 
complicated to put into practice, but are a useful technique to make 
certain processes easier.

######

    int sum(int x);
     
    int main() {
    int result = sum(10);
    printf("%d", result);
    return 0;
    }
     
    // will add the sum of all numbers from 0 to x
    int sum(int x) {
            if (x > 0) {				
    return x + sum(x - 1);	// recursive call
    } 
    else {					// base case
                    return 0;				
            }
    }
     
    Output:
    55

######

&nbsp;&nbsp;&nbsp;&nbsp;
The base case in a recursive call is when the recursion stops and 
returns a value. The recursive call is the condition where the function 
calls itself. The base case is needed in the recursive call because it 
would loop infinitely if it didn’t have a condition to stop the 
function. In this example, it gets the value of x and adds it to x - 1 
continuously. To better understand the recursion, imagine it like this 
in every step:

> x = 10, sum of (x), this is in every return function in the recursive call
> 10 + sum(10 - 1)
> 10 + 9 + sum(9 - 1)
> 10 + 9 + 8 + sum(8 - 1)
> 10 + 9 + 8 + 7 + sum(7 - 1)
> 10 + 9 + 8 + 7 + 6 + sum (6 - 1)
> …
> 10 + 9 + 8 + 7 + 6 + 5 + 4 + 3 + 2 + 1 + sum(1 - 1), sum(0) returns 0 so
> 10 + 9 + 8 + 7 + 6 + 5 + 4 + 3 + 2 + 1 + 0 = 55

&nbsp;&nbsp;&nbsp;&nbsp;
Each call of the function will return a number 1 less than the previous 
iteration’s number, and once it reaches the end of the recursion, will 
add all of the values.

#####

---

#####

### References:
- https://www.freecodecamp.org/news/how-to-use-functions-in-c/
- https://users.cs.utah.edu/~germain/PPS/Topics/recursion.html
- https://www.w3schools.com/c/c_functions_recursion.php


