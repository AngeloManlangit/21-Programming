# Chapter 6 - Conditions

#####

## If-else statements

&nbsp;&nbsp;&nbsp;&nbsp;
In programs, there may be some actions that we want to be done 
instead of others. If this happens then that happens. This is where 
conditional statements come in. The **If-else statement** is a statement 
in the code to check whether a given condition is true or not, and do 
the action based on the result.

######

    if (condition) {
            // if condition is true
            // code for the action when true
    }
    else {
            // if condition is false
            // code for the action when false
    }
    
######

&nbsp;&nbsp;&nbsp;&nbsp;
We group the statements with brackets so that the compiler will know 
what code to run if the condition is fulfilled or not. If the code is 
true, it will only do the code where the if statement says is true, 
else if otherwise. Once it checks the condition and does the code, 
it will not run the other statements.

######

    // program that checks if the value of x is 11
    int x = 11;
     
    if (x == 11) {			// checks if x is = 11
            printf("YES!\n");	// prints if true
    }
    else {				// if false
            printf("NO!\n");		// prints if false
    }
     
    Output:
    YES!

######

&nbsp;&nbsp;&nbsp;&nbsp;
Additionally, we can also have if statements within if statements 
called **Nested If Statements**. This will check first if the outer if 
statement is true and then check if the inner if statement is true.

#####

---

#####

## Else if statements

&nbsp;&nbsp;&nbsp;&nbsp;
However, there might be times where we have more than one condition. 
Conditions where we check a variable but depending on the value, 
will do different things. An else if statement helps with that. This 
basically continues checking the condition on whether or not it is 
true or false until it reaches the end. It still checks for a specific 
condition, and moves on to the next statement if false. These are found 
in between the if statement and else statement.

######

    int x = 21;
     
    if (x == 11) {	// since it's false, it moves on to the next 
            printf("CMSC 11");
    }
    else if (x == 21) {	// is true
            printf("CMSC 21");
    }
    else {
            printf("CMSC what now?");
    }
     
    Output:
    CMSC 21

#####

---

#####

## Switch Statements

&nbsp;&nbsp;&nbsp;&nbsp;
You can write as much as you want, but sometimes it can get confusing 
keeping up with all the conditions. Switch statements can make it 
easier as it checks by Cases rather than Booleans. They check for 
the different cases of a specific variable, and do the code block 
if it is true.

######

    switch (expression) {
      case x:
        // code block
        break;
      case y:
        // code block
        break;
      default:
        // code block
        break;
    }

######

&nbsp;&nbsp;&nbsp;&nbsp;
X and Y in this case are values that the expression could potentially 
have. To signify the end of the code block, we use break; to tell the 
compiler that the action is done. If none of the cases are true, then 
it will do the code found in the default case. The default case is 
similar to the Else statement where if nothing else is true, it will 
execute the code within it. Note: the default case and else statement 
are optional, the program will still run if those are not present.

#####

---

#####

## Booleans

&nbsp;&nbsp;&nbsp;&nbsp;
Often in programming, you would always just have a data type that 
would indicate the following:
- YES or NO
- TRUE or FALSE
- ON or OFF

&nbsp;&nbsp;&nbsp;&nbsp;
Booleans, named after George Boole, are used to indicate whether a 
given conditional statement is true or false. They can only have the 
values of true and false or 1 and 0 respectively. These booleans can 
be achieved alongside different conditional operators.

#####

---

#####

## Comparison Operators

&nbsp;&nbsp;&nbsp;&nbsp;
These are used to compare the numerical value of two given 
variables/numbers. These operators are:  

- \> - Greater than
- \>= - Greater than or equal to
- < - Less than
- <= Less than or equal to
- == - Equal to
- != Not equal to

######

&nbsp;&nbsp;&nbsp;&nbsp;
The reason as to why C uses a double equal sign == to check whether 
or not two values are equal is because the single equal sign = is 
already reserved for assigning. A common mistake made by beginner 
programmers is accidentally writing a single = sign when checking for 
a condition, assigning a value by mistake.

#####

---

#####

## Logical Operators

&nbsp;&nbsp;&nbsp;&nbsp;
With conditions comes logic. Writing thousands of if statements is not 
practical, so to lessen our load we use Logical Operators. These are 
operators that group conditions together.  

- OR (||) - checks if two or more conditions are true, if at least one is true then the whole condition is true. If all conditions are false, then the whole condition is false.
- AND (&&) - checks if two or more conditions are true, if all conditions are true then the whole condition is true. If at least one condition is false, then the whole condition is false.
- NOT (!) - checks if the opposite condition is true.

######

    int number = 21;
     
    // checks if the number is less than 22 AND is divisble by 3
    if ((number < 22) && (number % 3 == 0)) {
            // both are true so it will print this
            printf("WORDS\n");
    }
    else {
            printf("I have no words...\n");
    }
     
    if ((number != 21) || (number / 7 == 3)) {
    // first condition is false but second is true, meaning that this whole statement is true and will print this
    printf("Numero 21\n");
    }
    else {
    printf("Nah numero\n");
    }
     
    Output:
    WORDS 
    Numero 21

#####

---

#####

### References:  

- https://www.w3schools.com/c/c_switch.php
