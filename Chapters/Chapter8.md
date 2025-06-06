# Chapter 8 - Arrays

---

## What are arrays?

&nbsp;&nbsp;&nbsp;&nbsp;
Arrays are linear data structures where all elements are arranged 
sequentially. All of the elements would have the same data type as 
the array. Each element has its own indexes in relation to the array. 
These are very powerful when managing data as it makes it easier for 
you to store multiple values under the same list. Instead of having a 
variable for every input, you can store them all inside of an array, 
making it less confusing to the programmer.

#####

&nbsp;&nbsp;&nbsp;&nbsp;
The basic syntax to declare arrays uses square brackets:

    data_type array[integer_array_size];
     
    Example (an array of integers with a size of 10):
    int array[10];

######

&nbsp;&nbsp;&nbsp;&nbsp;
The number within the brackets tells the compiler how much the 
maximum number of values to store within the array. These have to be 
integers only. This is because the compiler needs to make space in the 
memory for these values and make them all stay beside each other.

#####

&nbsp;&nbsp;&nbsp;&nbsp;
You can initialize arrays by equating it with a set of values and 
assigning it to the array:

    int array[5] = {1, 2, 3, 4, 5};
    // assigns an integer in each index of the array

######

&nbsp;&nbsp;&nbsp;&nbsp;
You can leave the size of the array blank if you are unsure on how 
many elements you need as long as it is initialized properly as the 
compiler will automatically provide the needed amount for the array, 
but changing the size will require memory manipulation *(which will be 
learnt in Chapter 17 about Lists)*.

#####

---

#####

## Index

&nbsp;&nbsp;&nbsp;&nbsp;
**Index** is the term referred to as the position in the array. The index of 
an array always starts at 0 and makes its way up to the given size - 1. 
We can use the index to get certain values in the array. We can access 
the position by placing the array name beside the square brackets. 
Within the square brackets will be the position of the element we want 
to access from the array.

######

    int array[5] = {1, 2, 3, 4, 5};
     
    printf("%d\n", array[0];	// prints the 1st index
    printf("%d\n", array[4]);	// prints the 5th index
     
    Output:
    1
    5

######

&nbsp;&nbsp;&nbsp;&nbsp;
We can use indexes alongside loops by using the counters to go through 
the array.

    int size = 10;	// size of the array
    int array[size];	// uninitialized array
     
    for (int i = 0; i < size; i++) {
            array[i] = (i + 1) * 2;	// assigns the value of i + 1 to the ith index
    }
     
    for (int i = 0; i < size; i++) {
            printf("%d ", array[i]);	// prints the value in the ith index
    }
     
    Output:
    2 4 6 8 10 12 14 16 18 20
    
######

&nbsp;&nbsp;&nbsp;&nbsp;
However, inputting arrays require you to go through the indexes to 
assign a value in that position of the array. We can use **Array 
Traversal** techniques such as looping through the array to assign 
every position in the array.

######

    int size = 5;
    int array[size];
     
    for (int i = 0; i < size; i++) {
            scanf("%d", &array[i]); // inputting a value into the ith index
    }
     
    for (int i = 0; i < size; i++) {
            printf("%d ", array[i] * 2);
    }
     
    Input:
    1 2 3 4 5
     
    Output:
    2 4 6 8 10

#####

---

#####

## Strings

&nbsp;&nbsp;&nbsp;&nbsp;
Since the elements of arrays are grouped sequentially, that means that 
a string of characters is just an array of characters. Strings are used 
for strong texts or a list of characters.

######

    char hello[] = "Hello World";
    printf("%s", hello);	// format specifier for strings
     
    Output:
    Hello World

#####

&nbsp;&nbsp;&nbsp;&nbsp;
Unlike other arrays, strings don’t need to go through each index to 
input a character as you can use the %s format specifier when scanning:

    char str[10];
    scanf("%s", str); // does not need the & because of memory reasons
    printf("%s", str);
     
    Input:
    CMSC
     
    Output:
    CMSC

######

&nbsp;&nbsp;&nbsp;&nbsp;
The scanf function counts a space as the end of the string instead of a 
space character. In the end of each string is a ‘\0’ character, the 
null terminating character. As the compiler goes through the characters 
of the array, once it reaches that character, it will know that the 
string no longer has any characters after. Additionally, to access 
certain characters, you place the index of the array.

> Tip: If you want to input a string that includes spaces, use the 
format specifier *%[^\n]* when scanning as it ignores the spaces as a 
newline and treats it as a space character.

#####

---

#####

### References:

- https://www.geeksforgeeks.org/what-is-array/
- https://www.w3schools.com/c/c_strings.php
- https://www.simplilearn.com/tutorials/c-tutorial/array-in-c

