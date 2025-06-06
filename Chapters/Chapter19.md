# Chapter 19 - Handling Sequential Files

---

## Introduction to File Handling 

&nbsp;&nbsp;&nbsp;&nbsp;
**File handling** in C is the process of creating, opening, reading, 
writing, and closing files. C has functions to help with this. Files 
are used as some sort of external storage that can be used in different 
programs and retains the memory so that data can be easily reused and 
accessed. 

&nbsp;&nbsp;&nbsp;&nbsp;
There are different kinds of files. From text based files like .txts to 
image based files like .png and .jpeg. All files have a file type 
associated with them, each having their characteristics and uses. For 
example, text files and binary files are both used to store data from 
a program. However, text files are written in strings of characters 
whereas binary files convert data into binary to be able to be written.

&nbsp;&nbsp;&nbsp;&nbsp;
The key importance of files is the fact that they store previously 
written data into them. This means that if we can access the files, 
we can access the data within it. We now have a history of inputs and 
outputs. This is the core functionality of File Manipulation, to make 
programs have **persistence**. Persistence allows memory to be reused even 
after the program has ended. Notice how once you finish running the 
program, all your inputs are no longer accessible. Files help save that 
data so that you may use it later.

&nbsp;&nbsp;&nbsp;&nbsp;
In C, files are similar to arrays where they have a sequence of bytes 
that they follow. Just like strings, they have a character to indicate 
the end of the file. Where strings have the null terminator ‘\0’, files 
have the end-of-file ‘EOF’ marker. This way, we know where the file 
ends.

#####

---

#####

## Writing Sequential Files

&nbsp;&nbsp;&nbsp;&nbsp;
**Sequential Files** are files whose data are placed in a consecutive order, 
a specific sequence. An example of this type of file is a .txt file. 
Text files are written in a long string. But before we write inside of 
a file, we must first be able to open it. To open a file, we use the 
FILE * data type and the fopen function. Files have their own data types 
that point to the address of the first character within the file.

######

    FILE *fp = fopen("file_name.txt", "w/a/r/+");
    // fp = file pointer
     
    if (!fp) {
            printf("File could not be opened/made\n");
    return -1;
    }

######

&nbsp;&nbsp;&nbsp;&nbsp;
The fopen function has 2 parameters: the name of the file and the mode 
on what you will do with the file. Both are interpreted as strings, 
hence the double quotation marks. The file name also requires the file 
type. If the file does not currently exist in the directory, then the 
compiler will make the file for you with the same name and file type, 
otherwise it will open the existing file.

#####

&nbsp;&nbsp;&nbsp;&nbsp;
The different modes are:
- “w” - write, destroys and overwrites previous contents
- “a” - append, writes at the end of the file
- “w+” - writing but also allows reading, destroys contents
- “a+” - appending but also allows reading
- “r” - reads the contents of the files
- “r+” - reading but also allows writing

######

&nbsp;&nbsp;&nbsp;&nbsp;
In general, we use “w/w+” when we want to overwrite previously existing 
data in the file as they will get truncated once the file is opened 
with the fopen function. If you don’t want to delete the data but still 
write, use “a/a+” instead.

&nbsp;&nbsp;&nbsp;&nbsp;
Additionally, just like with malloc, opening a file means that you have 
to close that file once you’re done using it. To close a file, we use 
the fclose() function:

######

    FILE *fp = fopen("file_name.txt", "w/a/r/+");
     
    // File manipulation code here...
     
    fclose(fp);

######

&nbsp;&nbsp;&nbsp;&nbsp;
Now that we know how to open and close a file, we can start writing in 
a sequential file by using the fprintf() function. fprintf() works the 
same way as a regular printf does except it prints directly to the 
file.

######

    // opening a file called textfile.txt in write mode
    FILE *fp = fopen("textfile.txt", "w");
    if (!fp) {
            printf("File could not be opened/made\n");
    return -1;
    }
     
    fprintf(fp, "Hello World!");
     
    fclose(fp);
     
    Output (in textfile.txt):
    Hello World!

&nbsp;&nbsp;&nbsp;&nbsp;
Once you run the program, it will open textfile.txt and print 
“Hello World” in the file. And just like printf, you can use variables 
while printing.

######

    FILE *fp = fopen("textfile.txt", "w");
    if (!fp) {
            printf("File could not be opened/made\n");
    return -1;
    }
     
    char word[5] = "CMSC";
    int number = 21;
     
    fprintf(fp, "%s\n%d", word, number);
     
    fclose(fp);
     
    Output (in textfile.txt):
    CMSC
    21

#####

---

#####

## Reading Sequential Files

&nbsp;&nbsp;&nbsp;&nbsp;
Reading sequential files makes use of the fscanf() function to read 
the contents of the file and assign it to a variable.

######

    // using the same textfile.txt from previous example
    FILE *fp = fopen("textfile.txt", "r");
    if (!fp) {
    printf("File could not be opened/made\n");
    return -1;
    }
     
    char word[5];
    int number;
     
    // scans the contents of the file and assigns the value to the variable
    fscanf(fp,"%s %d", word, &number);
    printf("%s %d", word, number);
     
    fclose(fp);
     
    Output (in console):
    CMSC 21

######

&nbsp;&nbsp;&nbsp;&nbsp;
If you want to keep scanning the area, then you must use a while loop 
that will scan each line for the data and place it in a variable. 
This is assuming all the data in the file can be stored in a variable.

#####

    members.txt:
    Angelo 19 96
    Vince 20 97
    Dexter 19 98
    
    main.c:
    #include <stdio.h>
     
    int main(){
    FILE *fp = fopen("members.txt", "r");
    if (!fp) {
                    printf("File could not be opened/made\n");
    return -1;
    }
     
    char name[20];
    int age, grade;
            
            printf("Name : Age , Grade\n");
            
            // will loop continuously if fscanf successfully reads 3 items and doesn't reach EOF
    while(fscanf(fp,"%s %d %d", name, &age, &grade) != EOF) {
            // process the data by printing it
    printf(%s : %d , %d\n", name, age, grade);
    }
     
    fclose(fp);
    return 0;
    }
     
    Output (in console):
    Name : Age , Grade
    Angelo : 19 , 96
    Vince : 20 , 97
    Dexter : 19 , 98

#####

&nbsp;&nbsp;&nbsp;&nbsp;
To update data, we just open the file again and either overwrite the 
contents with the “w/w+” mode or add on to it with “a/a+”. 
Additionally, modes with “+” will allow you to use both fprintf and 
fscanf in the same program.

&nbsp;&nbsp;&nbsp;&nbsp;
While files are normally read sequentially, sometimes you might need to 
re-read the file from the beginning or move to a specific location 
without closing and reopening it. For this, we use the fseek() function 
which allows us to set the position the file pointer is pointing at

######

    fseek(fp, offset, origin);

######

&nbsp;&nbsp;&nbsp;&nbsp;
This will readjust the file pointer’s (fp) position to point at the 
offset from the origin. The offset is the number of bytes away from 
the pointer. The number can be either positive to move forward or 
negative to move backward. The origin defines the starting point for 
the offset to take place. It can either be:
- SEEK_SET - beginning of the file
- SEEK_CUR - current position of the pointer
- SEEK_END - end of the file

######

&nbsp;&nbsp;&nbsp;&nbsp;
There for to go back to the beginning of the file, we can use the 
fseek() function with an offset of 0 bytes starting from the beginning 
of the file to point at the start of the file:

######

    fseek(fp, 0, SEEK_SET);	// points to the start of the file

######

&nbsp;&nbsp;&nbsp;&nbsp;
The fseek function is also helpful if you want to change a block of 
text within the file without having to rewrite the rest of the file. 
This is especially evident when you want to write **Random-Access Files** 
in the next chapter.

#####

---

#####

### References:  
- https://www.geeksforgeeks.org/basics-file-handling-c/
