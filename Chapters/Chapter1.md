# Chapter 1 - Welcome to Computer Science

---

## What is Computer Science?

&nbsp;&nbsp;&nbsp;&nbsp;
Computer science is the study of computation, information, and automation. 
The general goal for this course is to think like a computer. 
As Computer Science students, we are given an input and our task is to 
fill in this black box or create a solution that will lead us to our 
desired output.  

![Input/Output(I/O) Representation](:/img/images/Ch1_1.png)

#####

## Data Representation

&nbsp;&nbsp;&nbsp;&nbsp;
Now again the goal for this course is to think like computers and we know 
that computers don’t speak human. They only understand “on” and “off” or 
simply the presence or absence of electricity. Now we need a way to represent 
the human language and concepts with “on” and “off”.

#####

### Binary

&nbsp;&nbsp;&nbsp;&nbsp;
A binary number is a number expressed in the base-2 numeral system or binary 
numeral system, a method for representing numbers that uses only two symbols 
for the natural numbers: typically "0" and "1". Now let’s try to see the 
difference between the Decimal number system and the Binary number system.
  
#####

*Decimal number system:*  
&nbsp;&nbsp;&nbsp;&nbsp;
In the decimal number system, it is in base 10 and each digit place is a 
power of 10. Here is an example:

    177013 = 1x105 + 7x104 + 7x103 + 0x102 + 1x101 + 3x100

#####

*Binary number system:*  
&nbsp;&nbsp;&nbsp;&nbsp;
In the binary number system, it has a similar concept with the decimal number 
system but now it is in base 2. Here is an example:

    101010 = 1x25 + 0x24 + 1x23 + 0x22 + 1x21 + 0x20

#####

&nbsp;&nbsp;&nbsp;&nbsp;
Now that we know the difference between Decimal and Binary, now we need to 
know how to convert decimal numbers to binary and binary to decimal.

#####

### Binary to Decimal

&nbsp;&nbsp;&nbsp;&nbsp;
Converting from Binary to Decimal is simple, we just need to expand the said 
decimal numbers using the decimal number system and do the said operations. 

    101010 = 1x25 + 0x24 + 1x23 + 0x22 + 1x21 + 0x20
    101010 = 32 + 0 + 8 + 0 + 2 + 0
    101010 = 42 //Therefore the Decimal equivalent of 101010 is 42!
     
    // Here is another example
     
    111000 = 1x25 + 1x24 + 1x23 + 0x22 + 0x21 + 0x20
    111000 = 32 + 16 + 8
    111000 = 56 //Therefore the Decimal equivalent of 111000 is 56!

#####

### Decimal to Binary

&nbsp;&nbsp;&nbsp;&nbsp;
Converting from Decimal to Binary is a bit tricky. We have two ways which 
is repeatedly dividing it by 2 or by finding the largest power of 2 that 
fits. 

#####

&nbsp;&nbsp;&nbsp;&nbsp;
For the repeated division, we simply keep dividing the decimal until it 
reaches 0 and keep track of the remainder and then write the remainder 
starting from the bottom up.

    //Repeated Division
    23
    23 / 2 = 11 //Remainder 1 
    11 / 2 = 5  //Remainder 1
     5 / 2 = 2  //Remainder 1
     2 / 2 = 1  //Remainder 0
     1 / 2 = 0  //Remainder 1
    23 = 10111
    //Therefore the Binary equivalent of 23 is 10111
    
    61
    61 / 2 = 30 //Remainder 1 
    30 / 2 = 15 //Remainder 0
    15 / 2 = 7  //Remainder 1
     7 / 2 = 3  //Remainder 1
     3 / 2 = 1  //Remainder 1
     1 / 2 = 0  //Remainder 1
    61 = 111101
    //Therefore the Binary equivalent of 61 is 111101

#####

&nbsp;&nbsp;&nbsp;&nbsp;
For the largest power method, we first find the largest power of 2 that fits. 
We then write 1 and subtract, then check the next lower power. If it fits, 
then write down 1 and subtract. But if it doesn’t, then write 0 and proceed 
to the next lower power. Keep doing this until it reaches 0:

    23 //Largest power of 2 that fits 23 is 16
    23 - 16 = 7  (1) //We write down 1 
     7 - 8  = -1 (10) //It doesn't fit so 0
     7 - 4  = 3  (101) //It fits, so we write 1
     3 - 2  = 1  (1011)
     1 - 1  = 0  (10111) //END
    //Therefore the Binary equivalent of 23 is 10111

#####

### Binary Addition and subtraction

&nbsp;&nbsp;&nbsp;&nbsp;
Same as decimal addition and subtraction, but we only have 1 and 0. We 
basically just add/subtract the same place digits together and perform 
carries/borrows.

![Example of Binary Addition and Subtraction](:/img/images/Ch1_2.png)

#####

### Representing Negative Numbers
&nbsp;&nbsp;&nbsp;&nbsp;
Now we know how to represent positive numbers and learned how to add and 
subtract binary numbers, we now ask ourselves “How do we represent negative 
numbers?” We can represent negative numbers or the negative sign in three 
ways: “Sign Magnitude”, “Ones’ Complement”, and “Two’s Complement”.

- **Sign Magnitude**  

&nbsp;&nbsp;&nbsp;&nbsp;
\- In sign magnitude, we simply reserved the first bit as the negative sign. 
We represent the negative sign as either 0 or 1 which simply means “It isn't 
negative” and “It is negative” respectively. Here are some examples:

![Negative Sign in Binary](:/img/images/Ch1_3.png)

- **Ones’ Complement**  

&nbsp;&nbsp;&nbsp;&nbsp;
\- For ones' complement, we simply just flip the bits to obtain the negative. 
Adding the number and its ones’ complement results in all 1s. 

![Ones' Complement Example](:/img/images/Ch1_4.png)

- **Two’s Complement**

&nbsp;&nbsp;&nbsp;&nbsp;
\- Finally for two’s complement, it is similar to ones’ complement where we 
just flip the bits but this time we flip specific parts. We first must copy 
the bits from right to left (and including) until we reach a 1. Then we simply
flip the remaining bits. Here are some examples:

![Twos' Complement Example](:/img/images/Ch1_5.png)

#####

### ASCII

&nbsp;&nbsp;&nbsp;&nbsp;
For us to represent characters as “on” and “off”, we can make use of numbers. 
We simply assign numbers to each character and we must all agree on this 
labeling. We have ASCII (American Standard Code for Information Interchange).
ASCII uses 7/8-bits to represent characters. With 8 bits (aka 1 byte).

ASCII Table:

![ASCII Table](:/img/images/Ch1_6.png)

&nbsp;&nbsp;&nbsp;&nbsp;
In 1 byte, it can represent 256 possible values. It is more than enough for 
the English alphabet, Uppercase and lowercase. We can still add more such as 
numbers from 0 to 9, punctuation marks, and even symbols. Sadly ASCII isn’t 
enough for non-English characters.

#####

### Unicode

&nbsp;&nbsp;&nbsp;&nbsp;
Borrowed ASCII’s number assignment but this time, instead of 7/8 bits, 
unicode uses 16, 24, and even 32 bits per character. That means there are 
4, 294, 967, 296 possible character assignments.

#####

### Emoji

&nbsp;&nbsp;&nbsp;&nbsp;
Emojis are characters too and that means that they have numbers assigned to 
them. They can look different too in different fonts. Here are some examples:

    🔥 = 128293 //This is based on the unicode list
    128293 = 0001 1111 0101 0010 0101 = U+1F525
    🔥 = U+1F525 or 0001 1111 0101 0010 0101
    
![Emoji Combination](:/img/images/Ch1_7.png)

#####

### Colors, Images, and Videos
&nbsp;&nbsp;&nbsp;&nbsp;
Each pixel on a display is made up of red, green, and blue light. By 
adjusting the intensity of each, different colors are formed—white when all 
are fully on, black when all are off. Colors are usually represented using 
three 1-byte numbers per pixel. Images are made of pixels, and videos are 
collections of images called frames.

#####

---

#####

## Algorithms

&nbsp;&nbsp;&nbsp;&nbsp;
These are step-by-step processes to solve a problem. For computers to solve 
problems, we instruct them through codes. The algorithm of a program is 
basically the instructions given to the computer to do a certain task. 
Algorithms can have different methods when solving the same issue. A clear 
example of this would be searching algorithms:

### Linear Search
&nbsp;&nbsp;&nbsp;&nbsp;
Let's say you are searching for the word “Demure”. You have to get a 
dictionary, scan through one word at a time to find the word. It is 
slow but correct. Here is a more detailed instruction. This is what we 
call a **Pseudocode**, It is just a code using the English Language. In short, 
just a step-by-step instruction.

######

    1 Pick up a dictionary
    2 Open to page 1
    3 Scan page for word
    4 If word found
    5	Read meaning and stop
    6 Else
    7	Turn to next page and go back to line 3
  
#####

&nbsp;&nbsp;&nbsp;&nbsp;
This code is right, but it has a bug. It does what we ask, which is to find 
the word Demure in the dictionary but we didn’t include the possibility if 
the word hasn’t existed or if we reach the last page.

######

    1 Pick up a dictionary
    2 Open to page 1
    3 Scan page for word
    4 If word found
    5	Read meaning and stop
    6 Else if Last page
    7	Stop
    8 Else
    9	Turn to next page and go back to line 3

######

&nbsp;&nbsp;&nbsp;&nbsp;
Now this pseudocode will scan for all pages and stop when it reaches the end. 
But there is a better solution for this searching algorithm. Instead of going 
page-by-page, go 2 pages at a time. If we overshoot a page, we can step back. 
Twice faster and that is the Binary Search.

### Binary Search

&nbsp;&nbsp;&nbsp;&nbsp;
We can divide the dictionary into half each time and each time we have to 
decide which half to keep looking in depending if we overshot or not. Now 
here is the pseudocode.

######

    1 Pick up dictionary
    2 Open to middle
    3 Scan page for word
    4 If word found
    5	Read meaning and stop
    6 Else if one page remaining
    7	Stop
    8 Else if overshot
    9	Discard right half
    10 Else
    11	Discard left half
    12 Go back to line 2
   
#####

---

#####

## Pseudocode & Flowcharts

### Pseudocode
&nbsp;&nbsp;&nbsp;&nbsp;
**Pseudocode** refers to the step-by-step description of an algorithm written 
in human language. Instead of coding it directly, it will show the logic 
behind the algorithm and the processes it does to achieve the solution. 
This is intended for human understanding rather than the machine. It is the 
middleman between machine code and human language.

&nbsp;&nbsp;&nbsp;&nbsp;
To write Pseudocode, you use keywords that indicate a certain action or 
condition. For example, using the word IF to indicate that you are checking 
for a value, and if that value is true, it will do the action below that IF 
statement. Pseudocode is read from top to bottom, following the order of 
written actions.

######

    1 Pick up dictionary
    2 Open to middle
    3 Scan page for word
    4 If word found
    5	Read meaning and stop
    6 Else if one page remaining
    7	Stop
    8 Else if overshot
    9	Discard right half
    10 Else
    11	Discard left half
    12 Go back to line 2

######

&nbsp;&nbsp;&nbsp;&nbsp;
Using the previous example, we can see that keywords such as “OPEN TO MIDDLE” 
is just a simplified version that tells the programmer to make the algorithm 
towards the middle of the dictionary and do the following actions. IF and 
ELSE IF are statements that check if the value given is true or not. If the 
value is true, then do the action below it, else do a different action. In 
line 12, it says to “Go back to line 2”. This indicates a loop where when it
finishes the rest of the algorithm, it will restart the algorithm starting at
line 2 and do it again and again until the program stops (which can be found 
in lines 6-7).

######

### Flowcharts
&nbsp;&nbsp;&nbsp;&nbsp;
**Flowcharts** are another way to represent algorithms, but with less words and 
more visuals. Flowcharts make use of different shapes and lines to show the 
flow of the program and algorithm. It is like a concept map but with 
instructions. Specific shapes represent different functions in flowcharts.

![Flowchart Symbols & Meanings](:/img/images/Ch1_8.png)

&nbsp;&nbsp;&nbsp;&nbsp;
Writing and reading flowcharts are simple, just 
follow the arrows’ sequence!

![Flowchart Example](:/img/images/Ch1_9.png)

&nbsp;&nbsp;&nbsp;&nbsp;
This is an example for a flowchart about Linear Search. Flowcharts always 
begin with a rounded rectangle to indicate the start of the program, 
pointing towards the first function. The rectangle represents the process 
being done. In this case, the first number of the list is being assigned to 
a **variable** called Largest and the second number is being assigned to a 
variable called Current. In the diamond, it checks if the value of Current 
is larger than Largest. If it is, then make Largest equal to the Current 
number, else it checks if there are any remaining numbers in the list. If 
there is, it will assign the next number in the list to Current and repeat 
the cycle until there are no more numbers remaining in the list. Once that 
condition is FALSE, it will output the value of the Largest variable, which 
will be the largest number in the list, and end the program afterwards.

#####

### Pseudocode vs Flowcharts
&nbsp;&nbsp;&nbsp;&nbsp;
There are different uses for Pseudocode and Flowcharts, but both are just as 
helpful when you want a written or visual demonstration of the algorithm you 
are about to program. These will help you not lose focus as you convert it 
to machine code, and make sure that your logic behind the code is correct 
as you make the program. Pseudocodes are better suited for the purpose of 
understanding the code and the algorithm while Flowcharts are better suited 
for representing data and how it will be used in the program. Pseudocode 
just makes use of human language to describe the code while the Flowchart 
requires knowledge in the different shapes. In the end, it is up to you, 
the programmer, on what method you would like to use and is better suited 
for your program and teammates.

#####

---

#####

### References:  

- https://media.geeksforgeeks.org/wp-content/uploads/20240304094301/ASCII-Table.png
- https://www.geeksforgeeks.org/what-is-pseudocode-a-complete-tutorial/
- https://www.smartdraw.com/flowchart/flowchart-symbols.htm
- https://photoadking.com/templates/flowchart-templates/linear-search-flowchart/
