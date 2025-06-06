#include "quizdata.h"

QuizData& QuizData::getInstance() {
    static QuizData instance;
    return instance;
}

QuizData::QuizData() {
    initializeQuestions();
}

QVector<Question> QuizData::getQuestionsForChapter(int chapter) const {
    return chapterQuestions.value(chapter);
}

int QuizData::getTotalQuestionsForChapter(int chapter) const {
    return chapterQuestions.value(chapter).size();
}

void QuizData::initializeQuestions() {
    // Chapter 1: Welcome to Computer Science!
    QVector<Question> chapter1;
    Question q1_1 = {
        "What is the primary focus of Computer Science?",
        {"The study of human languages and communication.",
         "The study of how to create visual art using computers.",
         "The study of electrical circuits and hardware components.",
         "The study of computation, information, and automation."},
        3
    };
    Question q1_2 = {
        "What is the fundamental way computers understand information, as described in the 'Data Representation' section?",
        {"By interpreting visual signals and images.",
         "By speaking human languages.",
         "Through complex mathematical equations.",
         "As 'on' and 'off' states, or the presence or absence of electricity."},
        3
    };
    Question q1_3 = {
        "In the binary numeral system, which two symbols are typically used to represent numbers?",
        {"'A' and 'B'",
         "'+' and '-'",
         "'True' and 'False'",
         "'0' and '1'"},
        3
    };
    Question q1_4 = {
        "What is the base of the Decimal number system?",
        {"Base 16",
         "Base 2",
         "Base 10",
         "Base 8"},
        2
    };
    Question q1_5 = {
        "Convert the binary number 111000 to its decimal equivalent. (NOTE: This is an unsigned integer)",
        {"56",
         "42",
         "32",
         "64"},
        0
    };
    Question q1_6 = {
        "Using the repeated division method, what is the binary equivalent of the decimal number 23?",
        {"111101",
         "1011",
         "10011",
         "11101"},
        1
    };
    Question q1_7 = {
        "When converting a decimal number to binary using the 'largest power method', what is the first step?",
        {"Flip all the bits of the decimal number.",
         "Subtract 1 from the decimal number.",
         "Find the largest power of 2 that fits into the decimal number.",
         "Repeatedly divide the decimal number by 2."},
        2
    };
    Question q1_8 = {
        "How does binary addition and subtraction compare to decimal addition and subtraction, according to the text?",
        {"They use different symbols, but the concept of carrying/borrowing is similar.",
         "Binary operations don't involve carries or borrows.",
         "They are entirely different with no similarities.",
         "Binary operations always result in smaller numbers."},
        0
    };
    Question q1_9 = {
        "Which of the following is NOT mentioned as a way to represent negative numbers in binary?",
        {"Floating Point",
         "Sign Magnitude",
         "Ones' Complement",
         "Two's Complement"},
        0
    };
    Question q1_10 = {
        "In Sign Magnitude representation, what does the first bit typically represent?",
        {"The sign of the number (0 for non-negative, 1 for negative).",
         "The least significant digit of the number.",
         "The most significant digit of the number.",
         "A carry-over from a previous operation."},
        0
    };
    Question q1_11 = {
        "What is the main purpose of ASCII?",
        {"To perform complex calculations.",
         "To represent mathematical equations.",
         "To represent characters as numbers for computer understanding.",
         "To compress image files."},
        2
    };
    Question q1_12 = {
        "How many bits does 1 byte typically consist of, as mentioned in the context of ASCII?",
        {"7 bits",
         "16 bits",
         "8 bits",
         "4 bits"},
        2
    };
    Question q1_13 = {
        "What is the definition of an algorithm, according to the text?",
        {"A programming language.",
         "A piece of hardware used to store data.",
         "A type of computer virus.",
         "A step-by-step process to solve a problem."},
        3
    };
    Question q1_14 = {
        "In the Pseudocode presented below, what was the identified bug?\n1 Pick up a dictionary\n2 Open to page 1\n3 Scan page for word\n4 If word found\n5 Read meaning and stop\n6 Else\n7 Turn to next page and go back to line 3",
        {"It didn't account for finding the word on the first page.",
         "It used binary numbers instead of decimals.",
         "It didn't include the possibility if the word didn't exist or if the last page was reached.",
         "It was too fast and skipped pages."},
        2
    };
    Question q1_15 = {
        "What type of searching algorithm is presented below?\n1 Pick up dictionary\n2 Open to middle\n3 Scan page for word\n4 If word found\n5 Read meaning and stop\n6 Else if one page remaining\n7 Stop\n8 Else if overshot\n9 Discard right half\n10 Else\n11 Discard left half\n12 Go back to line 2",
        {"Linear Search",
         "Binary Search",
         "Jump Search",
         "Exponential Search"},
        1
    };
    Question q1_16 = {
        "This makes use of different shapes and lines to show the flow of the program and algorithm. It is like a concept map but with instructions.",
        {"Flowcharts",
         "Logic Gates",
         "Visual Code",
         "Scratch"},
        0
    };
    Question q1_17 = {
        "What is the primary purpose of Pseudocode?",
        {"To directly execute code on a machine.",
         "To show the logic behind an algorithm in human language for understanding.",
         "To create visual diagrams of program flow.",
         "To compile a program before execution."},
        1
    };
    Question q1_18 = {
        "What does a diamond shape typically represent in a flowchart?",
        {"A process being done.",
         "An input or output operation.",
         "A decision point.",
         "The start or end of the program."},
        2
    };
    Question q1_19 = {
        "How does Binary Search improve upon Linear Search, according to the text?",
        {"It scans one item at a time, making it simpler.",
         "It divides the data into halves, making it much faster.",
         "It uses pseudocode instead of direct instructions.",
         "It only works for unsorted data."},
        1
    };
    Question q1_20 = {
        "In pseudocode, what do keywords like 'IF' and 'ELSE IF' indicate?",
        {"Functions",
         "Boolean Expressions",
         "Conditionals",
         "Loops"},
        2
    };
    Question q1_21 = {
        "Which is generally better suited for representing data and how it will be used in a program?",
        {"Pseudocode",
         "Flowcharts",
         "Algorithms",
         "None of the above"},
        1
    };
    chapter1.append({q1_1, q1_2, q1_3, q1_4, q1_5, q1_6, q1_7, q1_8, q1_9, q1_10,
                     q1_11, q1_12, q1_13, q1_14, q1_15, q1_16, q1_17, q1_18, q1_19, q1_20, q1_21});
    chapterQuestions[1] = chapter1;

    // Chapter 2: Introduction to C!
    QVector<Question> chapter2;
    Question q2_1 = {
        "Who created the C programming language?",
        {"Bill Gates",
         "Steve Jobs",
         "Dennis Ritchie",
         "Linus Torvalds"},
        2
    };
    Question q2_2 = {
        "According to the text, why is C considered a foundational language in the field of Computer Science?",
        {"It is the newest programming language available.",
         "It is exclusively used for web development.",
         "It has high-level constructs, can handle low-level activities, produces efficient programs, and influences many other languages.",
         "It is the only language that can be compiled on a variety of computers."},
        2
    };
    Question q2_3 = {
        "What nickname is given to C, highlighting its significant influence on other programming languages?",
        {"The Grandfather of Code",
         "The Mother of All Programming Languages",
         "The Universal Language",
         "The First Language"},
        1
    };
    Question q2_4 = {
        "How does understanding the fundamentals of C benefit a new programmer, according to the text?",
        {"It guarantees immediate high-paying job opportunities.",
         "It makes the learning process for other programming languages easier by providing a base understanding.",
         "It removes the need to learn any other programming languages.",
         "It allows them to avoid using existing libraries."},
        1
    };
    Question q2_5 = {
        "What is the defining characteristic that makes C a \"Low Level Language\"?",
        {"It uses simple, easy-to-read syntax.",
         "It has complex data structures that are difficult to understand.",
         "It allows direct manipulation of the registers and memory of the computer.",
         "It requires a large amount of code to perform simple tasks."},
        2
    };
    Question q2_6 = {
        "As a low-level language, what kind of control does C provide to programmers?",
        {"Direct control over web page design.",
         "Direct control over the computer's hardware resources like RAM.",
         "Direct control over cloud computing services.",
         "Direct control over graphical user interface aesthetics only."},
        1
    };
    Question q2_7 = {
        "How does C relate to machine code and hardware compared to High-Level Languages like C++ and Python?",
        {"C is further away from machine code and hardware.",
         "C is at the same level as High-Level Languages.",
         "C is closer to machine code and hardware.",
         "C has no connection to machine code or hardware."},
        2
    };
    Question q2_8 = {
        "C is a fundamental language in the field of Computer Science, and learning C can make it easier for you to learn other popular programming languages such as Python, C++, Java and more.",
        {"True",
         "False"},
        0
    };
    Question q2_9 = {
        "Plenty of languages have influences by C++, borrowing syntax/features directly or indirectly from C++.",
        {"True",
         "False"},
        1
    };
    chapter2.append({q2_1, q2_2, q2_3, q2_4, q2_5, q2_6, q2_7, q2_8, q2_9});
    chapterQuestions[2] = chapter2;

    // Chapter 3: C!
    QVector<Question> chapter3;
    Question q3_1 = {
        "This is human readable code.",
        {"Morse Code",
         "Source Code",
         "Translated Code",
         "Bar Code"},
        1
    };
    Question q3_2 = {
        "What is the essential function that every C program needs as its base, where the compiler always starts execution?",
        {"start()",
         "begin()",
         "main()",
         "execute()"},
        2
    };
    Question q3_3 = {
        "What is the primary function of braces ({}) in a C program?",
        {"To terminate each statement.",
         "To indicate the beginning and end of a block of code or function.",
         "To declare variables.",
         "To add comments to the code."},
        1
    };
    Question q3_4 = {
        "In general, how is C code read and processed by the compiler?",
        {"From bottom to top, and right to left.",
         "Randomly, depending on the compiler's optimization.",
         "From top to bottom, and each line from left to right.",
         "Only specific blocks of code are read, based on user input."},
        2
    };
    Question q3_5 = {
        "What is a compiler?",
        {"A tool for building graphical user interfaces.",
         "An operating system program that converts C language statements into machine language equivalents.",
         "A type of hardware component for storing data.",
         "A program used exclusively for game development."},
        1
    };
    Question q3_6 = {
        "What is an Integrated Development Environment (IDE)?",
        {"A piece of hardware that stores program data.",
         "A software where you can write code.",
         "A tool that converts code into machine language.",
         "A type of operating system."},
        1
    };
    Question q3_7 = {
        "Which keyboard command is used to stop a program while it is running?",
        {"Ctrl + L",
         "Ctrl + C",
         "Shift + Ins",
         "Up Arrow"},
        1
    };
    Question q3_8 = {
        "What is the primary purpose of variables in C programming?",
        {"To execute commands directly.",
         "To store data values like numbers and characters.",
         "To define program functions.",
         "To mark comments in the code."},
        1
    };
    Question q3_9 = {
        "In C, what does a 'data type' for a variable represent?",
        {"The memory address where the variable is stored.",
         "The specific operation to be performed on the variable.",
         "The kind of value that will be contained in the variable.",
         "Whether the variable is global or local."},
        2
    };
    Question q3_10 = {
        "A Global Variable in C is defined as a variable that:",
        {"Can only be accessed within the function it is declared in.",
         "Can be accessed anywhere in the program.",
         "Stores only character values.",
         "Is always assigned an empty value initially."},
        1
    };
    Question q3_11 = {
        "Which of the following variable assignments is considered VALID according to C naming rules?",
        {"10 = myVariable;",
         "myVariable = 10;",
         "10 = 10;",
         "for = 10;"},
        1
    };
    Question q3_12 = {
        "Which data type is used to store whole numbers without decimals, such as 123 or -123?",
        {"float",
         "char",
         "int",
         "double"},
        2
    };
    Question q3_13 = {
        "When storing a single character like 'a' or 'B', what data type should be used, and how is the character typically surrounded?",
        {"string, surrounded by double quotes.",
         "char, surrounded by single quotes.",
         "int, with no surrounding quotes.",
         "float, surrounded by single quotes."},
        1
    };
    Question q3_14 = {
        "What is the key difference in precision between float and double data types?",
        {"float stores integers, while double stores decimals.",
         "double is sufficient for storing up to 15 decimal digits, while float has less precision.",
         "float can store more decimals than double.",
         "double has no value or operation, unlike float."},
        1
    };
    Question q3_15 = {
        "The bool data type in C has only two possible values. What are they?",
        {"true and false (as words).",
         "on and off.",
         "1 for TRUE and 0 for FALSE.",
         "Any positive or negative integer."},
        2
    };
    Question q3_16 = {
        "Which data type is described as having \"no value or operation\"?",
        {"int",
         "char",
         "void",
         "string"},
        2
    };
    Question q3_17 = {
        "What is the purpose of Format Specifiers in C?",
        {"To declare a variable's data type.",
         "To tell the compiler what kind of data to expect when receiving a variable or input.",
         "To define a new function.",
         "To terminate a statement."},
        1
    };
    Question q3_18 = {
        "All Format Specifiers always start with which symbol?",
        {"#",
         ";",
         "%",
         "&"},
        2
    };
    Question q3_19 = {
        "Which format specifier is specifically used for the string data type?",
        {"%c",
         "%d",
         "%f",
         "%s"},
        3
    };
    Question q3_20 = {
        "Which format specifier is used for both float and double data types?",
        {"%d",
         "%c",
         "%f",
         "%s"},
        2
    };
    Question q3_21 = {
        "Which format specifier is used to represent a hexadecimal value?",
        {"%d",
         "%o",
         "%x",
         "%s"},
        2
    };
    chapter3.append({q3_1, q3_2, q3_3, q3_4, q3_5, q3_6, q3_7, q3_8, q3_9, q3_10,
                     q3_11, q3_12, q3_13, q3_14, q3_15, q3_16, q3_17, q3_18, q3_19, q3_20, q3_21});
    chapterQuestions[3] = chapter3;

    // Chapter 4: Inputs and Outputs
    QVector<Question> chapter4;
    Question q4_1 = {
        "What is the primary function of Headers in C programming?",
        {"To store comments in the code.",
         "To access libraries containing useful functions.",
         "To define variable data types.",
         "To mark the end of a program."},
        1
    };
    Question q4_2 = {
        "When including a built-in header file, which syntax is used?",
        {"#include \"header_name.h\"",
         "//include header_name.h",
         "#include <header_name.h>",
         "include header_name.h;"},
        2
    };
    Question q4_3 = {
        "To access an externally downloaded header file that is not readily available in the IDE or Compiler, which syntax should be used?",
        {"#include <external_header_name.h>",
         "#import \"external_header_name.h\"",
         "#include \"external_header_name.h\"",
         "link external_header_name.h;"},
        2
    };
    Question q4_4 = {
        "If you need to perform mathematical operations in your C program, which common header file would you typically include?",
        {"string.h",
         "ctype.h",
         "stdbool.h",
         "math.h"},
        3
    };
    Question q4_5 = {
        "What is the primary function used in C for displaying output to the console?",
        {"scanf()",
         "main()",
         "display()",
         "printf()"},
        3
    };
    Question q4_6 = {
        "By default, how many decimal places will printf() display for a float number if no specific precision is set?",
        {"2",
         "4",
         "6",
         "0"},
        2
    };
    Question q4_7 = {
        "In the format specifier syntax % <flag> <width> <precision> <size> conversion-code, what does precision control?",
        {"The minimum number of character positions in the output.",
         "The number of decimal places in floating-point numbers.",
         "Whether to print leading zeroes.",
         "The type of data conversion."},
        1
    };
    Question q4_8 = {
        "Considering the printf example printf(\"%05.2f\", number); where number is 21.11, what does the 0 in %05.2f signify?",
        {"It indicates the start of the integer part of the number.",
         "It specifies that no flag should be used.",
         "It will print leading zeroes if the width is not met.",
         "It means the output will be suppressed if the number is zero."},
        2
    };
    Question q4_9 = {
        "If you have multiple variables (x, y, z) to print using a single printf() statement, how should their format specifiers and variable names be ordered?",
        {"Format specifiers outside quotation marks, variable names inside.",
         "Format specifiers and variable names can be in any order.",
         "Format specifiers within quotation marks and variable names outside, in the same order of appearance.",
         "Only one variable can be printed per printf() call."},
        2
    };
    Question q4_10 = {
        "By default, if you use two separate printf() statements (e.g., printf(\"Hello\"); printf(\"World\");), where will the output appear?",
        {"Each word on a new line.",
         "Both words on the same line.",
         "Only \"Hello\" will be printed.",
         "The program will result in an error."},
        1
    };
    Question q4_11 = {
        "Which symbol always denotes an Escape Sequence?",
        {"/ (forward slash)",
         "\\ (backslash)",
         "& (ampersand)",
         "% (percent)"},
        1
    };
    Question q4_12 = {
        "Which Escape Sequence is used to move the cursor to the next line of output?",
        {"\\t",
         "\\b",
         "\\r",
         "\\n"},
        3
    };
    Question q4_13 = {
        "If you want to print a double quote (\") character within a printf() string literal, which escape sequence should you use?",
        {"\\'",
         "\\\\",
         "\\\"",
         "\\xdd"},
        2
    };
    Question q4_14 = {
        "What is the primary function used to input data into a C program from the terminal?",
        {"printf()",
         "main()",
         "scanf()",
         "input()"},
        2
    };
    Question q4_15 = {
        "In the scanf() syntax scanf(\"format_specifier\", &variable_name);, what is the importance of the & symbol before the variable name for beginners?",
        {"It indicates the end of the input.",
         "It tells the compiler to place the input value inside that specific variable's memory address to avoid Segmentation Errors.",
         "It signals that the variable is a global variable.",
         "It converts the input to a different data type."},
        1
    };
    Question q4_16 = {
        "What happens if you use scanf() to input a value into a variable that already has an existing value?",
        {"scanf() will create a new variable.",
         "scanf() will add the new value to the existing value.",
         "scanf() will write over the existing value of the variable.",
         "scanf() will cause a compilation error."},
        2
    };
    Question q4_17 = {
        "Which header file is specifically for character handling functions?",
        {"stdlib.h",
         "ctype.h",
         "time.h",
         "math.h"},
        1
    };
    Question q4_18 = {
        "The stdbool.h header is used for what purpose?",
        {"String functions.",
         "Time and date functions.",
         "Boolean operations.",
         "General utility functions."},
        2
    };
    Question q4_19 = {
        "What does the \\t escape sequence represent?",
        {"A new line.",
         "A backspace.",
         "A tab space.",
         "A carriage return."},
        2
    };
    Question q4_20 = {
        "Which Size flag is used for a long int when using format specifiers like Ld?",
        {"h",
         "s",
         "L",
         "w"},
        2
    };
    Question q4_21 = {
        "What does the Width specifier in printf()'s format string syntax (% <flag> <width> ...) control?",
        {"The number of decimal places.",
         "The maximum number of characters allowed in the input.",
         "The minimum number of character positions in the output.",
         "The size of the data type."},
        2
    };
    chapter4.append({q4_1, q4_2, q4_3, q4_4, q4_5, q4_6, q4_7, q4_8, q4_9, q4_10,
                     q4_11, q4_12, q4_13, q4_14, q4_15, q4_16, q4_17, q4_18, q4_19, q4_20, q4_21});
    chapterQuestions[4] = chapter4;

    // Chapter 5: Mathematical Operations in C
    QVector<Question> chapter5;
    Question q5_1 = {
        "Is it possible to perform arithmetic operations directly inside a printf() function in C?",
        {"No, math must always be done before the printf() call.",
         "Yes, but only for addition and subtraction.",
         "Yes, as shown in the example printf(\"What's 9 + 10?\\n%d\", x + y);.",
         "Only if the variables are explicitly declared within printf()."},
        2
    };
    Question q5_2 = {
        "What does the *= assignment operator do?",
        {"It subtracts the value on the right from the variable.",
         "It multiplies the value of the variable by the value on the right side.",
         "It finds the modulo of the variable by the value on the right side.",
         "It divides the value of the variable with the value on the right side."},
        1
    };
    Question q5_3 = {
        "Which assignment operator is used to find the remainder and assign it back to the variable?",
        {"+=",
         "-=",
         "*=",
         "%="},
        3
    };
    Question q5_4 = {
        "The simplified version of x = x + 1 in C is:",
        {"x == 1",
         "x++",
         "x + 1",
         "x += x"},
        1
    };
    Question q5_5 = {
        "In C, is there a direct symbol to indicate exponents?",
        {"Yes, ^.",
         "Yes, **.",
         "No, you need to use power functions from the math.h library.",
         "No, exponents are not supported in C."},
        2
    };
    Question q5_6 = {
        "What is the rule for multiplication and division precedence when they appear together in an expression without parentheses in C?",
        {"Multiplication always happens first.",
         "Division always happens first.",
         "They happen from whatever is seen first from left to right.",
         "The compiler randomly chooses which one happens first."},
        2
    };
    Question q5_7 = {
        "What is the expected output of this code?\n#include <stdio.h>\nint main() {\nint x = 5;\nprintf(\"%d\", x + 3);\nreturn 0;\n}",
        {"5",
         "3",
         "8",
         "x+3"},
        2
    };
    Question q5_8 = {
        "What is the expected output of this code?\n#include <stdio.h>\nint main() {\nfloat num = 12.345;\nprintf(\"%.1f\", num);\nreturn 0;\n}",
        {"12.345000",
         "12.3",
         "12.34",
         "12"},
        1
    };
    Question q5_9 = {
        "What is the expected output of this code?\n#include <stdio.h>\nint main() {\nint x = 7;\nint y = x++;\nprintf(\"x: %d, y: %d\", x, y);\nreturn 0;\n}",
        {"x: 7, y: 7",
         "x: 8, y: 7",
         "x: 7, y: 8",
         "x: 8, y: 8"},
        1
    };
    Question q5_10 = {
        "What is the expected output of this code?\n#include <stdio.h>\nint main() {\nint val = 25 % 4;\nprintf(\"%d\", val);\nreturn 0;\n}",
        {"6",
         "1",
         "0",
         "25"},
        1
    };
    Question q5_11 = {
        "What is the expected output of this code?\n#include <stdio.h>\nint main() {\nint num1 = 15, num2 = 4;\nprintf(\"Numbers: %d\\\\%d\", num1, num2);\nreturn 0;\n}",
        {"Numbers: 15/4",
         "Numbers: 15\\4",
         "Numbers: 15\\\\4",
         "Numbers: 15 4"},
        1
    };
    chapter5.append({q5_1, q5_2, q5_3, q5_4, q5_5, q5_6, q5_7, q5_8, q5_9, q5_10, q5_11});
    chapterQuestions[5] = chapter5;

    // Chapter 6: Conditions
    QVector<Question> chapter6;
    Question q6_1 = {
        "Which statement is used to execute a block of code if a condition is true?",
        {"switch",
         "while",
         "if-else",
         "for"},
        2
    };
    Question q6_2 = {
        "What happens if the condition in an if statement is true?",
        {"The code in the else block is executed.",
         "The program terminates.",
         "The code in the if block is executed, and the else block is skipped.",
         "An error occurs."},
        2
    };
    Question q6_3 = {
        "Which type of if statement allows for checking multiple conditions sequentially?",
        {"Nested if",
         "Simple if",
         "if-else if-else",
         "switch"},
        2
    };
    Question q6_4 = {
        "What is a \"Nested If Statement\"?",
        {"An if statement that is part of a switch statement.",
         "An if statement inside another if statement.",
         "An if statement that always returns true.",
         "An if statement with no else block."},
        1
    };
    Question q6_5 = {
        "Which statement is an alternative to a long series of if-else if statements when checking a single variable against multiple possible values?",
        {"while loop",
         "for loop",
         "switch statement",
         "do-while loop"},
        2
    };
    Question q6_6 = {
        "What is the purpose of the default case in a switch statement?",
        {"It must always be present.",
         "It executes if none of the case values match the expression.",
         "It executes before any other case.",
         "It is used for error handling only."},
        1
    };
    Question q6_7 = {
        "What are Booleans used for in programming?",
        {"Storing large numbers.",
         "Indicating true or false conditions.",
         "Defining text strings.",
         "Performing mathematical calculations."},
        1
    };
    Question q6_8 = {
        "Which comparison operator means \"equal to\"?",
        {"=",
         "!=",
         "==",
         "<="},
        2
    };
    Question q6_9 = {
        "What is the purpose of logical operators?",
        {"To perform mathematical operations.",
         "To combine multiple conditions.",
         "To assign values to variables.",
         "To define new data types."},
        1
    };
    Question q6_10 = {
        "Which logical operator returns true if at least one of its conditions is true?",
        {"&& (AND)",
         "|| (OR)",
         "! (NOT)",
         "== (EQUAL TO)"},
        1
    };
    Question q6_11 = {
        "Which logical operator returns true only if all of its conditions are true?",
        {"&& (AND)",
         "|| (OR)",
         "! (NOT)",
         "== (EQUAL TO)"},
        0
    };
    Question q6_12 = {
        "If condition1 is true and condition2 is false, what is the result of condition1 && condition2?",
        {"True",
         "False",
         "Syntax Error",
         "Depends on the compiler"},
        1
    };
    Question q6_13 = {
        "If myBoolean is false, what is the result of !myBoolean?",
        {"True",
         "False",
         "Syntax Error",
         "Depends on the compiler"},
        0
    };
    Question q6_14 = {
        "What happens if you forget to use break; in a case block within a switch statement?",
        {"An error occurs.",
         "The program skips the default case.",
         "Execution \"falls through\" to the next case block.",
         "The switch statement terminates immediately."},
        2
    };
    Question q6_15 = {
        "Is the else statement in an if-else construct optional?",
        {"No, it is always required.",
         "Yes, the program will still run without it.",
         "Only if there is no if statement.",
         "Only if there is a switch statement."},
        1
    };
    Question q6_16 = {
        "In an if-else if-else chain, when does the else block get executed?",
        {"Only if the first if condition is true.",
         "Only if all else if conditions are true.",
         "If none of the preceding if or else if conditions are true.",
         "It always executes."},
        2
    };
    Question q6_17 = {
        "Which of the following is equivalent to !(A && B) using De Morgan's laws?",
        {"(!A || !B)",
         "(!A && !B)",
         "(A || B)",
         "(!A && B)"},
        0
    };
    Question q6_18 = {
        "What is the expected output of the code?\n#include <stdio.h>\nint main() {\nint a = 10;\nint b = 5;\nif (a > b) {\nprintf(\"%d\\n\",a+b);\n} else {\nprintf(\"%d\\n\",a-b);\n}\nreturn 0;\n}",
        {"15",
         "5",
         "a+b",
         "a-b"},
        0
    };
    Question q6_19 = {
        "What is the expected output of the code?\n#include <stdio.h>\nint main() {\nint score = 85;\nchar grade;\nif (score >= 90) {\ngrade = 'A';\n} else if (score >= 80) {\ngrade = 'B';\n} else if (score >= 70) {\ngrade = 'C';\n} else {\ngrade = 'F';\n}\nprintf(\"Grade: %c\\n\", grade);\nreturn 0;\n}",
        {"Grade A",
         "Grade B",
         "Grade C",
         "Grade F"},
        1
    };
    Question q6_20 = {
        "What is the expected output of the code?\n#include <stdio.h>\nint main() {\nchar initial = 'Z';\nswitch (initial) {\ncase 'A':\nprintf(\"Apple\\n\");\nbreak;\ncase 'B':\nprintf(\"Banana\\n\");\nbreak;\ndefault:\nprintf(\"Fruit unknown\\n\");\nbreak;\n}\nreturn 0;\n}",
        {"Apple",
         "Banana",
         "Error",
         "Fruit unknown"},
        3
    };
    Question q6_21 = {
        "What is the expected output of the code?\n#include <stdio.h>\nint main() {\nint val = 5;\nif (val == 5) {\nif (val > 3) {\nprintf(\"First nested\\n\");\n}\n} else {\nprintf(\"Second nested\\n\");\n}\nprintf(\"End of program\\n\");\nreturn 0;\n}",
        {"First nested\nEnd of program",
         "Second nested\nEnd of program",
         "Second nested",
         "First nested"},
        0
    };
    chapter6.append({q6_1, q6_2, q6_3, q6_4, q6_5, q6_6, q6_7, q6_8, q6_9, q6_10,
                     q6_11, q6_12, q6_13, q6_14, q6_15, q6_16, q6_17, q6_18, q6_19, q6_20, q6_21});
    chapterQuestions[6] = chapter6;

    // Chapter 7: Loops
    QVector<Question> chapter7;
    Question q7_1 = {
        "What is the primary purpose of using loops in programming?",
        {"To define new variables.",
         "To execute a block of code repeatedly until a condition is met.",
         "To perform a single action once.",
         "To declare functions."},
        1
    };
    Question q7_2 = {
        "Which type of loop executes a block of code while a given condition remains true?",
        {"do-while loop",
         "for loop",
         "while loop",
         "if-else statement"},
        2
    };
    Question q7_3 = {
        "What is the key difference between a while loop and a do-while loop?",
        {"A while loop always executes at least once, while a do-while loop may not.",
         "A do-while loop always executes at least once, while a while loop may not.",
         "while loops are used for counting, do-while loops are not.",
         "They are identical in functionality."},
        1
    };
    Question q7_4 = {
        "When is a do-while loop particularly useful?",
        {"When you need to iterate a fixed number of times.",
         "When you want to ensure the loop body runs at least once.",
         "When the number of iterations is unknown and could be zero.",
         "When you need to break out of the loop based on an external event."},
        1
    };
    Question q7_5 = {
        "In a for loop, when does the \"terminating expression\" get evaluated?",
        {"After each iteration of the loop.",
         "Before the first iteration and before each subsequent iteration.",
         "Only once at the beginning of the loop.",
         "After the loop has completely finished."},
        1
    };
    Question q7_6 = {
        "What is the purpose of the \"update\" section in a for loop?",
        {"To define the loop's condition.",
         "To execute the main logic of the loop.",
         "To modify loop control variables (e.g., increment/decrement counters).",
         "To declare new variables."},
        2
    };
    Question q7_7 = {
        "What does the break keyword do when encountered inside a loop?",
        {"Skips the current iteration and moves to the next.",
         "Immediately terminates the loop.",
         "Restarts the loop from the beginning.",
         "Causes a compilation error."},
        1
    };
    Question q7_8 = {
        "What is a \"Nested Loop\"?",
        {"A loop that contains only one iteration.",
         "A loop that calls a function.",
         "A loop inside another loop.",
         "A loop that never terminates."},
        2
    };
    Question q7_9 = {
        "If you have an outer loop with counter i and an inner loop with counter j, which loop completes all its iterations first for each single iteration of the other?",
        {"The outer loop.",
         "The inner loop.",
         "Both complete simultaneously.",
         "It depends on the loop type."},
        1
    };
    Question q7_10 = {
        "If an outer loop runs 3 times and an inner loop runs 4 times for each outer loop iteration, how many total times will the inner loop's code block execute?",
        {"3 times",
         "4 times",
         "7 times",
         "12 times"},
        3
    };
    Question q7_11 = {
        "What is the main advantage of using loops?",
        {"They make programs run slower.",
         "They reduce code duplication and improve efficiency.",
         "They increase the chance of errors.",
         "They are only useful for simple calculations."},
        1
    };
    Question q7_12 = {
        "Which loop structure is most appropriate when you know exactly how many times you need to repeat a block of code?",
        {"while loop",
         "do-while loop",
         "for loop",
         "if-else statement"},
        2
    };
    Question q7_13 = {
        "If a while loop's condition never becomes false, what kind of loop is it?",
        {"A do-while loop.",
         "A for loop.",
         "An infinite loop.",
         "A nested loop."},
        2
    };
    Question q7_14 = {
        "Which loop is best suited for scenarios where user input needs to be validated at least once?",
        {"for loop",
         "while loop",
         "do-while loop",
         "Nested loop"},
        2
    };
    Question q7_15 = {
        "Consider the following for loop: for (int i = 0; i < 10; i += 2). How many times will this loop iterate?",
        {"5 times",
         "10 times",
         "6 times",
         "2 times"},
        0
    };
    Question q7_16 = {
        "What is the effect of placing break; immediately inside a while (1) loop without any condition?",
        {"The loop will run indefinitely.",
         "The loop will not execute at all.",
         "The loop will execute only once and then terminate.",
         "It will cause a compilation error."},
        2
    };
    Question q7_17 = {
        "What is the expected output of the code?\n#include <stdio.h>\nint main() {\nint count = 0;\nwhile (count < 3) {\nprintf(\"%d \", count);\ncount++;\n}\nreturn 0;\n}",
        {"012",
         "123",
         "0123",
         "No output"},
        0
    };
    Question q7_18 = {
        "What is the expected output of the code?\n#include <stdio.h>\nint main() {\nint k = 10;\nwhile (k > 5) {\nprintf(\"%d \", k);\nk -= 2;\nif (k == 6) {\nbreak;\n}\n}\nreturn 0;\n}",
        {"10",
         "10 8",
         "10 8 6",
         "10 8 6 4"},
        1
    };
    Question q7_19 = {
        "What is the expected output of the code?\n#include <stdio.h>\nint main() {\nfor (int i = 1; i <= 2; i++) {\nfor (int j = 1; j <= 3; j++) {\nprintf(\"%d%d \", i, j);\n}\n}\nreturn 0;\n}",
        {"11 21 12 22 13 23",
         "11 12 13 21 22 23",
         "1 2 3 1 2 3",
         "11 12 13"},
        1
    };
    Question q7_20 = {
        "What is the expected output of the code?\n#include <stdio.h>\nint main() {\nint n = 4;\nfor (int i = 1; i <= n; i++) {\nfor (int j = 1; j <= n; j++) {\nif (j >= i) {\nprintf(\"*\");\n} else {\nprintf(\" \");\n}\n}\nprintf(\"\\n\");\n}\nreturn 0;\n}",
        {"*\n**\n***\n****",
         "****\n***\n**\n*",
         "   *\n  **\n ***\n****",
         "****\n ***\n  **\n   *"},
        2
    };
    Question q7_21 = {
        "What is the expected output of the code?\n#include <stdio.h>\nint main() {\nint n = 3;\nfor (int i = 1; i <= n; i++) {\nfor (int j = 1; j <= i; j++) {\nprintf(\"%d \", j);\n}\nprintf(\"\\n\");\n}\nreturn 0;\n}",
        {"1\n1 2\n1 2 3",
         "1 1 1\n2 2\n3",
         "1 2 3\n1 2\n1",
         "1\n2 3\n4 5 6"},
        0
    };
    chapter7.append({q7_1, q7_2, q7_3, q7_4, q7_5, q7_6, q7_7, q7_8, q7_9, q7_10,
                     q7_11, q7_12, q7_13, q7_14, q7_15, q7_16, q7_17, q7_18, q7_19, q7_20, q7_21});
    chapterQuestions[7] = chapter7;

    // Chapter 8: Arrays
    QVector<Question> chapter8;
    Question q8_1 = {
        "What is a fundamental characteristic of arrays as a data structure?",
        {"Elements are stored randomly.",
         "All elements must have different data types.",
         "Elements are arranged sequentially and are of the same data type.",
         "They can only store a single value."},
        2
    };
    Question q8_2 = {
        "What is the primary benefit of using arrays for managing data?",
        {"They reduce memory usage by deleting unused variables.",
         "They allow storing multiple values of the same type under a single name, making code cleaner.",
         "They automatically sort data upon insertion.",
         "They provide built-in security features."},
        1
    };
    Question q8_3 = {
        "What is the correct syntax to declare an integer array named numbers with a maximum size of 50?",
        {"int numbers(50);",
         "numbers int[50];",
         "int numbers[50];",
         "array int numbers = 50;"},
        2
    };
    Question q8_4 = {
        "When initializing an array with values, what happens if you leave the size of the array blank (e.g., int arr[] = {1, 2, 3};)?",
        {"A compilation error occurs.",
         "The array size defaults to 1.",
         "The compiler automatically determines the size based on the number of initialized elements.",
         "The array becomes dynamic and can change size infinitely."},
        2
    };
    Question q8_5 = {
        "What term refers to the position of an element within an array?",
        {"Value",
         "Element",
         "Index",
         "Address"},
        2
    };
    Question q8_6 = {
        "What is the default starting index of an array in C?",
        {"1",
         "-1",
         "0",
         "Any Positive integer"},
        2
    };
    Question q8_7 = {
        "If an array is declared with a size of N, what is the index of its last element?",
        {"N",
         "N + 1",
         "N - 1",
         "0"},
        2
    };
    Question q8_8 = {
        "How do you access the third element of an array named data?",
        {"data[3]",
         "data[2]",
         "data{3}",
         "data.3"},
        1
    };
    Question q8_9 = {
        "What technique is commonly used to process or assign values to every element in an array?",
        {"Direct assignment",
         "Manual input",
         "Using loops",
         "Conditional statements"},
        2
    };
    Question q8_10 = {
        "When using scanf(\"%s\", str_array); to read a string, why is the & (address-of) operator not needed before str_array?",
        {"Because strings are always integers.",
         "Because str_array itself decays to a pointer to its first element.",
         "Because scanf handles memory allocation automatically for strings.",
         "It's a common mistake; & should always be used."},
        1
    };
    Question q8_11 = {
        "What character signifies the end of a C string?",
        {"\\n (newline character)",
         "   (space character)",
         "\\0 (null terminating character)",
         ". (period character)"},
        2
    };
    Question q8_12 = {
        "What happens when scanf(\"%s\", str); encounters a space character in the input?",
        {"It treats the space as a regular character and continues reading.",
         "It stops reading at the space character, considering it the end of the string.",
         "It causes a runtime error.",
         "It converts the space into an underscore."},
        1
    };
    Question q8_13 = {
        "Which format specifier is recommended for scanning a string that includes spaces in C?",
        {"%c",
         "%s",
         "%[^\\n]",
         "%d"},
        2
    };
    Question q8_14 = {
        "If you declare int values[5]; and then try to access values[5], what kind of issue will you encounter?",
        {"A compilation error.",
         "A runtime error (out-of-bounds access).",
         "It will always return the last element.",
         "It will automatically resize the array."},
        1
    };
    Question q8_15 = {
        "What does the term \"linear data structure\" imply for arrays?",
        {"They can only store numbers.",
         "Elements are stored one after another in a sequential manner.",
         "They can only be accessed from the beginning.",
         "They are only useful for creating straight lines in graphics."},
        1
    };
    Question q8_16 = {
        "If an array arr is declared as int arr[3];, which of the following is a valid index to access an element?",
        {"arr[3]",
         "arr[4]",
         "arr[2]",
         "arr[-1]"},
        2
    };
    Question q8_17 = {
        "What happens if you attempt to assign more values than the declared size during array initialization (e.g., int arr[3] = {1, 2, 3, 4};)?",
        {"The array will automatically resize to accommodate all values.",
         "The excess values will be ignored.",
         "A compilation error will occur.",
         "The program will crash at runtime."},
        2
    };
    Question q8_18 = {
        "What is the expected output of the code?\n#include <stdio.h>\nint main() {\nint arr[] = {5, 10, 15};\nfor (int i = 0; i < 3; i++) {\nprintf(\"%d \", arr[i] + 1);\n}\nprintf(\"\\n\");\nreturn 0;\n}",
        {"5 10 5",
         "6 11 16",
         "0 1 2",
         "1 2 3"},
        1
    };
    Question q8_19 = {
        "What is the output of the code?\n#include <stdio.h>\nint main() {\nint x[3] = {1, 2, 3};\nint y[3] = {4, 5, 6};\nint z[3];\nfor (int i = 0; i < 3; i++) {\nz[i] = x[i] + y[i];\n}\nprintf(\"%d %d %d\\n\", z[0], z[1], z[2]);\nreturn 0;\n}",
        {"1 2 3",
         "4 5 6",
         "5 7 9",
         "1 2 3 4 5 6"},
        2
    };
    Question q8_20 = {
        "What is the output of the code?\n#include <stdio.h>\nint main() {\nint data[4];\nfor (int i = 0; i < 4; i++) {\ndata[i] = i * 10;\n}\nprintf(\"%d %d\\n\", data[0], data[3]);\nreturn 0;\n}",
        {"0 30",
         "10 40",
         "0 0",
         "Garbage values"},
        0
    };
    Question q8_21 = {
        "Assuming the user inputs Programming for the scanf statement, what will be the output?\n#include <stdio.h>\nint main() {\nchar sentence[20];\nscanf(\"%s\", sentence);\nprintf(\"%s\\n\", sentence);\nreturn 0;\n}",
        {"Hello World",
         "World",
         "Hello",
         "Error"},
        2
    };
    chapter8.append({q8_1, q8_2, q8_3, q8_4, q8_5, q8_6, q8_7, q8_8, q8_9, q8_10,
                     q8_11, q8_12, q8_13, q8_14, q8_15, q8_16, q8_17, q8_18, q8_19, q8_20, q8_21});
    chapterQuestions[8] = chapter8;

    // Chapter 9: 2D Arrays
    QVector<Question> chapter9;
    Question q9_1 = {
        "How do you declare a 2-dimensional integer array named matrix with 3 rows and 4 columns in C?",
        {"int matrix[3][4];",
         "int matrix[4][3];",
         "int matrix(3,4);",
         "array matrix[3][4];"},
        0
    };
    Question q9_2 = {
        "What is the total number of elements in the array int arr[5][2];?",
        {"7",
         "5",
         "10",
         "2"},
        2
    };
    Question q9_3 = {
        "How are elements of a 2D array stored in memory in C?",
        {"Column-major order",
         "Row-major order",
         "Diagonally",
         "Randomly"},
        1
    };
    Question q9_4 = {
        "In the declaration data_type arr[size1][size2];, what does size2 represent?",
        {"The number of rows",
         "The number of columns (elements in each row)",
         "The total number of arrays",
         "The starting index"},
        1
    };
    Question q9_5 = {
        "What is the correct syntax for declaring a 2-Dimensional integer array named table with 3 rows and 4 columns?",
        {"int table[4][3];",
         "int table[3][4];",
         "table int[3][4];",
         "array table[3][4];"},
        1
    };
    Question q9_6 = {
        "How can you visualize a 2-Dimensional Array?",
        {"As a single line of elements.",
         "As a set of interconnected nodes.",
         "As rows and columns, similar to a table.",
         "As a stack of elements."},
        2
    };
    Question q9_7 = {
        "How do you access a specific element in a 2-Dimensional Array?",
        {"By providing only the row index.",
         "By providing only the column index.",
         "By providing both the row and column indices.",
         "By using a single index like a 1D array."},
        2
    };
    Question q9_8 = {
        "Given int matrix[2][3];, what is the valid range of indices for the rows?",
        {"1 to 2",
         "0 to 1",
         "0 to 2",
         "1 to 3"},
        1
    };
    Question q9_9 = {
        "Given int matrix[2][3];, what is the valid range of indices for the columns?",
        {"1 to 3",
         "0 to 1",
         "0 to 2",
         "1 to 2"},
        2
    };
    Question q9_10 = {
        "If int grades[5][4]; is declared, how many total integer elements can it store?",
        {"9",
         "20",
         "5",
         "4"},
        1
    };
    Question q9_11 = {
        "What is the main advantage of using 2-Dimensional Arrays for data management?",
        {"They consume less memory than 1D arrays.",
         "They allow for more efficient data sorting.",
         "They are helpful for organizing data in tabular form (rows and columns).",
         "They automatically handle dynamic resizing."},
        2
    };
    Question q9_12 = {
        "What are N-Dimensional Arrays?",
        {"Arrays that can only store numbers.",
         "Arrays with an infinite number of dimensions.",
         "Arrays with more than two dimensions.",
         "Arrays that are always square (same number of rows and columns)."},
        2
    };
    Question q9_13 = {
        "What happens as the number of dimensions in an array increases?",
        {"It becomes easier to visualize and keep track of indices.",
         "It generally becomes harder to visualize and keep track of indices.",
         "The performance of the array significantly increases.",
         "The array automatically becomes dynamic."},
        1
    };
    Question q9_14 = {
        "How are the concepts and traversal methods for N-Dimensional Arrays related to regular (1D) arrays?",
        {"They are entirely different.",
         "They are just the same, but with more dimensions to track.",
         "N-Dimensional arrays do not support traversal.",
         "They only support single element access."},
        1
    };
    Question q9_15 = {
        "What does the example int arr[4][5]; signify about the array arr?",
        {"It's a 1-dimensional array of size 20.",
         "It's a 2-dimensional array with 4 columns and 5 rows.",
         "It's a 2-dimensional array with 4 rows and 5 columns.",
         "It's an N-dimensional array."},
        2
    };
    Question q9_16 = {
        "If you have a 2D array grid[R][C], what would grid[0][0] refer to?",
        {"The element in the last row and last column.",
         "The element in the first row and first column.",
         "The total size of the array.",
         "An invalid access."},
        1
    };
    Question q9_17 = {
        "Which statement about Multidimensional Arrays is TRUE?",
        {"All elements in a multidimensional array can have different data types.",
         "They are always declared with a fixed size.",
         "They are only useful for mathematical computations.",
         "They allow storing arrays within arrays."},
        3
    };
    Question q9_18 = {
        "What is the output of the following code?\n#include <stdio.h>\nint main() {\nint matrix[2][3] = {{1, 2, 3}, {4, 5, 6}};\nprintf(\"%d %d\\n\", matrix[0][2], matrix[1][1]);\nreturn 0;\n}",
        {"1 4",
         "3 5",
         "2 5",
         "1 6"},
        1
    };
    Question q9_19 = {
        "What is the output of the following code?\n#include <stdio.h>\ndouble matrix[2][2] = {{1.1, 2.2}, {3.3, 4.4}};\nprintf(\"%.1f %.1f\\n\", matrix[0][1], matrix[1][0]);\nreturn 0;\n}",
        {"1.1 3.3",
         "2.2 3.3",
         "1.1 4.4",
         "2.2 4.4"},
        1
    };
    Question q9_20 = {
        "What is the output of the following code?\n#include <stdio.h>\nint main() {\nint numbers[3][1] = {{10}, {20}, {30}};\nprintf(\"%d\\n\", numbers[2][0]);\nreturn 0;\n}",
        {"10",
         "20",
         "30",
         "(Error)"},
        2
    };
    Question q9_21 = {
        "What is the output of the following code?\n#include <stdio.h>\nint main() {\nint data[2][3] = {{1, 2, 3}, {4, 5, 6}};\nfor (int i = 0; i < 2; i++) {\nfor (int j = 0; j < 3; j++) {\nif (data[i][j] % 2 == 0) {\nprintf(\"%d \", data[i][j]);\n}\n}\n}\nprintf(\"\\n\");\nreturn 0;\n}",
        {"1 3 5",
         "2 4 6",
         "1 2 3 4 5 6",
         "2 6"},
        1
    };
    chapter9.append({q9_1, q9_2, q9_3, q9_4, q9_5, q9_6, q9_7, q9_8, q9_9, q9_10,
                     q9_11, q9_12, q9_13, q9_14, q9_15, q9_16, q9_17, q9_18, q9_19, q9_20, q9_21});
    chapterQuestions[9] = chapter9;

    // Chapter 10: Functions Introduction
    QVector<Question> chapter10;
    Question q10_1 = {
        "What is a function in programming?",
        {"A variable that stores multiple values.",
         "A self-contained module of code that accomplishes a specific task.",
         "A data type used for storing text.",
         "A loop that iterates a fixed number of times."},
        1
    };
    Question q10_2 = {
        "What is a primary benefit of using functions in programming?",
        {"They make the code run faster on all systems.",
         "They reduce the amount of memory used by the program.",
         "They make it easier for the programmer to read code and reuse actions without rewriting.",
         "They automatically debug the program for errors."},
        2
    };
    Question q10_3 = {
        "How often can a function be used once it is written?",
        {"Only once per program execution.",
         "As many times as it is called in the code.",
         "Only if it doesn't take any parameters.",
         "Only if it returns a value."},
        1
    };
    Question q10_4 = {
        "Which of the following is an example of a built-in function mentioned in the text?",
        {"myFunction()",
         "calculateSum()",
         "printf()",
         "dataProcessor()"},
        2
    };
    Question q10_5 = {
        "What is the purpose of the main() function?",
        {"To declare global variables.",
         "To define custom data types.",
         "To indicate to the compiler the start of the program.",
         "To handle error messages."},
        2
    };
    Question q10_6 = {
        "What do functions usually do with data?",
        {"Ignore it completely.",
         "Only store it without processing.",
         "Take it in, process it, and return a result.",
         "Convert it into a different programming language."},
        2
    };
    Question q10_7 = {
        "What do printf() and scanf() functions make use of to output and input values?",
        {"Global variables.",
         "Constants.",
         "Parameters.",
         "Arrays."},
        2
    };
    Question q10_8 = {
        "Why are functions written in terms of program algorithms?",
        {"To make the program smaller in file size.",
         "To make the program have sub-steps within the algorithm.",
         "To increase the program's execution speed exponentially.",
         "To allow the program to run on multiple operating systems."},
        1
    };
    Question q10_9 = {
        "What is the term for the variables in the declaration of a function?",
        {"Arguments.",
         "Return values.",
         "Local variables.",
         "Parameters."},
        3
    };
    Question q10_10 = {
        "What do parameters tell the compiler?",
        {"The expected output of the function.",
         "What data types and variable names are asked for by the function.",
         "The memory address of the function.",
         "The number of times the function will be called."},
        1
    };
    Question q10_11 = {
        "What do arguments refer to in the context of functions?",
        {"The names of the functions being called.",
         "The actual value that is being passed to the function.",
         "The type of error that occurred during function execution.",
         "The result returned by the function."},
        1
    };
    Question q10_12 = {
        "When are arguments passed to a function?",
        {"During function declaration.",
         "When the function is called in a different function like main().",
         "After the function has completed its execution.",
         "Only when the function does not have parameters."},
        1
    };
    Question q10_13 = {
        "Where can a function be used in the code?",
        {"Only at the beginning of the program.",
         "Only at the end of the program.",
         "Anywhere in the code, as long as it's called.",
         "Only within the main() function."},
        2
    };
    Question q10_14 = {
        "What happens if a function with parameters is called without arguments that fit those parameters?",
        {"The function will automatically generate default values.",
         "The program will ignore the function call.",
         "It will likely result in a compilation error or unexpected behavior.",
         "The function will return a null value."},
        2
    };
    Question q10_15 = {
        "What is the ultimate goal of mastering function calls?",
        {"To reduce the need for writing any functions.",
         "To become a better programmer.",
         "To make the program run on older hardware.",
         "To create programs without any loops."},
        1
    };
    Question q10_16 = {
        "What is the use of a function if it won't be called in your program?",
        {"It will still execute in the background.",
         "It has no practical use or effect.",
         "It will act as a placeholder for future code.",
         "It will be automatically removed by the compiler."},
        1
    };
    Question q10_17 = {
        "If you call add(5, 10), what are 5 and 10?",
        {"Parameters.",
         "Return values.",
         "Local variables.",
         "Arguments."},
        3
    };
    Question q10_18 = {
        "What is the output of the following code?\n#include <stdio.h>\nvoid greet() {\nprintf(\"Hello, World!\\n\");\n}\nint main() {\ngreet();\nreturn 0;\n}",
        {"No output, compilation error.",
         "greet()",
         "Hello, World!",
         "main()"},
        2
    };
    Question q10_19 = {
        "What is the output of the following code?\n#include <stdio.h>\nvoid printCharacter(char c) {\nprintf(\"%c\\n\", c);\n}\nint main() {\nprintCharacter('X');\nprintCharacter('Y');\nreturn 0;\n}",
        {"X",
         "Y",
         "X followed by Y on separate lines.",
         "No output."},
        2
    };
    Question q10_20 = {
        "What is the output of the following code?\n#include <stdio.h>\nint multiply(int x, int y) {\nreturn x * y;\n}\nint main() {\nint result = multiply(5, 6);\nprintf(\"Result: %d\\n\", result);\nresult = multiply(2, 3);\nprintf(\"New Result: %d\\n\", result);\nreturn 0;\n}",
        {"Result: 30 followed by New Result: 30",
         "Result: 30 followed by New Result: 6",
         "Result: 6 followed by New Result: 30",
         "Result: 5 followed by New Result: 2"},
        1
    };
    Question q10_21 = {
        "What is the output of the following code?\n#include <stdio.h>\nvoid printSum(int x, int y, int z) {\nprintf(\"Sum: %d\\n\", x + y + z);\n}\nint main() {\nprintSum(1, 2, 3);\nprintSum(10, 20, 30);\nreturn 0;\n}",
        {"Sum: 6 followed by Sum: 60 on separate lines.",
         "Sum: 6",
         "Sum: 60",
         "No output."},
        0
    };
    chapter10.append({q10_1, q10_2, q10_3, q10_4, q10_5, q10_6, q10_7, q10_8, q10_9, q10_10,
                      q10_11, q10_12, q10_13, q10_14, q10_15, q10_16, q10_17, q10_18, q10_19, q10_20, q10_21});
    chapterQuestions[10] = chapter10;

    // Chapter 11: Functions
    QVector<Question> chapter11;
    Question q11_1 = {
        "What is the correct syntax for defining a function in C?",
        {"function_name(parameters) data_type { // code }",
         "data_type function_name(parameters) { // code }",
         "function data_type function_name(parameters) { // code }",
         "data_type function_name[parameters] { // code }"},
        1
    };
    Question q11_2 = {
        "Where are functions typically written in a C program, relative to the main function?",
        {"Inside the main function.",
         "After the main function, but only if a function prototype is used.",
         "Always before the main function.",
         "Anywhere in the code, as long as it's within curly braces."},
        1
    };
    Question q11_3 = {
        "What does the data_type of a function signify?",
        {"The data type of its first parameter.",
         "The data type of the value it will return.",
         "The data type of all its parameters.",
         "The data type of the variable that calls the function."},
        1
    };
    Question q11_4 = {
        "In the function signature int sum(int x, int y), what do int x and int y represent?",
        {"Arguments",
         "Return values",
         "Parameters",
         "Local variables"},
        2
    };
    Question q11_5 = {
        "When a value is \"passed by value\" to a function, what happens to the original variable?",
        {"Its value is directly modified by the function.",
         "A copy of its value is made for the function's use.",
         "Its memory address is passed to the function.",
         "It is permanently linked to the function's internal variable."},
        1
    };
    Question q11_6 = {
        "What does the return keyword do inside a function?",
        {"It restarts the function from the beginning.",
         "It prints a value to the console.",
         "It sends a value back to the caller and terminates the function's execution.",
         "It defines a new variable within the function."},
        2
    };
    Question q11_7 = {
        "If a function's data_type is void, what does it imply about the function?",
        {"It takes no parameters.",
         "It can return any data type.",
         "It does not return any value.",
         "It is an empty function with no code."},
        2
    };
    Question q11_8 = {
        "What is the purpose of a \"base case\" in a recursive function?",
        {"It is the initial condition that starts the recursion.",
         "It is the condition that causes the function to call itself.",
         "It is the condition that stops the recursion and returns a value.",
         "It is an error handling mechanism for infinite loops."},
        2
    };
    Question q11_9 = {
        "What is the expected output of the code?\n#include <stdio.h>\nint calculate(int val) {\nif (val == 0) {\nreturn 0;\n} else {\nreturn val + calculate(val - 1);\n}\n}\nint main() {\nint result = calculate(4);\nprintf(\"%d\\n\", result);\nreturn 0;\n}",
        {"4",
         "10",
         "0",
         "Error"},
        1
    };
    Question q11_10 = {
        "What is the expected output of the code?\n#include <stdio.h>\nint increment(int num) {\nnum = num + 10;\nreturn num;\n}\nint main() {\nint value = 5;\nprintf(\"%d %d\", increment(value), value);\n}",
        {"15 5",
         "15 15",
         "5 15",
         "5 5"},
        0
    };
    Question q11_11 = {
        "What is the expected output of the code?\n#include <stdio.h>\nint multiply(int a, int b) {\nreturn a * b;\nprintf(\"This line won't be executed.\\n\");\n}\nint main() {\nint x = 5;\nint y = 3;\nint product = multiply(x, y);\nprintf(\"%d\\n\", product);\nreturn 0;\n}",
        {"15",
         "This line won't be executed.\n15",
         "Compile Error",
         "Runtime Error"},
        0
    };
    chapter11.append({q11_1, q11_2, q11_3, q11_4, q11_5, q11_6, q11_7, q11_8, q11_9, q11_10, q11_11});
    chapterQuestions[11] = chapter11;

    // Chapter 12: Structures
    QVector<Question> chapter12;
    Question q12_1 = {
        "What are structures (structs) in programming?",
        {"Built-in data types like integers and floats.",
         "Custom data types that group different existing data types together.",
         "Functions that return multiple values.",
         "Arrays that can hold only one data type."},
        1
    };
    Question q12_2 = {
        "What is each variable inside a struct called?",
        {"An element.",
         "A component.",
         "A member.",
         "An attribute."},
        2
    };
    Question q12_3 = {
        "What is a key benefit of using structs?",
        {"They make code run faster than regular variables.",
         "They simplify grouping different kinds of data under the same name.",
         "They automatically handle memory allocation.",
         "They are only useful for very large programs."},
        1
    };
    Question q12_4 = {
        "Where are the members of a struct placed during its declaration?",
        {"Within parentheses ().",
         "Within square brackets [].",
         "Within curly braces {}.",
         "After a colon :."},
        2
    };
    Question q12_5 = {
        "How can you declare a variable using a previously defined struct?",
        {"By simply using the struct name as a variable name.",
         "By using the struct keyword followed by the struct name and then the variable name.",
         "By using new keyword.",
         "By using var keyword."},
        1
    };
    Question q12_6 = {
        "What is the purpose of the typedef keyword when used with structs?",
        {"To make the struct members private.",
         "To define the struct as a data type, avoiding repetitive struct struct_name declarations.",
         "To allocate memory for the struct dynamically.",
         "To convert a struct into an array."},
        1
    };
    Question q12_7 = {
        "What is considered good practice when using typedef for a struct?",
        {"To use entirely different names for the struct and the typedef alias.",
         "To keep the struct name and the typedef alias the same to avoid confusion.",
         "To only use typedef for structs with a single member.",
         "To avoid using typedef with structs altogether."},
        1
    };
    Question q12_8 = {
        "When using typedef to define a struct and its alias in a single declaration, what must be ensured?",
        {"The typedef keyword must be placed after the closing curly brace.",
         "The struct name must be placed before and after the struct definition.",
         "The struct must not have any members.",
         "The alias name must be declared in main()."},
        1
    };
    Question q12_9 = {
        "How do you access the members of a declared struct variable?",
        {"Using the -> operator.",
         "Using the . (dot) symbol.",
         "Using square brackets [].",
         "Using the :: operator."},
        1
    };
    Question q12_10 = {
        "Why can't you print an entire struct by just calling the variable name (e.g., printf(\"%s\", myStructure);)?",
        {"Structs only store numerical data.",
         "The compiler wouldn't know which specific member or data type to use for printing.",
         "Structs are private by default.",
         "Printing entire structs is not supported in C."},
        1
    };
    Question q12_11 = {
        "Can structs contain other structs as members?",
        {"No, structs can only contain basic data types.",
         "Yes, but only if the inner struct is declared globally.",
         "Yes, structs can contain other structs, and they can be declared inside as well.",
         "Yes, but only through pointers."},
        2
    };
    Question q12_12 = {
        "How do you access a member of an inner struct from an outer struct variable?",
        {"outerVar.innerVar.member;",
         "outerVar->innerVar.member;",
         "outerVar.innerVar->member;",
         "outerVar::innerVar::member;"},
        0
    };
    Question q12_13 = {
        "How do you initialize a single struct member?",
        {"By assigning a single value to the entire struct variable.",
         "By accessing the specific member using the . symbol and assigning a value.",
         "Using the init() function.",
         "Only when the struct is first declared."},
        1
    };
    Question q12_14 = {
        "What is one way to initialize a struct variable with a group of elements?",
        {"myStruct = {value1, value2, value3};",
         "myStruct.set_values(value1, value2, value3);",
         "myStruct = (value1, value2, value3);",
         "myStruct.init(value1, value2, value3);"},
        0
    };
    Question q12_15 = {
        "Can structs be used as arrays?",
        {"No, structs are single variables.",
         "Yes, you can have arrays where each index is a struct with its own members.",
         "Yes, but only if the struct contains only numerical data.",
         "Yes, but they lose their member access capabilities."},
        1
    };
    Question q12_16 = {
        "When a struct is part of an array (e.g., Product list[3];), can you initialize an index using the set method (e.g., list[2] = {21.00, 9};)?",
        {"Yes, this is the standard way.",
         "No, this will give an error; you must access every member in each index individually.",
         "Yes, but only for the first index.",
         "Yes, but only if all members are of the same type."},
        1
    };
    Question q12_17 = {
        "Which of the following describes the efficiency of structs?",
        {"They are less efficient than individual variables.",
         "They are more efficient than individual variables for grouping related data.",
         "Their efficiency depends entirely on the number of members.",
         "Structs have no impact on code efficiency."},
        1
    };
    Question q12_18 = {
        "What is the expected output of the code?\n#include <stdio.h>\nstruct Point {\nint x;\nint y;\n};\nint main() {\nstruct Point p1;\np1.x = 10;\np1.y = 20;\nprintf(\"Point: (%d, %d)\\n\", p1.x, p1.y);\nreturn 0;\n}",
        {"Point: (10, 20)",
         "Point: (x, y)",
         "No output, compilation error.",
         "Point: (0, 0)"},
        0
    };
    Question q12_19 = {
        "What is the expected output of the code?\n#include <stdio.h>\ntypedef struct Outer {\nint a;\nstruct Inner {\nchar b;\n} inner_data;\n} Outer;\nint main() {\nOuter o;\no.a = 1;\no.inner_data.b = 'Z';\nprintf(\"%d %c\\n\", o.a, o.inner_data.b);\nreturn 0;\n}",
        {"1 Z",
         "0",
         "a b",
         "Compilation error due to nested struct declaration."},
        0
    };
    Question q12_20 = {
        "What is the expected output of the code?\n#include <stdio.h>\ntypedef struct Vec {\nint x;\nint y;\n} Vector;\nVector createVector(int a, int b) {\nVector v;\nv.x = a;\nv.y = b;\nreturn v;\n}\nint main() {\nVector myVec = createVector(7, 11);\nprintf(\"Vector: <%d, %d>\\n\", myVec.x, myVec.y);\nreturn 0;\n}",
        {"Vector: <7, 11>",
         "Vector: <0, 0>",
         "Vector: <x, y>",
         "Compilation error."},
        0
    };
    chapter12.append({q12_1, q12_2, q12_3, q12_4, q12_5, q12_6, q12_7, q12_8, q12_9, q12_10,
                      q12_11, q12_12, q12_13, q12_14, q12_15, q12_16, q12_17, q12_18, q12_19, q12_20});
    chapterQuestions[12] = chapter12;

    // Chapter 13: Unions and Enumeration
    QVector<Question> chapter13;
    Question q13_1 = {
        "How are unions similar to structs?",
        {"They can store only one type of data.",
         "They both allow all members to share the same memory.",
         "They can store data of different data types.",
         "They are used exclusively for mathematical operations."},
        2
    };
    Question q13_2 = {
        "What is the key difference between unions and structs regarding memory usage?",
        {"Structs allocate memory for only one member at a time, while unions allocate for all.",
         "Unions allocate memory for all members simultaneously, while structs allocate only for the largest member.",
         "Unions allocate memory for only one member at a time (all members share the same memory), while structs allocate distinct memory for each member.",
         "There is no difference; they handle memory the same way."},
        2
    };
    Question q13_3 = {
        "What happens when you assign a new value to a union member?",
        {"The new value is stored alongside previous values.",
         "The previous value in the union is overwritten and becomes invalid.",
         "A new memory location is allocated for the new value.",
         "The union automatically converts the new value to the previous data type."},
        1
    };
    Question q13_4 = {
        "Which keyword is used to declare a union?",
        {"struct",
         "enum",
         "union",
         "typedef"},
        2
    };
    Question q13_5 = {
        "If a union myUnion has members int Num; and char Letter;, and you assign myUnion.Num = 10; and then myUnion.Letter = 'A';, what is the state of myUnion.Num?",
        {"It still reliably holds the value 10.",
         "Its value becomes invalid or unreliable.",
         "It automatically converts to the character 'A'.",
         "It becomes 0."},
        1
    };
    Question q13_6 = {
        "What does the phrase \"all members share the same memory\" imply about unions?",
        {"They can store multiple values simultaneously without conflict.",
         "The size of the union is equal to the sum of the sizes of all its members.",
         "The size of the union is determined by the size of its largest member.",
         "They are only suitable for small data types."},
        2
    };
    Question q13_7 = {
        "When is typedef commonly used with unions or enums?",
        {"To make them dynamic.",
         "To define them as global variables.",
         "To create a shorter, more convenient alias for their names.",
         "To change their underlying data type."},
        2
    };
    Question q13_8 = {
        "What is the expected output of the code?\n#include <stdio.h>\nunion Value {\nint i;\nfloat f;\n};\nint main() {\nunion Value v;\nv.i = 10;\nv.f = 5.5;\nprintf(\"Float: %.1f\\n\", v.f);\nreturn 0;\n}",
        {"Float: 10.0",
         "Float: 5.5",
         "Float: (garbage value)",
         "Compilation error."},
        1
    };
    Question q13_9 = {
        "What is the expected output of the code?\n#include <stdio.h>\nunion Mixed {\nint x;\nchar y;\ndouble z;\n};\nint main() {\nunion Mixed m;\nm.x = 123;\nm.y = 'P';\nprintf(\"Value of y: %c\\n\", m.y);\nm.z = 987.654;\nprintf(\"Value of x: %d\\n\", m.x);\nreturn 0;\n}",
        {"Value of y: P followed by Value of x: 123",
         "Value of y: P followed by Value of x: (some garbage value)",
         "Value of y: P followed by Value of x: 987",
         "Compilation error."},
        1
    };
    Question q13_10 = {
        "What is the expected output of the code?\n#include <stdio.h>\nenum Code {\nSTART = 1,\nPAUSE,\nSTOP\n};\nint main() {\nprintf(\"%d %d %d\\n\", START, PAUSE, STOP);\nreturn 0;\n}",
        {"0 1 2",
         "1 2 3",
         "START PAUSE STOP",
         "Compilation error."},
        1
    };
    Question q13_11 = {
        "What is the expected output of the code?\n#include <stdio.h>\nenum Boolean {\nFALSE,\nTRUE\n};\nint main() {\nenum Boolean flag = FALSE;\nif (flag == 0) {\nprintf(\"Flag is False\\n\");\n} else {\nprintf(\"Flag is True\\n\");\n}\nreturn 0;\n}",
        {"Flag is True",
         "Flag is False",
         "Compilation error.",
         "No output."},
        1
    };
    chapter13.append({q13_1, q13_2, q13_3, q13_4, q13_5, q13_6, q13_7, q13_8, q13_9, q13_10, q13_11});
    chapterQuestions[13] = chapter13;

    // Chapter 14: Memory
    QVector<Question> chapter14;
    chapter14.append({
        {"Which segment of memory is typically read-only and stores the compiled machine code of a program's functions?",
         {"Data Segment", "Heap", "Text", "Stack"}, 2},
        {"Global and static variables that have been assigned an initial value by the programmer are stored in which part of the memory?",
         {"Uninitialized Data Segment", "Initialized Data Segment", "Heap", "Stack"}, 1},
        {"The BSS (Block Started by Symbol) segment is a part of the Data Segment that stores:",
         {"Dynamically allocated memory", "Local variables", "Uninitialized global and static variables", "Executable code"}, 2},
        {"In C, what is the primary purpose of knowing a variable's memory address?",
         {"To change its data type", "To make the code compile faster", "To directly manipulate values and optimize resource use", "To prevent memory leaks"}, 2},
        {"How many bytes does an int variable typically occupy in memory on most systems?",
         {"1 byte", "2 bytes", "4 bytes", "8 bytes"}, 2},
        {"Which of the following operations is not a common memory management process achievable with pointers in C?",
         {"Memory allocation", "Memory deallocation", "Memory reallocation", "Memory encryption"}, 3},
        {"Why is the Text segment usually read-only?",
         {"To allow for faster execution.", "To prevent accidental modification of the program's instructions.", "To enable dynamic loading of libraries.", "To reduce the overall memory footprint."}, 1},
        {"What happens to uninitialized global or static variables in the BSS segment when a program starts running?",
         {"They are assigned a random value.", "They retain whatever garbage value was previously in that memory location.", "They are automatically initialized to 0.", "The program will not compile if they are uninitialized."}, 2},
        {"Which memory segment is responsible for managing the memory for functions and libraries loaded during runtime?",
         {"Stack", "Text Segment", "Data Segment", "Heap"}, 3},
        {"Why might different variables declared at different times have different memory addresses?",
         {"Because they are of different data types.", "Because the compiler allocates space dynamically based on availability.", "Because they are stored in different memory segments.", "All of the above."}, 3},
        {"What is a potential risk of directly manipulating memory addresses without proper understanding?",
         {"Slower program execution.", "Inability to declare new variables.", "Memory leaks, data corruption, or program crashes.", "Compiler errors that prevent the program from running."}, 2}
    });
    chapterQuestions[14] = chapter14;

    // Chapter 15: Pointers
    QVector<Question> chapter15;
    chapter15.append({
        {"What is the primary function of a pointer variable in C?",
         {"To store a direct value like an integer or character.", "To store the address of another non-pointer variable.", "To perform mathematical calculations.", "To define new data types."}, 1},
        {"Which operator is used to get the memory address of a variable in C?",
         {"* (asterisk)", "& (ampersand)", "-> (arrow)", ". (dot)"}, 1},
        {"Which operator is used to dereference a pointer, meaning to access the value stored at the memory address it points to?",
         {"* (asterisk)", "& (ampersand)", "-> (arrow)", ". (dot)"}, 0},
        {"When declaring a pointer, why is it good practice to specify its data type (e.g., int *ptr)?",
         {"It makes the pointer use less memory.", "It allows the pointer to point to any data type.", "It informs the compiler about the type of data the pointer will access, aiding in dereferencing and pointer arithmetic.", "It prevents memory leaks."}, 2},
        {"What does malloc() return if memory allocation fails?",
         {"A random memory address", "The address of the first available byte", "NULL", "An integer value of 0"}, 2},
        {"Which function initializes the allocated memory to zero?",
         {"malloc()", "calloc()", "realloc()", "free()"}, 1},
        {"What is the purpose of sizeof() in memory allocation functions like malloc() or calloc()?",
         {"It specifies the number of items to allocate.", "It specifies the desired memory address.", "It returns the size in bytes of a variable or data type.", "It checks if memory allocation was successful."}, 2},
        {"What is 'type casting' when used with malloc() or calloc() (e.g., (int *)malloc(...))?",
         {"It changes the actual data type of the allocated memory.", "It instructs the compiler to ignore type mismatches.", "It converts the generic void * returned by malloc/calloc to a specific pointer type.", "It ensures that the allocated memory is always initialized."}, 2},
        {"Why is it important to check if a pointer returned by malloc() or calloc() is NULL?",
         {"To ensure the pointer points to a valid value.", "To handle potential memory allocation failures gracefully.", "To free the memory immediately after allocation.", "To convert the pointer to the correct data type."}, 1},
        {"When does realloc() guarantee to return the same memory address?",
         {"Always.", "Never.", "If the existing memory block can be resized in place.", "Only if the new size is smaller than the old size."}, 2},
        {"What is a common consequence of failing to free() dynamically allocated memory?",
         {"Compiler errors.", "Faster program execution.", "Memory leaks, leading to decreased system performance.", "The program automatically reallocates the memory."}, 2},
        {"What is a 'void pointer' (void *)?",
         {"A pointer that points to nothing.", "A pointer that cannot be dereferenced.", "A generic pointer that can hold the address of any data type.", "A pointer that is automatically initialized to NULL."}, 2},
        {"What is a 'dangling pointer'?",
         {"A pointer that was never initialized.", "A pointer that points to a NULL address.", "A pointer that points to memory that has been deallocated.", "A pointer that points to a global variable."}, 2},
        {"When you declare int arr[5];, where is the memory for arr typically allocated?",
         {"Heap", "Text Segment", "Data Segment", "Stack"}, 3},
        {"Why do arrays often behave like pointers in C?",
         {"Because array elements are always stored randomly.", "Because arrays can dynamically change their size.", "Because an array's name can often decay into a pointer to its first element.", "Because arrays are allocated on the heap by default."}, 2},
        {"Consider int *ptr = (int *)malloc(10 * sizeof(int));. What is the maximum index you can safely access using ptr?",
         {"9", "10", "11", "0"}, 1},
        {"Which of the following is TRUE regarding multiple free() calls on the same valid, non-NULL pointer?",
         {"It will always cause a segmentation fault immediately.", "It will increase memory performance.", "It leads to undefined behavior and potential program crashes.", "It is standard practice to ensure memory is fully released"}, 2},
        {"If realloc() returns NULL, what should you do with the original pointer?",
         {"Continue using the original pointer as if reallocation succeeded.", "Automatically free() the original pointer.", "The original memory block pointed to by ptr is still valid; you should free() it.", "Set the original pointer to NULL immediately."}, 2},
        {"What is the expected output of the code?\n\n#include <stdio.h>\n\nint main() {\n    int val = 20;\n    int *ptr = &val;\n    *ptr += 5; // Add 5 to the value pointed to by ptr\n    printf(\"%d\\n\", val);\n    return 0;\n}",
         {"20", "5", "25", "An error"}, 2},
        {"What is the expected output of the code?\n\n#include <stdio.h>\n\nint main() {\n    int numbers[] = {10, 20, 30, 40};\n    int *ptr = numbers; // ptr points to the first element (10)\n\n    printf(\"%d\\n\", *(ptr + 3)); // Dereference the element at index 3\n    return 0;\n}",
         {"10", "20", "30", "40"}, 3},
        {"What is the expected output of the code?\n\n#include <stdio.h>\n\nint main() {\n    int a = 5;\n    int b = 10;\n    int *ptr_a = &a;\n    int *ptr_b = &b;\n\n    ptr_a = ptr_b; // ptr_a now points to b's address\n    *ptr_a = 20;   // Change the value of b through ptr_a\n\n    printf(\"a: %d, b: %d\\n\", a, b);\n    return 0;\n}",
         {"a: 5, b: 10", "a: 20, b: 10", "a: 5, b: 20", "Error"}, 2}
    });
    chapterQuestions[15] = chapter15;

    // Chapter 16: Pointers and Functions
    QVector<Question> chapter16;
    chapter16.append({
        {"What is the main advantage of 'pass by reference' over 'pass by value' when using functions in C?",
         {"It makes the function execute faster.", "It allows the function to directly modify the original variable.", "It reduces the number of arguments a function can take.", "It always creates a copy of the variable for safety."}, 1},
        {"When passing a variable by reference to a function, what type should the function's parameter be?",
         {"The same data type as the variable.", "A void type.", "A pointer to the variable's data type.", "An array of the variable's data type."}, 2},
        {"What is the purpose of 'dereferencing' a pointer inside a function when the pointer is passed as a parameter?",
         {"To get the memory address of the pointer itself.", "To create a local copy of the variable.", "To access and manipulate the value of the variable the pointer points to.", "To return a new pointer from the function."}, 2},
        {"Why is returning a pointer from a function particularly useful when dealing with arrays and strings?",
         {"Because C functions cannot directly return entire arrays or strings.", "Because arrays and strings are always dynamically allocated.", "Because it's the only way to return multiple values.", "Because it ensures the data is read-only."}, 0},
        {"What concept is explicitly mentioned as being helpful for linking consecutive structs together using pointers as members?",
         {"Binary Trees", "Hash Tables", "Linked Lists", "Queues"}, 2},
        {"If a function char *createMessage() dynamically allocates memory for a string and returns a pointer to it, what must the main function do after using the string?",
         {"Reallocate the string.", "Declare a new string variable.", "free() the memory pointed to by the returned pointer.", "Nothing, the memory is automatically freed."}, 2},
        {"What would happen if giveWord() in the example returned a local char array (e.g., char new_word[8] = 'CMSC 21'; return new_word;) instead of dynamically allocating memory?",
         {"The program would work correctly, as arrays can be returned.", "The program would be more memory efficient.", "The returned pointer would be a dangling pointer, leading to undefined behavior.", "The compiler would prevent the code from compiling."}, 2},
        {"When using scanf to read input into a struct member like first.age (an int), why is &age used, but for first.name (a char *), name_input is used without &?",
         {"& is only for integer types.", "age is a regular variable needing its address, while name_input is an array that decays to a pointer.", "scanf treats strings differently to avoid copying.", "It's a syntactic preference, either works."}, 1},
        {"What is the benefit of using pointer members within a struct, as hinted by 'Linked Lists'?",
         {"It enables the creation of dynamic, interconnected data structures.", "It makes the struct smaller in memory.", "It allows structs to directly store functions.", "It automatically sorts the struct members."}, 0},
        {"What is the expected output of the code?\n\n#include <stdio.h>\n\ntypedef struct point {\n    int x;\n    int y;\n} point;\n\nvoid print_point_coords(point *p_ptr) {\n    printf(\"Coords: (%d, %d)\\n\", p_ptr->x, p_ptr->y);\n}\n\nint main() {\n    point p1 = {10, 20};\n    print_point_coords(&p1);\n    return 0;\n}",
         {"Coords: (garbage, garbage)", "Coords: (10, 20)", "Coords: (0, 0)", "An error"}, 1},
        {"What is the expected output of the code?\n\n#include <stdio.h>\n\nint *get_value_address(int *a, int *b) {\n    if (*a > *b) {\n        return a;\n    } else {\n        return b;\n    }\n}\n\nint main() {\n    int val1 = 7;\n    int val2 = 15;\n    int *result_ptr = get_value_address(&val1, &val2);\n    printf(\"Larger value is: %d\\n\", *result_ptr);\n    return 0;\n}",
         {"Larger value is: 7", "Larger value is: (memory address)", "An error", "Larger value is: 15"}, 3}
    });
    chapterQuestions[16] = chapter16;

    // Chapter 17: Dynamic Memory Allocation
    QVector<Question> chapter17;
    chapter17.append({
        {"Which type of list is characterized by an index-based, contiguous memory structure, and is best for a set amount of data?",
         {"Vector List", "Linked List", "Hash Table", "Array List"}, 3},
        {"What is a primary disadvantage of traditional Array Lists when the amount of data to store is unknown or highly variable?",
         {"Difficulty in accessing elements by index.", "Inability to store different data types.", "Potential for wasted memory if declared size is too large, or overflow if too small.", "Slower access times compared to other list types."}, 2},
        {"What is a 'Vector List' designed to address regarding traditional arrays?",
         {"The inability to store strings.", "The challenge of dynamic resizing to avoid wasted space or overflow.", "The lack of pointer support.", "The difficulty of initial setup."}, 1},
        {"A Vector struct typically contains information about the array's:",
         {"Start address, end address, and element type.", "Name, creation date, and last modified time.", "Current number of elements (size), total allocated space (capacity), and a pointer to the array.", "Read-only status, write-only status, and execution permissions."}, 2},
        {"When a Vector List's size reaches its capacity, what is the recommended action?",
         {"Stop adding elements and return an error.", "Shrink the capacity to match the current size.", "Double the capacity and reallocate memory.", "Convert the Vector List to a Linked List."}, 2},
        {"After reallocating a Vector List to a newArr with a newCapacity, what is the crucial next step to manage memory correctly?",
         {"Initialize newArr elements to zero.", "Set list.arr to NULL.", "Simply assign list.arr = newArr; without any other operations.", "Copy data from list.arr to newArr and then free(list.arr)."}, 3},
        {"How do elements in a Linked List maintain their connection?",
         {"By being stored in consecutive memory locations.", "By having a global index.", "By each item containing a pointer to the address of the next item.", "By storing their data type within each element."}, 2},
        {"What is the primary advantage of a Linked List over Array Lists and Vector Lists, regarding memory usage?",
         {"It is more conservative about memory by allocating memory for each item individually.", "Faster random access to elements.", "It stores all elements in a single, contiguous block of memory.", "It automatically sorts elements as they are added."}, 0},
        {"What does 'contiguous location' mean for Array Lists?",
         {"Elements are stored directly beside each other in memory.", "Elements are stored in alphabetical order.", "Elements are stored in separate, unrelated memory blocks.", "Elements can be accessed by their names."}, 0},
        {"While Linked Lists are memory conservative, what might be a general drawback compared to Array/Vector lists for direct element access?",
         {"They cannot store primitive data types.", "They typically have slower random access (e.g., finding the 100th element).", "They are harder to iterate through sequentially.", "They require less memory overall for a given number of elements."}, 1},
        {"The process of dynamically resizing a Vector List (doubling capacity) involves:",
         {"Only reassigning the capacity variable.", "Just calling realloc on the original pointer.", "Reducing the size of the list.", "Allocating new memory, copying old data, freeing old memory, and updating the pointer."}, 3}
    });
    chapterQuestions[17] = chapter17;

    // Chapter 18: Writing Linked Lists
    QVector<Question> chapter18;
    chapter18.append({
        {"In a Linked List, what is each individual element called?",
         {"An Array", "A Vector", "A Node", "A Struct"}, 2},
        {"What does the Head Node in a Linked List represent?",
         {"The last item in the list.", "A pointer that points to the first item in the list.", "A temporary node used for traversal.", "The total count of nodes in the list."}, 1},
        {"How is the end of a Singly Linked List typically indicated?",
         {"The last node points back to the Head Node.", "The last node's nextNode pointer points to NULL.", "The last node's data is 0.", "The list's size variable equals its capacity."}, 1},
        {"When defining a Node struct, why is the nextNode member declared as struct Node *nextNode?",
         {"To make it a void pointer.", "To indicate it stores integer data.", "To create a pointer that can point to another instance of the same Node struct.", "To limit the size of the node."}, 2},
        {"What is the purpose of the createNode function in the provided implementation example?",
         {"To print the contents of the linked list.", "To free the allocated memory of the linked list.", "To traverse the linked list and find a specific node.", "To dynamically allocate memory for a new node, initialize its data, and set its nextNode to NULL."}, 3},
        {"What is a 'Circular Linked List'?",
         {"A linked list where all nodes have the same data.", "A linked list where the last node points back to the head node.", "A linked list that can only store numbers.", "A linked list with no specific beginning or end."}, 1},
        {"What is the primary difference between a Singly Linked List and a Doubly Linked List based on the provided definition?",
         {"Doubly Linked Lists are always circular.", "Singly Linked Lists can only store one type of data.", "Doubly Linked Lists have two pointers per node (next and back), while Singly Linked Lists have only one (next).", "Doubly Linked Lists do not use a Head pointer."}, 2},
        {"When adding a new node between two existing nodes in a Singly Linked List, what must be done with the new node's nextNode pointer?",
         {"It should point to NULL.", "It should point to the head node.", "It should point to the node that was originally after the insertion point.", "It should point to the node that was originally before the insertion point."}, 2},
        {"What is a key challenge or complexity mentioned when implementing Doubly Linked Lists compared to Singly Linked Lists?",
         {"They cannot store integer data.", "They require more memory per node due to extra pointers.", "They cannot be traversed.", "They are more tiring and confusing to implement due to multiple pointers."}, 3},
        {"What happens if you forget to free(head); at the end of the main function in the basic implementation example (before the freelist function was introduced)?",
         {"The program will crash.", "The program will be more memory efficient.", "It will cause a memory leak for the head node.", "The head pointer will automatically become NULL."}, 2},
        {"Given the freelist function from the chapter:\n\nvoid freelist(Node *head) {\n    Node *temp = head;\n    while (head != NULL) {\n        temp = head->nextNode;\n        free(head);\n        head = temp;\n    }\n}\nIf head initially points to NodeA -> NodeB -> NodeC -> NULL, what is the state of head and temp after the first iteration of the while loop?",
         {"head points to NodeB, temp points to NodeB.", "head points to NodeA, temp points to NodeB.", "head is NULL, temp points to NodeA.", "head points to NodeB, temp points to NodeC."}, 0}
    });
    chapterQuestions[18] = chapter18;

    // Chapter 19: Handling Sequential Files
    QVector<Question> chapter19;
    chapter19.append({
        {"What is the primary benefit of using file handling in C programs?",
         {"To make programs run faster.", "To allow programs to communicate with each other directly.", "To provide external storage for data, enabling persistence and reuse across program runs.", "To perform complex mathematical calculations."}, 2},
        {"What is the EOF marker in files analogous to in C strings?",
         {"The first character.", "A newline character (\\n).", "The null terminator (\\0).", "A random character."}, 2},
        {"Which of the following describes a 'sequential file'?",
         {"A file whose data are placed in a specific, consecutive order.", "A file whose data can be accessed randomly.", "A file that contains only binary data.", "A file that can only be read once."}, 0},
        {"Before performing any read or write operations on a file in C, what must you typically do first?",
         {"Declare a string variable.", "Allocate memory using malloc().", "Define a struct for the file.", "Open the file using fopen()."}, 3},
        {"What is the purpose of the FILE * data type in C file handling?",
         {"It stores the entire content of the file in memory.", "It points to the address of the first character within the file.", "It indicates the size of the file.", "It defines the file's access permissions."}, 1},
        {"If you use fopen(\"data.txt\", \"w\") and data.txt already exists, what will happen to its previous content?",
         {"The new data will be appended to the end.", "The previous content will be preserved.", "An error will occur because the file exists.", "The previous content will be destroyed and overwritten."}, 3},
        {"Which file mode allows you to write new data at the end of an existing file without deleting its original content?",
         {"w", "r", "a", "w+"}, 2},
        {"Which function is used to write formatted output directly to a file, similar to how printf() works for the console?",
         {"fscanf()", "fprintf()", "puts()", "fputc()"}, 1},
        {"Which file mode allows both reading and writing, and also truncates the file if it already exists?",
         {"a", "r+", "a+", "w+"}, 3},
        {"To move the file pointer to the very beginning of a file, which fseek() call would you use?",
         {"fseek(fp, 0, SEEK_END);", "fseek(fp, 0, SEEK_CUR);", "fseek(fp, 0, SEEK_SET);", "fseek(fp, -1, SEEK_SET);"}, 2},
        {"You are developing a C program that manages a simple log file for a server application, named server_log.txt. Occasionally, a system administrator needs to be able to inspect the server_log.txt file to read past entries, but also has the ability to append new diagnostic messages to it directly.",
         {"w", "a", "w+", "r+"}, 3}
    });
    chapterQuestions[19] = chapter19;

    // Chapter 20: Handling Random Access Files
    QVector<Question> chapter20;
    chapter20.append({
        {"What is the primary characteristic that distinguishes binary files from text files?",
         {"Binary files are always larger than text files.", "Binary files store data in 0s and 1s, directly readable by the computer, while text files use ASCII characters.", "Binary files can only be read, not written to.", "Binary files do not have an End-Of-File (EOF) marker."}, 1},
        {"What is a key advantage of Random-Access Files compared to Sequential Files?",
         {"They are easier to read by humans.", "They use less memory during processing.", "They allow direct access to any part of the file without reading from the beginning.", "They are automatically compressed."}, 2},
        {"Which C standard library function is specifically used to write data in binary format to a file?",
         {"fprintf()", "fwrite()", "fputc()", "fputs()"}, 1},
        {"What is the purpose of the fseek() function when writing to a Random-Access File?",
         {"To close the file after writing.", "To move the file pointer to a specific byte offset to write data at a precise location.", "To read the entire file into memory before writing.", "To check if the file is empty."}, 1},
        {"Which C standard library function is specifically used to read data in binary format from a file?",
         {"fscanf()", "fgetc()", "fread()", "fgets()"}, 2},
        {"In the fread() function call, what does the third parameter 1 typically represent when reading one record at a time?",
         {"The starting byte offset.", "The total number of bytes to read.", "The number of elements (records) to read.", "The file's access mode."}, 2},
        {"To overwrite a specific record in a Random-Access File without affecting other records, what combination of functions is primarily used?",
         {"fseek() and fwrite().", "fopen() with 'a' mode and fprintf().", "fopen() with 'w' mode and fscanf().", "fread() and fclose()."}, 0},
        {"What is the typical file extension for binary files mentioned in the text?",
         {".txt", ".dat", ".log", ".bin"}, 3},
        {"What is the main reason Random-Access Files are considered useful when updates are frequent?",
         {"They allow targeted updates to specific data blocks without rewriting the entire file.", "They are automatically backed up.", "They encrypt data for security.", "They are compatible with all operating systems."}, 0},
        {"What is the expected console output of the following C code, assuming data.bin contains two records of record type at offsets 0 and sizeof(record), and sizeof(record) is 28 bytes?\nRecord 1: {10, 'Alice', 100.00}\nRecord 2: {20, 'Bob', 200.00}\n\n#include <stdio.h>\n#include <stdlib.h>\n#include <string.h>\n\ntypedef struct record {\n    int account_number;\n    char name[20];\n    float price;\n} record;\n\nint main() {\n    FILE *fp = fopen('data.bin', 'rb');\n    if (fp == NULL) {\n        printf('File not found!\\n');\n        return 1;\n    }\n\n    record data;\n    int target_account = 20;\n\n    // Position to the second record (index 1)\n    fseek(fp, (target_account / 10 - 1) * sizeof(record), SEEK_SET);\n    fread(&data, sizeof(record), 1, fp);\n\n    printf('Target: %d %s %.2f\\n', data.account_number, data.name, data.price);\n\n    fclose(fp);\n    return 0;\n}",
         {"Target: 10 Alice 100.00", "Target: 20 Bob 200.00", "Target: 0 0.00", "File not found!"}, 1},
        {"Assuming data.bin exists and contains a record struct with account_number = 50, name = 'Test', price = 123.45, what is the expected console output of this C code if sizeof(record) is 28 bytes and the record is at the first position (offset 0)?\n\n#include <stdio.h>\n#include <stdlib.h>\n#include <string.h>\n\ntypedef struct record {\n    int account_number;\n    char name[20];\n    float price;\n} record;\n\nint main() {\n    FILE *fp = fopen('data.bin', 'rb');\n    if (fp == NULL) {\n        printf('File not found!\\n');\n        return 1;\n    }\n\n    record data;\n    // Assuming data.bin has at least one record at the beginning\n    fread(&data, sizeof(record), 1, fp);\n\n    printf('Account: %d, Name: %s, Price: %.2f\\n', data.account_number, data.name, data.price);\n\n    fclose(fp);\n    return 0;\n}",
         {"Account: 50, Name: Test, Price: 123.45", "Account: 0, Name: , Price: 0.00", "File not found!", "An error during compilation."}, 0}
    });
    chapterQuestions[20] = chapter20;

    // Chapter 21: C++
    QVector<Question> chapter21;
    chapter21.append(Question{"What is C's struct equivalent in C++?",
                              {"Structures", "Objects", "Classes", "Groups"}, 2});
    chapter21.append(Question{"Which of the following does not make use of the Object-Oriented Programming (OOP) approach to programming?",
                              {"JavaScript", "C++", "C", "Python"}, 2});
    chapter21.append(Question{"What is the main benefit of OOPs?",
                              {"Makes the user be able to write logic in a procedural level", "Organizes data as objects", "Custom functions no longer have to be made", "There are no benefits to OOPs"}, 1});
    chapter21.append(Question{"Which of the following is not a benefit of OOPs?",
                              {"Complexity", "Reusability", "Scalability", "Efficiency"}, 0});
    chapter21.append(Question{"Which of the following differences between C and C++ is true?",
                              {"C uses header files while C++ does not", "C++ has a different syntax than C", "C is an OOP while C++ is not", "C++ has structs while C has classes"}, 1});
    chapter21.append(Question{"Which concepts in C aren't available in C++?",
                              {"structs", "void functions", "Memory Manipulation", "None, all are available"}, 3});
    chapter21.append(Question{"If printf() of C is to cout of C++, then scanf() of C is to what of C++?",
                              {"cscan", "cinput", "cscan++", "cin"}, 3});
    chapter21.append(Question{"Can classes have functions within them?",
                              {"Yes, but they can only be declared in a header file", "No, classes use \"actions\" instead of functions", "Yes, they can be created in any class", "No, classes can't access functions"}, 2});
    chapter21.append(Question{"Who is not a member of the 21 Programming team?",
                              {"Alexis Vince Antolihao", "Alejandro Malik Asmita", "Angelo Mari Manlangit", "John Dexter Rico"}, 1});
    chapterQuestions[21] = chapter21;
}
