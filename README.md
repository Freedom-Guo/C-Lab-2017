# C Lab
## Description

This code is for the experimental course of C language programming.

## Source File

### 1.2.3 

- Write a program, input the character c, if c is an uppercase letter, convert c to the corresponding lowercase, otherwise the value of c remains unchanged, and finally output c

### 1.2.4

- Write a program, input unsigned short integers x, m, n (0 ≤ m ≤ 15, 1 ≤ n ≤ 16-m), and take out the n bits of x from the m-th bit to the left (m is numbered from right to left as 0～15), and make it align to the left end (15th)

### 1.2.5

- The IP address is usually 4 small integers separated by periods, such as 32.55.1.102. These addresses are represented by unsigned long integers in the machine. Write a program to read in a 32-bit Internet IP address in the form of machine storage, decode it, and then output it in the form of 4 parts separated by common periods.

### 2.2.3

- Suppose the salary tax is calculated according to the following method: x<1000, no tax; 1000<=x<2000, 5% tax; 2000<=x<3000, 10% tax; 3000<=x<4000, 15% tax is charged; 4000<=x<5000, 20% tax is charged; x>5000, 25% tax is charged. Write a program to input the amount of salary and output the amount of tax that should be collected. It is required to use if statement and switch statement to achieve.

### 2.2.4

- Write a program to copy a line of input characters to the output, and replace more than one space character with a space during the copy process.

### 2.2.5

- Print the Yanghui triangle. In order to print out the pyramid effect, pay attention to the number of spaces. There are 3 spaces between one digit, 2 spaces between two digits, and only one space between 3 digits. Pay attention to the distinction during programming.

### 2.2.6

- Write a program to reverse any positive integer entered by the user.

### 2.3.1

- Write a program, use Newton's iteration method to find an approximate root of the equation that satisfies the precision e=10-6, and output the approximate root on the screen.

### 3.2.4

- Write a program that allows the user to input two integers, calculate the greatest common divisor of the two numbers and output it. It is required to use a recursive function to achieve the greatest common divisor, and at the same time execute the program in a single-step manner to observe the recursive process

### 3.2.5

- Write a program to verify Goldbach’s conjecture: an even number greater than or equal to 4 is the sum of two prime numbers.

### 4.2.4

- The area formula of a triangle is known, where a, b, and c are the three sides of the triangle. Define two macros with parameters, one to find s and the other to find area. Try to write a program to calculate the area of a triangle with a macro with parameters.

### 4.2.5

- Use the conditional compilation method to write a program. Its functional requirement is to input a line of telegram text. You can choose two types of output: one is the original output; the other is to change the case of letters (such as lowercase'a' into uppercase'A', Uppercase'D' becomes lowercase'd'), other characters remain unchanged. Use #define command to control whether to change the case of letters. For example, #define CHANGE 1 will output the converted text, and #define CHANGE 0 will output the original text.

### 5.2.2

- M people form a circle, and count from 1 to N in turn starting from the first person. Whenever the number is N, count people out of the circle until there is only one person left in the circle.

### 5.2.4

- Write a program to read data from the keyboard, assign values to a 34 matrix, find its transposed matrix, and then output the original matrix and the transposed matrix.

### 5.2.5

- Write a program, its functional requirements are: input an integer, convert each bit of its binary representation in the memory into a corresponding digital character, store it in a character array, and then output the binary representation of the integer.

### 5.2.6

- Write a program, its functional requirements are: input the names of n students and the C language course grades, sort the grades from high to low, adjust the names at the same time, and output the students’ names and C language course grades after sorting Achievement. Then, enter a C language course grade value and search with binary search. If the score is found, output the name of the classmate with the score and the score of the C language course; otherwise, output the prompt "not found!".

### 6.2.4

- It is known that a long integer variable occupies 4 bytes, and each byte is divided into high 4 bits and low 4 bits. Try to write a program, starting from the high byte of the long integer variable, take out the high 4 bits and low 4 bits of each byte in turn and display them in the form of hexadecimal digital characters.

### 6.2.5

- Use a pointer array of size n to point to the n lines input with the gets function, and each line does not exceed 80 characters. Write a function that compresses consecutive space characters in each line into one space character. The lines after compressed spaces are output in the calling function, and blank lines are not output.

### 6.2.6

- Write a program, input n integers, and output after sorting. The principle of sorting is determined by the optional parameter -d on the command line. When there is a parameter -d, the sorting is in descending order, otherwise it is sorted in ascending order. It is required to define the sorting algorithm as a function, and use the pointer to the function to make the function achieve increasing or decreasing sort.

### 6.2.7

- Suppose there are N students in a certain class, and each student has taken M courses (using #define to define N, M). Enter the name of the M courses, and then enter the scores of the M courses taken by each of the N students in turn and store them in the corresponding array. Try to write the following functions:
(a) Calculate the average grade of each student for each course;
(b) Calculate the average grade of each course of the whole class;
(c) Count the number of people who are lower than the average grade of each course of the class;
(d) Count the number of people who failed each course in the class and the number of people who scored above 90 (including 90 points).
Output the calculation results of the above functions in the calling function. (It is required to use pointer operations, and not to use subscript operations.)

### 6.3.1

- Data a, b with N integers and M decimals (N=20, M=10) are set. Program calculation a+b and output the result.

### 6.3.2

- Write programs that use complex declaration char *(*p[2])(const char *,const char *);. Tip: The elements in p can be function names such as strcmp and strstr.

### 7.2.3

- Design a field structure struct bits, which declares an 8-bit unsigned byte from the lowest bit to the highest bit as 8 fields, each field is bit0, bit1, …, bit7, and bit0 has the highest priority. Design 8 functions at the same time, the i-th function takes biti (i=0,1,2,...,7) as the parameter, and outputs the value of biti in the function body. Store the names of 8 functions in a function pointer array p_fun. If bit0 is 1, call the function pointed to by p_fun[0]. If multiple bits in the struct bits are 1, the functions pointed to by the corresponding elements in the function pointer array p_fun are called in order from high to low according to the priority.

### 7.2.4

- Use a singly linked list to create a class transcript, including each student’s student ID, name, English, advanced mathematics, general physics, and C language programming. Use functional programming to achieve the following functions:
(1) Enter various information for each student.
(2) Output various information of each student.
(3) Modify the content of the designated data item of the designated student.
(4) Count the average grade of each student (with 2 decimal places).
(5) Output the student ID, name, total grades and average grades of the four courses.

### 8.2.3

- Input a line of English sentences from the keyboard, replace the first letter of each word with capital letters, and then output it to a disk file "test" for storage.
