# Chapter 20 - Handling Random-Access Files

---

## Binary Files

&nbsp;&nbsp;&nbsp;&nbsp;
Binary files are files that store their data in binary form (0s and 1s) 
instead of the usual ASCII characters. This means that the data within 
the file is only readable by the computer (unless you can read binary). 
Binary Files have the file type “.bin” and can only be created and read 
by a program. These are more secure than text files because they aren’t 
as easily readable. Knowing that it is stored in binary, that means 
that they are associated with a certain number of bytes for every line. 
That is where Random-Access Files come in.

&nbsp;&nbsp;&nbsp;&nbsp;
**Random-Access Files** have the same uses as Sequential Files except 
that you are able to access any part of the file without having to read 
it from top to bottom until we find the desired text. The easiest way 
to implement these files is to have all the groups of data in a file 
have the same fixed length, to make it easier for us to calculate the 
exact location of any record in a file.

#####

![Figure on bytes in the file accessible using Random Access Files](:/img/images/Ch20_1.png)

#####

&nbsp;&nbsp;&nbsp;&nbsp;
If each block of data is 100 bytes each, we can access the 3rd block 
by going to the 200th byte. This allows us to easily update data without 
destroying previous data since we can just overwrite the specific block 
of text. These kinds of files are useful if updates are frequent.

#####

---

#####

## Writing Random-Access Files

&nbsp;&nbsp;&nbsp;&nbsp;
When we write in a binary file, we open the file using the extension of 
“.bin” and add a “b” character to the end of the mode to signify that 
we want to write, append, or read the file in binary:

    FILE *fp = fopen("file_name.bin", "wb/ab/rb/+");

######

&nbsp;&nbsp;&nbsp;&nbsp;
Writing data into random-access files requires a fixed number of bytes 
per block of data, and we can achieve this by using structs.

######

    typedef struct record {
            int account_number;
            char name[20];
            float price;
    } record;
     
    int main() {
            FILE *fp = fopen("data.bin", "wb");
            if (!fp) {
                    printf("File could not be opened/made\n");
    return -1;
    }
             
            // struct for the inputs
            record inputs;
     
            do {
                    scanf("%d %s %f", &inputs.account_number, inputs.name, &inputs.price;
                     
                    // the account number in this case will act like the index of the record
                    fseek(fp, (inputs.account_number - 1) * sizeof(record), SEEK_SET);
     
                    // instead of using fprintf, we use fwrite to write the data in binary
                    fwrite(&r, sizeof(record), 1, fp);
            }
            while (inputs.account_number > 0 && inputs.account_number <= 100);
            // will loop continuously until an account number not within 1 - 100 is inputted
     
    fclose(fp);
    }

######

&nbsp;&nbsp;&nbsp;&nbsp;
When we input the account number, we are assigning the record struct to 
the ith block in the file. Think of the account number as the index 
relative to the start of the file. The fseek function makes us able to 
access the address of that index and place our inputted values there. 
Instead of using fprintf to write inside the binary file, we use fwrite 
to write the contents of the struct in binary.  
- fwrite(*struct/array to be written, size of each element, number of elements to write, file pointer);

#####

---

#####

## Reading Random-Access Files

&nbsp;&nbsp;&nbsp;&nbsp;
Reading Random-Access Files follow the same idea as writing where we 
use fseek and the fread function to find the position of the block of 
text we want to access and place them in a variable.

######

    typedef struct record {
            int account_number;
            char name[20];
            float price;
    } record;
     
    int main() {
            FILE *fp = fopen("data.bin", "rb");
            if (!fp) {
                    printf("File could not be opened/made\n");
    return -1;
    }
             
            record data;
            // loops over the contents of the file, stops when it reaches the end of the file
            while(fread(&data, sizeof(record), 1, fp) && !feop(fp)) {
                    if (data.account_number != 0) {
                            printf("%d %s %.2f\n", data.account_number, data.name, data.price);
            }
             
            fclose(fp);
    }

######

&nbsp;&nbsp;&nbsp;&nbsp;
This code reads through every block of size record and places that 
data into the record data struct variable and only stops the loop if 
the fread wasn’t successful or it reached the end of the file. If the 
account number is empty or has a value of 0, that means that data at 
that block’s index hasn’t been written, so it gets skipped over when 
printing to the console.

&nbsp;&nbsp;&nbsp;&nbsp;
To take advantage of Random-Access Files’ unique characteristic, we 
use the fseek function if we want to extract a specific index within 
the file:

    typedef struct record {
            int account_number;
            char name[20];
            float price;
    } record;
     
    int main() {
            FILE *fp = fopen("data.bin", "rb");
            if (!fp) {
                    printf("File could not be opened/made\n");
    return -1;
    }
     
            // inputs the account number index
            int acc_num;
            scanf("%d", &acc_num);
             
    record data;
     
    // points towards the inputted index 
    fseek(fp, (acc_num - 1) * sizeof(record), SEEK_SET);
    fread(&data, sizeof(record), 1, fp);
     
    printf("%d %s %.2f\n", data.account_number, data.name, data.price);
                     
            fclose(fp);
    }

#####

---

#####

### References:  
- https://www.geeksforgeeks.org/basics-file-handling-c/
