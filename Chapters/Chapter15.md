# Chapter 15 - Pointers

---

## What are Pointers?

&nbsp;&nbsp;&nbsp;&nbsp;
Pointers are a key variable in manipulating memory as these are 
variables that access the address within the memory. Pointers are 
variables that store the address of another non-pointer variable. With 
pointers, we can directly manipulate the value of the variable it is 
pointing to without having to use the variable itself. Pointers are 
hard to master, but once you do, you will unlock so many new ways to 
write code with memory efficiency in mind. 

#####

---

#####

## Memory Addresses

&nbsp;&nbsp;&nbsp;&nbsp;
Every variable has their respective address in the memory. We can 
access this address and give it to the pointer by using the * operator 
for the pointer and the & operator for the address. We assign the 
address to a pointer variable of the same type:

######

    int x = 21;	// initialzing a variable
    int *xptr;		// declaring an integer pointer
    xptr = &x;		// assigning the address of x to the pointer
     
    printf("%d", *xptr);	// printing the value being pointed at
     
    Output:
    21

######

&nbsp;&nbsp;&nbsp;&nbsp;
Now that we have a pointer that is pointing to a variable, we can 
manipulate the pointer to directly affect the value of the variable 
without using the variable itself. Make sure to specify the asterisk * 
as that signifies the pointer.
    
######

    int x = 21;
    int *xptr = &x;
     
    printf("%d\n", x);	// original value
     
    *xptr = x - 10;	// subtracting the value of x by 10 and putting it in the pointer
     
    printf("%d", x);		// modified value
     
    Output:
    21
    11

> This is the reason as to why the scanf function requires you to have the & symbol to place the inputted value into the variable. The function places your inputted value into the address of that variable.

#####

---

#####

## Memory Allocation, Reallocation, and Freeing

&nbsp;&nbsp;&nbsp;&nbsp;
Storing data requires allocation of memory, where it will find space 
to place the value of a variable. Usually, allocation is done 
automatically when you declare a variable. But what if you don’t want to 
use a variable? Allocating space and pointing it directly to the address 
of the newly allocated memory would be helpful in that. You can access 
these allocated bytes anywhere in the program as long as it was properly 
allocated and pointed to. This makes the data more dynamic as the value 
stored in the address can be directly affected by the program.

&nbsp;&nbsp;&nbsp;&nbsp;
To allocate memory, we make use of functions such as malloc, and calloc 
from stdio.h and sizeof from stdlib.h.
- malloc(int size_in_bytes) - allocates memory depending on the number of bytes required, returns the address of the first byte
- calloc(int amount, int size) - allocates memory but you specify the amount of items to allocate and the size of bytes for each item, and it will initialize each item with 0, returns the address of the first item in the list
- sizeof(variable/data_type) - returns the number of bytes a variable or data type contains

#####

    // allocates memory the size of an integer (4 bytes) and gives the address to the pointer
    int *xptr = (int *) malloc(sizeof(int));
     
    // using calloc to initialize 3 float items
    float *yptr = (float *) calloc(3, sizeof(float));

######

&nbsp;&nbsp;&nbsp;&nbsp;
The (int *) and (float *) is called type casting, where we assign a 
new data type to a value and convert it to that data type. Malloc and 
calloc return addresses, which don’t have a data type associated with 
them. It is still fine to run the code without the type casting but 
it’s good practice to do so to avoid any malfunctions and unwarranted 
memory errors that might happen.

&nbsp;&nbsp;&nbsp;&nbsp;
To check whether or not a memory has been successfully allocated, we 
check if the value of the pointer is NULL or not. If it is, then there 
has been an error in the memory allocation, otherwise the pointer is 
usable.

    // integer pointer with 5 items
    int *xptr = (int *) malloc(5 * sizeof(int));
    if (xptr == NULL) {
            printf("Memory Allocation Error\n");
            return -1;
    }
     
    OR IT CAN BE WRITTEN AS
     
    if (!xptr) {
            printf("Memory Allocation Error\n");
            return -1;
    }

#####

&nbsp;&nbsp;&nbsp;&nbsp;
There are also methods of reallocation that readjust the size of the 
allocated memory for dynamic memory purposes. This is helpful for 
lists like arrays where arrays usually have a set size. But if you 
want to have more elements than the given amount of memory from the 
array declaration, you can reallocate memory to give it a new size. 
We use the realloc function to do so.

######

- realloc(*ptr, size_in_bytes) - resizes the memory of *ptr and 
return the same memory address. If you can’t resize the memory with 
the current address, it will deallocate the old memory and allocate 
new memory at a different address.

######

    // allocating memory for 3 integer items
    int *ptr = (int *) malloc(3 * sizeof(int));
    if (!ptr) {
            // checks if malloc fails
            printf("Memory Allocation Error\n");
            return -1;
    }
     
    // to resize it to 5
    int *new_ptr = (int *) realloc(ptr, 5 * sizeof(int));
    if (!new_ptr) {
            // checks if realloc fails
            printf("Memory Reallocation Error\n");
            free(ptr)		
            return -1;
    }

#####

&nbsp;&nbsp;&nbsp;&nbsp;
When dealing with memory, there is a chance of **Memory Leaks** where 
allocated memory from the program remains in your memory, potentially 
reducing the program’s performance. To deal with memory leaks, we need 
to **Free** the allocated memory once we’re done using it. Freeing the 
allocated memory makes it so that there will be available bytes for 
the next block of data.

######

- free(*pointer) - deallocates memory

#####

    int *ptr = (int *) malloc(sizeof(int));
     
    // to free the allocated memory
    free(ptr);
    ptr = NULL;

######

&nbsp;&nbsp;&nbsp;&nbsp;
For every malloc function that you do, you need a free function to 
go with it. Freeing a pointer twice may cause memory leaks so make 
sure that you are aware of where and when you allocate and deallocate 
memory. Additionally, it is good practice to set the pointer 
variable to NULL to prevent it from being used accidentally.

#####
 
---

#####

## Arrays as Pointers

&nbsp;&nbsp;&nbsp;&nbsp;
As we mentioned in the allocation process, we can effectively make a 
list of items by allocating memory. This is similar to how memory is 
allocated where they are allocated beside each other.

#####

image

#####

&nbsp;&nbsp;&nbsp;&nbsp;
Since memory is allocated beside each other, they have similar 
characteristics as arrays. However, they are not the same as there 
re limits to both that make them different but they are similar enough 
to think of them as the same way. An array is technically a pointer 
that points to the address of the first item of the list.

######

    // traversing an array
    int x[2];
    int *y = (int *) malloc(2 * sizeof(int));
     
    // you may treat the pointer y the same as the array x
    x[0] = 9;
    y[0] = 9;
     
    printf("%d %d\n", x[0], y[0]);
    
    // or you can access a pointer's position by using its address
    x[1] = 10;		// the 2nd index
    *(y + 1) = 10;	// the next position after the first address
    printf("%d %d\n", x[1], *(y + 1));
     
    // the value of the pointer y is the address of the first item, so we can access it by using the pointer itself
    *y = 11;
     
    printf("%d\n", y[0]);
     
    free(y);
     
    Output:
    9 9
    10 10
    11

&nbsp;&nbsp;&nbsp;&nbsp;
This is also why strings tend to not require the & symbol in the scanf 
function. That is because it is already a pointer and points to the 
address of the character array, so passing the address is not needed.

#####

---

#####

## Void Pointers

&nbsp;&nbsp;&nbsp;&nbsp;
Void pointers are pointers with the data type void that can take up 
any address as an address in the memory has no single data type 
associated with it. This means that void pointers have a dynamic data 
structure, and can change data types if it gets type casted.

######

    int a = 21;
    void *aptr = &a;
     
    printf("%d\n", *(int *)aptr);
     
    Output:
    21

#####

---

#####

### References:  
- https://www.w3schools.com/c/c_memory_allocate.php
- https://www.w3schools.com/c/c_memory_reallocate.php
- https://www.w3schools.com/c/c_memory_deallocate.php
- https://www.w3schools.com/c/c_pointers_arrays.php
- https://www.geeksforgeeks.org/void-pointer-c-cpp/
