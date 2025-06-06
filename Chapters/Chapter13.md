# Chapter 13 - Unions and Enumerations

---

## Unions

&nbsp;&nbsp;&nbsp;&nbsp;
Unions are similar to structs where they can store data on different 
data types except that all members share the same memory. You can only 
use one of the values at a time and assigning a new value to the union 
will overwrite the previous value. It is similar to how you overwrite 
a variable’s existing data but you can do it with different data types.

######

    union myUnion {			// union declaration
    int Num;			
    char Letter;		
    char String[30];	
    }; 
     
    int main() {
            // creates a union variable with the name "u1"
    union myUnion onion;
     
    onion.Num = 11;
     
      // since this is the last value written to the union, Num no longer holds 11 - its value is now invalid
      onion.Letter = 'C';
     
      printf("myNum: %d\n", u1.myNum); // this value is no longer reliable
      printf("myLetter: %c\n", u1.myLetter); // prints 'A'
     
    return 0;
    }

#####

---

#####

## Enums

&nbsp;&nbsp;&nbsp;&nbsp;
Enumerations or enums represent a group of constants, which means they 
are not changeable. It is like a list of values that can be assigned 
to a variable but only those values that are available. These are named 
integer constants, so there are still indexes to these values and they 
start at 0 from left to right and incremented by 1.

######

    // Defining enum
    enum direction {
        EAST, NORTH, WEST, SOUTH
    };
     
    int main() {
     
        // creating enum variable
        enum direction dir = NORTH;
        printf("%d\n", dir);
        
        // this is valid too
        dir = 3;
        printf("%d", dir);
        return 0;
    }
     
    Output:
    1
    3

######

&nbsp;&nbsp;&nbsp;&nbsp;
By default, the number value given to the variable is the index of the 
element. But if you want them to have a certain value, you can assign 
values to each element of the variable:

    enum direction {
    EAST = 9, NORTH = 21, WEST = 10, SOUTH
    // blank elements will automatically be assigned the integer + 1 to the value of the previous element
    // SOUTH = 11 since WEST = 10
    };
     
    int main() {
    enum direction dir = NORTH;
    printf("%d\n", dir);
            
            dir = SOUTH
            printf("%d", dir);
     
    return 0;
    }
     
    Output:
    21
    11

#####

---

#####

### References:

- https://www.w3schools.com/c/c_unions.php
- https://www.geeksforgeeks.org/enumeration-enum-c/
