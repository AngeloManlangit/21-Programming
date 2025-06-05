# Chapter 5 - Mathematical Operations in C

#####

## Arithmetic Operators

&nbsp;&nbsp;&nbsp;&nbsp;
Since we will be dealing with data, math is an integral part of 
programming. You can do the classic Addition, Subtraction, 
Multiplication, and Division operations in C using the symbols they 
are assigned with.

- Addition (+)
- Subtraction (-)
- Multiplication (*)
- Division (/)
- Modulo (%)

######

&nbsp;&nbsp;&nbsp;&nbsp;
You can do math and assign the resulting value to a variable. 
You may even do math using variables.

######

    int x = 9, y = 10;
    int sum = x + y;
     
    printf("What's 9 + 10?\n%d", sum);
     
    Output:
    What's 9 + 10?
    19
     
    // If you wish, you may even do arithmetic inside of printf
    printf("What's 9 + 10?\n%d", x + y);
     
    Output:
    What's 9 + 10?
    19

######

&nbsp;&nbsp;&nbsp;&nbsp;
Modulo is an operator that gives you the remainder of the division of 
two numbers. 

    int n = 21;
    int modulo = n % 2;	// divides n by 2 and gets the remainder
     
    printf("%d\n", modulo);
     
    Output:
    1
    

#####

---

#####

## Assignment Operators  

&nbsp;&nbsp;&nbsp;&nbsp;
These are operators that are used to assign values into variables. 
These include:  
- = - simple assignment, assigns the value on the right side to the variable on the left side
- += - adds the value of the variable to the value on the right side
- -= - subtracts the value of the variable by the value on the right side
- *= - multiplies the value of the variable to the value on the right side
- /= - divides the value of the variable with the value on the right side
- %= - finds the modulo of the variable divided by the value on the right side

#####

    int x = 10; 		// assigning 10 to x
    printf("%d\n", x);	//prints the original value of x
     
    x += 9;			// adding x + 9 and assigning it to x
    printf("%d\n", x);	// prints the new value
     
    x -= 12;			// subtracting x - 12 and assigning it to x
    printf("%d\n", x);
     
    x *= 3;			// multiplying x * 3 and assigning it to x
    printf("%d\n", x);
     
    x /= 7;			// dividing x / 7 and assigning it to x
    printf("%d\n", x);
     
    x %= 3;			// finding the remainder of x / 3
    printf("%d\n, x);
     
    Output:
    10
    19
    7
    21
    3
    0

#####

---

#####

## Increments and Decrements

&nbsp;&nbsp;&nbsp;&nbsp;
We can also use increments and decrements but in a more simplified 
version instead of doing x += 1 all the time. We can use ++ or -- 
to increment and decrement by 1 respectively.

######

    int x = 11;
    x++;	// = 12
    x--; // = 11
     
    // We can even place it at the start
    ++x;	// = 12

######

&nbsp;&nbsp;&nbsp;&nbsp;
You can either use it as a prefix or postfix. Prefix is where the ++ 
or -- is placed before the variable name like ++x and --x. The value 
of x is incremented/decremented by 1, and then it returns the value. 
Postfix does the same thing except in the reverse order. So it is 
written like x++ and x--, returning the original value of x first and 
then incrementing/decrementing it by 1.

#####

---

#####

## PEMDAS

&nbsp;&nbsp;&nbsp;&nbsp;
PEMDAS is still present in C, however it works differently. First of 
all, there is no direct symbol to indicate Exponents (you have to use 
the math.h library to use power functions). Parenthesis are still 
usable and they do the same thing as you would in real life. They 
let whatever equations within them happen first before equations on 
the outside. However, for the MDAS part, multiplication and division 
still happen before addition and subtraction but they happen from 
whatever is seen first from left to right. Instead of multiplying first 
usually, if the division comes before the multiplication, it will 
divide first then multiply.

#####

    int x = 10 + 12 / 3 * 4;	// division goes first
    // 12 / 3 = 4, 4 * 4 = 16, 16 + 10 = 26
    int y = 10 + 12 * 3 / 4	// multiplication goes first
    // 12 * 3 = 36, 36 / 4 = 9, 9 + 10 = 19
    printf("%d\n%d\n", x, y);
     
    Output:
    26
    19

#####

&nbsp;&nbsp;&nbsp;&nbsp;
This is where using parenthesis comes in, to make sure that your math 
equations are calculated correctly.

#####

---

#####

### References:

- https://www.programiz.com/c-programming/c-operators
- https://www.programiz.com/article/increment-decrement-operator-difference-prefix-postfix


