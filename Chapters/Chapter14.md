# Chapter 14 - Memory

---

## Look into the Memory

&nbsp;&nbsp;&nbsp;&nbsp;
Think of the memory of a computer as a human brain. It stores 
information and instructions, and is where the information is processed. 
C, being a Low Level Language, is tied directly to the memory of a 
computer. From this connection, C delegated different segments in the 
computer’s memory for different kinds of data.

#####

![Memory Sections: Stack, Heap, Data Segments, and Text](:/img/images/Ch14_1.png)

######

- Text - this is where the executable code is stored. It contains the 
compiled machine code of the program’s functions and instructions. 
Usually read-only to avoid accidentally breaking the code while running 
the program and avoid memory leaks or loss.
- Data Segment - stores global and static variables made by the 
programmer
    * Initialized - global or static variables that hold a value
    * Uninitialized - Block Started by Symbol (BSS), global or static variables that aren’t initialized and automatically given a value of 0 when running
- Heap - segment where dynamic memory allocation happens. This is where 
functions and libraries are loaded into and where pointers do their work.
- Stack - region of memory where local variables and function calls 
are stored in.

#####

---
 
#####

## Memory Management and Use

&nbsp;&nbsp;&nbsp;&nbsp;
In C, there are methods of directly manipulating values and variables 
by using their address stored in the memory. The address refers to the 
location of data within the memory. Think of the address being the 
address of a house and that house belongs to a variable. With the 
knowledge of the address, we can be able to make the code more efficient 
and use less resources.

&nbsp;&nbsp;&nbsp;&nbsp;
Every piece of data will contain a certain number of bytes. For example, 
an integer occupies 4 bytes of memory, double occupies 8 bytes of 
memory. The number of bytes determine how large the value inside a 
certain data type can be stored. This is essential to know when we use 
pointers. With the use of **pointers**, we can do processes in Memory 
Management such as memory allocation, reallocation, and 
deallocation/freeing.

#####

---

#####

## Storing Memory

&nbsp;&nbsp;&nbsp;&nbsp;
Memory is stored in the computer using bytes. Providing the number of 
bytes a variable may occupy helps the compiler allocate space within 
the memory for that variable. A value can then be placed inside that 
space, initializing your variable. To visualize this, imagine that the 
memory is a grid where each box is 1 byte each. Once you declare an 
integer variable, the compiler will allocate space somewhere in the 
grid and take up 4 boxes beside each other.

#####

![Empty Memory and Declaring integer x in memory demonstration](:/img/images/Ch14_2.png)

#####

&nbsp;&nbsp;&nbsp;&nbsp;
These bytes can be stored anywhere on the grid, and are not always 
beside each other. Different variables declared at different times 
would have different addresses. The address is the place in the memory 
where that variable takes place.

#####

---

#####

### References:  
- https://www.geeksforgeeks.org/memory-layout-of-c-program/
- https://www.geeksforgeeks.org/computer-memory/
- https://www.w3schools.com/c/c_memory_management.php
