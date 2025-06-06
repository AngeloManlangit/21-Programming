# Chapter 3 - C

---

## Source Code and Compiler

### Source Code
&nbsp;&nbsp;&nbsp;&nbsp;
This is human readable code. Computers cannot “run” source codes and it 
has to be translated or, rather, compiled. C’s source code is written 
in a .c file. In C, the syntax follows certain conventions and symbols. 
The basic structure of a C program is:

######

    #include <header_name.h>
     
    // Area for Global Variables
     
    int main() {
            Local Variables;
     
            Statement1;
            Statement2;
            Statement3;
            Statement4;
     
            return;
    }

######

&nbsp;&nbsp;&nbsp;&nbsp;
In every C program, you need a main() function as this is essentially 
the base of your program. The compiler will always start in this main() 
function, and running the program will start with the statements within 
main. 

&nbsp;&nbsp;&nbsp;&nbsp;
**Braces** ({}) are used to group together blocks of code. It marks the 
beginning and end of the block of statements or functions. 

&nbsp;&nbsp;&nbsp;&nbsp;
**Semi-colon** (;) is used to terminate each statement. It tells the 
compiler that this line is and the process is over and to proceed to 
the next line/step.

&nbsp;&nbsp;&nbsp;&nbsp;
**White space characters**, like Enter, Space, and Tab, are often ignored 
by the compiler, but are helpful in indentation that makes it easier for 
the programmer to read the code. Usually, different indentations signify 
different blocks of code. This makes the code more readable and 
organized and it is a good practice for any Computer Science Student 
to use them properly.

&nbsp;&nbsp;&nbsp;&nbsp;
**Comments** (/* */ or //) are lines of texts that are ignored by the 
compiler. These are used to document the code, providing notes to anyone 
who reads the code. If you have a large block of text, it is better to 
use “/* */” as everything within those lines and asterisk will be 
ignored. However, if it is just 1 or a few lines of text, you can use 
“//” to turn it into a comment.

&nbsp;&nbsp;&nbsp;&nbsp;
**Hashtags** (#) are used to tell the compiler that there is important info 
about the built-in function used that can be found in the file name. 
These are used to access libraries with functions that will help in your 
code. The most common one is #include <stdio.h>, which stores the basic 
functions of inputs and outputs. stdio.h is called a Header File which 
is a file that gives you access to existing libraries so that you 
can use their functions in your code. These always end in a “.h”.

&nbsp;&nbsp;&nbsp;&nbsp;
C is usually read from top to bottom, and each line is read from left 
to right. There are specific syntaxes to keep track of as you code in C. 
*Assume all sample code from 21 Programming has #include <stdio.h> and 
int main() {}*.

#####

### Compiler

&nbsp;&nbsp;&nbsp;&nbsp;
Compilers are an operating system program that converts C language 
statements into machine language equivalents. Translates one language 
to another. Commonly, translates source code to machine instructions 
for the computer to execute your code. Plenty of free compilers are 
available online. Personally, we suggest https://www.msys2.org/. To 
acquire the compiler we need to input this in the terminal:

######

    pacman -S mingw-w64-ucrt-x86_64-gcc //And continue with the installation
     
    gcc -v //This will confirm the installation

#####

---

#####

## Integrated Development Environment (IDE)

&nbsp;&nbsp;&nbsp;&nbsp;
IDEs are softwares where you can write code in. Use it alongside the 
Compiler to make your code. Just like compilers, there are plenty of 
free IDEs that can be found online. We suggest using Visual Studio Code
(VSCode). VSCode is one of the most used and famous IDEs with plenty 
of extensions that can help you in your programming journey. 
To download, follow the link https://code.visualstudio.com/.

#####

---

#####

## Terminal

&nbsp;&nbsp;&nbsp;&nbsp;
The terminal is where you will be able to run your code and access the 
memory of your computer. This is the command-line interface, where you 
will usually input the necessary inputs depending on your code and is 
also the place where you can view the output of your code. There are 
also multiple commands you can do in the terminal that are important 
to know called **Command Line Arguments**. 

#####

---

#####

## Command Line Arguments

&nbsp;&nbsp;&nbsp;&nbsp;
There are a multitude of Command Line Arguments. The common ones you 
will be using for CMSC 11 and 21 are:

######

&nbsp;&nbsp;&nbsp;&nbsp;
\> Compiling your C Program

    gcc file_name.c

&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
Inputting this will compile your program, outputting an executable 
file (.exe) where you can run your code. The file_name can be any 
name, as long as it ends with a .c to indicate that it is a C file. 
By default, the .exe file will be called a.exe. If you wish the give 
the executable a different name, simply put -o executable_name after 
that like this:

    gcc file_name -o executable_name

&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
This will output a program called executable_name.exe. If there are 
no messages that follow that input, then that means that it has been 
successfully compiled and ready to be executed. But how do we run 
the executable?

######

&nbsp;&nbsp;&nbsp;&nbsp;
\> Running your C Program

    ./executable_name.exe

&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
Simply write ./ before the name of the executable’s name. It can even 
run without the .exe extension and just the name itself. Once you run 
the program, any inputs and outputs found in the code will be available 
to be used.

######

&nbsp;&nbsp;&nbsp;&nbsp;
\> Changing Directory

    cd directory_name/folder_name

&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
To open a specific folder where the C file can be found in, use cd to 
change the directory and go to the folder where it can be found in. 
You can place more than one folder name, just separate them with /. 
This only applies if the directory in the right of the / is within 
the directory of the left. Otherwise, it will just say “directory can’t 
be found”. There are more ways to use the cd function, see the 
documentation behind it to learn its different features in 
https://learn.microsoft.com/en-us/previous-versions/windows/it-pro/windows-server-2012-r2-and-2012/cc754340(v=ws.11).

######

&nbsp;&nbsp;&nbsp;&nbsp;
\> Making a Directory

    mkdir directory_name

&nbsp;&nbsp;&nbsp;&nbsp;
If you want to create a new directory, use mkdir to create it and open it.

#####

\> Showing the Items inside the Directory

    ls

&nbsp;&nbsp;&nbsp;&nbsp;
This will display all the files that can be found inside the directory. 
This is helpful to check if you are in the right directory and whether 
or not the C or executable file exists within said directory. It will 
also show other directories if there are any.

&nbsp;&nbsp;&nbsp;&nbsp;
\> Important Keyboard Commands:

- Ctrl + C - Stops the program while running
- Ctrl + L - Clears the terminal (you could also type “clear” in the command line)
- Up & Down Arrows - To go through previous command lines and inputs
- Ctrl + Ins - Copies the highlighted contents in the terminal
- Shift + Ins - Paste contents in the terminal

#####

---

#####

## Variables

&nbsp;&nbsp;&nbsp;&nbsp;
**Variables** are used to store data values like numbers and characters. 
Variables can have different **data types**, which represent the kind of 
value that will be contained in the variable. For example, an integer 
variable can only store integer values and character variables can 
only store character values. 

&nbsp;&nbsp;&nbsp;&nbsp;
There are two types of variables: **Global** Variables & **Local** Variables. Global Variables are variables that can be accessed anywhere in the program. Local Variables are variables that can be accessed only within the functions they are relative to. We learn more about the uses of these variables later when you reach Chapter 10 on Functions. 

######

    data_type variable_name;
     
    Example (for an integer variable named x):
    int x;
    // int refers to the data type "integer"
    // x is the name of the variable and can be used in the code

######

&nbsp;&nbsp;&nbsp;&nbsp;
Assigning values into the variable can be done anywhere in the code 
AFTER **Declaring** it. Declaring a variable means that you are 
creating a variable with a certain datatype. This is usually done 
in the start of the code as you are setting the variables to be 
manipulated. Assigning an empty variable is called **Initializing**. 
You can initialize a variable using assignment operators like =.

######

    // Assigning a number to integer variable "x"
    int x = 21;
     
    // Assigning a character to character variable "letter"
    char letter = 'a';

######

&nbsp;&nbsp;&nbsp;&nbsp;
Make sure to put a “;” after declaring or initializing the variable to 
tell the compiler where to end that declaration or initialization. 
And keep in mind that C is case-sensitive, so two variables with 
similar words but in different cases generate two different variables 
(e.g. int x is a different variable from int X).

&nbsp;&nbsp;&nbsp;&nbsp;
There are also rules in naming variables:

- Every variable name should start with alphabets or underscore (_).
- No spaces are allowed in variable declaration. A camel case is used to separate words (eg. NumberOne, ProductName, StudentGrade etc.)
- Except underscore (_), no other special symbols are allowed in the middle of the variable declaration (not allowed: roll-no, allowed: roll_no).
- Every variable name should always exist on the left hand side of the assignment operator (invalid: 10 = a; valid: a = 10;).
- No keyword should access variable name (int for is invalid because for is reserved keyword for C).

#####

---

#####

## Data types

&nbsp;&nbsp;&nbsp;&nbsp;
Data types are types of data with different values and affect how these 
values in the variables are manipulated.  
- int - stores integers (whole numbers), without decimals, such as 123 or -123
- float - stores floating point numbers, with decimals, such as 19.99 or -19.99
- char - stores single characters, such as 'a' or 'B'. Characters are surrounded by single quotes
- double - stores fractional numbers, containing one or more decimals. Sufficient for storing 15 decimal digits
- void - has no value or operation
- bool - booleans, has only two values: 1 for TRUE and 0 for FALSE
- string - ordered list of characters

######

&nbsp;&nbsp;&nbsp;&nbsp;
With data types come Format Specifiers, which tells the compiler what 
kind of data to expect when you receive the variable or input. These 
are used in inputting and outputting data. These always start with a % 
and letters that depend on the data type to be used:  

- %c - character
- %s - string
- %d or %i - integer (d for decimal but pretty much the same thing)
- %f - float/double
- %x - hexadecimal
- %o - octal

######

&nbsp;&nbsp;&nbsp;&nbsp;
Each data type has their own set amount of bytes, each varying.

#####

---

#####

### References:  

- https://learn.microsoft.com/en-us/previous-versions/windows/it-pro/windows-server-2012-r2-and-2012/cc754340(v=ws.11)
- https://www.w3schools.com/c/c_variables.php


