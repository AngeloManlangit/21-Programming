# Chapter 4 - Inputs and Outputs

#####

## Headers

&nbsp;&nbsp;&nbsp;&nbsp;
As previously mentioned, you can access libraries using Headers! 
There are countless headers that were made for C, a majority of which 
are built-in. However, to use the functions found in these headers, we 
must first declare it using this syntax:

######

    #include <header_name.h>

######

&nbsp;&nbsp;&nbsp;&nbsp;
Not all headers are readily available within the IDE or Compiler though, and may require to be downloaded externally. To access these libraries, we use quotation marks (“”) instead of side arrows (<>) when putting their name.

######

    #include "external_header_name.h"
     
    // to access the header while running, we need to compile it alongside the header's c file
    gcc file_name.c external_header_name.c -o file name
    // needs to be in the same directory

######

&nbsp;&nbsp;&nbsp;&nbsp;
Common headers include:  

- stdio.h - for input and output functions
- ctype.h - for character handling functions
- math.h - for mathematical functions
- stdlib.h - general functions for utility
- string.h - for string functions
- time.h - for time and date functions
- stdbool.h - for booleans

#####

---

#####

## How to Output

&nbsp;&nbsp;&nbsp;&nbsp;
In C, we make use of the functions inside of stdio.h for outputs and 
inputs. We use the function printf() to print what we wish to display.

######

    printf("Hello World!");
     
    Output:
    Hello World

######

&nbsp;&nbsp;&nbsp;&nbsp;
We put what we want to be shown within the quotation marks “”. The text 
inside is called the format string. If we want to display the value of 
a variable, we make use of the format specifiers mentioned in the 
Data Types portion of Chapter 3. For example, if we want to display 
an integer, we do:

######

    int number = 21;
    printf("Number is: %d", number);
     
    Output:
    Number is 21

######

&nbsp;&nbsp;&nbsp;&nbsp;
This works for other format specifiers and data types as well. 
However, a data type like float can have multiple decimal values but 
sometimes, we may want to show just 2 decimal places. By default, 
printf will print decimals until the 6th decimal place. Format 
specifiers have a specific syntax to help with this:  

% \<flag> \<width> \<precision> \<size> conversion-code  
- Conversion Code is the symbol for the data type (c for char, i for integer, etc.)
- Size can have h for short and L for long (short int = hd, long int = Ld)
- Width is used to specify the minimum number of character positions in the output
- Precision is for the number of decimal places in floating point numbers, these come after a decimal point .
- Flag is either 0 or -, 0 will print leading zeroes depending on the width and - will not print anything in place of the remaining width

######

    float number = 21.11;
     
    // default:
    printf("%f", number);
     
    Output:
    21.110000
     
    // with specific formatting
    printf("%05.2f", number);
     
    Output:
    00021.11

######

&nbsp;&nbsp;&nbsp;&nbsp;
We can print more than one variable inside the printf function. We just need to put the format specifier within the “” and the variable name outside in the same order it appears in the format string.

######

    int x = 10, y = 20, z = 30;
     
    printf("x: %d, y: %d, z: %d", x, y, z);
     
    Output:
    x: 10, y: 20, z: 30

######

&nbsp;&nbsp;&nbsp;&nbsp;
However, there might be times where we want to print some text in a 
new line as by default, the program will print them all in the same 
line.

######

    printf("Hello");
    printf("World");
     
    Output:
    HelloWorld

######

&nbsp;&nbsp;&nbsp;&nbsp;
To separate them, we make use of Escape Sequences which are symbols 
that represent actions that can be performed when printing. These are 
always denoted with a backslash \ and a letter or symbol that does a 
specific action. Escape Sequences are:  
- \n - new line
- \t - Tab
- \b - backspace
- \r - carriage return
- \a - beep the speaker
- \’ - prints single quote
- \” - prints double quote
- \\\ - prints backslash
- \xdd - prints character which is in Hexadecimal form

######

&nbsp;&nbsp;&nbsp;&nbsp;
We make use of these escape sequences to make our outputs look better 
and not all in one line.

######

    printf("Hello\n"); // with \n now
    printf("World");
     
    Output:
    Hello
    World

#####

---

#####

## How to Input

&nbsp;&nbsp;&nbsp;&nbsp;
Inputs are just as important as outputs as they make the program usable 
by people. Instead of having to hard-code the inputs, we can use 
variables and functions to store our inputs and use the terminal. 
Just like printf(), we can use the function scanf() to be able to 
input data into our program. The syntax of scanf() is pretty much the 
as printf().

######

    scanf("format_specifier", &variable_name);
     
    Example:
    int x;
    scanf("%d", &x);
    printf("%d", x);
     
    Input:
    21
     
    Output:
    21

######

&nbsp;&nbsp;&nbsp;&nbsp;
This allows our program to be more dynamic as we can have different 
use-cases. Keep in mind that scanf will write over the existing value 
of the variable if it is not empty. You can  scan multiple variables 
with the same scanf by putting the variable’s corresponding format 
specifiers after another and its variable names in the same order.

&nbsp;&nbsp;&nbsp;&nbsp;
Additionally, the & symbol is important for scanning as it tells 
the compiler that you want to place this inputted value inside this 
specific variable through its address *(however, this is quite 
complicated for beginners and will be discussed more in Chapter 15 
about Pointers)*. For now, just remember to place an & symbol before the 
variable name to avoid getting *Segmentation Errors*.
