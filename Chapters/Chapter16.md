# Chapter 16 - Pointers and Functions

---

## Pass by Reference

&nbsp;&nbsp;&nbsp;&nbsp;
Where passing by value creates a copy of the variable to be used 
inside of a function, pass by reference makes us able to directly 
manipulate the variable itself using pointers as we would be passing 
the address of the variable as an argument of the function. To do this, 
we must have a pointer as a parameter of the function. This way, we 
can do what is called **Dereferencing** where we manipulate the variable 
directly from a function outside its local function.

######

    void twice(int *n);
     
    int main(){
            int x = 3;
            twice(&x);
            printf("%d", x);
    }
     
    void twice(int *n) {
            *n *= 2;
    return;
    }
     
    Output:
    6

#####

---

#####

## Dereferencing

&nbsp;&nbsp;&nbsp;&nbsp;
**Dereferencing** is the process of using pointers to store memory 
addresses and manipulate the data stored in said address. Dereferencing 
in relation to functions is the parameters of a function being a pointer.
This dereferences an address of a variable found in a different function 
and be able to use that value or manipulate it like how you would a 
normal variable. This is helpful if you have plenty of functions but 
need to change the value of a variable these functions use. This is also 
memory efficient as you don’t have to keep assigning a new value to a 
variable by returning a value but just directly assign it to the address.

#####

---

#####

## Functions and Strings

&nbsp;&nbsp;&nbsp;&nbsp;
Since functions also have data types associated with them, that means 
that you can also have a function return a pointer, which means it would 
return an address. This is good when dealing with arrays and strings 
as there is no base way to return the entire array in functions. So 
instead of returning a whole array, you return the address of the first 
item of that array since we already know that the rest of the indexes 
are consecutive after that first item.

######

    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
     
    char *giveWord();
     
    int main(){
            char *word = giveWord();
            printf("%s", word);
            
            free(word);
    }
     
    char *giveWord() {
        char *new_word = malloc(8 * sizeof(char));
        strcpy(new_word, "CMSC 21");
        
        return new_word;
    }
     
    Output:
    CMSC 21
    
> Now, we are able to pass and return arrays and strings with functions 
by using pointers and addresses!

#####

---

#####

## Pointers and Structs

&nbsp;&nbsp;&nbsp;&nbsp;
You can have pointers as a member in your struct. This is helpful for 
concepts such as Linked Lists (Chapter 18) where you have a consecutive 
list of structs that are all connected together by pointers.

######

    typedef struct person {
            char *name;
            int age;
    } person;
     
    int main() {
    char name_input[30];
            scanf("%s", name_input);
             
            int age;
            scanf("%d", &age);
     
            person first;
            first.name = name_input;
            first.age = age;
     
            printf("%s is %d", first.name, first.age);
    }
     
    Input:
    Angelo
    19
     
    Output:
    Angelo is 19

#####

&nbsp;&nbsp;&nbsp;&nbsp;
Structs can also be pointers as well. In the syntax of a struct pointer,
we have struct struct_name *variable. To access the members, we do 
*variable.member. But C has an easier way to write these pointers, so 
use the -> instead. That is equivalent to *variable.member like so:

    *variable.member = variable->member
    
#####

---

#####

### References:  
- https://www.geeksforgeeks.org/dereference-pointer-in-c/
