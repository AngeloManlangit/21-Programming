# Chapter 17 - Dynamic Memory Allocation

---

## Array List

&nbsp;&nbsp;&nbsp;&nbsp;
Now that we have an idea on how pointers work in relation to items, 
we can make our lists more dynamic, meaning that it could change its 
size whenever we need it to. There are 3 main kinds of lists in C. 
Array Lists, Vector Lists, and Linked Lists.

######

&nbsp;&nbsp;&nbsp;&nbsp;
Array Lists are arrays with an index-based structure. The data of the 
items of the array list are placed beside each other, and they have a 
contiguous location from the start of the first index. It is better 
used when there is a set amount of data you want to store. Since arrays 
are index-based, you can access positions easily just by finding the 
index in the array.

#####

---

#####

## Vector List

&nbsp;&nbsp;&nbsp;&nbsp;
However, what if we want to store more values than the declared size of 
the array? We could just declare an array with an even bigger size but 
we wouldn’t know how much of that size we would truly use. What if there 
are plenty of empty spaces in the array? It would be a waste of space, 
so the best method would be to dynamically resize the capacity of the 
array whenever it goes over its previous capacity. These containers of 
data on the size and capacity are called Vectors.

&nbsp;&nbsp;&nbsp;&nbsp;
Vectors are structs that contain the size of the arr, the capacity of 
the array, and a pointer to the address of the array.

######

    typedef struct Vector{
            int size;
            int capacity;
            int *arr;
    } Vector;
    
######

&nbsp;&nbsp;&nbsp;&nbsp;
This vector struct will keep data on the number of elements within the 
array and change the size of the array whenever it goes over the 
capacity.

######

    // initializing the vector to have a capacity of 10
    Vector list;
    list.size = 0
    list.capacity = 10;
    list.arr = (int *) malloc(capacity * sizeof(int));

######

&nbsp;&nbsp;&nbsp;&nbsp;
If the size is equal to the capacity of the vector, we double the size 
of the capacity and allocate memory on the new capacity.

######

    // once size == capacity
    // doubling the capacity and size of the array
    int newCapacity = 2 * list.size
    int *newArr = (int *) malloc(newCapacity * sizeof(int));
     
    // copying the data of the list in the previous list
    for (int i = 0; i < list.size; i++) {
            newArr[i] = list.arr[i];
    }
    list.capacity = newCapacity;    // giving the new capacity
    free(list.arr);                 // freeing the old array
    list.arr = newArr;              // giving the new array
    
#####

&nbsp;&nbsp;&nbsp;&nbsp;
And if we need to shrink, we can just do the opposite where we allocate 
memory less than the current capacity but still make it so that the 
size is still less than that new capacity. We have a resizable array 
that changes its size based on the number of items and the capacity of 
the array. A suggestion is to code the resizing, initializing, and all 
other processes within functions so that you can just call those 
functions whenever they are needed, and to use a pointer for the 
parameter so that you can access the original values and manipulate them.

#####

---

#####

## Linked List

&nbsp;&nbsp;&nbsp;&nbsp;
In Vector Lists and Array Lists, there is still potential for empty 
space. The third list is called a linked list, which is more 
conservative about memory compared to the others. Instead of giving a 
set amount of memory for the list, we instead allocate memory for each 
individual item in the list and connect them all together using 
pointers. The pointers will point to the address of the next item in 
the list, even if they are not directly beside each other. However, 
this kind of list is more difficult to implement, and understand. Once 
you learn the concepts of Linked Lists, you can make dynamically 
changing lists while being memory efficient and conservative. More on 
Linked Lists will be shown in the next chapter.
