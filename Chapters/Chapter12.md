# Chapter 12 - Structures

---

## What are Structs?
&nbsp;&nbsp;&nbsp;&nbsp;
**Structures or structs** are basically custom data types that group 
different existing data types together. Each variable inside a struct 
is called a member. These are very useful when grouping data in a 
simple and easy way. If you want to access different kinds of data 
under the same name, simply use structs! Structs are easier to read, 
trace, maintain, and much more efficient.

#####

---

#####

## Structs syntax and declaration

&nbsp;&nbsp;&nbsp;&nbsp;
A struct can be declared like so:

    struct struct_name {
            int member1;
            float member2;
            char member3;
    };
     
    int main(){
            struct struct_name myStructure;
    }

######

&nbsp;&nbsp;&nbsp;&nbsp;
You use the “**struct**” keyword to define the name of the struct and place 
its members within the curly braces of the struct. You can use this 
struct data type inside of functions and main by declaring a variable 
under with the struct as the datatype. The variable myStructure 
immediately gets access to the members.

######

&nbsp;&nbsp;&nbsp;&nbsp;
However, another way of declaring structs is by using the “**typedef**” 
keyword, which makes the struct defined as a data type so that you don’t 
have to keep writing “struct struct_name variable” for every variable 
declaration and just “struct_name variable”.

    struct struct_name {
            int member1;
            float member2;
            char member3;
    };
     
    typedef struct struct_name data_type_name;
     
    int main(){
            data_type_name myStructure;
            // notice how we use the 2nd name instead of struct struct_name
    }

######

&nbsp;&nbsp;&nbsp;&nbsp;
We give the definition of “struct struct_name” to be defined as a data 
type called “data_type_name”. This is just to show that they can be two 
different names, but it’s good practice to keep them the same to avoid 
confusion. You will need the struct to be declared before the typedef 
to be able to define it, or you can define it as you declare the struct 
like this:

    typedef struct struct_name {
            int member1;
            float member2;
            char member3;
    } data_type_name;
     
    int main(){
            data_type_name myStructure;
    }

######

> This does the same as having the typedef outside the struct 
declaration, but make sure to put the struct name before and after 
the struct.

#####

---

#####

## Members

&nbsp;&nbsp;&nbsp;&nbsp;
Once we declare a struct variable, we can access the members of that 
variable using the “.” symbol.

#####

    typedef struct struct_name {
            int member1;
            float member2;
            char member3;
    } data_type_name;
     
    int main(){
            data_type_name myStructure;
     
            myStructure.member1 = 21;
            myStructure.member2 = 11.11;
            myStructure.member3 = 'C';
     
            printf("%d %.2f %c", myStructure.member1, myStructure.member2, myStructure.member3);
    }
     
    Output:
    21 11.11 C

#####

> To print and scan the members of a struct, you need to specify the 
member the code wants to access. You can’t print everything by calling 
the variable “myStructure” as the struct holds more than 1 data type 
and the compiler wouldn’t know what value or variable needs to be used.

######

&nbsp;&nbsp;&nbsp;&nbsp;
Additionally, you can even have structs within structs. You can even 
declare it inside as well.

######

    typedef struct outer {
            int x;
     
            typedef struct inner {
                    int y;
            } inner;
     
    } outer;
     
    int main() {
            outer var;
            var.x = 11;		// to access x in the outer struct
            var.inner.y = 21; 	// to access y in the inner struct
     
            printf("%d %d", var.x, var.inner.y);
    }
     
    Output:
    11 21

#####

---

#####

## Initialization

&nbsp;&nbsp;&nbsp;&nbsp;
You initialize structs the same way you would do a variable, but you 
need to access the specific member to assign a value to. You can’t 
assign a single value to the struct, but you can initialize a struct 
if you have a group of elements.

######

    #include <stdio.h>
    #include <string.h>
     
    typedef struct student {
            char name[30];
            int grade;
    } student;
     
    int main() {
            // one way to initialize
            student kid1;
            strcpy(kid1.name, "Angelo");	// string copy function
            kid1.grade = 96;
     
            // another way to initialize
            student kid2 = {"Vince", 97};
     
            // You can even assign the values of a struct to another struct
            student unknown = {"Dexter", 98};
            student kid3 = unknown;
    }

######

&nbsp;&nbsp;&nbsp;&nbsp;
These are some initialization methods done with structs. The order of 
the elements within the curly brace need to be the same as what was 
defined in the struct from top to bottom. Just like the 3rd method of 
giving the values to another struct, this means that assigning a 
struct’s values can also be done with functions as long as the function 
is returning a struct of the same kind and variables.

######

&nbsp;&nbsp;&nbsp;&nbsp;
Structs can also be arrays, so you can have both arrays and each index 
of the array has their own members. However, you can’t initialize an 
index using the set method, you have to go through every member in each 
index.

######

    typedef struct Product {
            float price;
            int inventory;
    } Product;
     
    int main() {
            Product list[3];
             
            list[0].price = 20.00;
            list[0].inventory = 4;
             
            list[1].price = 25.00;
            list[1].inventory = 3;
     
            // will give an error:
            list[2] = {21.00, 9};
    }

#####

---

#####
 
### References:

- https://www.w3schools.com/c/c_structs.php
