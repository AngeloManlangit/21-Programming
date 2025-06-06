# Chapter 7 - Loops

---

## While loop

&nbsp;&nbsp;&nbsp;&nbsp;
Loops are used when you want to keep repeating a certain block of code 
until a specific condition is met. Loops help save time, resources, 
reduce errors, and make code more efficient and readable.

######

&nbsp;&nbsp;&nbsp;&nbsp;
While loops are loops that will execute a block of code while the given 
condition is true. It will only stop looping once the condition is 
false.

######

    while(condition) {
            // code block
    }

######

> You can make it loop infinitely by making the condition always true. However, you might want to make your condition be able to be false at one point if you don’t want it to loop infinitely.


    int x = 0;
     
    // it will keep incrementing if the value of x is < 21
    while (x < 21) {
            x++;
    // Once x reaches 21, the condition is false and loop ends
    // It will loop 21 times
    }
    printf("%d", x);
     
    Output:
    21

#####

---

#####

## Do-while loop

&nbsp;&nbsp;&nbsp;&nbsp;
Do-while loops are the same as while loops except that the loop 
happens exactly once, no matter whether or not the condition is 
true or false. This is good if you want a code to loop but at least 
be done once because if the condition is false right off the bat, the 
loop will not happen.

######

    do {
            // code
    }
    while (condition);

#####

---

#####

## For loop

&nbsp;&nbsp;&nbsp;&nbsp;
For loops are loops that are helpful if you have a lot of incrementing 
and decrementing to do. They essentially make a counter that counts the 
number of loops. You can do the same with while loops but for loops 
makes it more readable, even if the syntax is a bit strange.

######

    for (initialization; terminating expression; update) {
            // code block
    }

######

&nbsp;&nbsp;&nbsp;&nbsp;
There are 3 sections within the for loop. The 1st section, 
initialization, is used to initialize any variables that will be used 
for and in the loop, such as loop counters. The 2nd section, 
terminating expression, is a boolean expression that will only stop 
the loop if the condition is false. It will repeat the loop if the 
expression is true. The 3rd section, update, is for any variables that 
need to be incremented or decremented. This is mostly used for the 
loop counter to increment itself in every loop.

######

    for (int i = 0; i < 5; i++) {
            printf("%d ", i + 1);
    }
     
    Output:
    1 2 3 4 5

> It is a tradition in Computer Science and in coding in general to 
use “i” as the counter. Why? Because it is sort of a shortcut to 
indicate the “index” of the loop, or what number the loop is currently 
in. Of course since this is just a tradition, it is completely optional 
and up to you on whether or not you want to use it. 

#####

---

#####

## Break and Continue

&nbsp;&nbsp;&nbsp;&nbsp;
The **break** keyword makes a loop end earlier than intended. If there is 
a certain condition that requires a loop to end early, even though 
it hasn’t completed its full cycle, you may use the break keyword to 
do so. This is helpful as well for infinite loops, where you don’t 
have to write the condition directly in the while or for loop 
termination expressions but as a condition inside of the loop. 

&nbsp;&nbsp;&nbsp;&nbsp;
Similarly, you can use the **continue** keyword to move on to the 
next loop. If you want to skip over a certain part of the loop and 
start a new iteration without resetting the loop or ending it, you 
can use the continue keyword to skip over that code by placing it 
before the code you plan on skipping. Both of these keywords warrant 
if statements go alongside them as without a condition, it would just 
break or continue the loop as soon as the keyword is reached. The use 
of these words are also situational and not always the best option in 
every situation. However, good use of these keywords can do wonders 
for the efficiency of your code.

######

    int x = 5;
     
    // an infinite loop, 1 to represent "true"
    while (1) {
            x++;	// increments x
     
            // checks if x is an odd number, continues the loop if it is, skipping over the code below
            if (x % 2 == 1) {
                    continue;
            }
             
            // prints the number
    printf("%d is even\n", x);
     
            // checks if x is >= 8
            if (x >= 8) {
                    printf("DONE!");
                    break;	// ends the infinite loop
            }
    }
     
    Output:
    6 is even
    8 is even
    DONE!

#####

---

#####

## Nested Loops

&nbsp;&nbsp;&nbsp;&nbsp;
Just like if statements, you can have Nested Loops which are loops 
within the loops. These are a little bit complicated as you now have 
to account for the outer and inner loops. The outer loops will loop 
the inner loops n-amount of times. Programmers tend to use i to 
represent the counter of the outer loop, and j for the inner loop, 
and k, l, m, n, … etc for other inner loops. It will complete the inner 
loop first before proceeding to the next iteration of the outer loop. 
These are helpful for traversing lists and doing mathematical equations 
that may require more than one loop.

#####

---

#####

### References:  
- https://www.tutorialspoint.com/cprogramming/c_for_loop.htm
- https://www.w3schools.com/c/c_for_loop.php
- https://www.w3schools.com/c/c_break_continue.php

