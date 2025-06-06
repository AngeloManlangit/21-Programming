# Chapter 9 - Multidimensional Arrays

---

## 2-Dimensional Arrays & Matrices

&nbsp;&nbsp;&nbsp;&nbsp;
Arrays can also have arrays within them, giving it an extra dimension to 
work with. These are 2-Dimensional Arrays, otherwise known as Matrices. 
These arrays have n x m the amount of space, where n is the number of 
arrays with size m.

#####

    data_type arr[size1][size2];
     
    Example:
    int arr[4][5];

#####

&nbsp;&nbsp;&nbsp;&nbsp;
You can visualize these as rows and columns, where the second size is 
the number of columns and the first as the number of rows. You can 
access the value of a specific row and column by giving the index of 
both the row and column.

#####

![2D Array Memory Representation](:/img/images/Ch9_1.png)

#####

&nbsp;&nbsp;&nbsp;&nbsp;
These are helpful for tables and organizing data. Take advantage of 
using rows and columns to make your data cleaner.

#####

---

#####

## N-Dimensional Arrays

&nbsp;&nbsp;&nbsp;&nbsp;
These are the same as 2D Arrays except they have more dimensions. 
Arrays can have a lot of dimensions, although it is harder to keep 
track of the indexes if there are plenty of dimensions. It is harder 
to visualize an array with more than 3 dimensions, but the concepts 
and the traversal are just the same as a regular array, it just has 
more dimensions.

######

    data_type arr[size1][size2][size3]...[sizeN];
    
#####

---

#####

### References:

- https://beginnersbook.com/2014/01/2d-arrays-in-c-example/

